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
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// ES3Reader
struct ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9;
// ES3Settings
struct ES3Settings_t2B338F5F7BE6842BF4489E6FF7B312DC5F6EBDB2;
// ES3Types.ES3Type
struct ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D;
// ES3Types.ES3Type_Burst
struct ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D;
// ES3Types.ES3Type_Camera
struct ES3Type_Camera_tF9D6B37C83603E0E5D5B3BE8FF30C68BC4A9AA56;
// ES3Types.ES3Type_CapsuleCollider
struct ES3Type_CapsuleCollider_t3DFF5F9F6FF7DD156C154325FE28DFEC9E41176C;
// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D;

IL2CPP_EXTERN_C RuntimeClass* Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E;
IL2CPP_EXTERN_C String_t* _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D;
IL2CPP_EXTERN_C String_t* _stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B;
IL2CPP_EXTERN_C String_t* _stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3;
IL2CPP_EXTERN_C String_t* _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC;
IL2CPP_EXTERN_C String_t* _stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C;
IL2CPP_EXTERN_C String_t* _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069;
IL2CPP_EXTERN_C String_t* _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78;
IL2CPP_EXTERN_C String_t* _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12;
IL2CPP_EXTERN_C String_t* _stringLiteral51C6279E31F7483126B79E3000116001A915B690;
IL2CPP_EXTERN_C String_t* _stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061;
IL2CPP_EXTERN_C String_t* _stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E;
IL2CPP_EXTERN_C String_t* _stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral743B5A800B68BECD32E89977C700248578EFB001;
IL2CPP_EXTERN_C String_t* _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321;
IL2CPP_EXTERN_C String_t* _stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14;
IL2CPP_EXTERN_C String_t* _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82;
IL2CPP_EXTERN_C String_t* _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944;
IL2CPP_EXTERN_C String_t* _stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06;
IL2CPP_EXTERN_C String_t* _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118;
IL2CPP_EXTERN_C String_t* _stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7_m3E204E6194F6F78D3AF56459608DAB76340B1A39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22_m7BED51D234CCE599371AA346245BCBB382CCB581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m9F5F40877B581CCAD8A9D73267D2E4028DB1305D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisDepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A_m41650E9B79F0A6FABD7D11A702CD1542B7A03D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_mE64108DDF1646F1C6F36D6B3FB6F4647DD08D8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m2A5A04EEFC2828DBB15DA02699DDCA2ABC1FB6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisOpaqueSortMode_t28F187F722257DBDA13B3E62CB86A3B09A6A8200_mFF207E0CCF734A246C443BCE5849042AB423E569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_mBF64D7881A51B939E21E31A7C96C39CCC9F2E6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m7C8E44F66A5702DCA268EA3FAE3C7D8DA9B581B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F_m709F01C6403C23939D64A8605AA9C96070876F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisStereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66_mA22AA7D4C4093A400971027C7666519A3BA269D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransparencySortMode_tDB00AE4A886A17CC0D2125E906B95D541BD9C90E_mD6E4418326DFB34507C4573D3160A5FBBE87F494_RuntimeMethod_var;
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


// ES3Types.ES3ObjectType
struct ES3ObjectType_tB106E6EA007FC780784E8BBBE7E152E474F456FF  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_Burst
struct ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
{
public:

public:
};


// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
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


// ES3Types.ES3Type_short
struct ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8  : public ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CollisionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.CameraClearFlags
struct CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraType
struct CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22 
{
public:
	// System.Int32 UnityEngine.CameraType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t7C50AC2FEA2F6946EE04EA3A74F25817B98750DD  : public ES3ObjectType_tB106E6EA007FC780784E8BBBE7E152E474F456FF
{
public:

public:
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
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

// UnityEngine.Rendering.OpaqueSortMode
struct OpaqueSortMode_t28F187F722257DBDA13B3E62CB86A3B09A6A8200 
{
public:
	// System.Int32 UnityEngine.Rendering.OpaqueSortMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpaqueSortMode_t28F187F722257DBDA13B3E62CB86A3B09A6A8200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemCollisionMode
struct ParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCollisionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemCollisionQuality
struct ParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCollisionQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemCollisionType
struct ParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCollisionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.RenderingPath
struct RenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.StereoTargetEyeMask
struct StereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66 
{
public:
	// System.Int32 UnityEngine.StereoTargetEyeMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TransparencySortMode
struct TransparencySortMode_tDB00AE4A886A17CC0D2125E906B95D541BD9C90E 
{
public:
	// System.Int32 UnityEngine.TransparencySortMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransparencySortMode_tDB00AE4A886A17CC0D2125E906B95D541BD9C90E, ___value___2)); }
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


// ES3Types.ES3ComponentType
struct ES3ComponentType_t08622999136B1C219CD5D623B5EE886EAD807C82  : public ES3UnityObjectType_t7C50AC2FEA2F6946EE04EA3A74F25817B98750DD
{
public:

public:
};


// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ES3Types.ES3Type_Camera
struct ES3Type_Camera_tF9D6B37C83603E0E5D5B3BE8FF30C68BC4A9AA56  : public ES3ComponentType_t08622999136B1C219CD5D623B5EE886EAD807C82
{
public:

public:
};


// ES3Types.ES3Type_CapsuleCollider
struct ES3Type_CapsuleCollider_t3DFF5F9F6FF7DD156C154325FE28DFEC9E41176C  : public ES3ComponentType_t08622999136B1C219CD5D623B5EE886EAD807C82
{
public:

public:
};


// UnityEngine.ParticleSystem/Burst
struct Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 
{
public:
	// System.Single UnityEngine.ParticleSystem/Burst::m_Time
	float ___m_Time_0;
	// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/Burst::m_Count
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___m_Count_1;
	// System.Int32 UnityEngine.ParticleSystem/Burst::m_RepeatCount
	int32_t ___m_RepeatCount_2;
	// System.Single UnityEngine.ParticleSystem/Burst::m_RepeatInterval
	float ___m_RepeatInterval_3;
	// System.Single UnityEngine.ParticleSystem/Burst::m_InvProbability
	float ___m_InvProbability_4;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4, ___m_Count_1)); }
	inline MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  get_m_Count_1() const { return ___m_Count_1; }
	inline MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  value)
	{
		___m_Count_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Count_1))->___m_CurveMin_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Count_1))->___m_CurveMax_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_RepeatCount_2() { return static_cast<int32_t>(offsetof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4, ___m_RepeatCount_2)); }
	inline int32_t get_m_RepeatCount_2() const { return ___m_RepeatCount_2; }
	inline int32_t* get_address_of_m_RepeatCount_2() { return &___m_RepeatCount_2; }
	inline void set_m_RepeatCount_2(int32_t value)
	{
		___m_RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_m_RepeatInterval_3() { return static_cast<int32_t>(offsetof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4, ___m_RepeatInterval_3)); }
	inline float get_m_RepeatInterval_3() const { return ___m_RepeatInterval_3; }
	inline float* get_address_of_m_RepeatInterval_3() { return &___m_RepeatInterval_3; }
	inline void set_m_RepeatInterval_3(float value)
	{
		___m_RepeatInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_InvProbability_4() { return static_cast<int32_t>(offsetof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4, ___m_InvProbability_4)); }
	inline float get_m_InvProbability_4() const { return ___m_InvProbability_4; }
	inline float* get_address_of_m_InvProbability_4() { return &___m_InvProbability_4; }
	inline void set_m_InvProbability_4(float value)
	{
		___m_InvProbability_4 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
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


// UnityEngine.Color


// UnityEngine.Color


// ES3Types.ES3ObjectType


// ES3Types.ES3ObjectType


// ES3Types.ES3Type_Burst

struct ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Burst::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_Burst


// ES3Types.ES3Type_CollisionModule

struct ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_CollisionModule::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_CollisionModule


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


// ES3Types.ES3Type_short

struct ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_short::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields, ___Instance_12)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// ES3Types.ES3Type_short


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


// System.Int16


// System.Int16


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


// UnityEngine.LayerMask


// UnityEngine.LayerMask


// UnityEngine.Matrix4x4

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Matrix4x4


// UnityEngine.Rect


// UnityEngine.Rect


// System.Single


// System.Single


// System.UInt32


// System.UInt32


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


// UnityEngine.ParticleSystem/CollisionModule


// UnityEngine.ParticleSystem/CollisionModule


// UnityEngine.CameraClearFlags


// UnityEngine.CameraClearFlags


// UnityEngine.CameraType


// UnityEngine.CameraType


// UnityEngine.DepthTextureMode


// UnityEngine.DepthTextureMode


// ES3Types.ES3UnityObjectType


// ES3Types.ES3UnityObjectType


// UnityEngine.HideFlags


// UnityEngine.HideFlags


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


// UnityEngine.Rendering.OpaqueSortMode


// UnityEngine.Rendering.OpaqueSortMode


