﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.SliderState
struct SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;
// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;

IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;

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


// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.SliderState
struct SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
	}
};


// System.Collections.Stack
struct Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * ___windows_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_topLevel_1() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___topLevel_1)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_topLevel_1() const { return ___topLevel_1; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_topLevel_1() { return &___topLevel_1; }
	inline void set_topLevel_1(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___topLevel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topLevel_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutGroups_2() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___layoutGroups_2)); }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * get_layoutGroups_2() const { return ___layoutGroups_2; }
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C ** get_address_of_layoutGroups_2() { return &___layoutGroups_2; }
	inline void set_layoutGroups_2(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * value)
	{
		___layoutGroups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutGroups_2), (void*)value);
	}

	inline static int32_t get_offset_of_windows_3() { return static_cast<int32_t>(offsetof(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8, ___windows_3)); }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * get_windows_3() const { return ___windows_3; }
	inline GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 ** get_address_of_windows_3() { return &___windows_3; }
	inline void set_windows_3(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * value)
	{
		___windows_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windows_3), (void*)value);
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

// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C  : public Stack_tF6DD42A42C129B014D4223010F1E0FFBECBDC3B8
{
public:

public:
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

// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventType
struct EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_Style_8;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___rect_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rect_4() const { return ___rect_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_consideredForMargin_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___consideredForMargin_7)); }
	inline bool get_consideredForMargin_7() const { return ___consideredForMargin_7; }
	inline bool* get_address_of_consideredForMargin_7() { return &___consideredForMargin_7; }
	inline void set_consideredForMargin_7(bool value)
	{
		___consideredForMargin_7 = value;
	}

	inline static int32_t get_offset_of_m_Style_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE, ___m_Style_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_Style_8() const { return ___m_Style_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_Style_8() { return &___m_Style_8; }
	inline void set_m_Style_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_Style_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_8), (void*)value);
	}
};


// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535  : public RuntimeObject
{
public:
	// UnityEngine.GUI/WindowFunction UnityEngine.GUILayout/LayoutedWindow::m_Func
	WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___m_Func_0;
	// UnityEngine.Rect UnityEngine.GUILayout/LayoutedWindow::m_ScreenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ScreenRect_1;
	// UnityEngine.GUILayoutOption[] UnityEngine.GUILayout/LayoutedWindow::m_Options
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___m_Options_2;
	// UnityEngine.GUIStyle UnityEngine.GUILayout/LayoutedWindow::m_Style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_Style_3;

public:
	inline static int32_t get_offset_of_m_Func_0() { return static_cast<int32_t>(offsetof(LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535, ___m_Func_0)); }
	inline WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * get_m_Func_0() const { return ___m_Func_0; }
	inline WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D ** get_address_of_m_Func_0() { return &___m_Func_0; }
	inline void set_m_Func_0(WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * value)
	{
		___m_Func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Func_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScreenRect_1() { return static_cast<int32_t>(offsetof(LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535, ___m_ScreenRect_1)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ScreenRect_1() const { return ___m_ScreenRect_1; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ScreenRect_1() { return &___m_ScreenRect_1; }
	inline void set_m_ScreenRect_1(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ScreenRect_1 = value;
	}

	inline static int32_t get_offset_of_m_Options_2() { return static_cast<int32_t>(offsetof(LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535, ___m_Options_2)); }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* get_m_Options_2() const { return ___m_Options_2; }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B** get_address_of_m_Options_2() { return &___m_Options_2; }
	inline void set_m_Options_2(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* value)
	{
		___m_Options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_3() { return static_cast<int32_t>(offsetof(LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535, ___m_Style_3)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_Style_3() const { return ___m_Style_3; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_Style_3() { return &___m_Style_3; }
	inline void set_m_Style_3(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_Style_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_3), (void*)value);
	}
};


// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextEditor/DblClickSnapping
struct DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DblClickSnapping_t831A23F3ECEF6C68B62B6C3AEAF870F70596FABD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9  : public GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;

public:
	inline static int32_t get_offset_of_entries_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___entries_11)); }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * get_entries_11() const { return ___entries_11; }
	inline List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA ** get_address_of_entries_11() { return &___entries_11; }
	inline void set_entries_11(List_1_t07045BD0BCA84DF3EE9885C9BE0D1F6C57D208AA * value)
	{
		___entries_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_11), (void*)value);
	}

	inline static int32_t get_offset_of_isVertical_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isVertical_12)); }
	inline bool get_isVertical_12() const { return ___isVertical_12; }
	inline bool* get_address_of_isVertical_12() { return &___isVertical_12; }
	inline void set_isVertical_12(bool value)
	{
		___isVertical_12 = value;
	}

	inline static int32_t get_offset_of_resetCoords_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___resetCoords_13)); }
	inline bool get_resetCoords_13() const { return ___resetCoords_13; }
	inline bool* get_address_of_resetCoords_13() { return &___resetCoords_13; }
	inline void set_resetCoords_13(bool value)
	{
		___resetCoords_13 = value;
	}

	inline static int32_t get_offset_of_spacing_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___spacing_14)); }
	inline float get_spacing_14() const { return ___spacing_14; }
	inline float* get_address_of_spacing_14() { return &___spacing_14; }
	inline void set_spacing_14(float value)
	{
		___spacing_14 = value;
	}

	inline static int32_t get_offset_of_sameSize_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___sameSize_15)); }
	inline bool get_sameSize_15() const { return ___sameSize_15; }
	inline bool* get_address_of_sameSize_15() { return &___sameSize_15; }
	inline void set_sameSize_15(bool value)
	{
		___sameSize_15 = value;
	}

	inline static int32_t get_offset_of_isWindow_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___isWindow_16)); }
	inline bool get_isWindow_16() const { return ___isWindow_16; }
	inline bool* get_address_of_isWindow_16() { return &___isWindow_16; }
	inline void set_isWindow_16(bool value)
	{
		___isWindow_16 = value;
	}

	inline static int32_t get_offset_of_windowID_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___windowID_17)); }
	inline int32_t get_windowID_17() const { return ___windowID_17; }
	inline int32_t* get_address_of_windowID_17() { return &___windowID_17; }
	inline void set_windowID_17(int32_t value)
	{
		___windowID_17 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_Cursor_18)); }
	inline int32_t get_m_Cursor_18() const { return ___m_Cursor_18; }
	inline int32_t* get_address_of_m_Cursor_18() { return &___m_Cursor_18; }
	inline void set_m_Cursor_18(int32_t value)
	{
		___m_Cursor_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountX_19)); }
	inline int32_t get_m_StretchableCountX_19() const { return ___m_StretchableCountX_19; }
	inline int32_t* get_address_of_m_StretchableCountX_19() { return &___m_StretchableCountX_19; }
	inline void set_m_StretchableCountX_19(int32_t value)
	{
		___m_StretchableCountX_19 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_StretchableCountY_20)); }
	inline int32_t get_m_StretchableCountY_20() const { return ___m_StretchableCountY_20; }
	inline int32_t* get_address_of_m_StretchableCountY_20() { return &___m_StretchableCountY_20; }
	inline void set_m_StretchableCountY_20(int32_t value)
	{
		___m_StretchableCountY_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedWidth_21)); }
	inline bool get_m_UserSpecifiedWidth_21() const { return ___m_UserSpecifiedWidth_21; }
	inline bool* get_address_of_m_UserSpecifiedWidth_21() { return &___m_UserSpecifiedWidth_21; }
	inline void set_m_UserSpecifiedWidth_21(bool value)
	{
		___m_UserSpecifiedWidth_21 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_UserSpecifiedHeight_22)); }
	inline bool get_m_UserSpecifiedHeight_22() const { return ___m_UserSpecifiedHeight_22; }
	inline bool* get_address_of_m_UserSpecifiedHeight_22() { return &___m_UserSpecifiedHeight_22; }
	inline void set_m_UserSpecifiedHeight_22(bool value)
	{
		___m_UserSpecifiedHeight_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinWidth_23)); }
	inline float get_m_ChildMinWidth_23() const { return ___m_ChildMinWidth_23; }
	inline float* get_address_of_m_ChildMinWidth_23() { return &___m_ChildMinWidth_23; }
	inline void set_m_ChildMinWidth_23(float value)
	{
		___m_ChildMinWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxWidth_24)); }
	inline float get_m_ChildMaxWidth_24() const { return ___m_ChildMaxWidth_24; }
	inline float* get_address_of_m_ChildMaxWidth_24() { return &___m_ChildMaxWidth_24; }
	inline void set_m_ChildMaxWidth_24(float value)
	{
		___m_ChildMaxWidth_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMinHeight_25)); }
	inline float get_m_ChildMinHeight_25() const { return ___m_ChildMinHeight_25; }
	inline float* get_address_of_m_ChildMinHeight_25() { return &___m_ChildMinHeight_25; }
	inline void set_m_ChildMinHeight_25(float value)
	{
		___m_ChildMinHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_ChildMaxHeight_26)); }
	inline float get_m_ChildMaxHeight_26() const { return ___m_ChildMaxHeight_26; }
	inline float* get_address_of_m_ChildMaxHeight_26() { return &___m_ChildMaxHeight_26; }
	inline void set_m_ChildMaxHeight_26(float value)
	{
		___m_ChildMaxHeight_26 = value;
	}

	inline static int32_t get_offset_of_m_MarginLeft_27() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginLeft_27)); }
	inline int32_t get_m_MarginLeft_27() const { return ___m_MarginLeft_27; }
	inline int32_t* get_address_of_m_MarginLeft_27() { return &___m_MarginLeft_27; }
	inline void set_m_MarginLeft_27(int32_t value)
	{
		___m_MarginLeft_27 = value;
	}

	inline static int32_t get_offset_of_m_MarginRight_28() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginRight_28)); }
	inline int32_t get_m_MarginRight_28() const { return ___m_MarginRight_28; }
	inline int32_t* get_address_of_m_MarginRight_28() { return &___m_MarginRight_28; }
	inline void set_m_MarginRight_28(int32_t value)
	{
		___m_MarginRight_28 = value;
	}

	inline static int32_t get_offset_of_m_MarginTop_29() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginTop_29)); }
	inline int32_t get_m_MarginTop_29() const { return ___m_MarginTop_29; }
	inline int32_t* get_address_of_m_MarginTop_29() { return &___m_MarginTop_29; }
	inline void set_m_MarginTop_29(int32_t value)
	{
		___m_MarginTop_29 = value;
	}

	inline static int32_t get_offset_of_m_MarginBottom_30() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9, ___m_MarginBottom_30)); }
	inline int32_t get_m_MarginBottom_30() const { return ___m_MarginBottom_30; }
	inline int32_t* get_address_of_m_MarginBottom_30() { return &___m_MarginBottom_30; }
	inline void set_m_MarginBottom_30(int32_t value)
	{
		___m_MarginBottom_30 = value;
	}
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

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

