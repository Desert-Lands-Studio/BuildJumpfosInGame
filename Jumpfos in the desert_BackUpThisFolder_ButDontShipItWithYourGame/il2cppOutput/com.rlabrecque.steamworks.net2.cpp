#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond
struct InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A;
// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete
struct InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8;
// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded
struct InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7;
// Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond
struct RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5;
// Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete
struct RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D;
// Steamworks.ISteamMatchmakingRulesResponse/RulesResponded
struct RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959;
// Steamworks.ISteamMatchmakingRulesResponse/VTable
struct VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022;
// Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete
struct InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A;
// Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond
struct InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12;
// Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded
struct InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52;
// Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete
struct RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9;
// Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond
struct ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE;
// Steamworks.ISteamMatchmakingServerListResponse/ServerResponded
struct ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7;
// Steamworks.ISteamMatchmakingServerListResponse/VTable
struct VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26;
// Steamworks.InteropHelp/SteamParamStringArray
struct SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0;
// Steamworks.InteropHelp/UTF8StringHandle
struct UTF8StringHandle_t44BAB8952233522065DE3B14D80F2C2B5A376A71;
// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A;;
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com;
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com;;
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke;
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Steamworks.ISteamMatchmakingRulesResponse/VTable
struct VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022  : public RuntimeObject
{
public:
	// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded Steamworks.ISteamMatchmakingRulesResponse/VTable::m_VTRulesResponded
	InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7 * ___m_VTRulesResponded_0;
	// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond Steamworks.ISteamMatchmakingRulesResponse/VTable::m_VTRulesFailedToRespond
	InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A * ___m_VTRulesFailedToRespond_1;
	// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete Steamworks.ISteamMatchmakingRulesResponse/VTable::m_VTRulesRefreshComplete
	InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8 * ___m_VTRulesRefreshComplete_2;

public:
	inline static int32_t get_offset_of_m_VTRulesResponded_0() { return static_cast<int32_t>(offsetof(VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022, ___m_VTRulesResponded_0)); }
	inline InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7 * get_m_VTRulesResponded_0() const { return ___m_VTRulesResponded_0; }
	inline InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7 ** get_address_of_m_VTRulesResponded_0() { return &___m_VTRulesResponded_0; }
	inline void set_m_VTRulesResponded_0(InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7 * value)
	{
		___m_VTRulesResponded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTRulesResponded_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_VTRulesFailedToRespond_1() { return static_cast<int32_t>(offsetof(VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022, ___m_VTRulesFailedToRespond_1)); }
	inline InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A * get_m_VTRulesFailedToRespond_1() const { return ___m_VTRulesFailedToRespond_1; }
	inline InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A ** get_address_of_m_VTRulesFailedToRespond_1() { return &___m_VTRulesFailedToRespond_1; }
	inline void set_m_VTRulesFailedToRespond_1(InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A * value)
	{
		___m_VTRulesFailedToRespond_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTRulesFailedToRespond_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VTRulesRefreshComplete_2() { return static_cast<int32_t>(offsetof(VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022, ___m_VTRulesRefreshComplete_2)); }
	inline InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8 * get_m_VTRulesRefreshComplete_2() const { return ___m_VTRulesRefreshComplete_2; }
	inline InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8 ** get_address_of_m_VTRulesRefreshComplete_2() { return &___m_VTRulesRefreshComplete_2; }
	inline void set_m_VTRulesRefreshComplete_2(InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8 * value)
	{
		___m_VTRulesRefreshComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTRulesRefreshComplete_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Steamworks.ISteamMatchmakingRulesResponse/VTable
struct VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_VTRulesResponded_0;
	Il2CppMethodPointer ___m_VTRulesFailedToRespond_1;
	Il2CppMethodPointer ___m_VTRulesRefreshComplete_2;
};
// Native definition for COM marshalling of Steamworks.ISteamMatchmakingRulesResponse/VTable
struct VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_com
{
	Il2CppMethodPointer ___m_VTRulesResponded_0;
	Il2CppMethodPointer ___m_VTRulesFailedToRespond_1;
	Il2CppMethodPointer ___m_VTRulesRefreshComplete_2;
};

// Steamworks.ISteamMatchmakingServerListResponse/VTable
struct VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26  : public RuntimeObject
{
public:
	// Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded Steamworks.ISteamMatchmakingServerListResponse/VTable::m_VTServerResponded
	InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * ___m_VTServerResponded_0;
	// Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond Steamworks.ISteamMatchmakingServerListResponse/VTable::m_VTServerFailedToRespond
	InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * ___m_VTServerFailedToRespond_1;
	// Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete Steamworks.ISteamMatchmakingServerListResponse/VTable::m_VTRefreshComplete
	InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * ___m_VTRefreshComplete_2;

public:
	inline static int32_t get_offset_of_m_VTServerResponded_0() { return static_cast<int32_t>(offsetof(VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26, ___m_VTServerResponded_0)); }
	inline InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * get_m_VTServerResponded_0() const { return ___m_VTServerResponded_0; }
	inline InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 ** get_address_of_m_VTServerResponded_0() { return &___m_VTServerResponded_0; }
	inline void set_m_VTServerResponded_0(InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * value)
	{
		___m_VTServerResponded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTServerResponded_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_VTServerFailedToRespond_1() { return static_cast<int32_t>(offsetof(VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26, ___m_VTServerFailedToRespond_1)); }
	inline InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * get_m_VTServerFailedToRespond_1() const { return ___m_VTServerFailedToRespond_1; }
	inline InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 ** get_address_of_m_VTServerFailedToRespond_1() { return &___m_VTServerFailedToRespond_1; }
	inline void set_m_VTServerFailedToRespond_1(InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * value)
	{
		___m_VTServerFailedToRespond_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTServerFailedToRespond_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_VTRefreshComplete_2() { return static_cast<int32_t>(offsetof(VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26, ___m_VTRefreshComplete_2)); }
	inline InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * get_m_VTRefreshComplete_2() const { return ___m_VTRefreshComplete_2; }
	inline InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A ** get_address_of_m_VTRefreshComplete_2() { return &___m_VTRefreshComplete_2; }
	inline void set_m_VTRefreshComplete_2(InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * value)
	{
		___m_VTRefreshComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VTRefreshComplete_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Steamworks.ISteamMatchmakingServerListResponse/VTable
struct VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_VTServerResponded_0;
	Il2CppMethodPointer ___m_VTServerFailedToRespond_1;
	Il2CppMethodPointer ___m_VTRefreshComplete_2;
};
// Native definition for COM marshalling of Steamworks.ISteamMatchmakingServerListResponse/VTable
struct VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_com
{
	Il2CppMethodPointer ___m_VTServerResponded_0;
	Il2CppMethodPointer ___m_VTServerFailedToRespond_1;
	Il2CppMethodPointer ___m_VTRefreshComplete_2;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
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

// Steamworks.InputAnalogActionHandle_t
struct InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360 
{
public:
	// System.UInt64 Steamworks.InputAnalogActionHandle_t::m_InputAnalogActionHandle
	uint64_t ___m_InputAnalogActionHandle_0;

public:
	inline static int32_t get_offset_of_m_InputAnalogActionHandle_0() { return static_cast<int32_t>(offsetof(InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360, ___m_InputAnalogActionHandle_0)); }
	inline uint64_t get_m_InputAnalogActionHandle_0() const { return ___m_InputAnalogActionHandle_0; }
	inline uint64_t* get_address_of_m_InputAnalogActionHandle_0() { return &___m_InputAnalogActionHandle_0; }
	inline void set_m_InputAnalogActionHandle_0(uint64_t value)
	{
		___m_InputAnalogActionHandle_0 = value;
	}
};


// Steamworks.InputDigitalActionData_t
#pragma pack(push, tp, 1)
struct InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296 
{
public:
	// System.Byte Steamworks.InputDigitalActionData_t::bState
	uint8_t ___bState_0;
	// System.Byte Steamworks.InputDigitalActionData_t::bActive
	uint8_t ___bActive_1;

public:
	inline static int32_t get_offset_of_bState_0() { return static_cast<int32_t>(offsetof(InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296, ___bState_0)); }
	inline uint8_t get_bState_0() const { return ___bState_0; }
	inline uint8_t* get_address_of_bState_0() { return &___bState_0; }
	inline void set_bState_0(uint8_t value)
	{
		___bState_0 = value;
	}

	inline static int32_t get_offset_of_bActive_1() { return static_cast<int32_t>(offsetof(InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296, ___bActive_1)); }
	inline uint8_t get_bActive_1() const { return ___bActive_1; }
	inline uint8_t* get_address_of_bActive_1() { return &___bActive_1; }
	inline void set_bActive_1(uint8_t value)
	{
		___bActive_1 = value;
	}
};
#pragma pack(pop, tp)


// Steamworks.InputDigitalActionHandle_t
struct InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137 
{
public:
	// System.UInt64 Steamworks.InputDigitalActionHandle_t::m_InputDigitalActionHandle
	uint64_t ___m_InputDigitalActionHandle_0;

public:
	inline static int32_t get_offset_of_m_InputDigitalActionHandle_0() { return static_cast<int32_t>(offsetof(InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137, ___m_InputDigitalActionHandle_0)); }
	inline uint64_t get_m_InputDigitalActionHandle_0() const { return ___m_InputDigitalActionHandle_0; }
	inline uint64_t* get_address_of_m_InputDigitalActionHandle_0() { return &___m_InputDigitalActionHandle_0; }
	inline void set_m_InputDigitalActionHandle_0(uint64_t value)
	{
		___m_InputDigitalActionHandle_0 = value;
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


// Steamworks.Packsize/ValvePackingSentinel_t
#pragma pack(push, tp, 8)
struct ValvePackingSentinel_t_t28B4F83777FFA2C2BCB6471A7959EE3D05153FD0 
{
public:
	// System.UInt32 Steamworks.Packsize/ValvePackingSentinel_t::m_u32
	uint32_t ___m_u32_0;
	// System.UInt64 Steamworks.Packsize/ValvePackingSentinel_t::m_u64
	uint64_t ___m_u64_1;
	// System.UInt16 Steamworks.Packsize/ValvePackingSentinel_t::m_u16
	uint16_t ___m_u16_2;
	// System.Double Steamworks.Packsize/ValvePackingSentinel_t::m_d
	double ___m_d_3;

public:
	inline static int32_t get_offset_of_m_u32_0() { return static_cast<int32_t>(offsetof(ValvePackingSentinel_t_t28B4F83777FFA2C2BCB6471A7959EE3D05153FD0, ___m_u32_0)); }
	inline uint32_t get_m_u32_0() const { return ___m_u32_0; }
	inline uint32_t* get_address_of_m_u32_0() { return &___m_u32_0; }
	inline void set_m_u32_0(uint32_t value)
	{
		___m_u32_0 = value;
	}

	inline static int32_t get_offset_of_m_u64_1() { return static_cast<int32_t>(offsetof(ValvePackingSentinel_t_t28B4F83777FFA2C2BCB6471A7959EE3D05153FD0, ___m_u64_1)); }
	inline uint64_t get_m_u64_1() const { return ___m_u64_1; }
	inline uint64_t* get_address_of_m_u64_1() { return &___m_u64_1; }
	inline void set_m_u64_1(uint64_t value)
	{
		___m_u64_1 = value;
	}

	inline static int32_t get_offset_of_m_u16_2() { return static_cast<int32_t>(offsetof(ValvePackingSentinel_t_t28B4F83777FFA2C2BCB6471A7959EE3D05153FD0, ___m_u16_2)); }
	inline uint16_t get_m_u16_2() const { return ___m_u16_2; }
	inline uint16_t* get_address_of_m_u16_2() { return &___m_u16_2; }
	inline void set_m_u16_2(uint16_t value)
	{
		___m_u16_2 = value;
	}

	inline static int32_t get_offset_of_m_d_3() { return static_cast<int32_t>(offsetof(ValvePackingSentinel_t_t28B4F83777FFA2C2BCB6471A7959EE3D05153FD0, ___m_d_3)); }
	inline double get_m_d_3() const { return ___m_d_3; }
	inline double* get_address_of_m_d_3() { return &___m_d_3; }
	inline void set_m_d_3(double value)
	{
		___m_d_3 = value;
	}
};
#pragma pack(pop, tp)


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Steamworks.EInputSourceMode
struct EInputSourceMode_t295D5471051265DEA9965210244BCCAF44EEE6F5 
{
public:
	// System.Int32 Steamworks.EInputSourceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EInputSourceMode_t295D5471051265DEA9965210244BCCAF44EEE6F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Steamworks.EMatchMakingServerResponse
struct EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A 
{
public:
	// System.Int32 Steamworks.EMatchMakingServerResponse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Steamworks.HServerListRequest
struct HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C 
{
public:
	// System.IntPtr Steamworks.HServerListRequest::m_HServerListRequest
	intptr_t ___m_HServerListRequest_1;

public:
	inline static int32_t get_offset_of_m_HServerListRequest_1() { return static_cast<int32_t>(offsetof(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C, ___m_HServerListRequest_1)); }
	inline intptr_t get_m_HServerListRequest_1() const { return ___m_HServerListRequest_1; }
	inline intptr_t* get_address_of_m_HServerListRequest_1() { return &___m_HServerListRequest_1; }
	inline void set_m_HServerListRequest_1(intptr_t value)
	{
		___m_HServerListRequest_1 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Steamworks.SteamParamStringArray_t
#pragma pack(push, tp, 8)
struct SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B 
{
public:
	// System.IntPtr Steamworks.SteamParamStringArray_t::m_ppStrings
	intptr_t ___m_ppStrings_0;
	// System.Int32 Steamworks.SteamParamStringArray_t::m_nNumStrings
	int32_t ___m_nNumStrings_1;

public:
	inline static int32_t get_offset_of_m_ppStrings_0() { return static_cast<int32_t>(offsetof(SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B, ___m_ppStrings_0)); }
	inline intptr_t get_m_ppStrings_0() const { return ___m_ppStrings_0; }
	inline intptr_t* get_address_of_m_ppStrings_0() { return &___m_ppStrings_0; }
	inline void set_m_ppStrings_0(intptr_t value)
	{
		___m_ppStrings_0 = value;
	}

	inline static int32_t get_offset_of_m_nNumStrings_1() { return static_cast<int32_t>(offsetof(SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B, ___m_nNumStrings_1)); }
	inline int32_t get_m_nNumStrings_1() const { return ___m_nNumStrings_1; }
	inline int32_t* get_address_of_m_nNumStrings_1() { return &___m_nNumStrings_1; }
	inline void set_m_nNumStrings_1(int32_t value)
	{
		___m_nNumStrings_1 = value;
	}
};
#pragma pack(pop, tp)


// Steamworks.InteropHelp/SteamParamStringArray
struct SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0  : public RuntimeObject
{
public:
	// System.IntPtr[] Steamworks.InteropHelp/SteamParamStringArray::m_Strings
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___m_Strings_0;
	// System.IntPtr Steamworks.InteropHelp/SteamParamStringArray::m_ptrStrings
	intptr_t ___m_ptrStrings_1;
	// System.IntPtr Steamworks.InteropHelp/SteamParamStringArray::m_pSteamParamStringArray
	intptr_t ___m_pSteamParamStringArray_2;

public:
	inline static int32_t get_offset_of_m_Strings_0() { return static_cast<int32_t>(offsetof(SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0, ___m_Strings_0)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_m_Strings_0() const { return ___m_Strings_0; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_m_Strings_0() { return &___m_Strings_0; }
	inline void set_m_Strings_0(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___m_Strings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Strings_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ptrStrings_1() { return static_cast<int32_t>(offsetof(SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0, ___m_ptrStrings_1)); }
	inline intptr_t get_m_ptrStrings_1() const { return ___m_ptrStrings_1; }
	inline intptr_t* get_address_of_m_ptrStrings_1() { return &___m_ptrStrings_1; }
	inline void set_m_ptrStrings_1(intptr_t value)
	{
		___m_ptrStrings_1 = value;
	}

	inline static int32_t get_offset_of_m_pSteamParamStringArray_2() { return static_cast<int32_t>(offsetof(SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0, ___m_pSteamParamStringArray_2)); }
	inline intptr_t get_m_pSteamParamStringArray_2() const { return ___m_pSteamParamStringArray_2; }
	inline intptr_t* get_address_of_m_pSteamParamStringArray_2() { return &___m_pSteamParamStringArray_2; }
	inline void set_m_pSteamParamStringArray_2(intptr_t value)
	{
		___m_pSteamParamStringArray_2 = value;
	}
};


// Steamworks.SteamInputActionEvent_t/DigitalAction_t
struct DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7 
{
public:
	// Steamworks.InputDigitalActionHandle_t Steamworks.SteamInputActionEvent_t/DigitalAction_t::actionHandle
	InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137  ___actionHandle_0;
	// Steamworks.InputDigitalActionData_t Steamworks.SteamInputActionEvent_t/DigitalAction_t::digitalActionData
	InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296  ___digitalActionData_1;

public:
	inline static int32_t get_offset_of_actionHandle_0() { return static_cast<int32_t>(offsetof(DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7, ___actionHandle_0)); }
	inline InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137  get_actionHandle_0() const { return ___actionHandle_0; }
	inline InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137 * get_address_of_actionHandle_0() { return &___actionHandle_0; }
	inline void set_actionHandle_0(InputDigitalActionHandle_t_t455A3485169AEC49596A50CC96797B351EFA9137  value)
	{
		___actionHandle_0 = value;
	}

	inline static int32_t get_offset_of_digitalActionData_1() { return static_cast<int32_t>(offsetof(DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7, ___digitalActionData_1)); }
	inline InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296  get_digitalActionData_1() const { return ___digitalActionData_1; }
	inline InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296 * get_address_of_digitalActionData_1() { return &___digitalActionData_1; }
	inline void set_digitalActionData_1(InputDigitalActionData_t_tED79F5C5AC4910AD647B20F2072A10BC8E634296  value)
	{
		___digitalActionData_1 = value;
	}
};


// Steamworks.SteamNetworkingConfigValue_t/OptionValue
struct OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Steamworks.SteamNetworkingConfigValue_t/OptionValue::m_int32
			int32_t ___m_int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Steamworks.SteamNetworkingConfigValue_t/OptionValue::m_int64
			int64_t ___m_int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Steamworks.SteamNetworkingConfigValue_t/OptionValue::m_float
			float ___m_float_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___m_float_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr Steamworks.SteamNetworkingConfigValue_t/OptionValue::m_string
			intptr_t ___m_string_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___m_string_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr Steamworks.SteamNetworkingConfigValue_t/OptionValue::m_functionPtr
			intptr_t ___m_functionPtr_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___m_functionPtr_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_int32_0() { return static_cast<int32_t>(offsetof(OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72, ___m_int32_0)); }
	inline int32_t get_m_int32_0() const { return ___m_int32_0; }
	inline int32_t* get_address_of_m_int32_0() { return &___m_int32_0; }
	inline void set_m_int32_0(int32_t value)
	{
		___m_int32_0 = value;
	}

	inline static int32_t get_offset_of_m_int64_1() { return static_cast<int32_t>(offsetof(OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72, ___m_int64_1)); }
	inline int64_t get_m_int64_1() const { return ___m_int64_1; }
	inline int64_t* get_address_of_m_int64_1() { return &___m_int64_1; }
	inline void set_m_int64_1(int64_t value)
	{
		___m_int64_1 = value;
	}

	inline static int32_t get_offset_of_m_float_2() { return static_cast<int32_t>(offsetof(OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72, ___m_float_2)); }
	inline float get_m_float_2() const { return ___m_float_2; }
	inline float* get_address_of_m_float_2() { return &___m_float_2; }
	inline void set_m_float_2(float value)
	{
		___m_float_2 = value;
	}

	inline static int32_t get_offset_of_m_string_3() { return static_cast<int32_t>(offsetof(OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72, ___m_string_3)); }
	inline intptr_t get_m_string_3() const { return ___m_string_3; }
	inline intptr_t* get_address_of_m_string_3() { return &___m_string_3; }
	inline void set_m_string_3(intptr_t value)
	{
		___m_string_3 = value;
	}

	inline static int32_t get_offset_of_m_functionPtr_4() { return static_cast<int32_t>(offsetof(OptionValue_t84572788D1E01D4576BBBE19695513A99CB6FD72, ___m_functionPtr_4)); }
	inline intptr_t get_m_functionPtr_4() const { return ___m_functionPtr_4; }
	inline intptr_t* get_address_of_m_functionPtr_4() { return &___m_functionPtr_4; }
	inline void set_m_functionPtr_4(intptr_t value)
	{
		___m_functionPtr_4 = value;
	}
};


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType
struct EType_tEF71BEA20E6653AE6A0A8830825AB2B3D5644AB4 
{
public:
	// System.Int32 Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EType_tEF71BEA20E6653AE6A0A8830825AB2B3D5644AB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte[] Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue::m_szStringValue
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_szStringValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_szStringValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue::m_nIntValue
			int64_t ___m_nIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_nIntValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue::m_nFixed64Value
			uint64_t ___m_nFixed64Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_nFixed64Value_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_szStringValue_0() { return static_cast<int32_t>(offsetof(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A, ___m_szStringValue_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_szStringValue_0() const { return ___m_szStringValue_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_szStringValue_0() { return &___m_szStringValue_0; }
	inline void set_m_szStringValue_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_szStringValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szStringValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nIntValue_1() { return static_cast<int32_t>(offsetof(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A, ___m_nIntValue_1)); }
	inline int64_t get_m_nIntValue_1() const { return ___m_nIntValue_1; }
	inline int64_t* get_address_of_m_nIntValue_1() { return &___m_nIntValue_1; }
	inline void set_m_nIntValue_1(int64_t value)
	{
		___m_nIntValue_1 = value;
	}

	inline static int32_t get_offset_of_m_nFixed64Value_2() { return static_cast<int32_t>(offsetof(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A, ___m_nFixed64Value_2)); }
	inline uint64_t get_m_nFixed64Value_2() const { return ___m_nFixed64Value_2; }
	inline uint64_t* get_address_of_m_nFixed64Value_2() { return &___m_nFixed64Value_2; }
	inline void set_m_nFixed64Value_2(uint64_t value)
	{
		___m_nFixed64Value_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___m_szStringValue_0[128];
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___m_szStringValue_0_forAlignmentOnly[128];
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___m_nIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_nIntValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___m_nFixed64Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_nFixed64Value_2_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
struct OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___m_szStringValue_0[128];
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___m_szStringValue_0_forAlignmentOnly[128];
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___m_nIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_nIntValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___m_nFixed64Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_nFixed64Value_2_forAlignmentOnly;
		};
	};
};

// Steamworks.InputAnalogActionData_t
#pragma pack(push, tp, 1)
struct InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1 
{
public:
	// Steamworks.EInputSourceMode Steamworks.InputAnalogActionData_t::eMode
	int32_t ___eMode_0;
	// System.Single Steamworks.InputAnalogActionData_t::x
	float ___x_1;
	// System.Single Steamworks.InputAnalogActionData_t::y
	float ___y_2;
	// System.Byte Steamworks.InputAnalogActionData_t::bActive
	uint8_t ___bActive_3;

public:
	inline static int32_t get_offset_of_eMode_0() { return static_cast<int32_t>(offsetof(InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1, ___eMode_0)); }
	inline int32_t get_eMode_0() const { return ___eMode_0; }
	inline int32_t* get_address_of_eMode_0() { return &___eMode_0; }
	inline void set_eMode_0(int32_t value)
	{
		___eMode_0 = value;
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_bActive_3() { return static_cast<int32_t>(offsetof(InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1, ___bActive_3)); }
	inline uint8_t get_bActive_3() const { return ___bActive_3; }
	inline uint8_t* get_address_of_bActive_3() { return &___bActive_3; }
	inline void set_bActive_3(uint8_t value)
	{
		___bActive_3 = value;
	}
};
#pragma pack(pop, tp)


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField
struct ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5 
{
public:
	// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType Steamworks.SteamDatagramRelayAuthTicket/ExtraField::m_eType
	int32_t ___m_eType_0;
	// System.Byte[] Steamworks.SteamDatagramRelayAuthTicket/ExtraField::m_szName
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_szName_1;
	// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue Steamworks.SteamDatagramRelayAuthTicket/ExtraField::m_val
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A  ___m_val_2;

public:
	inline static int32_t get_offset_of_m_eType_0() { return static_cast<int32_t>(offsetof(ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5, ___m_eType_0)); }
	inline int32_t get_m_eType_0() const { return ___m_eType_0; }
	inline int32_t* get_address_of_m_eType_0() { return &___m_eType_0; }
	inline void set_m_eType_0(int32_t value)
	{
		___m_eType_0 = value;
	}

	inline static int32_t get_offset_of_m_szName_1() { return static_cast<int32_t>(offsetof(ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5, ___m_szName_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_szName_1() const { return ___m_szName_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_szName_1() { return &___m_szName_1; }
	inline void set_m_szName_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_szName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_val_2() { return static_cast<int32_t>(offsetof(ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5, ___m_val_2)); }
	inline OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A  get_m_val_2() const { return ___m_val_2; }
	inline OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A * get_address_of_m_val_2() { return &___m_val_2; }
	inline void set_m_val_2(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A  value)
	{
		___m_val_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_val_2))->___m_szStringValue_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Steamworks.SteamDatagramRelayAuthTicket/ExtraField
#pragma pack(push, tp, 8)
struct ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_pinvoke
{
	int32_t ___m_eType_0;
	uint8_t ___m_szName_1[28];
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke ___m_val_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Steamworks.SteamDatagramRelayAuthTicket/ExtraField
#pragma pack(push, tp, 8)
struct ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_com
{
	int32_t ___m_eType_0;
	uint8_t ___m_szName_1[28];
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com ___m_val_2;
};
#pragma pack(pop, tp)

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond
struct InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete
struct InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded
struct InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond
struct RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete
struct RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingRulesResponse/RulesResponded
struct RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete
struct InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond
struct InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded
struct InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete
struct RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond
struct ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.ISteamMatchmakingServerListResponse/ServerResponded
struct ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7  : public MulticastDelegate_t
{
public:

public:
};


// Steamworks.InteropHelp/UTF8StringHandle
struct UTF8StringHandle_t44BAB8952233522065DE3B14D80F2C2B5A376A71  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Steamworks.SteamInputActionEvent_t/AnalogAction_t
struct AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C 
{
public:
	// Steamworks.InputAnalogActionHandle_t Steamworks.SteamInputActionEvent_t/AnalogAction_t::actionHandle
	InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360  ___actionHandle_0;
	// Steamworks.InputAnalogActionData_t Steamworks.SteamInputActionEvent_t/AnalogAction_t::analogActionData
	InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1  ___analogActionData_1;

public:
	inline static int32_t get_offset_of_actionHandle_0() { return static_cast<int32_t>(offsetof(AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C, ___actionHandle_0)); }
	inline InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360  get_actionHandle_0() const { return ___actionHandle_0; }
	inline InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360 * get_address_of_actionHandle_0() { return &___actionHandle_0; }
	inline void set_actionHandle_0(InputAnalogActionHandle_t_t38098052683247D3F7B38F4AB71071CD9AD8B360  value)
	{
		___actionHandle_0 = value;
	}

	inline static int32_t get_offset_of_analogActionData_1() { return static_cast<int32_t>(offsetof(AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C, ___analogActionData_1)); }
	inline InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1  get_analogActionData_1() const { return ___analogActionData_1; }
	inline InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1 * get_address_of_analogActionData_1() { return &___analogActionData_1; }
	inline void set_analogActionData_1(InputAnalogActionData_t_t893698ADA27CC6FDA78777CF22F74F2FA424E3A1  value)
	{
		___analogActionData_1 = value;
	}
};


// Steamworks.SteamInputActionEvent_t/OptionValue
struct OptionValue_tF84343BA68582755E8D0EDE0FB319E1644BD5AC7 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Steamworks.SteamInputActionEvent_t/AnalogAction_t Steamworks.SteamInputActionEvent_t/OptionValue::analogAction
			AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C  ___analogAction_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C  ___analogAction_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Steamworks.SteamInputActionEvent_t/DigitalAction_t Steamworks.SteamInputActionEvent_t/OptionValue::digitalAction
			DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7  ___digitalAction_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7  ___digitalAction_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_analogAction_0() { return static_cast<int32_t>(offsetof(OptionValue_tF84343BA68582755E8D0EDE0FB319E1644BD5AC7, ___analogAction_0)); }
	inline AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C  get_analogAction_0() const { return ___analogAction_0; }
	inline AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C * get_address_of_analogAction_0() { return &___analogAction_0; }
	inline void set_analogAction_0(AnalogAction_t_t04A6E7D9783DC29A28B78F7BEF2CFBA10E35818C  value)
	{
		___analogAction_0 = value;
	}

	inline static int32_t get_offset_of_digitalAction_1() { return static_cast<int32_t>(offsetof(OptionValue_tF84343BA68582755E8D0EDE0FB319E1644BD5AC7, ___digitalAction_1)); }
	inline DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7  get_digitalAction_1() const { return ___digitalAction_1; }
	inline DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7 * get_address_of_digitalAction_1() { return &___digitalAction_1; }
	inline void set_digitalAction_1(DigitalAction_t_t8408B6165C406D88DFE3B9AE592EF60B91EBA7B7  value)
	{
		___digitalAction_1 = value;
	}
};


// System.Object


// System.Object

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject


// System.Text.Encoding

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.Text.Encoding


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


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


// Steamworks.ISteamMatchmakingRulesResponse/VTable


// Steamworks.ISteamMatchmakingRulesResponse/VTable


// Steamworks.ISteamMatchmakingServerListResponse/VTable


// Steamworks.ISteamMatchmakingServerListResponse/VTable


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


// System.Byte


// System.Byte


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


// Steamworks.InputAnalogActionHandle_t


// Steamworks.InputAnalogActionHandle_t


// Steamworks.InputDigitalActionData_t


// Steamworks.InputDigitalActionData_t


// Steamworks.InputDigitalActionHandle_t


// Steamworks.InputDigitalActionHandle_t


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


// System.Void


// System.Void


// Steamworks.Packsize/ValvePackingSentinel_t


// Steamworks.Packsize/ValvePackingSentinel_t


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// System.Delegate


// System.Delegate


// Steamworks.EInputSourceMode


// Steamworks.EInputSourceMode


// Steamworks.EMatchMakingServerResponse


// Steamworks.EMatchMakingServerResponse


// Steamworks.HServerListRequest

struct HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_StaticFields
{
public:
	// Steamworks.HServerListRequest Steamworks.HServerListRequest::Invalid
	HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_StaticFields, ___Invalid_0)); }
	inline HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  get_Invalid_0() const { return ___Invalid_0; }
	inline HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  value)
	{
		___Invalid_0 = value;
	}
};


// Steamworks.HServerListRequest


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// System.Runtime.InteropServices.SafeHandle


// System.Runtime.InteropServices.SafeHandle


// Steamworks.SteamParamStringArray_t


// Steamworks.SteamParamStringArray_t


// Steamworks.InteropHelp/SteamParamStringArray


// Steamworks.InteropHelp/SteamParamStringArray


// Steamworks.SteamInputActionEvent_t/DigitalAction_t


// Steamworks.SteamInputActionEvent_t/DigitalAction_t


// Steamworks.SteamNetworkingConfigValue_t/OptionValue


// Steamworks.SteamNetworkingConfigValue_t/OptionValue


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue


// Steamworks.InputAnalogActionData_t


// Steamworks.InputAnalogActionData_t


// System.MulticastDelegate


// System.MulticastDelegate


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid


// System.Type

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Type


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField


// Steamworks.SteamDatagramRelayAuthTicket/ExtraField


// System.AsyncCallback


// System.AsyncCallback


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded


// Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded


// Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond


// Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond


// Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete


// Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete


// Steamworks.ISteamMatchmakingRulesResponse/RulesResponded


// Steamworks.ISteamMatchmakingRulesResponse/RulesResponded


// Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete


// Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded


// Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded


// Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete


// Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete


// Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond


// Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond


// Steamworks.ISteamMatchmakingServerListResponse/ServerResponded


// Steamworks.ISteamMatchmakingServerListResponse/ServerResponded


// Steamworks.InteropHelp/UTF8StringHandle


// Steamworks.InteropHelp/UTF8StringHandle


// Steamworks.SteamInputActionEvent_t/AnalogAction_t


// Steamworks.SteamInputActionEvent_t/AnalogAction_t


// Steamworks.SteamInputActionEvent_t/OptionValue


// Steamworks.SteamInputActionEvent_t/OptionValue

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_back(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled);
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_cleanup(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_back(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled);
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_cleanup(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled);

// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Steamworks.SteamParamStringArray_t>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656_gshared (SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m8CD931EE1525CF3F1A3628F71285862BC74A4A92 (Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mD04F8E938A4F5761EBC7797CB3ABAC1379699208 (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Steamworks.SteamParamStringArray_t>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656 (SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m2F9172D39B936E24C9E1772C6DC583CC889A3312 (SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45 * __this, bool ___ownsHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 (RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesFailedToRespond__ctor_m36085984C1AB6CDFD68CB6A7E434155390FA9934 (RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesFailedToRespond_Invoke_mC164BEF589A55D33A330E92981D79C8A8519DEF6 (RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RulesFailedToRespond_BeginInvoke_mB36EED8F89979E9658C3DD5B600A750AD86245A7 (RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesFailedToRespond_EndInvoke_mFCE1E4C17E229B2442766D507D6D6C3338CAE96C (RulesFailedToRespond_t3264677D31D21BF0EEB961AF8C47FD61DEE220A5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D (RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesRefreshComplete__ctor_mC60A75E7AFC63E62137543FBE4E262D4E8283BDF (RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesRefreshComplete_Invoke_m8320BAA70E7D1CFCEE95F81898178E20655473AB (RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RulesRefreshComplete_BeginInvoke_m52439ECECA1204DBD0D7BA933D5CA921ADFB5D17 (RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesRefreshComplete_EndInvoke_mF96213516FB33F39D204C3B7E5BD49C21A4C8684 (RulesRefreshComplete_t18168DA08194DACD80340A81360947414F5F698D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 (RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 * __this, String_t* ___pchRule0, String_t* ___pchValue1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___pchRule0' to native representation
	char* ____pchRule0_marshaled = NULL;
	____pchRule0_marshaled = il2cpp_codegen_marshal_string(___pchRule0);

	// Marshaling of parameter '___pchValue1' to native representation
	char* ____pchValue1_marshaled = NULL;
	____pchValue1_marshaled = il2cpp_codegen_marshal_string(___pchValue1);

	// Native function invocation
	il2cppPInvokeFunc(____pchRule0_marshaled, ____pchValue1_marshaled);

	// Marshaling cleanup of parameter '___pchRule0' native representation
	il2cpp_codegen_marshal_free(____pchRule0_marshaled);
	____pchRule0_marshaled = NULL;

	// Marshaling cleanup of parameter '___pchValue1' native representation
	il2cpp_codegen_marshal_free(____pchValue1_marshaled);
	____pchValue1_marshaled = NULL;

}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesResponded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesResponded__ctor_m4C05F6092AD28153A6F659999A0877FF7FDE7D34 (RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesResponded::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesResponded_Invoke_m7680F030DA58F2D407A8A8BD6A2D073EE945EA76 (RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 * __this, String_t* ___pchRule0, String_t* ___pchValue1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pchRule0, ___pchValue1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pchRule0, ___pchValue1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___pchRule0, ___pchValue1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___pchRule0, ___pchValue1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pchRule0, ___pchValue1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pchRule0, ___pchValue1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pchRule0, ___pchValue1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___pchRule0, ___pchValue1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___pchRule0, ___pchValue1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pchRule0, ___pchValue1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pchRule0, ___pchValue1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pchRule0, ___pchValue1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pchRule0, ___pchValue1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingRulesResponse/RulesResponded::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RulesResponded_BeginInvoke_mEF1EF4D4B625F3EA27B043DF6B0C490A637C16B8 (RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 * __this, String_t* ___pchRule0, String_t* ___pchValue1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___pchRule0;
	__d_args[1] = ___pchValue1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/RulesResponded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesResponded_EndInvoke_mB026F8D72CC0314C8C7B3F92A8277C24DC4A60E5 (RulesResponded_t57849839EF6A40004C90CD779CE15B5A5C0ED959 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Steamworks.ISteamMatchmakingRulesResponse/VTable
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_pinvoke(const VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022& unmarshaled, VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_pinvoke& marshaled)
{
	marshaled.___m_VTRulesResponded_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesResponded_0()));
	marshaled.___m_VTRulesFailedToRespond_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesFailedToRespond_1()));
	marshaled.___m_VTRulesRefreshComplete_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesRefreshComplete_2()));
}
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_pinvoke_back(const VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_pinvoke& marshaled, VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_VTRulesResponded_0(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7>(marshaled.___m_VTRulesResponded_0, InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRulesFailedToRespond_1(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A>(marshaled.___m_VTRulesFailedToRespond_1, InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRulesRefreshComplete_2(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8>(marshaled.___m_VTRulesRefreshComplete_2, InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Steamworks.ISteamMatchmakingRulesResponse/VTable
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_pinvoke_cleanup(VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Steamworks.ISteamMatchmakingRulesResponse/VTable
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_com(const VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022& unmarshaled, VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_com& marshaled)
{
	marshaled.___m_VTRulesResponded_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesResponded_0()));
	marshaled.___m_VTRulesFailedToRespond_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesFailedToRespond_1()));
	marshaled.___m_VTRulesRefreshComplete_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRulesRefreshComplete_2()));
}
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_com_back(const VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_com& marshaled, VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_VTRulesResponded_0(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7>(marshaled.___m_VTRulesResponded_0, InternalRulesResponded_t2C7AD41C9085BF8A7D2D31F71544D8FE138CF7D7_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRulesFailedToRespond_1(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A>(marshaled.___m_VTRulesFailedToRespond_1, InternalRulesFailedToRespond_t0F22A1F33567D1883D190B2FA2F73F4B0FA0460A_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRulesRefreshComplete_2(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8>(marshaled.___m_VTRulesRefreshComplete_2, InternalRulesRefreshComplete_tF34A282EFD73983F95DC692B919958CE2A1005B8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Steamworks.ISteamMatchmakingRulesResponse/VTable
IL2CPP_EXTERN_C void VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshal_com_cleanup(VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022_marshaled_com& marshaled)
{
}
// System.Void Steamworks.ISteamMatchmakingRulesResponse/VTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTable__ctor_m5FCFA74550EEA546EFC8E5B27A357CDE24AF27D2 (VTable_tF13D9A6A6C47C3DBD6348C144A167BD339788022 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A (InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___response2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___thisptr0, ___hRequest1, ___response2);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalRefreshComplete__ctor_mDD5D6F8B61BE03FFD107B1DB84C03B4AD41C2CFD (InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete::Invoke(System.IntPtr,Steamworks.HServerListRequest,Steamworks.EMatchMakingServerResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalRefreshComplete_Invoke_m0DE3FD19DDDEDEB67E9DA8B851A77B0F830A21E4 (InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___response2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___thisptr0, ___hRequest1, ___response2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___response2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___response2);
					else
						GenericVirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___response2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___response2);
					else
						VirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___response2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___response2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete::BeginInvoke(System.IntPtr,Steamworks.HServerListRequest,Steamworks.EMatchMakingServerResponse,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalRefreshComplete_BeginInvoke_m5F46BF7B04957649E58E6A67808D4F05653C0F52 (InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___response2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisptr0);
	__d_args[1] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest1);
	__d_args[2] = Box(EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A_il2cpp_TypeInfo_var, &___response2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalRefreshComplete_EndInvoke_m5BE8F1592BE8FDD9C75324CD70996F5DF6568B27 (InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 (InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___thisptr0, ___hRequest1, ___iServer2);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerFailedToRespond__ctor_m3298D25BC0EDE2372DD32284A45C318CBCAFC6C1 (InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond::Invoke(System.IntPtr,Steamworks.HServerListRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerFailedToRespond_Invoke_m3A853BC8DDF9D912D79F90FB9B1A0BC6DE3B51C6 (InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___iServer2);
					else
						GenericVirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___iServer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___iServer2);
					else
						VirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___iServer2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond::BeginInvoke(System.IntPtr,Steamworks.HServerListRequest,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalServerFailedToRespond_BeginInvoke_m6982A100B29FEF9233DB48ACEEBFE2C7D4D1C260 (InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisptr0);
	__d_args[1] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___iServer2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerFailedToRespond_EndInvoke_m11D976EE15DB69662506190449C69C2AB2E98D52 (InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 (InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___thisptr0, ___hRequest1, ___iServer2);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerResponded__ctor_mFE46B2FA1B846BA62A4498FBE6FC9D72202C19E5 (InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded::Invoke(System.IntPtr,Steamworks.HServerListRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerResponded_Invoke_m98368112DA0269BF5A6AED8547B2771BCE6789DD (InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___iServer2);
					else
						GenericVirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___thisptr0, ___hRequest1, ___iServer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___iServer2);
					else
						VirtActionInvoker3< intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisptr0, ___hRequest1, ___iServer2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___thisptr0, ___hRequest1, ___iServer2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded::BeginInvoke(System.IntPtr,Steamworks.HServerListRequest,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalServerResponded_BeginInvoke_mD76C09AC2EF3D11C1049DE67706AA116CAB220F3 (InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * __this, intptr_t ___thisptr0, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest1, int32_t ___iServer2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisptr0);
	__d_args[1] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___iServer2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalServerResponded_EndInvoke_mE13F466348EDB42D7A68687214252378F12F695F (InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 (RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___response1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___hRequest0, ___response1);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshComplete__ctor_mBE2DE959C42E1515B923572BAABB64C88CA4EC2B (RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete::Invoke(Steamworks.HServerListRequest,Steamworks.EMatchMakingServerResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshComplete_Invoke_mF1F2D378971FC6928BA3EE69D94D0E531869263C (RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___response1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hRequest0, ___response1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___response1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___response1);
					else
						GenericVirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___response1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hRequest0, ___response1);
					else
						VirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hRequest0, ___response1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___hRequest0) - 1), ___response1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___response1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete::BeginInvoke(Steamworks.HServerListRequest,Steamworks.EMatchMakingServerResponse,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RefreshComplete_BeginInvoke_m3ED8FCE8BF911BD2383ABA77BA0D4F06B5697FBE (RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___response1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest0);
	__d_args[1] = Box(EMatchMakingServerResponse_tE8E7506E538C3C21CD2621C070CFF5327FE4594A_il2cpp_TypeInfo_var, &___response1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshComplete_EndInvoke_m05E4C7DB6BE7E41B012D2BF134DB557963EDE84E (RefreshComplete_t7DDAF0051F1A03819208BB3EFB66DC856C3460A9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE (ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___hRequest0, ___iServer1);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerFailedToRespond__ctor_mC14A9783F0263D0F07D181D2EBA3827DD682590E (ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond::Invoke(Steamworks.HServerListRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerFailedToRespond_Invoke_m7829A568EC8A3685D2889A6AADC76362F55A5CA2 (ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hRequest0, ___iServer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___iServer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___iServer1);
					else
						GenericVirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___iServer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hRequest0, ___iServer1);
					else
						VirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hRequest0, ___iServer1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___hRequest0) - 1), ___iServer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___iServer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond::BeginInvoke(Steamworks.HServerListRequest,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerFailedToRespond_BeginInvoke_m86D5262899F95F2BC6ED41412098D4B394E9E8A5 (ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___iServer1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerFailedToRespond_EndInvoke_mA1B5754FB383204D7573C62AB35CED836BBCD02A (ServerFailedToRespond_t94503728567397B2D91916DA6292F51F628CD9FE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 (ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___hRequest0, ___iServer1);

}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerResponded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerResponded__ctor_mB1F948F799E68166BFAAC111BFF6C61D29A9ABD8 (ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerResponded::Invoke(Steamworks.HServerListRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerResponded_Invoke_m185EE2933D4E7D0837FFA7B80549D1412965AC08 (ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hRequest0, ___iServer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___iServer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___iServer1);
					else
						GenericVirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(targetMethod, targetThis, ___hRequest0, ___iServer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hRequest0, ___iServer1);
					else
						VirtActionInvoker2< HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hRequest0, ___iServer1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___hRequest0) - 1), ___iServer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hRequest0, ___iServer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Steamworks.ISteamMatchmakingServerListResponse/ServerResponded::BeginInvoke(Steamworks.HServerListRequest,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServerResponded_BeginInvoke_mB69D5BF7DD642155C75FE2A7C5F61B95437D1543 (ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 * __this, HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C  ___hRequest0, int32_t ___iServer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(HServerListRequest_tEFB9C562293E39129DAF1C27F77B703B523A5E3C_il2cpp_TypeInfo_var, &___hRequest0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___iServer1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/ServerResponded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerResponded_EndInvoke_m58EAA6A3A8ADE2A7658A7FF904805FF75B5061EC (ServerResponded_tF3AD4C98EB203995B50B3607883D7AFA085740E7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Steamworks.ISteamMatchmakingServerListResponse/VTable
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_pinvoke(const VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26& unmarshaled, VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_pinvoke& marshaled)
{
	marshaled.___m_VTServerResponded_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTServerResponded_0()));
	marshaled.___m_VTServerFailedToRespond_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTServerFailedToRespond_1()));
	marshaled.___m_VTRefreshComplete_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRefreshComplete_2()));
}
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_pinvoke_back(const VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_pinvoke& marshaled, VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_VTServerResponded_0(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52>(marshaled.___m_VTServerResponded_0, InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTServerFailedToRespond_1(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12>(marshaled.___m_VTServerFailedToRespond_1, InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRefreshComplete_2(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A>(marshaled.___m_VTRefreshComplete_2, InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Steamworks.ISteamMatchmakingServerListResponse/VTable
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_pinvoke_cleanup(VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Steamworks.ISteamMatchmakingServerListResponse/VTable
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_com(const VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26& unmarshaled, VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_com& marshaled)
{
	marshaled.___m_VTServerResponded_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTServerResponded_0()));
	marshaled.___m_VTServerFailedToRespond_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTServerFailedToRespond_1()));
	marshaled.___m_VTRefreshComplete_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_VTRefreshComplete_2()));
}
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_com_back(const VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_com& marshaled, VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_VTServerResponded_0(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52>(marshaled.___m_VTServerResponded_0, InternalServerResponded_tCD5B292830E97ECC37E088D1A5922C414E7B9D52_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTServerFailedToRespond_1(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12>(marshaled.___m_VTServerFailedToRespond_1, InternalServerFailedToRespond_tAA47C5DA7F035C084034897C5269039388240D12_il2cpp_TypeInfo_var));
	unmarshaled.set_m_VTRefreshComplete_2(il2cpp_codegen_marshal_function_ptr_to_delegate<InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A>(marshaled.___m_VTRefreshComplete_2, InternalRefreshComplete_t93B5E4E6763B0A5A7AA6634DDC82D6CB45A3CF8A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Steamworks.ISteamMatchmakingServerListResponse/VTable
IL2CPP_EXTERN_C void VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshal_com_cleanup(VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26_marshaled_com& marshaled)
{
}
// System.Void Steamworks.ISteamMatchmakingServerListResponse/VTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTable__ctor_mB1AEACA4B84CACB67FAB8FCBE9DB2F3A91FCCE5F (VTable_tCCAEC1266A3435AE9FC4B99721D0BD2F2A87BC26 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Steamworks.InteropHelp/SteamParamStringArray::.ctor(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamParamStringArray__ctor_mB2553D2DE88EF7444924D9F495D7789E2F97591F (SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0 * __this, RuntimeObject* ___strings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// public SteamParamStringArray(System.Collections.Generic.IList<string> strings) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (strings == null) {
		RuntimeObject* L_0 = ___strings0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_pSteamParamStringArray = IntPtr.Zero;
		__this->set_m_pSteamParamStringArray_2((intptr_t)(0));
		// return;
		return;
	}

IL_0015:
	{
		// m_Strings = new IntPtr[strings.Count];
		RuntimeObject* L_1 = ___strings0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_1);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_3 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_m_Strings_0(L_3);
		// for (int i = 0; i < strings.Count; ++i) {
		V_1 = 0;
		goto IL_008a;
	}

IL_002a:
	{
		// byte[] strbuf = new byte[Encoding.UTF8.GetByteCount(strings[i]) + 1];
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		RuntimeObject* L_5 = ___strings0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_4, L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		V_2 = L_9;
		// Encoding.UTF8.GetBytes(strings[i], 0, strings[i].Length, strbuf, 0);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		RuntimeObject* L_11 = ___strings0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_11, L_12);
		RuntimeObject* L_14 = ___strings0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_2;
		NullCheck(L_10);
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_13, 0, L_17, L_18, 0);
		// m_Strings[i] = Marshal.AllocHGlobal(strbuf.Length);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_20 = __this->get_m_Strings_0();
		int32_t L_21 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_2;
		NullCheck(L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_23;
		L_23 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (intptr_t)L_23);
		// Marshal.Copy(strbuf, 0, m_Strings[i], strbuf.Length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_2;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_25 = __this->get_m_Strings_0();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		intptr_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_2;
		NullCheck(L_29);
		Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731(L_24, 0, (intptr_t)L_28, ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))), /*hidden argument*/NULL);
		// for (int i = 0; i < strings.Count; ++i) {
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008a:
	{
		// for (int i = 0; i < strings.Count; ++i) {
		int32_t L_31 = V_1;
		RuntimeObject* L_32 = ___strings0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_32);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_002a;
		}
	}
	{
		// m_ptrStrings = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(IntPtr)) * m_Strings.Length);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_34 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35;
		L_35 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = Marshal_SizeOf_m8CD931EE1525CF3F1A3628F71285862BC74A4A92(L_35, /*hidden argument*/NULL);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_37 = __this->get_m_Strings_0();
		NullCheck(L_37);
		intptr_t L_38;
		L_38 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))), /*hidden argument*/NULL);
		__this->set_m_ptrStrings_1((intptr_t)L_38);
		// SteamParamStringArray_t stringArray = new SteamParamStringArray_t() {
		//     m_ppStrings = m_ptrStrings,
		//     m_nNumStrings = m_Strings.Length
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B ));
		intptr_t L_39 = __this->get_m_ptrStrings_1();
		(&V_3)->set_m_ppStrings_0((intptr_t)L_39);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_40 = __this->get_m_Strings_0();
		NullCheck(L_40);
		(&V_3)->set_m_nNumStrings_1(((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))));
		SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  L_41 = V_3;
		V_0 = L_41;
		// Marshal.Copy(m_Strings, 0, stringArray.m_ppStrings, m_Strings.Length);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_42 = __this->get_m_Strings_0();
		SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  L_43 = V_0;
		intptr_t L_44 = L_43.get_m_ppStrings_0();
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_45 = __this->get_m_Strings_0();
		NullCheck(L_45);
		Marshal_Copy_mD04F8E938A4F5761EBC7797CB3ABAC1379699208(L_42, 0, (intptr_t)L_44, ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))), /*hidden argument*/NULL);
		// m_pSteamParamStringArray = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(SteamParamStringArray_t)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_46 = { reinterpret_cast<intptr_t> (SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_0_0_0_var) };
		Type_t * L_47;
		L_47 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_46, /*hidden argument*/NULL);
		int32_t L_48;
		L_48 = Marshal_SizeOf_m8CD931EE1525CF3F1A3628F71285862BC74A4A92(L_47, /*hidden argument*/NULL);
		intptr_t L_49;
		L_49 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(L_48, /*hidden argument*/NULL);
		__this->set_m_pSteamParamStringArray_2((intptr_t)L_49);
		// Marshal.StructureToPtr(stringArray, m_pSteamParamStringArray, false);
		SteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B  L_50 = V_0;
		intptr_t L_51 = __this->get_m_pSteamParamStringArray_2();
		Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656(L_50, (intptr_t)L_51, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisSteamParamStringArray_t_t23A936CFCDD5DA2CE504E53AAA52985A9F86B53B_m18E97654A1FE1ADF086B6F9FB7B41CBC6BC86656_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Steamworks.InteropHelp/SteamParamStringArray::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamParamStringArray_Finalize_m4EDFA09AE281DDD0EF548BF12A457D7845CED9FF (SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (m_Strings != null) {
			IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_0 = __this->get_m_Strings_0();
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_0008:
		{
			// foreach (IntPtr ptr in m_Strings) {
			IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_1 = __this->get_m_Strings_0();
			V_0 = L_1;
			V_1 = 0;
			goto IL_001f;
		}

IL_0013:
		{
			// foreach (IntPtr ptr in m_Strings) {
			IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_2 = V_0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			intptr_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			// Marshal.FreeHGlobal(ptr);
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_5, /*hidden argument*/NULL);
			int32_t L_6 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_001f:
		{
			// foreach (IntPtr ptr in m_Strings) {
			int32_t L_7 = V_1;
			IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_8 = V_0;
			NullCheck(L_8);
			if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
			{
				goto IL_0013;
			}
		}

IL_0025:
		{
			// if (m_ptrStrings != IntPtr.Zero) {
			intptr_t L_9 = __this->get_m_ptrStrings_1();
			bool L_10;
			L_10 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_0037:
		{
			// Marshal.FreeHGlobal(m_ptrStrings);
			intptr_t L_11 = __this->get_m_ptrStrings_1();
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_11, /*hidden argument*/NULL);
		}

IL_0042:
		{
			// if (m_pSteamParamStringArray != IntPtr.Zero) {
			intptr_t L_12 = __this->get_m_pSteamParamStringArray_2();
			bool L_13;
			L_13 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0054:
		{
			// Marshal.FreeHGlobal(m_pSteamParamStringArray);
			intptr_t L_14 = __this->get_m_pSteamParamStringArray_2();
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_14, /*hidden argument*/NULL);
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.IntPtr Steamworks.InteropHelp/SteamParamStringArray::op_Implicit(Steamworks.InteropHelp/SteamParamStringArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SteamParamStringArray_op_Implicit_mA462D0BDCDB6D3F409285EA086E55E5657594F00 (SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0 * ___that0, const RuntimeMethod* method)
{
	{
		// return that.m_pSteamParamStringArray;
		SteamParamStringArray_t843141E134635B3A74747896FE02A789BC0E41C0 * L_0 = ___that0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_m_pSteamParamStringArray_2();
		return (intptr_t)L_1;
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
// System.Void Steamworks.InteropHelp/UTF8StringHandle::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8StringHandle__ctor_m5A1014ABC00DFB6341B3B2B883103D22F7D7AA07 (UTF8StringHandle_t44BAB8952233522065DE3B14D80F2C2B5A376A71 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// : base(true) {
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m2F9172D39B936E24C9E1772C6DC583CC889A3312(__this, (bool)1, /*hidden argument*/NULL);
		// if (str == null) {
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// SetHandle(IntPtr.Zero);
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)(0), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0016:
	{
		// byte[] strbuf = new byte[Encoding.UTF8.GetByteCount(str) + 1];
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_1, L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		V_0 = L_4;
		// Encoding.UTF8.GetBytes(str, 0, str.Length, strbuf, 0);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5;
		L_5 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_6 = ___str0;
		String_t* L_7 = ___str0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_5);
		int32_t L_10;
		L_10 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_5, L_6, 0, L_8, L_9, 0);
		// IntPtr buffer = Marshal.AllocHGlobal(strbuf.Length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		NullCheck(L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_12;
		L_12 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_12;
		// Marshal.Copy(strbuf, 0, buffer, strbuf.Length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		intptr_t L_14 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_0;
		NullCheck(L_15);
		Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731(L_13, 0, (intptr_t)L_14, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		// SetHandle(buffer);
		intptr_t L_16 = V_1;
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Steamworks.InteropHelp/UTF8StringHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8StringHandle_ReleaseHandle_m55B1C918D52184BC24226E457E2A5981947EFBFA (UTF8StringHandle_t44BAB8952233522065DE3B14D80F2C2B5A376A71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInvalid) {
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Marshal.FreeHGlobal(handle);
		intptr_t L_1 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// return true;
		return (bool)1;
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


// Conversion methods for marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_pinvoke(const ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5& unmarshaled, ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_pinvoke& marshaled)
{
	marshaled.___m_eType_0 = unmarshaled.get_m_eType_0();
	if (unmarshaled.get_m_szName_1() != NULL)
	{
		if (28 > (unmarshaled.get_m_szName_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(28); i++)
		{
			(marshaled.___m_szName_1)[i] = (unmarshaled.get_m_szName_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke(unmarshaled.get_m_val_2(), marshaled.___m_val_2);
}
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_pinvoke_back(const ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_pinvoke& marshaled, ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_m_eType_temp_0 = 0;
	unmarshaled_m_eType_temp_0 = marshaled.___m_eType_0;
	unmarshaled.set_m_eType_0(unmarshaled_m_eType_temp_0);
	unmarshaled.set_m_szName_1(reinterpret_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, 28)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(28); i++)
	{
		(unmarshaled.get_m_szName_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_szName_1)[i]);
	}
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A  unmarshaled_m_val_temp_2;
	memset((&unmarshaled_m_val_temp_2), 0, sizeof(unmarshaled_m_val_temp_2));
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_back(marshaled.___m_val_2, unmarshaled_m_val_temp_2);
	unmarshaled.set_m_val_2(unmarshaled_m_val_temp_2);
}
// Conversion method for clean up from marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_pinvoke_cleanup(ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_pinvoke& marshaled)
{
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_cleanup(marshaled.___m_val_2);
}


// Conversion methods for marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_com(const ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5& unmarshaled, ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_com& marshaled)
{
	marshaled.___m_eType_0 = unmarshaled.get_m_eType_0();
	if (unmarshaled.get_m_szName_1() != NULL)
	{
		if (28 > (unmarshaled.get_m_szName_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(28); i++)
		{
			(marshaled.___m_szName_1)[i] = (unmarshaled.get_m_szName_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com(unmarshaled.get_m_val_2(), marshaled.___m_val_2);
}
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_com_back(const ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_com& marshaled, ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_m_eType_temp_0 = 0;
	unmarshaled_m_eType_temp_0 = marshaled.___m_eType_0;
	unmarshaled.set_m_eType_0(unmarshaled_m_eType_temp_0);
	unmarshaled.set_m_szName_1(reinterpret_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, 28)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(28); i++)
	{
		(unmarshaled.get_m_szName_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_szName_1)[i]);
	}
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A  unmarshaled_m_val_temp_2;
	memset((&unmarshaled_m_val_temp_2), 0, sizeof(unmarshaled_m_val_temp_2));
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_back(marshaled.___m_val_2, unmarshaled_m_val_temp_2);
	unmarshaled.set_m_val_2(unmarshaled_m_val_temp_2);
}
// Conversion method for clean up from marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField
IL2CPP_EXTERN_C void ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshal_com_cleanup(ExtraField_t5F8CD80A2F800C83FFEB3435AF4803C1E9565FD5_marshaled_com& marshaled)
{
	OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_cleanup(marshaled.___m_val_2);
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
// Conversion methods for marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_m_szStringValue_0() != NULL)
	{
		if (128 > (unmarshaled.get_m_szStringValue_0())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
		{
			(marshaled.___m_szStringValue_0)[i] = (unmarshaled.get_m_szStringValue_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___m_nIntValue_1 = unmarshaled.get_m_nIntValue_1();
	marshaled.___m_nFixed64Value_2 = unmarshaled.get_m_nFixed64Value_2();
}
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_back(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_szStringValue_0(reinterpret_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, 128)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
	{
		(unmarshaled.get_m_szStringValue_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_szStringValue_0)[i]);
	}
	int64_t unmarshaled_m_nIntValue_temp_1 = 0;
	unmarshaled_m_nIntValue_temp_1 = marshaled.___m_nIntValue_1;
	unmarshaled.set_m_nIntValue_1(unmarshaled_m_nIntValue_temp_1);
	uint64_t unmarshaled_m_nFixed64Value_temp_2 = 0;
	unmarshaled_m_nFixed64Value_temp_2 = marshaled.___m_nFixed64Value_2;
	unmarshaled.set_m_nFixed64Value_2(unmarshaled_m_nFixed64Value_temp_2);
}
// Conversion method for clean up from marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_pinvoke_cleanup(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled)
{
	if (unmarshaled.get_m_szStringValue_0() != NULL)
	{
		if (128 > (unmarshaled.get_m_szStringValue_0())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
		{
			(marshaled.___m_szStringValue_0)[i] = (unmarshaled.get_m_szStringValue_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___m_nIntValue_1 = unmarshaled.get_m_nIntValue_1();
	marshaled.___m_nFixed64Value_2 = unmarshaled.get_m_nFixed64Value_2();
}
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_back(const OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled, OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_szStringValue_0(reinterpret_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, 128)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(128); i++)
	{
		(unmarshaled.get_m_szStringValue_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_szStringValue_0)[i]);
	}
	int64_t unmarshaled_m_nIntValue_temp_1 = 0;
	unmarshaled_m_nIntValue_temp_1 = marshaled.___m_nIntValue_1;
	unmarshaled.set_m_nIntValue_1(unmarshaled_m_nIntValue_temp_1);
	uint64_t unmarshaled_m_nFixed64Value_temp_2 = 0;
	unmarshaled_m_nFixed64Value_temp_2 = marshaled.___m_nFixed64Value_2;
	unmarshaled.set_m_nFixed64Value_2(unmarshaled_m_nFixed64Value_temp_2);
}
// Conversion method for clean up from marshalling of: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
IL2CPP_EXTERN_C void OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshal_com_cleanup(OptionValue_t0D0112DF314C0BE5B8C4D791456FAF987087AE3A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