// UnityEngine.ParticleSystemCollisionMode


// UnityEngine.ParticleSystemCollisionMode


// UnityEngine.ParticleSystemCollisionQuality


// UnityEngine.ParticleSystemCollisionQuality


// UnityEngine.ParticleSystemCollisionType


// UnityEngine.ParticleSystemCollisionType


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.ParticleSystemCurveMode


// UnityEngine.RenderingPath


// UnityEngine.RenderingPath


// UnityEngine.StereoTargetEyeMask


// UnityEngine.StereoTargetEyeMask


// UnityEngine.TransparencySortMode


// UnityEngine.TransparencySortMode


// UnityEngine.Component


// UnityEngine.Component


// ES3Types.ES3ComponentType


// ES3Types.ES3ComponentType


// UnityEngine.PhysicMaterial


// UnityEngine.PhysicMaterial


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.ParticleSystem/MinMaxCurve


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.Collider


// UnityEngine.Collider


// ES3Types.ES3Type_Camera

struct ES3Type_Camera_tF9D6B37C83603E0E5D5B3BE8FF30C68BC4A9AA56_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Camera::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_13;

public:
	inline static int32_t get_offset_of_Instance_13() { return static_cast<int32_t>(offsetof(ES3Type_Camera_tF9D6B37C83603E0E5D5B3BE8FF30C68BC4A9AA56_StaticFields, ___Instance_13)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_13() const { return ___Instance_13; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_13() { return &___Instance_13; }
	inline void set_Instance_13(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_13), (void*)value);
	}
};


// ES3Types.ES3Type_Camera


// ES3Types.ES3Type_CapsuleCollider

struct ES3Type_CapsuleCollider_t3DFF5F9F6FF7DD156C154325FE28DFEC9E41176C_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_CapsuleCollider::Instance
	ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * ___Instance_13;

public:
	inline static int32_t get_offset_of_Instance_13() { return static_cast<int32_t>(offsetof(ES3Type_CapsuleCollider_t3DFF5F9F6FF7DD156C154325FE28DFEC9E41176C_StaticFields, ___Instance_13)); }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * get_Instance_13() const { return ___Instance_13; }
	inline ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D ** get_address_of_Instance_13() { return &___Instance_13; }
	inline void set_Instance_13(ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * value)
	{
		___Instance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_13), (void*)value);
	}
};


// ES3Types.ES3Type_CapsuleCollider


// UnityEngine.ParticleSystem/Burst


// UnityEngine.ParticleSystem/Burst


// UnityEngine.Camera

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Camera


// UnityEngine.CapsuleCollider


// UnityEngine.CapsuleCollider

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_time_mF8A59582E38935385580B3E443DC40CC1C866C59 (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_count(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_count_mCB0C6F408E3D5661FB07EF4E657C620E63B99D7D (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_minCount(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_minCount_mCAC6E8B1917919FF1B957A1C71C42E2804610406 (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_maxCount(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_maxCount_mE844783549C9120C4BEF7AFD535158B1E6248EBB (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_cycleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_cycleCount_m8645F59DD611BE55E4A1E5639D067E68B90CCD4F (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_repeatInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_repeatInterval_m20C60039551154A0C682D05A61E8E515C7FB93C7 (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Burst::set_probability(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_probability_mF21DF9C4EAFE149B4C35F8D5413FA0B4680B5E31 (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_m6C61168655E3736E7847E5CB1CD9BC6B48442FD4 (ES3ReaderPropertyEnumerator_tFC854F4BE72BFA234682EB1909D92457534A979D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_renderingPath_mCB2BAB2434EEAE5C3B44083403B8D620414DFD86 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowHDR_m66B6DEF38F2C8F946674F25A789E2ABD132ECF32 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_opaqueSortMode(UnityEngine.Rendering.OpaqueSortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_transparencySortMode_mD8D70D251742D1E6759174EFBE8AC72D6B035F26 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m33DBE382C6A293EDFF50FF459CBAB2FD3B7F469C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_eventMask_mCF42F95405D3315CD66950DFC240FDA27ED66872 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_pixelRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_pixelRect_mB1BFC3EE5DB87F9A66ED0EBFC10B9F80DF1CC61B (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nonJitteredProjectionMatrix_mBD4086F0CE187C0E68619606FA3F06AB9113A7D0 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useJitteredProjectionMatrixForTransparentRendering_mC534E01407398A73886F2E5796824120B50461EA (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_stereoSeparation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoSeparation_mB5751CE5CC4F6FDDFFF6C7B628473CF50BFE7F6F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_stereoConvergence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoConvergence_m8C74596745E0C338AD9EC6611C4FB0D839D02259 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cameraType(UnityEngine.CameraType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cameraType_mC2AAD78B9EE06A805D5F5253A46AC4EFAB1B632F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_stereoTargetEye(UnityEngine.StereoTargetEyeMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoTargetEye_m5A3C3A66A5B4498009555740C5EE3C02D5178DB0 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetDisplay_mFA08827F4B857A192B6AE4F066FBC323F5C2E910 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mA3DD08A2432C45B8A5438387F2788E7F585D33EB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_layerCullSpherical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_layerCullSpherical_mB6CF6EAA1E61224F644DB555C220ADDEA0F0C081 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearStencilAfterLightingPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearStencilAfterLightingPass_mC4644385C8E36B2C2227CC5D20C930EBC0427BBD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_direction_mE5E7B7BB7FBBBA97148E8CFCDC46D1BB14673984 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_m94DF399C14ACBA8C58924BAC2E20384664272139 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_mAAB481A26A050DC39F7C160909D33971E50F3952 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_type(UnityEngine.ParticleSystemCollisionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_mode(UnityEngine.ParticleSystemCollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampen(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampenMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounce(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounceMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLoss(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLossMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_minKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_collidesWith(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enableDynamicColliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxCollisionShapes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_quality(UnityEngine.ParticleSystemCollisionQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_voxelSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0 (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_sendCollisionMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_Burst_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_m9A3953A056E51BA646043AA079D57A395308419C_gshared (ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 ));
		goto IL_0184;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		if (!L_0)
		{
			goto IL_017e;
		}
	}
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_1, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0086;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_017e;
	}

IL_0042:
	{
		uint32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_017e;
	}

IL_005f:
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00bc;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_017e;
	}

IL_0074:
	{
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_12, (String_t*)_stringLiteral51C6279E31F7483126B79E3000116001A915B690, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_017e;
	}

IL_0086:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_14, (String_t*)_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_017e;
	}

IL_0098:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_16, (String_t*)_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_017e;
	}

IL_00aa:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_017e;
	}

IL_00bc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_017e;
	}

IL_00ce:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0156;
		}
	}
	{
		goto IL_017e;
	}

IL_00e0:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_016a;
		}
	}
	{
		goto IL_017e;
	}

IL_00f2:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_26 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_27 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_26);
		float L_28;
		L_28 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_26, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_27);
		Burst_set_time_mF8A59582E38935385580B3E443DC40CC1C866C59((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_28, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0106:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_29 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_30 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_29);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_31;
		L_31 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_29, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_30);
		Burst_set_count_mCB0C6F408E3D5661FB07EF4E657C620E63B99D7D((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_31, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_011a:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_32 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_33 = ((ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_32);
		int16_t L_34;
		L_34 = GenericVirtFuncInvoker1< int16_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_32, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_33);
		Burst_set_minCount_mCAC6E8B1917919FF1B957A1C71C42E2804610406((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int16_t)L_34, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_012e:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_35 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_36 = ((ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_35);
		int16_t L_37;
		L_37 = GenericVirtFuncInvoker1< int16_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_35, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_36);
		Burst_set_maxCount_mE844783549C9120C4BEF7AFD535158B1E6248EBB((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int16_t)L_37, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0142:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_38 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_39 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_38);
		int32_t L_40;
		L_40 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_38, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_39);
		Burst_set_cycleCount_m8645F59DD611BE55E4A1E5639D067E68B90CCD4F((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int32_t)L_40, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0156:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_41 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_42 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41);
		float L_43;
		L_43 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_42);
		Burst_set_repeatInterval_m20C60039551154A0C682D05A61E8E515C7FB93C7((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_43, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_016a:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_44 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_45 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_44);
		float L_46;
		L_46 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_44, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_45);
		Burst_set_probability_mF21DF9C4EAFE149B4C35F8D5413FA0B4680B5E31((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_46, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_017e:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_47 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_47);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_47);
	}

IL_0184:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_48 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_48);
		String_t* L_50 = (String_t*)L_49;
		V_1 = (String_t*)L_50;
		if (L_50)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  L_51 = V_0;
		Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  L_52 = (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 )L_51;
		RuntimeObject * L_53 = Box(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4_il2cpp_TypeInfo_var, &L_52);
		return (RuntimeObject *)L_53;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_Burst_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_mE6F13B8042F507D23F9AE98110B5483979EA43D9_gshared (ES3Type_Burst_tAFB6FFFF98CDA49A3A912647EF784D8A304AD92D * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 ));
		goto IL_0184;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		if (!L_0)
		{
			goto IL_017e;
		}
	}
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_1, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0086;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_017e;
	}

IL_0042:
	{
		uint32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_017e;
	}

IL_005f:
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00bc;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_017e;
	}

IL_0074:
	{
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_12, (String_t*)_stringLiteral51C6279E31F7483126B79E3000116001A915B690, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_017e;
	}

IL_0086:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_14, (String_t*)_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_017e;
	}

IL_0098:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_16, (String_t*)_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_011a;
		}
	}
	{
		goto IL_017e;
	}

IL_00aa:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_18, (String_t*)_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_017e;
	}

IL_00bc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_017e;
	}

IL_00ce:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0156;
		}
	}
	{
		goto IL_017e;
	}