// UnityEngine.TextEditor
struct TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyboardOnScreen_0), (void*)value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___style_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_2), (void*)value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___scrollOffset_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_Content_7)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E  : public MulticastDelegate_t
{
public:

public:
};


// System.Object


// System.Object

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.GUIContent

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};


// UnityEngine.GUIContent


// UnityEngine.SliderState


// UnityEngine.SliderState


// System.Collections.Stack


// System.Collections.Stack


// System.ValueType


// System.ValueType


// UnityEngine.GUILayoutUtility/LayoutCache


// UnityEngine.GUILayoutUtility/LayoutCache


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


// UnityEngineInternal.GenericStack


// UnityEngineInternal.GenericStack


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


// UnityEngine.Rect


// UnityEngine.Rect


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


// System.Void


// System.Void


// System.Delegate


// System.Delegate


// UnityEngine.Event

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};


// UnityEngine.Event


// UnityEngine.EventType


// UnityEngine.EventType


// UnityEngine.GUILayoutEntry

struct GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;

public:
	inline static int32_t get_offset_of_kDummyRect_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___kDummyRect_9)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_kDummyRect_9() const { return ___kDummyRect_9; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_kDummyRect_9() { return &___kDummyRect_9; }
	inline void set_kDummyRect_9(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___kDummyRect_9 = value;
	}

	inline static int32_t get_offset_of_indent_10() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE_StaticFields, ___indent_10)); }
	inline int32_t get_indent_10() const { return ___indent_10; }
	inline int32_t* get_address_of_indent_10() { return &___indent_10; }
	inline void set_indent_10(int32_t value)
	{
		___indent_10 = value;
	}
};


// UnityEngine.GUILayoutEntry


// UnityEngine.GUILayoutUtility