IL_00e0:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_016a;
		}
	}
	{
		goto IL_017e;
	}

IL_00f2:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_26 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_27 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_26);
		float L_28;
		L_28 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_26, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_27);
		Burst_set_time_mF8A59582E38935385580B3E443DC40CC1C866C59((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_28, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0106:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_29 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_30 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_29);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_31;
		L_31 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_29, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_30);
		Burst_set_count_mCB0C6F408E3D5661FB07EF4E657C620E63B99D7D((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_31, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_011a:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_32 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_33 = ((ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_32);
		int16_t L_34;
		L_34 = GenericVirtFuncInvoker1< int16_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_32, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_33);
		Burst_set_minCount_mCAC6E8B1917919FF1B957A1C71C42E2804610406((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int16_t)L_34, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_012e:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_35 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_36 = ((ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t77475153805F13FFB426A78117592F357A1C1CF8_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_35);
		int16_t L_37;
		L_37 = GenericVirtFuncInvoker1< int16_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m2BAFCE3ABBDE123C8C846A30FCC037D9E1335431_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_35, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_36);
		Burst_set_maxCount_mE844783549C9120C4BEF7AFD535158B1E6248EBB((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int16_t)L_37, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0142:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_38 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_39 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_38);
		int32_t L_40;
		L_40 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_38, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_39);
		Burst_set_cycleCount_m8645F59DD611BE55E4A1E5639D067E68B90CCD4F((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (int32_t)L_40, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_0156:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_41 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_42 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41);
		float L_43;
		L_43 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_42);
		Burst_set_repeatInterval_m20C60039551154A0C682D05A61E8E515C7FB93C7((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_43, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_016a:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_44 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_45 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_44);
		float L_46;
		L_46 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_44, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_45);
		Burst_set_probability_mF21DF9C4EAFE149B4C35F8D5413FA0B4680B5E31((Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 *)(&V_0), (float)L_46, /*hidden argument*/NULL);
		// break;
		goto IL_0184;
	}

IL_017e:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_47 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_47);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_47);
	}

IL_0184:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_48 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_48);
		String_t* L_50 = (String_t*)L_49;
		V_1 = (String_t*)L_50;
		if (L_50)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  L_51 = V_0;
		Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4  L_52 = (Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4 )L_51;
		RuntimeObject * L_53 = Box(Burst_tE2FEE85A3BCC468CBEC8AF7B4D6E842CA9D34CC4_il2cpp_TypeInfo_var, &L_52);
		return (RuntimeObject *)L_53;
	}
}
// System.Void ES3Types.ES3Type_Camera::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Camera_ReadComponent_TisRuntimeObject_m19CE8BE239051700854333D8289AE07E4E06F883_gshared (ES3Type_Camera_tF9D6B37C83603E0E5D5B3BE8FF30C68BC4A9AA56 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7_m3E204E6194F6F78D3AF56459608DAB76340B1A39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22_m7BED51D234CCE599371AA346245BCBB382CCB581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m9F5F40877B581CCAD8A9D73267D2E4028DB1305D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisDepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A_m41650E9B79F0A6FABD7D11A702CD1542B7A03D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_mE64108DDF1646F1C6F36D6B3FB6F4647DD08D8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m2A5A04EEFC2828DBB15DA02699DDCA2ABC1FB6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisOpaqueSortMode_t28F187F722257DBDA13B3E62CB86A3B09A6A8200_mFF207E0CCF734A246C443BCE5849042AB423E569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m7C8E44F66A5702DCA268EA3FAE3C7D8DA9B581B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F_m709F01C6403C23939D64A8605AA9C96070876F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisStereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66_mA22AA7D4C4093A400971027C7666519A3BA269D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransparencySortMode_tDB00AE4A886A17CC0D2125E906B95D541BD9C90E_mD6E4418326DFB34507C4573D3160A5FBBE87F494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743B5A800B68BECD32E89977C700248578EFB001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.Camera)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)Castclass((RuntimeObject*)L_0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
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
			goto IL_06c9;
		}

IL_0018:
		{
			// foreach(string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_06c3;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-1573440022)))))
			{
				goto IL_0134;
			}
		}

IL_003c:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)718024280)))))
			{
				goto IL_00b0;
			}
		}

IL_0044:
		{
			uint32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)290440974)))))
			{
				goto IL_0072;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)49525662))))
			{
				goto IL_04a5;
			}
		}

IL_0057:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)214491439))))
			{
				goto IL_032b;
			}
		}

IL_0062:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)290440974))))
			{
				goto IL_0412;
			}
		}

IL_006d:
		{
			goto IL_06c3;
		}

IL_0072:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)505642131)))))
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)415793305))))
			{
				goto IL_0394;
			}
		}

IL_0085:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)505642131))))
			{
				goto IL_0244;
			}
		}

IL_0090:
		{
			goto IL_06c3;
		}

IL_0095:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)716102331))))
			{
				goto IL_0340;
			}
		}

IL_00a0:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)718024280))))
			{
				goto IL_02ec;
			}
		}

IL_00ab:
		{
			goto IL_06c3;
		}

IL_00b0:
		{
			uint32_t L_20 = V_3;
			if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1647354102)))))
			{
				goto IL_00f6;
			}
		}

IL_00b8:
		{
			uint32_t L_21 = V_3;
			if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1111422941)))))
			{
				goto IL_00db;
			}
		}

IL_00c0:
		{
			uint32_t L_22 = V_3;
			if ((((int32_t)L_22) == ((int32_t)((int32_t)977652726))))
			{
				goto IL_03fd;
			}
		}

IL_00cb:
		{
			uint32_t L_23 = V_3;
			if ((((int32_t)L_23) == ((int32_t)((int32_t)1111422941))))
			{
				goto IL_03d3;
			}
		}

IL_00d6:
		{
			goto IL_06c3;
		}

IL_00db:
		{
			uint32_t L_24 = V_3;
			if ((((int32_t)L_24) == ((int32_t)((int32_t)1435561369))))
			{
				goto IL_037f;
			}
		}

IL_00e6:
		{
			uint32_t L_25 = V_3;
			if ((((int32_t)L_25) == ((int32_t)((int32_t)1647354102))))
			{
				goto IL_043c;
			}
		}

IL_00f1:
		{
			goto IL_06c3;
		}

IL_00f6:
		{
			uint32_t L_26 = V_3;
			if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-1845627795)))))
			{
				goto IL_0119;
			}
		}

IL_00fe:
		{
			uint32_t L_27 = V_3;
			if ((((int32_t)L_27) == ((int32_t)((int32_t)1708250613))))
			{
				goto IL_02d7;
			}
		}

IL_0109:
		{
			uint32_t L_28 = V_3;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)-1845627795))))
			{
				goto IL_03e8;
			}
		}

IL_0114:
		{
			goto IL_06c3;
		}

IL_0119:
		{
			uint32_t L_29 = V_3;
			if ((((int32_t)L_29) == ((int32_t)((int32_t)-1788120886))))
			{
				goto IL_047b;
			}
		}

IL_0124:
		{
			uint32_t L_30 = V_3;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)-1573440022))))
			{
				goto IL_02ad;
			}
		}

IL_012f:
		{
			goto IL_06c3;
		}

IL_0134:
		{
			uint32_t L_31 = V_3;
			if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-610628839)))))
			{
				goto IL_01c3;
			}
		}

IL_013f:
		{
			uint32_t L_32 = V_3;
			if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-1191404086)))))
			{
				goto IL_0185;
			}
		}

IL_0147:
		{
			uint32_t L_33 = V_3;
			if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-1364967343)))))
			{
				goto IL_016a;
			}
		}

IL_014f:
		{
			uint32_t L_34 = V_3;
			if ((((int32_t)L_34) == ((int32_t)((int32_t)-1571175440))))
			{
				goto IL_03be;
			}
		}

IL_015a:
		{
			uint32_t L_35 = V_3;
			if ((((int32_t)L_35) == ((int32_t)((int32_t)-1364967343))))
			{
				goto IL_0316;
			}
		}

IL_0165:
		{
			goto IL_06c3;
		}

IL_016a:
		{
			uint32_t L_36 = V_3;
			if ((((int32_t)L_36) == ((int32_t)((int32_t)-1211783472))))
			{
				goto IL_0355;
			}
		}

IL_0175:
		{
			uint32_t L_37 = V_3;
			if ((((int32_t)L_37) == ((int32_t)((int32_t)-1191404086))))
			{
				goto IL_026e;
			}
		}

IL_0180:
		{
			goto IL_06c3;
		}

IL_0185:
		{
			uint32_t L_38 = V_3;
			if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-753759276)))))
			{
				goto IL_01a8;
			}
		}

IL_018d:
		{
			uint32_t L_39 = V_3;
			if ((((int32_t)L_39) == ((int32_t)((int32_t)-1035576455))))
			{
				goto IL_0490;
			}
		}

IL_0198:
		{
			uint32_t L_40 = V_3;
			if ((((int32_t)L_40) == ((int32_t)((int32_t)-753759276))))
			{
				goto IL_0283;
			}
		}

IL_01a3:
		{
			goto IL_06c3;
		}

IL_01a8:
		{
			uint32_t L_41 = V_3;
			if ((((int32_t)L_41) == ((int32_t)((int32_t)-732882317))))
			{
				goto IL_0451;
			}
		}

IL_01b3:
		{
			uint32_t L_42 = V_3;
			if ((((int32_t)L_42) == ((int32_t)((int32_t)-610628839))))
			{
				goto IL_0466;
			}
		}

IL_01be:
		{
			goto IL_06c3;
		}

IL_01c3:
		{
			uint32_t L_43 = V_3;
			if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-354136825)))))
			{
				goto IL_0209;
			}
		}

IL_01cb:
		{
			uint32_t L_44 = V_3;
			if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-418784956)))))
			{
				goto IL_01ee;
			}
		}

IL_01d3:
		{
			uint32_t L_45 = V_3;
			if ((((int32_t)L_45) == ((int32_t)((int32_t)-470786133))))
			{
				goto IL_02c2;
			}
		}

IL_01de:
		{
			uint32_t L_46 = V_3;
			if ((((int32_t)L_46) == ((int32_t)((int32_t)-418784956))))
			{
				goto IL_0298;
			}
		}

IL_01e9:
		{
			goto IL_06c3;
		}

IL_01ee:
		{
			uint32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)((int32_t)-410956283))))
			{
				goto IL_0427;
			}
		}

IL_01f9:
		{
			uint32_t L_48 = V_3;
			if ((((int32_t)L_48) == ((int32_t)((int32_t)-354136825))))
			{
				goto IL_036a;
			}
		}

IL_0204:
		{
			goto IL_06c3;
		}

IL_0209:
		{
			uint32_t L_49 = V_3;
			if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-121099767)))))
			{
				goto IL_0229;
			}
		}

IL_0211:
		{
			uint32_t L_50 = V_3;
			if ((((int32_t)L_50) == ((int32_t)((int32_t)-350400524))))
			{
				goto IL_04ba;
			}
		}

IL_021c:
		{
			uint32_t L_51 = V_3;
			if ((((int32_t)L_51) == ((int32_t)((int32_t)-121099767))))
			{
				goto IL_0259;
			}
		}

IL_0224:
		{
			goto IL_06c3;
		}

IL_0229:
		{
			uint32_t L_52 = V_3;
			if ((((int32_t)L_52) == ((int32_t)((int32_t)-85602597))))
			{
				goto IL_03a9;
			}
		}

IL_0234:
		{
			uint32_t L_53 = V_3;
			if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
			{
				goto IL_0301;
			}
		}

IL_023f:
		{
			goto IL_06c3;
		}

IL_0244:
		{
			String_t* L_54 = V_2;
			bool L_55;
			L_55 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_54, (String_t*)_stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D, /*hidden argument*/NULL);
			if (L_55)
			{
				goto IL_04cf;
			}
		}

IL_0254:
		{
			goto IL_06c3;
		}

IL_0259:
		{
			String_t* L_56 = V_2;
			bool L_57;
			L_57 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_56, (String_t*)_stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_04e0;
			}
		}

IL_0269:
		{
			goto IL_06c3;
		}

IL_026e:
		{
			String_t* L_58 = V_2;
			bool L_59;
			L_59 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_58, (String_t*)_stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_04f1;
			}
		}

IL_027e:
		{
			goto IL_06c3;
		}

IL_0283:
		{
			String_t* L_60 = V_2;
			bool L_61;
			L_61 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_60, (String_t*)_stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B, /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_0502;
			}
		}

IL_0293:
		{
			goto IL_06c3;
		}

IL_0298:
		{
			String_t* L_62 = V_2;
			bool L_63;
			L_63 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_62, (String_t*)_stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0513;
			}
		}

IL_02a8:
		{
			goto IL_06c3;
		}

IL_02ad:
		{
			String_t* L_64 = V_2;
			bool L_65;
			L_65 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_64, (String_t*)_stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A, /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0524;
			}
		}

IL_02bd:
		{
			goto IL_06c3;
		}

IL_02c2:
		{
			String_t* L_66 = V_2;
			bool L_67;
			L_67 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_66, (String_t*)_stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_0535;
			}
		}

IL_02d2:
		{
			goto IL_06c3;
		}

IL_02d7:
		{
			String_t* L_68 = V_2;
			bool L_69;
			L_69 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_68, (String_t*)_stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_0546;
			}
		}

IL_02e7:
		{
			goto IL_06c3;
		}

IL_02ec:
		{
			String_t* L_70 = V_2;
			bool L_71;
			L_71 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_70, (String_t*)_stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0557;
			}
		}

IL_02fc:
		{
			goto IL_06c3;
		}

IL_0301:
		{
			String_t* L_72 = V_2;
			bool L_73;
			L_73 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_72, (String_t*)_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, /*hidden argument*/NULL);
			if (L_73)
			{
				goto IL_0568;
			}
		}

IL_0311:
		{
			goto IL_06c3;
		}

IL_0316:
		{
			String_t* L_74 = V_2;
			bool L_75;
			L_75 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_74, (String_t*)_stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_0579;
			}
		}

IL_0326:
		{
			goto IL_06c3;
		}

IL_032b:
		{
			String_t* L_76 = V_2;
			bool L_77;
			L_77 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_76, (String_t*)_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_058a;
			}
		}

IL_033b:
		{
			goto IL_06c3;
		}

IL_0340:
		{
			String_t* L_78 = V_2;
			bool L_79;
			L_79 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_78, (String_t*)_stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_059b;
			}
		}

IL_0350:
		{
			goto IL_06c3;
		}

IL_0355:
		{
			String_t* L_80 = V_2;
			bool L_81;
			L_81 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_80, (String_t*)_stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3, /*hidden argument*/NULL);
			if (L_81)
			{
				goto IL_05ac;
			}
		}

IL_0365:
		{
			goto IL_06c3;
		}

IL_036a:
		{
			String_t* L_82 = V_2;
			bool L_83;
			L_83 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_82, (String_t*)_stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_05bd;
			}
		}

IL_037a:
		{
			goto IL_06c3;
		}

IL_037f:
		{
			String_t* L_84 = V_2;
			bool L_85;
			L_85 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_84, (String_t*)_stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78, /*hidden argument*/NULL);
			if (L_85)
			{
				goto IL_05ce;
			}
		}

IL_038f:
		{
			goto IL_06c3;
		}

IL_0394:
		{
			String_t* L_86 = V_2;
			bool L_87;
			L_87 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_86, (String_t*)_stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8, /*hidden argument*/NULL);
			if (L_87)
			{
				goto IL_05df;
			}
		}

IL_03a4:
		{
			goto IL_06c3;
		}

IL_03a9:
		{
			String_t* L_88 = V_2;
			bool L_89;
			L_89 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_88, (String_t*)_stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_05f0;
			}
		}

IL_03b9:
		{
			goto IL_06c3;
		}

IL_03be:
		{
			String_t* L_90 = V_2;
			bool L_91;
			L_91 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_90, (String_t*)_stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5, /*hidden argument*/NULL);
			if (L_91)
			{
				goto IL_0601;
			}
		}

IL_03ce:
		{
			goto IL_06c3;
		}

IL_03d3:
		{
			String_t* L_92 = V_2;
			bool L_93;
			L_93 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_92, (String_t*)_stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0612;
			}
		}

IL_03e3:
		{
			goto IL_06c3;
		}

IL_03e8:
		{
			String_t* L_94 = V_2;
			bool L_95;
			L_95 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_94, (String_t*)_stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E, /*hidden argument*/NULL);
			if (L_95)
			{
				goto IL_0623;
			}
		}

IL_03f8:
		{
			goto IL_06c3;
		}