struct GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StoredLayouts_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t3FDB6C5EC702844ACB5B417679E01D7C1DCBA4D4 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StoredWindows_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___current_2)); }
	inline LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___kDummyRect_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SpaceStyle_4), (void*)value);
	}
};


// UnityEngine.GUILayoutUtility


// UnityEngine.RectOffset


// UnityEngine.RectOffset


// UnityEngine.TouchScreenKeyboard

struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E_StaticFields
{
public:
	// System.Boolean UnityEngine.TouchScreenKeyboard::<disableInPlaceEditing>k__BackingField
	bool ___U3CdisableInPlaceEditingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdisableInPlaceEditingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E_StaticFields, ___U3CdisableInPlaceEditingU3Ek__BackingField_1)); }
	inline bool get_U3CdisableInPlaceEditingU3Ek__BackingField_1() const { return ___U3CdisableInPlaceEditingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CdisableInPlaceEditingU3Ek__BackingField_1() { return &___U3CdisableInPlaceEditingU3Ek__BackingField_1; }
	inline void set_U3CdisableInPlaceEditingU3Ek__BackingField_1(bool value)
	{
		___U3CdisableInPlaceEditingU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.TouchScreenKeyboard


// UnityEngine.GUILayout/LayoutedWindow


// UnityEngine.GUILayout/LayoutedWindow


// UnityEngine.GUILayoutOption/Type


// UnityEngine.GUILayoutOption/Type


// UnityEngine.TextEditor/DblClickSnapping


// UnityEngine.TextEditor/DblClickSnapping


// UnityEngine.GUILayoutGroup

struct GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields
{
public:
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * ___none_31;

public:
	inline static int32_t get_offset_of_none_31() { return static_cast<int32_t>(offsetof(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_StaticFields, ___none_31)); }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * get_none_31() const { return ___none_31; }
	inline GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE ** get_address_of_none_31() { return &___none_31; }
	inline void set_none_31(GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * value)
	{
		___none_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_31), (void*)value);
	}
};


// UnityEngine.GUILayoutGroup


// UnityEngine.GUILayoutOption


// UnityEngine.GUILayoutOption


// UnityEngine.GUIStyle

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};


// UnityEngine.GUIStyle


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.TextEditor


// UnityEngine.TextEditor


// System.AsyncCallback


// System.AsyncCallback


// UnityEngine.GUI/WindowFunction


// UnityEngine.GUI/WindowFunction


// UnityEngine.GUISkin/SkinChangedDelegate