IL_03fd:
		{
			String_t* L_96 = V_2;
			bool L_97;
			L_97 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_96, (String_t*)_stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8, /*hidden argument*/NULL);
			if (L_97)
			{
				goto IL_0634;
			}
		}

IL_040d:
		{
			goto IL_06c3;
		}

IL_0412:
		{
			String_t* L_98 = V_2;
			bool L_99;
			L_99 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_98, (String_t*)_stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D, /*hidden argument*/NULL);
			if (L_99)
			{
				goto IL_0645;
			}
		}

IL_0422:
		{
			goto IL_06c3;
		}

IL_0427:
		{
			String_t* L_100 = V_2;
			bool L_101;
			L_101 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_100, (String_t*)_stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C, /*hidden argument*/NULL);
			if (L_101)
			{
				goto IL_0653;
			}
		}

IL_0437:
		{
			goto IL_06c3;
		}

IL_043c:
		{
			String_t* L_102 = V_2;
			bool L_103;
			L_103 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_102, (String_t*)_stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706, /*hidden argument*/NULL);
			if (L_103)
			{
				goto IL_0661;
			}
		}

IL_044c:
		{
			goto IL_06c3;
		}

IL_0451:
		{
			String_t* L_104 = V_2;
			bool L_105;
			L_105 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_104, (String_t*)_stringLiteral743B5A800B68BECD32E89977C700248578EFB001, /*hidden argument*/NULL);
			if (L_105)
			{
				goto IL_066f;
			}
		}

IL_0461:
		{
			goto IL_06c3;
		}

IL_0466:
		{
			String_t* L_106 = V_2;
			bool L_107;
			L_107 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_106, (String_t*)_stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944, /*hidden argument*/NULL);
			if (L_107)
			{
				goto IL_067d;
			}
		}

IL_0476:
		{
			goto IL_06c3;
		}

IL_047b:
		{
			String_t* L_108 = V_2;
			bool L_109;
			L_109 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_108, (String_t*)_stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061, /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_068b;
			}
		}

IL_048b:
		{
			goto IL_06c3;
		}

IL_0490:
		{
			String_t* L_110 = V_2;
			bool L_111;
			L_111 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_110, (String_t*)_stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E, /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_0699;
			}
		}

IL_04a0:
		{
			goto IL_06c3;
		}

IL_04a5:
		{
			String_t* L_112 = V_2;
			bool L_113;
			L_113 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_112, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
			if (L_113)
			{
				goto IL_06a7;
			}
		}

IL_04b5:
		{
			goto IL_06c3;
		}

IL_04ba:
		{
			String_t* L_114 = V_2;
			bool L_115;
			L_115 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_114, (String_t*)_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, /*hidden argument*/NULL);
			if (L_115)
			{
				goto IL_06b5;
			}
		}

IL_04ca:
		{
			goto IL_06c3;
		}

IL_04cf:
		{
			// instance.fieldOfView = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_116 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_117 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			float L_118;
			L_118 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_117);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_116);
			Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_116, (float)L_118, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_04e0:
		{
			// instance.nearClipPlane = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_119 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_120 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_120);
			float L_121;
			L_121 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_120);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_119);
			Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_119, (float)L_121, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_04f1:
		{
			// instance.farClipPlane = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_122 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_123 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_123);
			float L_124;
			L_124 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_123);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_122);
			Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_122, (float)L_124, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0502:
		{
			// instance.renderingPath = reader.Read<UnityEngine.RenderingPath>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_125 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_126 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_126);
			int32_t L_127;
			L_127 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F_m709F01C6403C23939D64A8605AA9C96070876F7F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_126);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_125);
			Camera_set_renderingPath_mCB2BAB2434EEAE5C3B44083403B8D620414DFD86((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_125, (int32_t)L_127, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0513:
		{
			// instance.allowHDR = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_128 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_129 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_129);
			bool L_130;
			L_130 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_129);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_128);
			Camera_set_allowHDR_m66B6DEF38F2C8F946674F25A789E2ABD132ECF32((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_128, (bool)L_130, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0524:
		{
			// instance.orthographicSize = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_131 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_132 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			float L_133;
			L_133 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_132);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_131);
			Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_131, (float)L_133, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0535:
		{
			// instance.orthographic = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_134 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_135 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			bool L_136;
			L_136 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_135);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_134);
			Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_134, (bool)L_136, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0546:
		{
			// instance.opaqueSortMode = reader.Read<UnityEngine.Rendering.OpaqueSortMode>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_137 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_138 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			int32_t L_139;
			L_139 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisOpaqueSortMode_t28F187F722257DBDA13B3E62CB86A3B09A6A8200_mFF207E0CCF734A246C443BCE5849042AB423E569_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_138);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_137);
			Camera_set_opaqueSortMode_mB5F37D92D5E7E57870A45F6AB94148538CA0058A((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_137, (int32_t)L_139, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0557:
		{
			// instance.transparencySortMode = reader.Read<UnityEngine.TransparencySortMode>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_140 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_141 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_141);
			int32_t L_142;
			L_142 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTransparencySortMode_tDB00AE4A886A17CC0D2125E906B95D541BD9C90E_mD6E4418326DFB34507C4573D3160A5FBBE87F494_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_141);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_140);
			Camera_set_transparencySortMode_mD8D70D251742D1E6759174EFBE8AC72D6B035F26((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_140, (int32_t)L_142, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0568:
		{
			// instance.depth = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_143 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_144 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_144);
			float L_145;
			L_145 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_144);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_143);
			Camera_set_depth_m33DBE382C6A293EDFF50FF459CBAB2FD3B7F469C((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_143, (float)L_145, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0579:
		{
			// instance.aspect = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_146 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_147 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_147);
			float L_148;
			L_148 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_147);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_146);
			Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_146, (float)L_148, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_058a:
		{
			// instance.cullingMask = reader.Read<System.Int32>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_149 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_150 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			int32_t L_151;
			L_151 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_150);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_149);
			Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_149, (int32_t)L_151, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_059b:
		{
			// instance.eventMask = reader.Read<System.Int32>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_152 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_153 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_153);
			int32_t L_154;
			L_154 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_153);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_152);
			Camera_set_eventMask_mCF42F95405D3315CD66950DFC240FDA27ED66872((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_152, (int32_t)L_154, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_05ac:
		{
			// instance.backgroundColor = reader.Read<UnityEngine.Color>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_155 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_156 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_156);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_157;
			L_157 = GenericVirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(ES3Reader_Read_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m9F5F40877B581CCAD8A9D73267D2E4028DB1305D_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_156);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_155);
			Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_155, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_157, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_05bd:
		{
			// instance.rect = reader.Read<UnityEngine.Rect>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_158 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_159 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_159);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_160;
			L_160 = GenericVirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(ES3Reader_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m7C8E44F66A5702DCA268EA3FAE3C7D8DA9B581B4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_159);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_158);
			Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_158, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 )L_160, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_05ce:
		{
			// instance.pixelRect = reader.Read<UnityEngine.Rect>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_161 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_162 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_163;
			L_163 = GenericVirtFuncInvoker0< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(ES3Reader_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m7C8E44F66A5702DCA268EA3FAE3C7D8DA9B581B4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_162);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_161);
			Camera_set_pixelRect_mB1BFC3EE5DB87F9A66ED0EBFC10B9F80DF1CC61B((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_161, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 )L_163, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_05df:
		{
			// instance.projectionMatrix = reader.Read<UnityEngine.Matrix4x4>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_164 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_165 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_165);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_166;
			L_166 = GenericVirtFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(ES3Reader_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m2A5A04EEFC2828DBB15DA02699DDCA2ABC1FB6D3_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_165);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_164);
			Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_164, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_166, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_05f0:
		{
			// instance.nonJitteredProjectionMatrix = reader.Read<UnityEngine.Matrix4x4>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_167 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_168 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_168);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_169;
			L_169 = GenericVirtFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(ES3Reader_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m2A5A04EEFC2828DBB15DA02699DDCA2ABC1FB6D3_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_168);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_167);
			Camera_set_nonJitteredProjectionMatrix_mBD4086F0CE187C0E68619606FA3F06AB9113A7D0((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_167, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_169, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0601:
		{
			// instance.useJitteredProjectionMatrixForTransparentRendering = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_170 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_171 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_171);
			bool L_172;
			L_172 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_171);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_170);
			Camera_set_useJitteredProjectionMatrixForTransparentRendering_mC534E01407398A73886F2E5796824120B50461EA((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_170, (bool)L_172, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0612:
		{
			// instance.clearFlags = reader.Read<UnityEngine.CameraClearFlags>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_173 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_174 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_174);
			int32_t L_175;
			L_175 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7_m3E204E6194F6F78D3AF56459608DAB76340B1A39_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_174);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_173);
			Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_173, (int32_t)L_175, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0623:
		{
			// instance.stereoSeparation = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_176 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_177 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_177);
			float L_178;
			L_178 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_177);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_176);
			Camera_set_stereoSeparation_mB5751CE5CC4F6FDDFFF6C7B628473CF50BFE7F6F((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_176, (float)L_178, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0634:
		{
			// instance.stereoConvergence = reader.Read<System.Single>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_179 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_180 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_180);
			float L_181;
			L_181 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_180);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_179);
			Camera_set_stereoConvergence_m8C74596745E0C338AD9EC6611C4FB0D839D02259((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_179, (float)L_181, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0645:
		{
			// instance.cameraType = reader.Read<UnityEngine.CameraType>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_182 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_183 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_183);
			int32_t L_184;
			L_184 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22_m7BED51D234CCE599371AA346245BCBB382CCB581_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_183);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_182);
			Camera_set_cameraType_mC2AAD78B9EE06A805D5F5253A46AC4EFAB1B632F((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_182, (int32_t)L_184, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0653:
		{
			// instance.stereoTargetEye = reader.Read<UnityEngine.StereoTargetEyeMask>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_185 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_186 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_186);
			int32_t L_187;
			L_187 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisStereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66_mA22AA7D4C4093A400971027C7666519A3BA269D1_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_186);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_185);
			Camera_set_stereoTargetEye_m5A3C3A66A5B4498009555740C5EE3C02D5178DB0((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_185, (int32_t)L_187, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0661:
		{
			// instance.targetDisplay = reader.Read<System.Int32>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_188 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_189 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			int32_t L_190;
			L_190 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_189);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_188);
			Camera_set_targetDisplay_mFA08827F4B857A192B6AE4F066FBC323F5C2E910((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_188, (int32_t)L_190, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_066f:
		{
			// instance.useOcclusionCulling = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_191 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_192 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_192);
			bool L_193;
			L_193 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_192);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_191);
			Camera_set_useOcclusionCulling_mA3DD08A2432C45B8A5438387F2788E7F585D33EB((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_191, (bool)L_193, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_067d:
		{
			// instance.layerCullSpherical = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_194 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_195 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_195);
			bool L_196;
			L_196 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_195);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_194);
			Camera_set_layerCullSpherical_mB6CF6EAA1E61224F644DB555C220ADDEA0F0C081((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_194, (bool)L_196, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_068b:
		{
			// instance.depthTextureMode = reader.Read<UnityEngine.DepthTextureMode>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_197 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_198 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_198);
			int32_t L_199;
			L_199 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisDepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A_m41650E9B79F0A6FABD7D11A702CD1542B7A03D64_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_198);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_197);
			Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_197, (int32_t)L_199, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_0699:
		{
			// instance.clearStencilAfterLightingPass = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_200 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_201 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_201);
			bool L_202;
			L_202 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_201);
			NullCheck((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_200);
			Camera_set_clearStencilAfterLightingPass_mC4644385C8E36B2C2227CC5D20C930EBC0427BBD((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)L_200, (bool)L_202, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_06a7:
		{
			// instance.enabled = reader.Read<System.Boolean>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_203 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_204 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_204);
			bool L_205;
			L_205 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_204);
			NullCheck((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_203);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_203, (bool)L_205, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_06b5:
		{
			// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_206 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_207 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_207);
			int32_t L_208;
			L_208 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_mE64108DDF1646F1C6F36D6B3FB6F4647DD08D8C5_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_207);
			NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_206);
			Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_206, (int32_t)L_208, /*hidden argument*/NULL);
			// break;
			goto IL_06c9;
		}

IL_06c3:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_209 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_209);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_209);
		}

IL_06c9:
		{
			// foreach(string propertyName in reader.Properties)
			RuntimeObject* L_210 = V_1;
			NullCheck((RuntimeObject*)L_210);
			bool L_211;
			L_211 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_210);
			if (L_211)
			{
				goto IL_0018;
			}
		}

IL_06d4:
		{
			IL2CPP_LEAVE(0x6EA, FINALLY_06d6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_06d6;
	}

FINALLY_06d6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_212 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_212, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_213 = V_4;
			if (!L_213)
			{
				goto IL_06e9;
			}
		}

IL_06e2:
		{
			RuntimeObject* L_214 = V_4;
			NullCheck((RuntimeObject*)L_214);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_214);
		}

IL_06e9:
		{
			IL2CPP_END_FINALLY(1750)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1750)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6EA, IL_06ea)
	}

IL_06ea:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CapsuleCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CapsuleCollider_ReadComponent_TisRuntimeObject_mACF6982EFDDCAFF0B2D887F397C3F6EF197B7E8D_gshared (ES3Type_CapsuleCollider_t3DFF5F9F6FF7DD156C154325FE28DFEC9E41176C * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_mBF64D7881A51B939E21E31A7C96C39CCC9F2E6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var instance = (UnityEngine.CapsuleCollider)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)Castclass((RuntimeObject*)L_0, CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
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
			goto IL_01ed;
		}

IL_0018:
		{
			// foreach(string propertyName in reader.Properties)
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			V_2 = (String_t*)((String_t*)Castclass((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			String_t* L_6 = V_2;
			if (!L_6)
			{
				goto IL_01e7;
			}
		}

IL_002a:
		{
			String_t* L_7 = V_2;
			uint32_t L_8;
			L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_7, /*hidden argument*/NULL);
			V_3 = (uint32_t)L_8;
			uint32_t L_9 = V_3;
			if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-2027800205)))))
			{
				goto IL_0071;
			}
		}

IL_0039:
		{
			uint32_t L_10 = V_3;
			if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)93078660)))))
			{
				goto IL_0059;
			}
		}

IL_0041:
		{
			uint32_t L_11 = V_3;
			if ((((int32_t)L_11) == ((int32_t)((int32_t)49525662))))
			{
				goto IL_00fd;
			}
		}

IL_004c:
		{
			uint32_t L_12 = V_3;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)93078660))))
			{
				goto IL_00a9;
			}
		}

IL_0054:
		{
			goto IL_01e7;
		}

IL_0059:
		{
			uint32_t L_13 = V_3;
			if ((((int32_t)L_13) == ((int32_t)((int32_t)230313139))))
			{
				goto IL_00be;
			}
		}

IL_0061:
		{
			uint32_t L_14 = V_3;
			if ((((int32_t)L_14) == ((int32_t)((int32_t)-2027800205))))
			{
				goto IL_0112;
			}
		}

IL_006c:
		{
			goto IL_01e7;
		}

IL_0071:
		{
			uint32_t L_15 = V_3;
			if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-756756384)))))
			{
				goto IL_0094;
			}
		}

IL_0079:
		{
			uint32_t L_16 = V_3;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)-1544380112))))
			{
				goto IL_0127;
			}
		}

IL_0084:
		{
			uint32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)-756756384))))
			{
				goto IL_013c;
			}
		}

IL_008f:
		{
			goto IL_01e7;
		}

IL_0094:
		{
			uint32_t L_18 = V_3;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)-708986046))))
			{
				goto IL_00d3;
			}
		}

IL_009c:
		{
			uint32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)-546453654))))
			{
				goto IL_00e8;
			}
		}

IL_00a4:
		{
			goto IL_01e7;
		}

IL_00a9:
		{
			String_t* L_20 = V_2;
			bool L_21;
			L_21 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_20, (String_t*)_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0151;
			}
		}

IL_00b9:
		{
			goto IL_01e7;
		}

IL_00be:
		{
			String_t* L_22 = V_2;
			bool L_23;
			L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_22, (String_t*)_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_0167;
			}
		}

IL_00ce:
		{
			goto IL_01e7;
		}

IL_00d3:
		{
			String_t* L_24 = V_2;
			bool L_25;
			L_25 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_24, (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_017a;
			}
		}

IL_00e3:
		{
			goto IL_01e7;
		}

IL_00e8:
		{
			String_t* L_26 = V_2;
			bool L_27;
			L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_26, (String_t*)_stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_018d;
			}
		}

IL_00f8:
		{
			goto IL_01e7;
		}

IL_00fd:
		{
			String_t* L_28 = V_2;
			bool L_29;
			L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_28, (String_t*)_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_01a0;
			}
		}

IL_010d:
		{
			goto IL_01e7;
		}

IL_0112:
		{
			String_t* L_30 = V_2;
			bool L_31;
			L_31 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_30, (String_t*)_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_01b3;
			}
		}

IL_0122:
		{
			goto IL_01e7;
		}

IL_0127:
		{
			String_t* L_32 = V_2;
			bool L_33;
			L_33 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_32, (String_t*)_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_01c6;
			}
		}

IL_0137:
		{
			goto IL_01e7;
		}

IL_013c:
		{
			String_t* L_34 = V_2;
			bool L_35;
			L_35 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_34, (String_t*)_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_01d9;
			}
		}

IL_014c:
		{
			goto IL_01e7;
		}