// UnityEngine.GUISkin/SkinChangedDelegate

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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_get_none_mC54B925033F3C6B142FE62119710A2D876D3BBDB (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D (const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m75CBA1449193C98C4C59E5E59BFCD6837A1783EC (const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0 (GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32 (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SliderState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderState__ctor_m52C1830A6B916BE4BD18799B3934E79665EE3EDE (SliderState_t2A7A763A3DACB04584347A9FEEEB1B905A60880A * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.TextEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor__ctor_m638747CE4AED20B2F497618337649E32D2ADA099 (TextEditor_t0CE9EE816C020A910BA5D6DE544EF7F4FC3DBF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_keyboardOnScreen_0((TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E *)NULL);
		__this->set_controlID_1(0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUIStyle_get_none_mC54B925033F3C6B142FE62119710A2D876D3BBDB(/*hidden argument*/NULL);
		__this->set_style_2(L_0);
		__this->set_multiline_3((bool)0);
		__this->set_hasHorizontalCursorPos_4((bool)0);
		__this->set_isPasswordField_5((bool)0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D(/*hidden argument*/NULL);
		__this->set_scrollOffset_6(L_1);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_2, /*hidden argument*/NULL);
		__this->set_m_Content_7(L_2);
		__this->set_m_CursorIndex_8(0);
		__this->set_m_SelectIndex_9(0);
		__this->set_m_RevealCursor_10((bool)0);
		__this->set_m_MouseDragSelectsWholeWords_11((bool)0);
		__this->set_m_DblClickInitPos_12(0);
		__this->set_m_DblClickSnap_13(0);
		__this->set_m_bJustSelected_14((bool)0);
		__this->set_m_iAltCursorPos_15((-1));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowFunction_BeginInvoke_m9F57C6EAE29A60C2D896F2FC784280ECE8AAFBCA (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, int32_t ___id0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_EndInvoke_mD9651FD07B46D56BB2BC6B061FB90D3423A0B761 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutedWindow__ctor_m5130DC4A800E43BD25C74562EACBA83B2AA1D3ED (LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535 * __this, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___f0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect1, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_0 = ___f0;
		__this->set_m_Func_0(L_0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = ___screenRect1;
		__this->set_m_ScreenRect_1(L_1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_2 = ___options3;
		__this->set_m_Options_2(L_2);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = ___style4;
		__this->set_m_Style_3(L_3);
		return;
	}
}
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutedWindow_DoWindow_m6A77B646A051D381ED7EAB32548B38B78B099E4B (LayoutedWindow_tF0074CB509E25DF9DA91D906784CADF45A2C1535 * __this, int32_t ___windowID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * L_0 = ((GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var))->get_current_2();
		NullCheck(L_0);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_1 = L_0->get_topLevel_1();
		V_0 = L_1;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2;
		L_2 = Event_get_current_m75CBA1449193C98C4C59E5E59BFCD6837A1783EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)8)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0069;
	}

IL_001f:
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_resetCoords_13((bool)1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_7 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = __this->get_m_ScreenRect_1();
		NullCheck(L_7);
		((GUILayoutEntry_t2999ED021CB0F188187989AC009621F0AE73A5DE *)L_7)->set_rect_4(L_8);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_9 = __this->get_m_Options_2();
		V_3 = (bool)((!(((RuntimeObject*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_11 = V_0;
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_12 = __this->get_m_Options_2();
		NullCheck(L_11);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_11, L_12);
	}

IL_004c:
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_13 = V_0;
		NullCheck(L_13);
		L_13->set_isWindow_16((bool)1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_14 = V_0;
		int32_t L_15 = ___windowID0;
		NullCheck(L_14);
		L_14->set_windowID_17(L_15);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_16 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_17 = __this->get_m_Style_3();
		NullCheck(L_16);
		GUILayoutEntry_set_style_mD86F71263ED679EBA0B5E5415F1B8FB8C7509DA0(L_16, L_17, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0069:
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_18 = V_0;
		NullCheck(L_18);
		GUILayoutGroup_ResetCursor_m45E547A457E4853D733D875D86424B27BC613F32(L_18, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0072:
	{
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_19 = __this->get_m_Func_0();
		int32_t L_20 = ___windowID0;
		NullCheck(L_19);
		WindowFunction_Invoke_mF7D36482F583383AF583ED812A4E2487C06C3748(L_19, L_20, /*hidden argument*/NULL);
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
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m31B20021AD6C02155826BB808C8E243B340022C4 (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_0 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_0, /*hidden argument*/NULL);
		__this->set_topLevel_1(L_0);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_1 = (GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C *)il2cpp_codegen_object_new(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_il2cpp_TypeInfo_var);
		GenericStack__ctor_m42B668E8F293EE21F529A2679AA110C0877605DD(L_1, /*hidden argument*/NULL);
		__this->set_layoutGroups_2(L_1);
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_2 = (GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 *)il2cpp_codegen_object_new(GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m633A8B9407554646DFD0BCAD5F9B39F34E7FCADA(L_2, /*hidden argument*/NULL);
		__this->set_windows_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___instanceID0;
		LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline(__this, L_3, /*hidden argument*/NULL);
		GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C * L_4 = __this->get_layoutGroups_2();
		GUILayoutGroup_tEA8ADE069ADCDFAAE55323834EDC04B0888F10B9 * L_5 = __this->get_topLevel_1();
		NullCheck(L_4);
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_4, L_5);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m89C35E9FE770168E1BEE3990E7E399891788B6DB (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_m5FEBFA0F8E80B0745121ECB1C59C9E0EF595CC3C (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, const RuntimeMethod* method)
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
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkinChangedDelegate_BeginInvoke_m7FA7715C6C7E8D8B0C95159E565520492D01F5CE (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_EndInvoke_m6F5C8C0C660819B74CB8541173EA917C1A6A8D87 (SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_mDA2ECE692716F3D21BCA5B5B5D718A779BC6D545_inline (LayoutCache_t4C0528EE626F95B53EFE2AB59B8D56CB70BBDFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}