IL_0151:
		{
			// instance.center = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_36 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_37 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_38 = ((ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tA9144E81A20D2F28726F02DE1AE6CD3F9C12B54F_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_37);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = GenericVirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBA4CD9D0F45E78BA43FE2DB8EC33CC3A5433DE15_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_37, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_38);
			NullCheck((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_36);
			CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_36, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_39, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_0167:
		{
			// instance.radius = reader.Read<float>(ES3Type_float.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_40 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_41 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_42 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41);
			float L_43;
			L_43 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_41, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_42);
			NullCheck((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_40);
			CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_40, (float)L_43, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_017a:
		{
			// instance.height = reader.Read<float>(ES3Type_float.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_44 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_45 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_46 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_45);
			float L_47;
			L_47 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_45, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_46);
			NullCheck((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_44);
			CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_44, (float)L_47, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_018d:
		{
			// instance.direction = reader.Read<int>(ES3Type_int.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_48 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_49 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_50 = ((ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF64C15D40AD0CC7C15BCD1CEC3C5C6BF837BD167_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49);
			int32_t L_51;
			L_51 = GenericVirtFuncInvoker1< int32_t, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B74AA6627F5B1D21171D56C42F71DE5A7C1B4A6_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_49, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_50);
			NullCheck((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_48);
			CapsuleCollider_set_direction_mE5E7B7BB7FBBBA97148E8CFCDC46D1BB14673984((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)L_48, (int32_t)L_51, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_01a0:
		{
			// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_52 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_53 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_54 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_53);
			bool L_55;
			L_55 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_53, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_54);
			NullCheck((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_52);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_52, (bool)L_55, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_01b3:
		{
			// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_56 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_57 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_58 = ((ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t8F309F7B9CC735FF1DEE68081B6E3CAB367745F4_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_57);
			bool L_59;
			L_59 = GenericVirtFuncInvoker1< bool, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mC6D1B158268FF9B97822FF9F5B37FB1723FEDA22_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_57, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_58);
			NullCheck((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_56);
			Collider_set_isTrigger_mEDFE3DFA29D42E9DEB9D91A3D25BACC4470305ED((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_56, (bool)L_59, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_01c6:
		{
			// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_60 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_61 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var);
			ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_62 = ((ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_tF86B773C86731BD9AD79448B860BBB178FE77644_il2cpp_TypeInfo_var))->get_Instance_12();
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61);
			float L_63;
			L_63 = GenericVirtFuncInvoker1< float, ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m4A0416374498BDA042B8EB21E49B72326D6CE5F4_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_61, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_62);
			NullCheck((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_60);
			Collider_set_contactOffset_m94DF399C14ACBA8C58924BAC2E20384664272139((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_60, (float)L_63, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_01d9:
		{
			// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>();
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_64 = V_0;
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
			PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_66;
			L_66 = GenericVirtFuncInvoker0< PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * >::Invoke(ES3Reader_Read_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_mBF64D7881A51B939E21E31A7C96C39CCC9F2E6B0_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
			NullCheck((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_64);
			Collider_set_sharedMaterial_mAAB481A26A050DC39F7C160909D33971E50F3952((Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_64, (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 *)L_66, /*hidden argument*/NULL);
			// break;
			goto IL_01ed;
		}

IL_01e7:
		{
			// reader.Skip();
			ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
			NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
			VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		}

IL_01ed:
		{
			// foreach(string propertyName in reader.Properties)
			RuntimeObject* L_68 = V_1;
			NullCheck((RuntimeObject*)L_68);
			bool L_69;
			L_69 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_68);
			if (L_69)
			{
				goto IL_0018;
			}
		}

IL_01f8:
		{
			IL2CPP_LEAVE(0x20E, FINALLY_01fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01fa;
	}

FINALLY_01fa:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_70 = V_1;
			V_4 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_70, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_71 = V_4;
			if (!L_71)
			{
				goto IL_020d;
			}
		}

IL_0206:
		{
			RuntimeObject* L_72 = V_4;
			NullCheck((RuntimeObject*)L_72);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_72);
		}

IL_020d:
		{
			IL2CPP_END_FINALLY(506)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(506)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20E, IL_020e)
	}

IL_020e:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m774EAFD97FFEB3AF0C6E8BDA07F6ED3119BDF486_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_mB494193296B398D5469A8FE58F4A472833D48CD8_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mBB4A564BF5D38022BC07FF0E9BD152E6E60D2692_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mA9F3FD5BB4AAAB73BB9BB183B2E7C63721C63D30_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m9614B7D50CB769E67B85FF5995557F915A49C8F2_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m39E24A59A21F3F1BF9A731DD5648336314689796_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mA56D557FEFAEA3ED0DBDDF18231979AEC808AA0D_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m9AFDABFA622191929C84CC2C1EE48BCD978C2ECB_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_m1F6F682DE59664F60A8CEADDCF6FACA34A9BBDC1_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mED65D7EDCAD3CBE448189D0BD6CEEFC08C88B8A5_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisRuntimeObject_m13FA7C1B4D82CCE85D1A92442045C04C381AF0CE_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m7A4FA0E93FE5990CA5EFCBEF9276EFF5E992F6F0_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m35B5CDE42C6D6969D8CD07C7D8CC66558DBE6B3E_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_m6D96CB03CA750516746C8A72AAE26EB9913596BC_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFCC8CF722330A4F88972D2EF8147C2D60752F111_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA0D883E8EF240B589B5E1AD62491A77EB25EAB5_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mF97F62D367F929914EB15F8CED29310755DEFF44_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m4A677BA1D108946A3734DB960C95FB093CDB1C23_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_m058EA9A3B70A0AA40A868BBA773305D4192EFE59_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ES3Type_CollisionModule_Read_TisMinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7_m54AD8316AD6BF9A7B036AB511597EF0EE5916E67_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 ));
		// ReadInto<T>(reader, instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_0 = ___reader0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_1 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_2 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_1;
		RuntimeObject * L_3 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this);
		GenericVirtActionInvoker2< ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)__this, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_0, (RuntimeObject *)L_3);
		// return instance;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_4 = V_0;
		CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  L_5 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )L_4;
		RuntimeObject * L_6 = Box(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject *)L_6;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Boolean>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mD41B9880DB5A28877FCD1CBCD49B7245B577170D_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Bounds>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_mDA03FBBF74007D7516429CD19AE91A719B9258AB_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Byte>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m1E4111B9B1D35F42B284929B209C5AACCAF86A7F_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Color>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mFDD3B1CF01A3C232B9E05049A35E87F2ED1EB93F_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Int16>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m21019D67F9CC5ACE91F5176A203A156D512B9119_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Int32>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m413428324C08A8528F0A7A9D28393204F3F12CE9_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Int32Enum>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mB712B90F93531D4C11424A690E14BFB749B72520_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Int64>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mE1FA6BB458EAFBC690276B740F48C2A9383DF24F_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.LayerMask>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_m209068D3D5A5C91BBFDB8BA7DC5F7512E762E1CE_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Matrix4x4>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m2595ABC3509553F4C43BE519D01DB9BC1D45BE39_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRuntimeObject_m48F4A46CBC9AD5BF285B6EFF3C5BD660F371F10F_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Quaternion>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m60227BDBDE6BE748644121FB3F4516BF88DA68DF_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Rect>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_m2EE970222DD6EAEBAA88DB24F3A4BB4AC8142F1A_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.RenderTextureDescriptor>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_mF0F0D8EEE02C3D7707EFD0004CC4A967EAC8181A_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Single>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2F17B5959A194B4CBAA8738566D088F9F80BA556_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Vector2>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m49C7A53EA3CFCFA456F134F2B67DCBE565A0589B_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Vector3>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m19A3857AE7A81D48330AB37F6551D7A5FC0F9B9D_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.Vector4>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m51F7008513434535E07E483F378D1C1E6556E40D_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisCollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_mA6441D2C7905EBA576BCC057C5D768DC656AFE7F_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorBySpeedModule_tDB7CC6D16647BBB53D710394794B7C6C7799F58F_m522CCB3BC7291205ABA7BFD69635AFB64B67F04B_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorOverLifetimeModule_t84B571334582EB5A79D1C199366F06416FF7BC75_mE8C269C6E24ED519B1529F12C6724EA3089C81EB_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisEmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_m1AFCD967EFD8291B0351B7D0B805907DD7CDA327_gshared (ES3Type_CollisionModule_t7DC85C262F97852EB287ACD68D96C857D57C26C3 * __this, ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * ___reader0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject * L_0 = ___obj1;
		V_0 = (CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 )((*(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)UnBox(L_0, CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09_il2cpp_TypeInfo_var))));
		goto IL_03f4;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_03ee;
		}
	}
	{
		String_t* L_2 = V_1;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3ADC1F612F9EE3DD518E6F0023A0DE0EE2B120A7((String_t*)L_2, /*hidden argument*/NULL);
		V_2 = (uint32_t)L_3;
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_013c;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_03ee;
	}

IL_004f:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_0190;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_03ee;
	}

IL_006a:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_03ee;
	}

IL_008d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_028c;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_024d;
		}
	}
	{
		goto IL_03ee;
	}

IL_00b3:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0277;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_0262;
		}
	}
	{
		goto IL_03ee;
	}

IL_00de:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_02a1;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_03ee;
	}

IL_00f9:
	{
		uint32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017b;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_0223;
		}
	}
	{
		goto IL_03ee;
	}

IL_0119:
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01cf;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01ba;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_03ee;
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
		goto IL_03ee;
	}

IL_0151:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_31, (String_t*)_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_03ee;
	}

IL_0166:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_33, (String_t*)_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_02da;
		}
	}
	{
		goto IL_03ee;
	}

IL_017b:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_35, (String_t*)_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_03ee;
	}

IL_0190:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_37, (String_t*)_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0303;
		}
	}
	{
		goto IL_03ee;
	}

IL_01a5:
	{
		String_t* L_39 = V_1;
		bool L_40;
		L_40 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_39, (String_t*)_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0315;
		}
	}
	{
		goto IL_03ee;
	}

IL_01ba:
	{
		String_t* L_41 = V_1;
		bool L_42;
		L_42 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_41, (String_t*)_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_032c;
		}
	}
	{
		goto IL_03ee;
	}

IL_01cf:
	{
		String_t* L_43 = V_1;
		bool L_44;
		L_44 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_43, (String_t*)_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_03ee;
	}

IL_01e4:
	{
		String_t* L_45 = V_1;
		bool L_46;
		L_46 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_45, (String_t*)_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0355;
		}
	}
	{
		goto IL_03ee;
	}

IL_01f9:
	{
		String_t* L_47 = V_1;
		bool L_48;
		L_48 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_47, (String_t*)_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0367;
		}
	}
	{
		goto IL_03ee;
	}

IL_020e:
	{
		String_t* L_49 = V_1;
		bool L_50;
		L_50 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_49, (String_t*)_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0376;
		}
	}
	{
		goto IL_03ee;
	}

IL_0223:
	{
		String_t* L_51 = V_1;
		bool L_52;
		L_52 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_51, (String_t*)_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0385;
		}
	}
	{
		goto IL_03ee;
	}

IL_0238:
	{
		String_t* L_53 = V_1;
		bool L_54;
		L_54 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_53, (String_t*)_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0394;
		}
	}
	{
		goto IL_03ee;
	}

IL_024d:
	{
		String_t* L_55 = V_1;
		bool L_56;
		L_56 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_55, (String_t*)_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a3;
		}
	}
	{
		goto IL_03ee;
	}

IL_0262:
	{
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_57, (String_t*)_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_03ee;
	}

IL_0277:
	{
		String_t* L_59 = V_1;
		bool L_60;
		L_60 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_59, (String_t*)_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03c1;
		}
	}
	{
		goto IL_03ee;
	}

IL_028c:
	{
		String_t* L_61 = V_1;
		bool L_62;
		L_62 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_61, (String_t*)_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03d0;
		}
	}
	{
		goto IL_03ee;
	}

IL_02a1:
	{
		String_t* L_63 = V_1;
		bool L_64;
		L_64 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A((String_t*)L_63, (String_t*)_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03df;
		}
	}
	{
		goto IL_03ee;
	}

IL_02b6:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_65 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		bool L_66;
		L_66 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_65);
		CollisionModule_set_enabled_m8B7CFD1E017C2342A02DA81F9EFA404A926EB2CF((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_66, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02c8:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_67 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		int32_t L_68;
		L_68 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_tE528B5B05EC088756EE84AF2411364721C21609F_mD07F6DFDF0C6CEF8E12CEDD5EAA5927E77514F18_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_67);
		CollisionModule_set_type_m3C6EB1D92F00F0381F61534115346EACA5DAD530((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_68, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02da:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_69 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		int32_t L_70;
		L_70 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t3314304C4F2E626F040F4F93FEC30D7B30CBD96E_mC885E11A8E2BE17E31B8F194D62AC13EF73AC98F_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_69);
		CollisionModule_set_mode_mC728E3816C70D1CE2F7EDA7D192F135422AD99F2((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_70, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_02ec:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_71 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_72 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_73;
		L_73 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_71, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_72);
		CollisionModule_set_dampen_mC2E87F64AB8AE3E6642F3F97D2DD125B69094E60((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_73, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0303:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_74 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		float L_75;
		L_75 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_74);
		CollisionModule_set_dampenMultiplier_m066B4060102425A408DAE58FA101D6A814FB9DD3((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_75, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0315:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_76 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_77 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_78;
		L_78 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_76, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_77);
		CollisionModule_set_bounce_m17244E58810E2CBA8E6FF1E846E6C050982F4737((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_78, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_032c:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_79 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		float L_80;
		L_80 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_79);
		CollisionModule_set_bounceMultiplier_mC47DE5154B4DBC7B1508076BA057AD4E3DE5CE7F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_80, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_033e:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_81 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var);
		ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * L_82 = ((ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_tC5342BF0F8735B85CB5E16FDD4C6FACC8AFAD3B7_il2cpp_TypeInfo_var))->get_Instance_12();
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81);
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_83;
		L_83 = GenericVirtFuncInvoker1< MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD , ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D * >::Invoke(ES3Reader_Read_TisMinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD_mD285150CBFB52440643BBECB5ADF4EE8DE940535_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_81, (ES3Type_t8FBECB7AE75168648B9524E0C2A38DAD4555421D *)L_82);
		CollisionModule_set_lifetimeLoss_m3B5DB55E93DAF02D9A3CE8F21145476F663D5625((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD )L_83, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0355:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_84 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		float L_85;
		L_85 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_84);
		CollisionModule_set_lifetimeLossMultiplier_m0AEE74E31BEDAB3E3B97A234ACA259125FC62B3C((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0367:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_86 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		float L_87;
		L_87 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_86);
		CollisionModule_set_minKillSpeed_m74257D4CBBA9BF21D27A59FE80C9498386275850((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_87, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0376:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_88 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		float L_89;
		L_89 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_88);
		CollisionModule_set_maxKillSpeed_m068A9A0A501369AFDDD07C7D0716DB7AAC4AA456((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_89, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0385:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_90 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_91;
		L_91 = GenericVirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(ES3Reader_Read_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mFCF6664FF2F96DFCD79331FD74DED0DBA458C1CD_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_90);
		CollisionModule_set_collidesWith_mC9C3E97CB97342E59A284264A59E088F237AB1BC((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_91, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_0394:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_92 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		bool L_93;
		L_93 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_92);
		CollisionModule_set_enableDynamicColliders_mEF537C83DE1A4E3FDC2027973F851A9FFDA40F37((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_93, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03a3:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_94 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		int32_t L_95;
		L_95 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m0794556DE87ECD0F81117961D1F891BE1A137A92_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_94);
		CollisionModule_set_maxCollisionShapes_m4D5FC0826A6EB5B8C1EFC6F042652D7BE1D79EC9((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_95, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03b2:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_96 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		int32_t L_97;
		L_97 = GenericVirtFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tC7145DD329CFF3795B9657C6632330CD600F07A7_m03BF3710D2E4FF4F107EC021D3B98A1A2168826A_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_96);
		CollisionModule_set_quality_m99CD4A3A09ABFF05C04CF8E01C121CF9F229664A((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (int32_t)L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03c1:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_98 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		float L_99;
		L_99 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_98);
		CollisionModule_set_voxelSize_m03C750BF2697CE253A12095977819DDB3E7839D0((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_99, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03d0:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_100 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		float L_101;
		L_101 = GenericVirtFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB3A7C58F251D046557134A202F2B55EA227A6AAF_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_100);
		CollisionModule_set_radiusScale_m404135135B759916CA460E66618071EA9D98FA3F((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (float)L_101, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03df:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_102 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		bool L_103;
		L_103 = GenericVirtFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBDC139A1CA0BD0CB7B0D1FC42D9161AB630282F2_RuntimeMethod_var, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_102);
		CollisionModule_set_sendCollisionMessages_mCD953D3A99D4BC0B82F5E526012F31894CC74AFB((CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(CollisionModule_t2018942ABE80D7FE280ADCE09399C56FF1BA8E09 *)(&V_0), (bool)L_103, /*hidden argument*/NULL);
		// break;
		goto IL_03f4;
	}

IL_03ee:
	{
		// reader.Skip();
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_104 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
		VirtActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_104);
	}

IL_03f4:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 * L_105 = ___reader0;
		NullCheck((ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_106;
		L_106 = VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, (ES3Reader_t2780AF8AA61DA2A817115CEF8612AC0E494D03C9 *)L_105);
		String_t* L_107 = (String_t*)L_106;
		V_1 = (String_t*)L_107;
		if (L_107)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
