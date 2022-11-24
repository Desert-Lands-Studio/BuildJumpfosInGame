#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap>
struct AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>
struct IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B;
// System.Collections.Generic.IList`1<Rewired.ControllerMap>
struct IList_1_t0ADA8CFEC30EB173AC1518D0D7E20AC6D20D9F20;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<Rewired.ControllerMap>
struct List_1_t12FEBD408FEC52EA53898A72BBE6583FEDD56743;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap>
struct ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF;
// ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/imnmUTPynnSebJugdVyxlrHRxXLm<System.Object>
struct imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67;
// tmPBYsdGCEOnbogabbGMuUDuHrHj`1<System.Object>
struct tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA;
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>
struct xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF;
// ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc<System.Object>
struct xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149;
// Rewired.UpdateLoopDataSet`1/xsMJBGmRwWlPzYApiztwYCiVQxLi<System.Object>
struct xsMJBGmRwWlPzYApiztwYCiVQxLi_t87B12F3FBF24CB90F55D337F3A683C971F3B1FC3;
// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>
struct zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99;
// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>
struct zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Rewired.ControllerMap
struct ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// Rewired.InputMapCategory
struct InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Rewired.Player
struct Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// pmhdIRhCoLlQZffSYgOmsLkpxsjN
struct pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB;
// Rewired.Player/ControllerHelper
struct ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268;
// Rewired.ReInput/MappingHelper
struct MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral45A81267D699970B09DEE0F3FB4B558B501AF827;
IL2CPP_EXTERN_C const RuntimeMethod* xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_IEnumerator_Reset_m9FAD3ED0CE8A8FB9C9543A903289063ACB391E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m0096A4366DBC35FA0990E6803466BAB690BDFAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m1D5376E131519DE8EF0F955DD4AFFC8DA583BD7C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/imnmUTPynnSebJugdVyxlrHRxXLm<System.Object>
struct imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67  : public RuntimeObject
{
public:
	// ? ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/imnmUTPynnSebJugdVyxlrHRxXLm::WUeFPJaEWbVRprOwcEhhdDLoRqieA
	RuntimeObject * ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0;
	// System.Int32 ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/imnmUTPynnSebJugdVyxlrHRxXLm::zCReGrIKaGDiebYAdEKHNKYMyFBzA
	int32_t ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1;

public:
	inline static int32_t get_offset_of_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() { return static_cast<int32_t>(offsetof(imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67, ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0)); }
	inline RuntimeObject * get_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() const { return ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0; }
	inline RuntimeObject ** get_address_of_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() { return &___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0; }
	inline void set_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0(RuntimeObject * value)
	{
		___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0), (void*)value);
	}

	inline static int32_t get_offset_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() { return static_cast<int32_t>(offsetof(imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67, ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1)); }
	inline int32_t get_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() const { return ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1; }
	inline int32_t* get_address_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() { return &___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1; }
	inline void set_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1(int32_t value)
	{
		___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1 = value;
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};


// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>
struct wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150  : public RuntimeObject
{
public:

public:
};

struct wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150_StaticFields
{
public:
	// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA::mJiiUbHNLBekzUQakGJdNUzzeWhy
	wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0;

public:
	inline static int32_t get_offset_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return static_cast<int32_t>(offsetof(wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150_StaticFields, ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0)); }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() const { return ___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 ** get_address_of_mJiiUbHNLBekzUQakGJdNUzzeWhy_0() { return &___mJiiUbHNLBekzUQakGJdNUzzeWhy_0; }
	inline void set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * value)
	{
		___mJiiUbHNLBekzUQakGJdNUzzeWhy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mJiiUbHNLBekzUQakGJdNUzzeWhy_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Rewired.Utils.Classes.CodeHelper
struct CodeHelper_t9B466A2480D151C2FA48F277202C969D6015DC13  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// Rewired.InputCategory
struct InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F  : public RuntimeObject
{
public:
	// System.String Rewired.InputCategory::_name
	String_t* ____name_0;
	// System.String Rewired.InputCategory::_descriptiveName
	String_t* ____descriptiveName_1;
	// System.String Rewired.InputCategory::_tag
	String_t* ____tag_2;
	// System.Int32 Rewired.InputCategory::_id
	int32_t ____id_3;
	// System.Boolean Rewired.InputCategory::_userAssignable
	bool ____userAssignable_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}

	inline static int32_t get_offset_of__descriptiveName_1() { return static_cast<int32_t>(offsetof(InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F, ____descriptiveName_1)); }
	inline String_t* get__descriptiveName_1() const { return ____descriptiveName_1; }
	inline String_t** get_address_of__descriptiveName_1() { return &____descriptiveName_1; }
	inline void set__descriptiveName_1(String_t* value)
	{
		____descriptiveName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptiveName_1), (void*)value);
	}

	inline static int32_t get_offset_of__tag_2() { return static_cast<int32_t>(offsetof(InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F, ____tag_2)); }
	inline String_t* get__tag_2() const { return ____tag_2; }
	inline String_t** get_address_of__tag_2() { return &____tag_2; }
	inline void set__tag_2(String_t* value)
	{
		____tag_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tag_2), (void*)value);
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F, ____id_3)); }
	inline int32_t get__id_3() const { return ____id_3; }
	inline int32_t* get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(int32_t value)
	{
		____id_3 = value;
	}

	inline static int32_t get_offset_of__userAssignable_4() { return static_cast<int32_t>(offsetof(InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F, ____userAssignable_4)); }
	inline bool get__userAssignable_4() const { return ____userAssignable_4; }
	inline bool* get_address_of__userAssignable_4() { return &____userAssignable_4; }
	inline void set__userAssignable_4(bool value)
	{
		____userAssignable_4 = value;
	}
};


// Rewired.Player
struct Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E  : public RuntimeObject
{
public:
	// pmhdIRhCoLlQZffSYgOmsLkpxsjN Rewired.Player::jTpXwTbWRyOhLeXIHWddGIMNFixAA
	pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * ___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0;
	// System.Boolean Rewired.Player::LrZWFJXQTWUjNMgHzqBVNwgdSDXl
	bool ___LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1;
	// System.Int32 Rewired.Player::YVGDeWQAhUWKAOSPoxXuizkXaiTI
	int32_t ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_2;
	// System.String Rewired.Player::hEJFspqWqeBOdedbqHNRpPNEbfBG
	String_t* ___hEJFspqWqeBOdedbqHNRpPNEbfBG_3;
	// System.String Rewired.Player::GQlqRsldcMEDRsextfiMMALKaOdr
	String_t* ___GQlqRsldcMEDRsextfiMMALKaOdr_4;
	// System.Boolean Rewired.Player::eASqtHcXNuWOmdyLdlSKBrgLxeyB
	bool ___eASqtHcXNuWOmdyLdlSKBrgLxeyB_5;
	// System.Int32 Rewired.Player::QajDFFaomlkLHzaostfWYpGUioys
	int32_t ___QajDFFaomlkLHzaostfWYpGUioys_6;
	// Rewired.Player/ControllerHelper Rewired.Player::controllers
	ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * ___controllers_7;

public:
	inline static int32_t get_offset_of_jTpXwTbWRyOhLeXIHWddGIMNFixAA_0() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0)); }
	inline pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * get_jTpXwTbWRyOhLeXIHWddGIMNFixAA_0() const { return ___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0; }
	inline pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB ** get_address_of_jTpXwTbWRyOhLeXIHWddGIMNFixAA_0() { return &___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0; }
	inline void set_jTpXwTbWRyOhLeXIHWddGIMNFixAA_0(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * value)
	{
		___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jTpXwTbWRyOhLeXIHWddGIMNFixAA_0), (void*)value);
	}

	inline static int32_t get_offset_of_LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1)); }
	inline bool get_LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1() const { return ___LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1; }
	inline bool* get_address_of_LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1() { return &___LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1; }
	inline void set_LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1(bool value)
	{
		___LrZWFJXQTWUjNMgHzqBVNwgdSDXl_1 = value;
	}

	inline static int32_t get_offset_of_YVGDeWQAhUWKAOSPoxXuizkXaiTI_2() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_2)); }
	inline int32_t get_YVGDeWQAhUWKAOSPoxXuizkXaiTI_2() const { return ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_2; }
	inline int32_t* get_address_of_YVGDeWQAhUWKAOSPoxXuizkXaiTI_2() { return &___YVGDeWQAhUWKAOSPoxXuizkXaiTI_2; }
	inline void set_YVGDeWQAhUWKAOSPoxXuizkXaiTI_2(int32_t value)
	{
		___YVGDeWQAhUWKAOSPoxXuizkXaiTI_2 = value;
	}

	inline static int32_t get_offset_of_hEJFspqWqeBOdedbqHNRpPNEbfBG_3() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___hEJFspqWqeBOdedbqHNRpPNEbfBG_3)); }
	inline String_t* get_hEJFspqWqeBOdedbqHNRpPNEbfBG_3() const { return ___hEJFspqWqeBOdedbqHNRpPNEbfBG_3; }
	inline String_t** get_address_of_hEJFspqWqeBOdedbqHNRpPNEbfBG_3() { return &___hEJFspqWqeBOdedbqHNRpPNEbfBG_3; }
	inline void set_hEJFspqWqeBOdedbqHNRpPNEbfBG_3(String_t* value)
	{
		___hEJFspqWqeBOdedbqHNRpPNEbfBG_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hEJFspqWqeBOdedbqHNRpPNEbfBG_3), (void*)value);
	}

	inline static int32_t get_offset_of_GQlqRsldcMEDRsextfiMMALKaOdr_4() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___GQlqRsldcMEDRsextfiMMALKaOdr_4)); }
	inline String_t* get_GQlqRsldcMEDRsextfiMMALKaOdr_4() const { return ___GQlqRsldcMEDRsextfiMMALKaOdr_4; }
	inline String_t** get_address_of_GQlqRsldcMEDRsextfiMMALKaOdr_4() { return &___GQlqRsldcMEDRsextfiMMALKaOdr_4; }
	inline void set_GQlqRsldcMEDRsextfiMMALKaOdr_4(String_t* value)
	{
		___GQlqRsldcMEDRsextfiMMALKaOdr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GQlqRsldcMEDRsextfiMMALKaOdr_4), (void*)value);
	}

	inline static int32_t get_offset_of_eASqtHcXNuWOmdyLdlSKBrgLxeyB_5() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___eASqtHcXNuWOmdyLdlSKBrgLxeyB_5)); }
	inline bool get_eASqtHcXNuWOmdyLdlSKBrgLxeyB_5() const { return ___eASqtHcXNuWOmdyLdlSKBrgLxeyB_5; }
	inline bool* get_address_of_eASqtHcXNuWOmdyLdlSKBrgLxeyB_5() { return &___eASqtHcXNuWOmdyLdlSKBrgLxeyB_5; }
	inline void set_eASqtHcXNuWOmdyLdlSKBrgLxeyB_5(bool value)
	{
		___eASqtHcXNuWOmdyLdlSKBrgLxeyB_5 = value;
	}

	inline static int32_t get_offset_of_QajDFFaomlkLHzaostfWYpGUioys_6() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___QajDFFaomlkLHzaostfWYpGUioys_6)); }
	inline int32_t get_QajDFFaomlkLHzaostfWYpGUioys_6() const { return ___QajDFFaomlkLHzaostfWYpGUioys_6; }
	inline int32_t* get_address_of_QajDFFaomlkLHzaostfWYpGUioys_6() { return &___QajDFFaomlkLHzaostfWYpGUioys_6; }
	inline void set_QajDFFaomlkLHzaostfWYpGUioys_6(int32_t value)
	{
		___QajDFFaomlkLHzaostfWYpGUioys_6 = value;
	}

	inline static int32_t get_offset_of_controllers_7() { return static_cast<int32_t>(offsetof(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E, ___controllers_7)); }
	inline ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * get_controllers_7() const { return ___controllers_7; }
	inline ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 ** get_address_of_controllers_7() { return &___controllers_7; }
	inline void set_controllers_7(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * value)
	{
		___controllers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllers_7), (void*)value);
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

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// Rewired.InputMapCategory
struct InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C  : public InputCategory_t3B04CE4FF555EE282EFCC396812435BBEF047C0F
{
public:
	// System.Boolean Rewired.InputMapCategory::_checkConflictsWithAllCategories
	bool ____checkConflictsWithAllCategories_5;
	// System.Collections.Generic.List`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____checkConflictsCategoryIds_6;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds_readOnly
	ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * ____checkConflictsCategoryIds_readOnly_7;

public:
	inline static int32_t get_offset_of__checkConflictsWithAllCategories_5() { return static_cast<int32_t>(offsetof(InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C, ____checkConflictsWithAllCategories_5)); }
	inline bool get__checkConflictsWithAllCategories_5() const { return ____checkConflictsWithAllCategories_5; }
	inline bool* get_address_of__checkConflictsWithAllCategories_5() { return &____checkConflictsWithAllCategories_5; }
	inline void set__checkConflictsWithAllCategories_5(bool value)
	{
		____checkConflictsWithAllCategories_5 = value;
	}

	inline static int32_t get_offset_of__checkConflictsCategoryIds_6() { return static_cast<int32_t>(offsetof(InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C, ____checkConflictsCategoryIds_6)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__checkConflictsCategoryIds_6() const { return ____checkConflictsCategoryIds_6; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__checkConflictsCategoryIds_6() { return &____checkConflictsCategoryIds_6; }
	inline void set__checkConflictsCategoryIds_6(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____checkConflictsCategoryIds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____checkConflictsCategoryIds_6), (void*)value);
	}

	inline static int32_t get_offset_of__checkConflictsCategoryIds_readOnly_7() { return static_cast<int32_t>(offsetof(InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C, ____checkConflictsCategoryIds_readOnly_7)); }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * get__checkConflictsCategoryIds_readOnly_7() const { return ____checkConflictsCategoryIds_readOnly_7; }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF ** get_address_of__checkConflictsCategoryIds_readOnly_7() { return &____checkConflictsCategoryIds_readOnly_7; }
	inline void set__checkConflictsCategoryIds_readOnly_7(ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * value)
	{
		____checkConflictsCategoryIds_readOnly_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____checkConflictsCategoryIds_readOnly_7), (void*)value);
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


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
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
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// Rewired.ReInput/MappingHelper
struct MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126  : public CodeHelper_t9B466A2480D151C2FA48F277202C969D6015DC13
{
public:

public:
};

struct MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126_StaticFields
{
public:
	// Rewired.ReInput/MappingHelper Rewired.ReInput/MappingHelper::LDnMtBpByMhNcmNpPzdzLRPijZRi
	MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0;

public:
	inline static int32_t get_offset_of_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() { return static_cast<int32_t>(offsetof(MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126_StaticFields, ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0)); }
	inline MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * get_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() const { return ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0; }
	inline MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 ** get_address_of_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() { return &___LDnMtBpByMhNcmNpPzdzLRPijZRi_0; }
	inline void set_LDnMtBpByMhNcmNpPzdzLRPijZRi_0(MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * value)
	{
		___LDnMtBpByMhNcmNpPzdzLRPijZRi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LDnMtBpByMhNcmNpPzdzLRPijZRi_0), (void*)value);
	}
};


// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610  : public CodeHelper_t9B466A2480D151C2FA48F277202C969D6015DC13
{
public:
	// Rewired.Player Rewired.Player/ControllerHelper/ConflictCheckingHelper::XAbNzJSvSNjTFwhnJridEdiVWtEM
	Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * ___XAbNzJSvSNjTFwhnJridEdiVWtEM_0;
	// Rewired.Player/ControllerHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper::xOBFIOiBayOLXbKGUpZvZHJEAmpcb
	ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * ___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::QajDFFaomlkLHzaostfWYpGUioys
	int32_t ___QajDFFaomlkLHzaostfWYpGUioys_2;

public:
	inline static int32_t get_offset_of_XAbNzJSvSNjTFwhnJridEdiVWtEM_0() { return static_cast<int32_t>(offsetof(ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610, ___XAbNzJSvSNjTFwhnJridEdiVWtEM_0)); }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * get_XAbNzJSvSNjTFwhnJridEdiVWtEM_0() const { return ___XAbNzJSvSNjTFwhnJridEdiVWtEM_0; }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E ** get_address_of_XAbNzJSvSNjTFwhnJridEdiVWtEM_0() { return &___XAbNzJSvSNjTFwhnJridEdiVWtEM_0; }
	inline void set_XAbNzJSvSNjTFwhnJridEdiVWtEM_0(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * value)
	{
		___XAbNzJSvSNjTFwhnJridEdiVWtEM_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XAbNzJSvSNjTFwhnJridEdiVWtEM_0), (void*)value);
	}

	inline static int32_t get_offset_of_xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1() { return static_cast<int32_t>(offsetof(ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610, ___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1)); }
	inline ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * get_xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1() const { return ___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1; }
	inline ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 ** get_address_of_xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1() { return &___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1; }
	inline void set_xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * value)
	{
		___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xOBFIOiBayOLXbKGUpZvZHJEAmpcb_1), (void*)value);
	}

	inline static int32_t get_offset_of_QajDFFaomlkLHzaostfWYpGUioys_2() { return static_cast<int32_t>(offsetof(ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610, ___QajDFFaomlkLHzaostfWYpGUioys_2)); }
	inline int32_t get_QajDFFaomlkLHzaostfWYpGUioys_2() const { return ___QajDFFaomlkLHzaostfWYpGUioys_2; }
	inline int32_t* get_address_of_QajDFFaomlkLHzaostfWYpGUioys_2() { return &___QajDFFaomlkLHzaostfWYpGUioys_2; }
	inline void set_QajDFFaomlkLHzaostfWYpGUioys_2(int32_t value)
	{
		___QajDFFaomlkLHzaostfWYpGUioys_2 = value;
	}
};


// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS<System.Boolean>
struct whpWgNqMfvNIqejZeOsJozGImuJS_t21EF12CEEDEC96B6091064C1B989502C7B7BE281 
{
public:
	// System.Int32 zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(whpWgNqMfvNIqejZeOsJozGImuJS_t21EF12CEEDEC96B6091064C1B989502C7B7BE281, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS<System.Object>
struct whpWgNqMfvNIqejZeOsJozGImuJS_t95A90FC2EB962568E8DEABBB7CD3587B8A22F909 
{
public:
	// System.Int32 zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(whpWgNqMfvNIqejZeOsJozGImuJS_t95A90FC2EB962568E8DEABBB7CD3587B8A22F909, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerElementType
struct ControllerElementType_tC92C2361769C34E15DCCAABDD5A591586DCE0A27 
{
public:
	// System.Int32 Rewired.ControllerElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerElementType_tC92C2361769C34E15DCCAABDD5A591586DCE0A27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ControllerType
struct ControllerType_t8ADD8DF8733712263255A24C16CE0A635058DF77 
{
public:
	// System.Int32 Rewired.ControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerType_t8ADD8DF8733712263255A24C16CE0A635058DF77, ___value___2)); }
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

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ModifierKeyFlags
struct ModifierKeyFlags_t63107E946FCF6DD4047F93290F847C28C48EF0E7 
{
public:
	// System.Int32 Rewired.ModifierKeyFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModifierKeyFlags_t63107E946FCF6DD4047F93290F847C28C48EF0E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.UpdateLoopType
struct UpdateLoopType_tA1DA860BF1D0A63C53D7B0FD071688AA409EF412 
{
public:
	// System.Int32 Rewired.UpdateLoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateLoopType_tA1DA860BF1D0A63C53D7B0FD071688AA409EF412, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// tmPBYsdGCEOnbogabbGMuUDuHrHj`1<System.Object>
struct tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Rewired.ControllerMap> tmPBYsdGCEOnbogabbGMuUDuHrHj`1::BFyxJlrfJnxldwZAkmUstuvDMyEV
	List_1_t12FEBD408FEC52EA53898A72BBE6583FEDD56743 * ___BFyxJlrfJnxldwZAkmUstuvDMyEV_0;
	// System.Collections.Generic.IList`1<Rewired.ControllerMap> tmPBYsdGCEOnbogabbGMuUDuHrHj`1::xopBruGZIRUpmLbfEezVypIOKsBqA
	RuntimeObject* ___xopBruGZIRUpmLbfEezVypIOKsBqA_1;
	// Rewired.ControllerType tmPBYsdGCEOnbogabbGMuUDuHrHj`1::zCReGrIKaGDiebYAdEKHNKYMyFBzA
	int32_t ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_2;
	// System.Int32 tmPBYsdGCEOnbogabbGMuUDuHrHj`1::dxNWoKAWRnEjMzagpBqSNtmzbbJFA
	int32_t ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3;
	// System.Collections.Generic.List`1<?> tmPBYsdGCEOnbogabbGMuUDuHrHj`1::FKzAxPWKIKpquANzVLWwqyXboCch
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___FKzAxPWKIKpquANzVLWwqyXboCch_4;
	// System.Collections.Generic.IList`1<?> tmPBYsdGCEOnbogabbGMuUDuHrHj`1::BqfAwMORHhdFJVeudgHEtCMTMAbR
	RuntimeObject* ___BqfAwMORHhdFJVeudgHEtCMTMAbR_5;

public:
	inline static int32_t get_offset_of_BFyxJlrfJnxldwZAkmUstuvDMyEV_0() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___BFyxJlrfJnxldwZAkmUstuvDMyEV_0)); }
	inline List_1_t12FEBD408FEC52EA53898A72BBE6583FEDD56743 * get_BFyxJlrfJnxldwZAkmUstuvDMyEV_0() const { return ___BFyxJlrfJnxldwZAkmUstuvDMyEV_0; }
	inline List_1_t12FEBD408FEC52EA53898A72BBE6583FEDD56743 ** get_address_of_BFyxJlrfJnxldwZAkmUstuvDMyEV_0() { return &___BFyxJlrfJnxldwZAkmUstuvDMyEV_0; }
	inline void set_BFyxJlrfJnxldwZAkmUstuvDMyEV_0(List_1_t12FEBD408FEC52EA53898A72BBE6583FEDD56743 * value)
	{
		___BFyxJlrfJnxldwZAkmUstuvDMyEV_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BFyxJlrfJnxldwZAkmUstuvDMyEV_0), (void*)value);
	}

	inline static int32_t get_offset_of_xopBruGZIRUpmLbfEezVypIOKsBqA_1() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___xopBruGZIRUpmLbfEezVypIOKsBqA_1)); }
	inline RuntimeObject* get_xopBruGZIRUpmLbfEezVypIOKsBqA_1() const { return ___xopBruGZIRUpmLbfEezVypIOKsBqA_1; }
	inline RuntimeObject** get_address_of_xopBruGZIRUpmLbfEezVypIOKsBqA_1() { return &___xopBruGZIRUpmLbfEezVypIOKsBqA_1; }
	inline void set_xopBruGZIRUpmLbfEezVypIOKsBqA_1(RuntimeObject* value)
	{
		___xopBruGZIRUpmLbfEezVypIOKsBqA_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xopBruGZIRUpmLbfEezVypIOKsBqA_1), (void*)value);
	}

	inline static int32_t get_offset_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_2() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_2)); }
	inline int32_t get_zCReGrIKaGDiebYAdEKHNKYMyFBzA_2() const { return ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_2; }
	inline int32_t* get_address_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_2() { return &___zCReGrIKaGDiebYAdEKHNKYMyFBzA_2; }
	inline void set_zCReGrIKaGDiebYAdEKHNKYMyFBzA_2(int32_t value)
	{
		___zCReGrIKaGDiebYAdEKHNKYMyFBzA_2 = value;
	}

	inline static int32_t get_offset_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3)); }
	inline int32_t get_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3() const { return ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3; }
	inline int32_t* get_address_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3() { return &___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3; }
	inline void set_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3(int32_t value)
	{
		___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_3 = value;
	}

	inline static int32_t get_offset_of_FKzAxPWKIKpquANzVLWwqyXboCch_4() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___FKzAxPWKIKpquANzVLWwqyXboCch_4)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_FKzAxPWKIKpquANzVLWwqyXboCch_4() const { return ___FKzAxPWKIKpquANzVLWwqyXboCch_4; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_FKzAxPWKIKpquANzVLWwqyXboCch_4() { return &___FKzAxPWKIKpquANzVLWwqyXboCch_4; }
	inline void set_FKzAxPWKIKpquANzVLWwqyXboCch_4(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___FKzAxPWKIKpquANzVLWwqyXboCch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FKzAxPWKIKpquANzVLWwqyXboCch_4), (void*)value);
	}

	inline static int32_t get_offset_of_BqfAwMORHhdFJVeudgHEtCMTMAbR_5() { return static_cast<int32_t>(offsetof(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71, ___BqfAwMORHhdFJVeudgHEtCMTMAbR_5)); }
	inline RuntimeObject* get_BqfAwMORHhdFJVeudgHEtCMTMAbR_5() const { return ___BqfAwMORHhdFJVeudgHEtCMTMAbR_5; }
	inline RuntimeObject** get_address_of_BqfAwMORHhdFJVeudgHEtCMTMAbR_5() { return &___BqfAwMORHhdFJVeudgHEtCMTMAbR_5; }
	inline void set_BqfAwMORHhdFJVeudgHEtCMTMAbR_5(RuntimeObject* value)
	{
		___BqfAwMORHhdFJVeudgHEtCMTMAbR_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BqfAwMORHhdFJVeudgHEtCMTMAbR_5), (void*)value);
	}
};


// ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc<System.Object>
struct xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149  : public RuntimeObject
{
public:
	// ? ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc::WUeFPJaEWbVRprOwcEhhdDLoRqieA
	RuntimeObject * ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0;
	// Rewired.ControllerType ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc::zCReGrIKaGDiebYAdEKHNKYMyFBzA
	int32_t ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1;

public:
	inline static int32_t get_offset_of_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() { return static_cast<int32_t>(offsetof(xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149, ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0)); }
	inline RuntimeObject * get_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() const { return ___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0; }
	inline RuntimeObject ** get_address_of_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0() { return &___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0; }
	inline void set_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0(RuntimeObject * value)
	{
		___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WUeFPJaEWbVRprOwcEhhdDLoRqieA_0), (void*)value);
	}

	inline static int32_t get_offset_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() { return static_cast<int32_t>(offsetof(xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149, ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1)); }
	inline int32_t get_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() const { return ___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1; }
	inline int32_t* get_address_of_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1() { return &___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1; }
	inline void set_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1(int32_t value)
	{
		___zCReGrIKaGDiebYAdEKHNKYMyFBzA_1 = value;
	}
};


// Rewired.UpdateLoopDataSet`1/xsMJBGmRwWlPzYApiztwYCiVQxLi<System.Object>
struct xsMJBGmRwWlPzYApiztwYCiVQxLi_t87B12F3FBF24CB90F55D337F3A683C971F3B1FC3  : public RuntimeObject
{
public:
	// Rewired.UpdateLoopType Rewired.UpdateLoopDataSet`1/xsMJBGmRwWlPzYApiztwYCiVQxLi::PiEdbgjMHSsksYjRKSGckYZEsfAE
	int32_t ___PiEdbgjMHSsksYjRKSGckYZEsfAE_0;
	// ? Rewired.UpdateLoopDataSet`1/xsMJBGmRwWlPzYApiztwYCiVQxLi::lPMziJCFRnvinaKeGNwjXRpuzYwf
	RuntimeObject * ___lPMziJCFRnvinaKeGNwjXRpuzYwf_1;

public:
	inline static int32_t get_offset_of_PiEdbgjMHSsksYjRKSGckYZEsfAE_0() { return static_cast<int32_t>(offsetof(xsMJBGmRwWlPzYApiztwYCiVQxLi_t87B12F3FBF24CB90F55D337F3A683C971F3B1FC3, ___PiEdbgjMHSsksYjRKSGckYZEsfAE_0)); }
	inline int32_t get_PiEdbgjMHSsksYjRKSGckYZEsfAE_0() const { return ___PiEdbgjMHSsksYjRKSGckYZEsfAE_0; }
	inline int32_t* get_address_of_PiEdbgjMHSsksYjRKSGckYZEsfAE_0() { return &___PiEdbgjMHSsksYjRKSGckYZEsfAE_0; }
	inline void set_PiEdbgjMHSsksYjRKSGckYZEsfAE_0(int32_t value)
	{
		___PiEdbgjMHSsksYjRKSGckYZEsfAE_0 = value;
	}

	inline static int32_t get_offset_of_lPMziJCFRnvinaKeGNwjXRpuzYwf_1() { return static_cast<int32_t>(offsetof(xsMJBGmRwWlPzYApiztwYCiVQxLi_t87B12F3FBF24CB90F55D337F3A683C971F3B1FC3, ___lPMziJCFRnvinaKeGNwjXRpuzYwf_1)); }
	inline RuntimeObject * get_lPMziJCFRnvinaKeGNwjXRpuzYwf_1() const { return ___lPMziJCFRnvinaKeGNwjXRpuzYwf_1; }
	inline RuntimeObject ** get_address_of_lPMziJCFRnvinaKeGNwjXRpuzYwf_1() { return &___lPMziJCFRnvinaKeGNwjXRpuzYwf_1; }
	inline void set_lPMziJCFRnvinaKeGNwjXRpuzYwf_1(RuntimeObject * value)
	{
		___lPMziJCFRnvinaKeGNwjXRpuzYwf_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lPMziJCFRnvinaKeGNwjXRpuzYwf_1), (void*)value);
	}
};


// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>
struct zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99  : public RuntimeObject
{
public:
	// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS<?> zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::YBVLHhuEMfAdNIdivBJanHRaJQaM
	int32_t ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0;
	// ? zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::TzxgiwAmsezBHlJhnNRRkIJteFpY
	bool ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1;
	// System.Threading.WaitCallback zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::SiXixQSMucyuJvNwhknxJlowTWAA
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___SiXixQSMucyuJvNwhknxJlowTWAA_2;
	// System.Object zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::PdLebfCotqexuGgniZIhMvALVeSjB
	RuntimeObject * ___PdLebfCotqexuGgniZIhMvALVeSjB_3;
	// System.Func`1<?> zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::WcOlqlWHdVZXMWMHBWLvgwsXCteu
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4;
	// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::rEkAjSkJQsJIwYRoeExNyXIfzLep
	bool ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5;
	// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::NchdYNbKzqsssgcQJdenZuGqXgLo
	bool ___NchdYNbKzqsssgcQJdenZuGqXgLo_6;

public:
	inline static int32_t get_offset_of_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0)); }
	inline int32_t get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() const { return ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0; }
	inline int32_t* get_address_of_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() { return &___YBVLHhuEMfAdNIdivBJanHRaJQaM_0; }
	inline void set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(int32_t value)
	{
		___YBVLHhuEMfAdNIdivBJanHRaJQaM_0 = value;
	}

	inline static int32_t get_offset_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1)); }
	inline bool get_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() const { return ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1; }
	inline bool* get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() { return &___TzxgiwAmsezBHlJhnNRRkIJteFpY_1; }
	inline void set_TzxgiwAmsezBHlJhnNRRkIJteFpY_1(bool value)
	{
		___TzxgiwAmsezBHlJhnNRRkIJteFpY_1 = value;
	}

	inline static int32_t get_offset_of_SiXixQSMucyuJvNwhknxJlowTWAA_2() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___SiXixQSMucyuJvNwhknxJlowTWAA_2)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_SiXixQSMucyuJvNwhknxJlowTWAA_2() const { return ___SiXixQSMucyuJvNwhknxJlowTWAA_2; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_SiXixQSMucyuJvNwhknxJlowTWAA_2() { return &___SiXixQSMucyuJvNwhknxJlowTWAA_2; }
	inline void set_SiXixQSMucyuJvNwhknxJlowTWAA_2(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___SiXixQSMucyuJvNwhknxJlowTWAA_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SiXixQSMucyuJvNwhknxJlowTWAA_2), (void*)value);
	}

	inline static int32_t get_offset_of_PdLebfCotqexuGgniZIhMvALVeSjB_3() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___PdLebfCotqexuGgniZIhMvALVeSjB_3)); }
	inline RuntimeObject * get_PdLebfCotqexuGgniZIhMvALVeSjB_3() const { return ___PdLebfCotqexuGgniZIhMvALVeSjB_3; }
	inline RuntimeObject ** get_address_of_PdLebfCotqexuGgniZIhMvALVeSjB_3() { return &___PdLebfCotqexuGgniZIhMvALVeSjB_3; }
	inline void set_PdLebfCotqexuGgniZIhMvALVeSjB_3(RuntimeObject * value)
	{
		___PdLebfCotqexuGgniZIhMvALVeSjB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PdLebfCotqexuGgniZIhMvALVeSjB_3), (void*)value);
	}

	inline static int32_t get_offset_of_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() const { return ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() { return &___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4; }
	inline void set_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4), (void*)value);
	}

	inline static int32_t get_offset_of_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5)); }
	inline bool get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() const { return ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5; }
	inline bool* get_address_of_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() { return &___rEkAjSkJQsJIwYRoeExNyXIfzLep_5; }
	inline void set_rEkAjSkJQsJIwYRoeExNyXIfzLep_5(bool value)
	{
		___rEkAjSkJQsJIwYRoeExNyXIfzLep_5 = value;
	}

	inline static int32_t get_offset_of_NchdYNbKzqsssgcQJdenZuGqXgLo_6() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99, ___NchdYNbKzqsssgcQJdenZuGqXgLo_6)); }
	inline bool get_NchdYNbKzqsssgcQJdenZuGqXgLo_6() const { return ___NchdYNbKzqsssgcQJdenZuGqXgLo_6; }
	inline bool* get_address_of_NchdYNbKzqsssgcQJdenZuGqXgLo_6() { return &___NchdYNbKzqsssgcQJdenZuGqXgLo_6; }
	inline void set_NchdYNbKzqsssgcQJdenZuGqXgLo_6(bool value)
	{
		___NchdYNbKzqsssgcQJdenZuGqXgLo_6 = value;
	}
};


// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>
struct zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055  : public RuntimeObject
{
public:
	// zCiKSorjoVkhIfNAHGoZOwuVeIyT`1/whpWgNqMfvNIqejZeOsJozGImuJS<?> zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::YBVLHhuEMfAdNIdivBJanHRaJQaM
	int32_t ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0;
	// ? zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::TzxgiwAmsezBHlJhnNRRkIJteFpY
	RuntimeObject * ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1;
	// System.Threading.WaitCallback zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::SiXixQSMucyuJvNwhknxJlowTWAA
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___SiXixQSMucyuJvNwhknxJlowTWAA_2;
	// System.Object zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::PdLebfCotqexuGgniZIhMvALVeSjB
	RuntimeObject * ___PdLebfCotqexuGgniZIhMvALVeSjB_3;
	// System.Func`1<?> zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::WcOlqlWHdVZXMWMHBWLvgwsXCteu
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4;
	// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::rEkAjSkJQsJIwYRoeExNyXIfzLep
	bool ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5;
	// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1::NchdYNbKzqsssgcQJdenZuGqXgLo
	bool ___NchdYNbKzqsssgcQJdenZuGqXgLo_6;

public:
	inline static int32_t get_offset_of_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0)); }
	inline int32_t get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() const { return ___YBVLHhuEMfAdNIdivBJanHRaJQaM_0; }
	inline int32_t* get_address_of_YBVLHhuEMfAdNIdivBJanHRaJQaM_0() { return &___YBVLHhuEMfAdNIdivBJanHRaJQaM_0; }
	inline void set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(int32_t value)
	{
		___YBVLHhuEMfAdNIdivBJanHRaJQaM_0 = value;
	}

	inline static int32_t get_offset_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1)); }
	inline RuntimeObject * get_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() const { return ___TzxgiwAmsezBHlJhnNRRkIJteFpY_1; }
	inline RuntimeObject ** get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1() { return &___TzxgiwAmsezBHlJhnNRRkIJteFpY_1; }
	inline void set_TzxgiwAmsezBHlJhnNRRkIJteFpY_1(RuntimeObject * value)
	{
		___TzxgiwAmsezBHlJhnNRRkIJteFpY_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TzxgiwAmsezBHlJhnNRRkIJteFpY_1), (void*)value);
	}

	inline static int32_t get_offset_of_SiXixQSMucyuJvNwhknxJlowTWAA_2() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___SiXixQSMucyuJvNwhknxJlowTWAA_2)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_SiXixQSMucyuJvNwhknxJlowTWAA_2() const { return ___SiXixQSMucyuJvNwhknxJlowTWAA_2; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_SiXixQSMucyuJvNwhknxJlowTWAA_2() { return &___SiXixQSMucyuJvNwhknxJlowTWAA_2; }
	inline void set_SiXixQSMucyuJvNwhknxJlowTWAA_2(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___SiXixQSMucyuJvNwhknxJlowTWAA_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SiXixQSMucyuJvNwhknxJlowTWAA_2), (void*)value);
	}

	inline static int32_t get_offset_of_PdLebfCotqexuGgniZIhMvALVeSjB_3() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___PdLebfCotqexuGgniZIhMvALVeSjB_3)); }
	inline RuntimeObject * get_PdLebfCotqexuGgniZIhMvALVeSjB_3() const { return ___PdLebfCotqexuGgniZIhMvALVeSjB_3; }
	inline RuntimeObject ** get_address_of_PdLebfCotqexuGgniZIhMvALVeSjB_3() { return &___PdLebfCotqexuGgniZIhMvALVeSjB_3; }
	inline void set_PdLebfCotqexuGgniZIhMvALVeSjB_3(RuntimeObject * value)
	{
		___PdLebfCotqexuGgniZIhMvALVeSjB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PdLebfCotqexuGgniZIhMvALVeSjB_3), (void*)value);
	}

	inline static int32_t get_offset_of_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() const { return ___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4() { return &___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4; }
	inline void set_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WcOlqlWHdVZXMWMHBWLvgwsXCteu_4), (void*)value);
	}

	inline static int32_t get_offset_of_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5)); }
	inline bool get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() const { return ___rEkAjSkJQsJIwYRoeExNyXIfzLep_5; }
	inline bool* get_address_of_rEkAjSkJQsJIwYRoeExNyXIfzLep_5() { return &___rEkAjSkJQsJIwYRoeExNyXIfzLep_5; }
	inline void set_rEkAjSkJQsJIwYRoeExNyXIfzLep_5(bool value)
	{
		___rEkAjSkJQsJIwYRoeExNyXIfzLep_5 = value;
	}

	inline static int32_t get_offset_of_NchdYNbKzqsssgcQJdenZuGqXgLo_6() { return static_cast<int32_t>(offsetof(zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055, ___NchdYNbKzqsssgcQJdenZuGqXgLo_6)); }
	inline bool get_NchdYNbKzqsssgcQJdenZuGqXgLo_6() const { return ___NchdYNbKzqsssgcQJdenZuGqXgLo_6; }
	inline bool* get_address_of_NchdYNbKzqsssgcQJdenZuGqXgLo_6() { return &___NchdYNbKzqsssgcQJdenZuGqXgLo_6; }
	inline void set_NchdYNbKzqsssgcQJdenZuGqXgLo_6(bool value)
	{
		___NchdYNbKzqsssgcQJdenZuGqXgLo_6 = value;
	}
};


// Rewired.ControllerMap
struct ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ControllerMap::_id
	int32_t ____id_0;
	// System.Int32 Rewired.ControllerMap::_sourceMapId
	int32_t ____sourceMapId_1;
	// System.Int32 Rewired.ControllerMap::_categoryId
	int32_t ____categoryId_2;
	// System.Int32 Rewired.ControllerMap::_layoutId
	int32_t ____layoutId_3;
	// System.String Rewired.ControllerMap::_name
	String_t* ____name_4;
	// System.Guid Rewired.ControllerMap::_hardwareGuid
	Guid_t  ____hardwareGuid_5;
	// System.Boolean Rewired.ControllerMap::_enabled
	bool ____enabled_6;
	// System.Int32 Rewired.ControllerMap::QajDFFaomlkLHzaostfWYpGUioys
	int32_t ___QajDFFaomlkLHzaostfWYpGUioys_7;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::RlEWvWhBtSYLCZgEJyoUhzhqfrnW
	AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * ___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::PFxPkDcFqItqjJkeJsOlItdTVYKK
	ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * ___PFxPkDcFqItqjJkeJsOlItdTVYKK_9;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::goUXNJtKtwGJDoSIRfidQYIVOBlD
	AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * ___goUXNJtKtwGJDoSIRfidQYIVOBlD_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::yoKfWhSGpjMHgopreUxyudOtPHHh
	ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * ___yoKfWhSGpjMHgopreUxyudOtPHHh_11;
	// System.Int32 Rewired.ControllerMap::_playerId
	int32_t ____playerId_12;
	// System.Int32 Rewired.ControllerMap::_controllerId
	int32_t ____controllerId_13;
	// Rewired.ControllerType Rewired.ControllerMap::_controllerType
	int32_t ____controllerType_14;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__sourceMapId_1() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____sourceMapId_1)); }
	inline int32_t get__sourceMapId_1() const { return ____sourceMapId_1; }
	inline int32_t* get_address_of__sourceMapId_1() { return &____sourceMapId_1; }
	inline void set__sourceMapId_1(int32_t value)
	{
		____sourceMapId_1 = value;
	}

	inline static int32_t get_offset_of__categoryId_2() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____categoryId_2)); }
	inline int32_t get__categoryId_2() const { return ____categoryId_2; }
	inline int32_t* get_address_of__categoryId_2() { return &____categoryId_2; }
	inline void set__categoryId_2(int32_t value)
	{
		____categoryId_2 = value;
	}

	inline static int32_t get_offset_of__layoutId_3() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____layoutId_3)); }
	inline int32_t get__layoutId_3() const { return ____layoutId_3; }
	inline int32_t* get_address_of__layoutId_3() { return &____layoutId_3; }
	inline void set__layoutId_3(int32_t value)
	{
		____layoutId_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_4), (void*)value);
	}

	inline static int32_t get_offset_of__hardwareGuid_5() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____hardwareGuid_5)); }
	inline Guid_t  get__hardwareGuid_5() const { return ____hardwareGuid_5; }
	inline Guid_t * get_address_of__hardwareGuid_5() { return &____hardwareGuid_5; }
	inline void set__hardwareGuid_5(Guid_t  value)
	{
		____hardwareGuid_5 = value;
	}

	inline static int32_t get_offset_of__enabled_6() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____enabled_6)); }
	inline bool get__enabled_6() const { return ____enabled_6; }
	inline bool* get_address_of__enabled_6() { return &____enabled_6; }
	inline void set__enabled_6(bool value)
	{
		____enabled_6 = value;
	}

	inline static int32_t get_offset_of_QajDFFaomlkLHzaostfWYpGUioys_7() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ___QajDFFaomlkLHzaostfWYpGUioys_7)); }
	inline int32_t get_QajDFFaomlkLHzaostfWYpGUioys_7() const { return ___QajDFFaomlkLHzaostfWYpGUioys_7; }
	inline int32_t* get_address_of_QajDFFaomlkLHzaostfWYpGUioys_7() { return &___QajDFFaomlkLHzaostfWYpGUioys_7; }
	inline void set_QajDFFaomlkLHzaostfWYpGUioys_7(int32_t value)
	{
		___QajDFFaomlkLHzaostfWYpGUioys_7 = value;
	}

	inline static int32_t get_offset_of_RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8)); }
	inline AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * get_RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8() const { return ___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8; }
	inline AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC ** get_address_of_RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8() { return &___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8; }
	inline void set_RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8(AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * value)
	{
		___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RlEWvWhBtSYLCZgEJyoUhzhqfrnW_8), (void*)value);
	}

	inline static int32_t get_offset_of_PFxPkDcFqItqjJkeJsOlItdTVYKK_9() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ___PFxPkDcFqItqjJkeJsOlItdTVYKK_9)); }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * get_PFxPkDcFqItqjJkeJsOlItdTVYKK_9() const { return ___PFxPkDcFqItqjJkeJsOlItdTVYKK_9; }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 ** get_address_of_PFxPkDcFqItqjJkeJsOlItdTVYKK_9() { return &___PFxPkDcFqItqjJkeJsOlItdTVYKK_9; }
	inline void set_PFxPkDcFqItqjJkeJsOlItdTVYKK_9(ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * value)
	{
		___PFxPkDcFqItqjJkeJsOlItdTVYKK_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PFxPkDcFqItqjJkeJsOlItdTVYKK_9), (void*)value);
	}

	inline static int32_t get_offset_of_goUXNJtKtwGJDoSIRfidQYIVOBlD_10() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ___goUXNJtKtwGJDoSIRfidQYIVOBlD_10)); }
	inline AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * get_goUXNJtKtwGJDoSIRfidQYIVOBlD_10() const { return ___goUXNJtKtwGJDoSIRfidQYIVOBlD_10; }
	inline AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC ** get_address_of_goUXNJtKtwGJDoSIRfidQYIVOBlD_10() { return &___goUXNJtKtwGJDoSIRfidQYIVOBlD_10; }
	inline void set_goUXNJtKtwGJDoSIRfidQYIVOBlD_10(AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC * value)
	{
		___goUXNJtKtwGJDoSIRfidQYIVOBlD_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goUXNJtKtwGJDoSIRfidQYIVOBlD_10), (void*)value);
	}

	inline static int32_t get_offset_of_yoKfWhSGpjMHgopreUxyudOtPHHh_11() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ___yoKfWhSGpjMHgopreUxyudOtPHHh_11)); }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * get_yoKfWhSGpjMHgopreUxyudOtPHHh_11() const { return ___yoKfWhSGpjMHgopreUxyudOtPHHh_11; }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 ** get_address_of_yoKfWhSGpjMHgopreUxyudOtPHHh_11() { return &___yoKfWhSGpjMHgopreUxyudOtPHHh_11; }
	inline void set_yoKfWhSGpjMHgopreUxyudOtPHHh_11(ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * value)
	{
		___yoKfWhSGpjMHgopreUxyudOtPHHh_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yoKfWhSGpjMHgopreUxyudOtPHHh_11), (void*)value);
	}

	inline static int32_t get_offset_of__playerId_12() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____playerId_12)); }
	inline int32_t get__playerId_12() const { return ____playerId_12; }
	inline int32_t* get_address_of__playerId_12() { return &____playerId_12; }
	inline void set__playerId_12(int32_t value)
	{
		____playerId_12 = value;
	}

	inline static int32_t get_offset_of__controllerId_13() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____controllerId_13)); }
	inline int32_t get__controllerId_13() const { return ____controllerId_13; }
	inline int32_t* get_address_of__controllerId_13() { return &____controllerId_13; }
	inline void set__controllerId_13(int32_t value)
	{
		____controllerId_13 = value;
	}

	inline static int32_t get_offset_of__controllerType_14() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D, ____controllerType_14)); }
	inline int32_t get__controllerType_14() const { return ____controllerType_14; }
	inline int32_t* get_address_of__controllerType_14() { return &____controllerType_14; }
	inline void set__controllerType_14(int32_t value)
	{
		____controllerType_14 = value;
	}
};

struct ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D_StaticFields
{
public:
	// System.Int32 Rewired.ControllerMap::TMzSxjjyapuKOmNiKYPcOmUjpTlD
	int32_t ___TMzSxjjyapuKOmNiKYPcOmUjpTlD_15;

public:
	inline static int32_t get_offset_of_TMzSxjjyapuKOmNiKYPcOmUjpTlD_15() { return static_cast<int32_t>(offsetof(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D_StaticFields, ___TMzSxjjyapuKOmNiKYPcOmUjpTlD_15)); }
	inline int32_t get_TMzSxjjyapuKOmNiKYPcOmUjpTlD_15() const { return ___TMzSxjjyapuKOmNiKYPcOmUjpTlD_15; }
	inline int32_t* get_address_of_TMzSxjjyapuKOmNiKYPcOmUjpTlD_15() { return &___TMzSxjjyapuKOmNiKYPcOmUjpTlD_15; }
	inline void set_TMzSxjjyapuKOmNiKYPcOmUjpTlD_15(int32_t value)
	{
		___TMzSxjjyapuKOmNiKYPcOmUjpTlD_15 = value;
	}
};


// Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 
{
public:
	// System.Boolean Rewired.ElementAssignmentConflictInfo::rtKmAKSFItMMpRWEuhaFffvHwDsu
	bool ___rtKmAKSFItMMpRWEuhaFffvHwDsu_0;
	// System.Boolean Rewired.ElementAssignmentConflictInfo::cKcmQFFTLKYbwUkpKgtibAUiudpb
	bool ___cKcmQFFTLKYbwUkpKgtibAUiudpb_1;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::DCGJXzigEdTcwzFynDKUcORiHGSOA
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_2;
	// Rewired.ControllerType Rewired.ElementAssignmentConflictInfo::KHkewZTAeuvHVDDJaWvnQRRxxDiF
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::UceKlChkUHGjQaNwpAzeqaieFMpt
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_4;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::ckPQPTauGgjqsjnoEwPMbqktUGkt
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_5;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::HMJUwIEbjwQyUZsaCSgzsDgauWV
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	// Rewired.ControllerElementType Rewired.ElementAssignmentConflictInfo::RUyyQSEmqRidLNphokXShBrzehNy
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_7;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::NPuaUGjYHfmjnFZazhpMoRbThWzG
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_8;
	// UnityEngine.KeyCode Rewired.ElementAssignmentConflictInfo::KXtzntqEOewzFQVRaxggtOiPPVwx
	int32_t ___KXtzntqEOewzFQVRaxggtOiPPVwx_9;
	// Rewired.ModifierKeyFlags Rewired.ElementAssignmentConflictInfo::njfMvUCuswHuLtHoZcdqAwTyNgamA
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::JwOchbdvhsvHVdSyYjtqEJdTZzYG
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;

public:
	inline static int32_t get_offset_of_rtKmAKSFItMMpRWEuhaFffvHwDsu_0() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___rtKmAKSFItMMpRWEuhaFffvHwDsu_0)); }
	inline bool get_rtKmAKSFItMMpRWEuhaFffvHwDsu_0() const { return ___rtKmAKSFItMMpRWEuhaFffvHwDsu_0; }
	inline bool* get_address_of_rtKmAKSFItMMpRWEuhaFffvHwDsu_0() { return &___rtKmAKSFItMMpRWEuhaFffvHwDsu_0; }
	inline void set_rtKmAKSFItMMpRWEuhaFffvHwDsu_0(bool value)
	{
		___rtKmAKSFItMMpRWEuhaFffvHwDsu_0 = value;
	}

	inline static int32_t get_offset_of_cKcmQFFTLKYbwUkpKgtibAUiudpb_1() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___cKcmQFFTLKYbwUkpKgtibAUiudpb_1)); }
	inline bool get_cKcmQFFTLKYbwUkpKgtibAUiudpb_1() const { return ___cKcmQFFTLKYbwUkpKgtibAUiudpb_1; }
	inline bool* get_address_of_cKcmQFFTLKYbwUkpKgtibAUiudpb_1() { return &___cKcmQFFTLKYbwUkpKgtibAUiudpb_1; }
	inline void set_cKcmQFFTLKYbwUkpKgtibAUiudpb_1(bool value)
	{
		___cKcmQFFTLKYbwUkpKgtibAUiudpb_1 = value;
	}

	inline static int32_t get_offset_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_2() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___DCGJXzigEdTcwzFynDKUcORiHGSOA_2)); }
	inline int32_t get_DCGJXzigEdTcwzFynDKUcORiHGSOA_2() const { return ___DCGJXzigEdTcwzFynDKUcORiHGSOA_2; }
	inline int32_t* get_address_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_2() { return &___DCGJXzigEdTcwzFynDKUcORiHGSOA_2; }
	inline void set_DCGJXzigEdTcwzFynDKUcORiHGSOA_2(int32_t value)
	{
		___DCGJXzigEdTcwzFynDKUcORiHGSOA_2 = value;
	}

	inline static int32_t get_offset_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_3() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3)); }
	inline int32_t get_KHkewZTAeuvHVDDJaWvnQRRxxDiF_3() const { return ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3; }
	inline int32_t* get_address_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_3() { return &___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3; }
	inline void set_KHkewZTAeuvHVDDJaWvnQRRxxDiF_3(int32_t value)
	{
		___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3 = value;
	}

	inline static int32_t get_offset_of_UceKlChkUHGjQaNwpAzeqaieFMpt_4() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___UceKlChkUHGjQaNwpAzeqaieFMpt_4)); }
	inline int32_t get_UceKlChkUHGjQaNwpAzeqaieFMpt_4() const { return ___UceKlChkUHGjQaNwpAzeqaieFMpt_4; }
	inline int32_t* get_address_of_UceKlChkUHGjQaNwpAzeqaieFMpt_4() { return &___UceKlChkUHGjQaNwpAzeqaieFMpt_4; }
	inline void set_UceKlChkUHGjQaNwpAzeqaieFMpt_4(int32_t value)
	{
		___UceKlChkUHGjQaNwpAzeqaieFMpt_4 = value;
	}

	inline static int32_t get_offset_of_ckPQPTauGgjqsjnoEwPMbqktUGkt_5() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___ckPQPTauGgjqsjnoEwPMbqktUGkt_5)); }
	inline int32_t get_ckPQPTauGgjqsjnoEwPMbqktUGkt_5() const { return ___ckPQPTauGgjqsjnoEwPMbqktUGkt_5; }
	inline int32_t* get_address_of_ckPQPTauGgjqsjnoEwPMbqktUGkt_5() { return &___ckPQPTauGgjqsjnoEwPMbqktUGkt_5; }
	inline void set_ckPQPTauGgjqsjnoEwPMbqktUGkt_5(int32_t value)
	{
		___ckPQPTauGgjqsjnoEwPMbqktUGkt_5 = value;
	}

	inline static int32_t get_offset_of_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6)); }
	inline int32_t get_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() const { return ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6; }
	inline int32_t* get_address_of_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() { return &___HMJUwIEbjwQyUZsaCSgzsDgauWV_6; }
	inline void set_HMJUwIEbjwQyUZsaCSgzsDgauWV_6(int32_t value)
	{
		___HMJUwIEbjwQyUZsaCSgzsDgauWV_6 = value;
	}

	inline static int32_t get_offset_of_RUyyQSEmqRidLNphokXShBrzehNy_7() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___RUyyQSEmqRidLNphokXShBrzehNy_7)); }
	inline int32_t get_RUyyQSEmqRidLNphokXShBrzehNy_7() const { return ___RUyyQSEmqRidLNphokXShBrzehNy_7; }
	inline int32_t* get_address_of_RUyyQSEmqRidLNphokXShBrzehNy_7() { return &___RUyyQSEmqRidLNphokXShBrzehNy_7; }
	inline void set_RUyyQSEmqRidLNphokXShBrzehNy_7(int32_t value)
	{
		___RUyyQSEmqRidLNphokXShBrzehNy_7 = value;
	}

	inline static int32_t get_offset_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_8() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___NPuaUGjYHfmjnFZazhpMoRbThWzG_8)); }
	inline int32_t get_NPuaUGjYHfmjnFZazhpMoRbThWzG_8() const { return ___NPuaUGjYHfmjnFZazhpMoRbThWzG_8; }
	inline int32_t* get_address_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_8() { return &___NPuaUGjYHfmjnFZazhpMoRbThWzG_8; }
	inline void set_NPuaUGjYHfmjnFZazhpMoRbThWzG_8(int32_t value)
	{
		___NPuaUGjYHfmjnFZazhpMoRbThWzG_8 = value;
	}

	inline static int32_t get_offset_of_KXtzntqEOewzFQVRaxggtOiPPVwx_9() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___KXtzntqEOewzFQVRaxggtOiPPVwx_9)); }
	inline int32_t get_KXtzntqEOewzFQVRaxggtOiPPVwx_9() const { return ___KXtzntqEOewzFQVRaxggtOiPPVwx_9; }
	inline int32_t* get_address_of_KXtzntqEOewzFQVRaxggtOiPPVwx_9() { return &___KXtzntqEOewzFQVRaxggtOiPPVwx_9; }
	inline void set_KXtzntqEOewzFQVRaxggtOiPPVwx_9(int32_t value)
	{
		___KXtzntqEOewzFQVRaxggtOiPPVwx_9 = value;
	}

	inline static int32_t get_offset_of_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10)); }
	inline int32_t get_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() const { return ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10; }
	inline int32_t* get_address_of_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() { return &___njfMvUCuswHuLtHoZcdqAwTyNgamA_10; }
	inline void set_njfMvUCuswHuLtHoZcdqAwTyNgamA_10(int32_t value)
	{
		___njfMvUCuswHuLtHoZcdqAwTyNgamA_10 = value;
	}

	inline static int32_t get_offset_of_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721, ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11)); }
	inline int32_t get_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() const { return ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11; }
	inline int32_t* get_address_of_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() { return &___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11; }
	inline void set_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11(int32_t value)
	{
		___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11 = value;
	}
};

// Native definition for P/Invoke marshalling of Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_marshaled_pinvoke
{
	int32_t ___rtKmAKSFItMMpRWEuhaFffvHwDsu_0;
	int32_t ___cKcmQFFTLKYbwUkpKgtibAUiudpb_1;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_2;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_4;
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_5;
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_7;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_8;
	int32_t ___KXtzntqEOewzFQVRaxggtOiPPVwx_9;
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;
};
// Native definition for COM marshalling of Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_marshaled_com
{
	int32_t ___rtKmAKSFItMMpRWEuhaFffvHwDsu_0;
	int32_t ___cKcmQFFTLKYbwUkpKgtibAUiudpb_1;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_2;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_3;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_4;
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_5;
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_7;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_8;
	int32_t ___KXtzntqEOewzFQVRaxggtOiPPVwx_9;
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>
struct xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF  : public RuntimeObject
{
public:
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// tmPBYsdGCEOnbogabbGMuUDuHrHj`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::xWSXClSoSXqSOyHuTBmDpNuPDFUE
	tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * ___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3;
	// tmPBYsdGCEOnbogabbGMuUDuHrHj`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::oGBfseuEUHAeReWreIWWRxvOEuXr
	tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * ___oGBfseuEUHAeReWreIWWRxvOEuXr_4;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::JqjXscgYJCBWoBQevWOUKOFcuoAj
	RuntimeObject * ___JqjXscgYJCBWoBQevWOUKOFcuoAj_5;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::QxfxwQEdrUwglmnqQMywlyTVzCfK
	RuntimeObject * ___QxfxwQEdrUwglmnqQMywlyTVzCfK_6;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_7;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::TtytLoUfsgUyhsklaKccrnoMiiek
	ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * ___TtytLoUfsgUyhsklaKccrnoMiiek_11;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::pnzSyQiGomphPyQUZqSimyUVoWVK
	int32_t ___pnzSyQiGomphPyQUZqSimyUVoWVK_12;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::wvICkaVYiVimAbCZjjjEGpOLkAqU
	int32_t ___wvICkaVYiVimAbCZjjjEGpOLkAqU_13;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::gFpfxYoGAEbAvfIvnQdMoFBwiAddA
	int32_t ___gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::jlIXVZDtFsnROBFFeioGjHLtDHTQA
	int32_t ___jlIXVZDtFsnROBFFeioGjHLtDHTQA_15;
	// Rewired.InputMapCategory Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::STdVkeWiaQaJpCcdGMbaLyGekstk
	InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * ___STdVkeWiaQaJpCcdGMbaLyGekstk_16;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_17;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_18;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3)); }
	inline tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * get_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3() const { return ___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3; }
	inline tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 ** get_address_of_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3() { return &___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3; }
	inline void set_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * value)
	{
		___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xWSXClSoSXqSOyHuTBmDpNuPDFUE_3), (void*)value);
	}

	inline static int32_t get_offset_of_oGBfseuEUHAeReWreIWWRxvOEuXr_4() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___oGBfseuEUHAeReWreIWWRxvOEuXr_4)); }
	inline tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * get_oGBfseuEUHAeReWreIWWRxvOEuXr_4() const { return ___oGBfseuEUHAeReWreIWWRxvOEuXr_4; }
	inline tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 ** get_address_of_oGBfseuEUHAeReWreIWWRxvOEuXr_4() { return &___oGBfseuEUHAeReWreIWWRxvOEuXr_4; }
	inline void set_oGBfseuEUHAeReWreIWWRxvOEuXr_4(tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * value)
	{
		___oGBfseuEUHAeReWreIWWRxvOEuXr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oGBfseuEUHAeReWreIWWRxvOEuXr_4), (void*)value);
	}

	inline static int32_t get_offset_of_JqjXscgYJCBWoBQevWOUKOFcuoAj_5() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___JqjXscgYJCBWoBQevWOUKOFcuoAj_5)); }
	inline RuntimeObject * get_JqjXscgYJCBWoBQevWOUKOFcuoAj_5() const { return ___JqjXscgYJCBWoBQevWOUKOFcuoAj_5; }
	inline RuntimeObject ** get_address_of_JqjXscgYJCBWoBQevWOUKOFcuoAj_5() { return &___JqjXscgYJCBWoBQevWOUKOFcuoAj_5; }
	inline void set_JqjXscgYJCBWoBQevWOUKOFcuoAj_5(RuntimeObject * value)
	{
		___JqjXscgYJCBWoBQevWOUKOFcuoAj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JqjXscgYJCBWoBQevWOUKOFcuoAj_5), (void*)value);
	}

	inline static int32_t get_offset_of_QxfxwQEdrUwglmnqQMywlyTVzCfK_6() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___QxfxwQEdrUwglmnqQMywlyTVzCfK_6)); }
	inline RuntimeObject * get_QxfxwQEdrUwglmnqQMywlyTVzCfK_6() const { return ___QxfxwQEdrUwglmnqQMywlyTVzCfK_6; }
	inline RuntimeObject ** get_address_of_QxfxwQEdrUwglmnqQMywlyTVzCfK_6() { return &___QxfxwQEdrUwglmnqQMywlyTVzCfK_6; }
	inline void set_QxfxwQEdrUwglmnqQMywlyTVzCfK_6(RuntimeObject * value)
	{
		___QxfxwQEdrUwglmnqQMywlyTVzCfK_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QxfxwQEdrUwglmnqQMywlyTVzCfK_6), (void*)value);
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___HIuFjgoQMMeZHtUafJbERKutTjQt_7)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_7() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_7 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_8(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_8 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_11() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___TtytLoUfsgUyhsklaKccrnoMiiek_11)); }
	inline ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * get_TtytLoUfsgUyhsklaKccrnoMiiek_11() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_11; }
	inline ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_11() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_11; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_11(ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_11), (void*)value);
	}

	inline static int32_t get_offset_of_pnzSyQiGomphPyQUZqSimyUVoWVK_12() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___pnzSyQiGomphPyQUZqSimyUVoWVK_12)); }
	inline int32_t get_pnzSyQiGomphPyQUZqSimyUVoWVK_12() const { return ___pnzSyQiGomphPyQUZqSimyUVoWVK_12; }
	inline int32_t* get_address_of_pnzSyQiGomphPyQUZqSimyUVoWVK_12() { return &___pnzSyQiGomphPyQUZqSimyUVoWVK_12; }
	inline void set_pnzSyQiGomphPyQUZqSimyUVoWVK_12(int32_t value)
	{
		___pnzSyQiGomphPyQUZqSimyUVoWVK_12 = value;
	}

	inline static int32_t get_offset_of_wvICkaVYiVimAbCZjjjEGpOLkAqU_13() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___wvICkaVYiVimAbCZjjjEGpOLkAqU_13)); }
	inline int32_t get_wvICkaVYiVimAbCZjjjEGpOLkAqU_13() const { return ___wvICkaVYiVimAbCZjjjEGpOLkAqU_13; }
	inline int32_t* get_address_of_wvICkaVYiVimAbCZjjjEGpOLkAqU_13() { return &___wvICkaVYiVimAbCZjjjEGpOLkAqU_13; }
	inline void set_wvICkaVYiVimAbCZjjjEGpOLkAqU_13(int32_t value)
	{
		___wvICkaVYiVimAbCZjjjEGpOLkAqU_13 = value;
	}

	inline static int32_t get_offset_of_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14)); }
	inline int32_t get_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14() const { return ___gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14; }
	inline int32_t* get_address_of_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14() { return &___gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14; }
	inline void set_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14(int32_t value)
	{
		___gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14 = value;
	}

	inline static int32_t get_offset_of_jlIXVZDtFsnROBFFeioGjHLtDHTQA_15() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___jlIXVZDtFsnROBFFeioGjHLtDHTQA_15)); }
	inline int32_t get_jlIXVZDtFsnROBFFeioGjHLtDHTQA_15() const { return ___jlIXVZDtFsnROBFFeioGjHLtDHTQA_15; }
	inline int32_t* get_address_of_jlIXVZDtFsnROBFFeioGjHLtDHTQA_15() { return &___jlIXVZDtFsnROBFFeioGjHLtDHTQA_15; }
	inline void set_jlIXVZDtFsnROBFFeioGjHLtDHTQA_15(int32_t value)
	{
		___jlIXVZDtFsnROBFFeioGjHLtDHTQA_15 = value;
	}

	inline static int32_t get_offset_of_STdVkeWiaQaJpCcdGMbaLyGekstk_16() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___STdVkeWiaQaJpCcdGMbaLyGekstk_16)); }
	inline InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * get_STdVkeWiaQaJpCcdGMbaLyGekstk_16() const { return ___STdVkeWiaQaJpCcdGMbaLyGekstk_16; }
	inline InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C ** get_address_of_STdVkeWiaQaJpCcdGMbaLyGekstk_16() { return &___STdVkeWiaQaJpCcdGMbaLyGekstk_16; }
	inline void set_STdVkeWiaQaJpCcdGMbaLyGekstk_16(InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * value)
	{
		___STdVkeWiaQaJpCcdGMbaLyGekstk_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___STdVkeWiaQaJpCcdGMbaLyGekstk_16), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_17() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_17)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_17() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_17; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_17() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_17; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_17(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_17 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_18() { return static_cast<int32_t>(offsetof(xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_18)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_18() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_18; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_18() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_18; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_18(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_18), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093 (uint8_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// Rewired.ReInput/MappingHelper Rewired.ReInput::get_mapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * ReInput_get_mapping_m50C89F39E4213A29DE4D12C55F10C4CCB28D26BB (const RuntimeMethod* method);
// System.Int32 Rewired.ControllerMap::get_categoryId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_categoryId_m07F288F2819E33005FF4BD9CEFACDB1E30D38085 (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * __this, const RuntimeMethod* method);
// Rewired.InputMapCategory Rewired.ReInput/MappingHelper::GetMapCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * MappingHelper_GetMapCategory_mA048CB73E3B1123976D5693D1E7931BB6D9E7797 (MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * __this, int32_t ___mapCategoryId0, const RuntimeMethod* method);
// System.Boolean Rewired.ControllerMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerMap_get_enabled_m470C40390CA53B3F17C122FF8BF0274C52FFC654 (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * __this, const RuntimeMethod* method);
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper::hdiHaSsrVnTablWnuQPjPPuqmPNH(Rewired.InputMapCategory,Rewired.ControllerMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConflictCheckingHelper_hdiHaSsrVnTablWnuQPjPPuqmPNH_m2A663D840A802A55DD061E2701F9BEC90D514CAD (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * __this, InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * p0, ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * p1, const RuntimeMethod* method);
// System.Void Rewired.ElementAssignmentConflictInfo::.ctor(Rewired.ElementAssignmentConflictInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo__ctor_m8C8A2D38BB3C25622AC2B1DB6C47EBE7A06125DC (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  p0, const RuntimeMethod* method);
// System.Void Rewired.ElementAssignmentConflictInfo::JTlChJEDrPyhCpommhesSOVQjIrlA(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_JTlChJEDrPyhCpommhesSOVQjIrlA_m2679E7D3EE8C4FC15DBA2BC9351D6D4B3CFFBD5B_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Rewired.ElementAssignmentConflictInfo::wlAgKJIIcfcfQdqTuFSHQypFIQRO(Rewired.ControllerType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_wlAgKJIIcfcfQdqTuFSHQypFIQRO_m4DDB8BAAC7561B1383822713725D271ED02DFB52_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Rewired.ElementAssignmentConflictInfo::CvTXqvoxPGOpJIGVlCfgqxiAAxFI(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_CvTXqvoxPGOpJIGVlCfgqxiAAxFI_m29DFA26ABE24F86E5D843081334A0DE4D5EE5D4B_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE7FD1E4AAAB1B73522158FAA3299AA115EAC02F4 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_mA2566B8013452216500D7005DFA11BA81EC21210_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m9B2B0C40C091122475AD8E21DA4B0BB6704A55DD_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m3837AF772BF590A8413B9125D29CC94DD9B75AA2_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m48A68B70BDEC4BD2D44984104C42AEDF7DD4A52F_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m2550FE35809A0611555134BB783863B9806E6DBD_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Int32,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m66AAB048E85671AFABB44F4B254EAA1E26345660_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t98ACDCCD5DFC00DA45EC6640AC54D28B0126F8D1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m5F60073B08828365DC63AA38CAE4DD9FAD442D13_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m1199D7874FB8E674E4A5195D87C9811F78DAC5B1_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m7E2021BECB2A89FB83DB2B13AC414C2545165C12_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_mCCD24C74AE3CC5FB210488E8B12CBB75A30059B4_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m2F4C3D366117C667F099BAFFD2E13847C9A254C4_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m114DE89854AAD890AE6C4E66BD151D34B444371D_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tD2A53E264562D0C359CAD90A96F1AB9A0A48E6E1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m6B5694D9C6593601010B88C85639B76A50601347_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_mCE62CBE0CB37E36527830207A256E67E47B5AB90_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m59D5CC9200042B8AAC3D01671A5A1AFC522A4900_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m43748515E81B4BCCCC9B02AC1FA679FD535FFA13_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_mBF9101B2BAA5CE409CC3B2D4EA858E1201E679B3_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.IndexedDictionary`2/nnXpQNToQOcOXCGmLUrlooHLNULg<System.Object,Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_mE57303EF02BCD0279F325230B9C0C6BB3E27EC06_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t46AB0D4A3B7D168C93F74F0150C30D1441FAD0BA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m2BBB66B4D427274E6601000DFB4CEFC372DB38DE_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_mF9487659C5FC9E4E3CD92410B494C80C84D84C1B_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m6C21F7FFE5FD62F16C5704E51C8D7ED49D25B90A_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m432096E466675D33C5D6C156EF126DBF89D586B1_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_mC2425728C0D3CFF26D09A917CDEA81F30EA6DC81_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m00CF6BDC09D0006CD87C5C021018CEFA7DBA677F_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB07B2544C1280B31788C9C549E760AB8D18B15EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_mF71AEC72364A9A30444CB1DE93708ED385ADD349_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m862C7CA9907439304EE06213A097F9A01C47C8D4_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_mDF317BFA257C1936683B272983D2345B97ACCF36_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m3A2182F57CC93ED2F9D34BD0DBFDBE07EC9F15EC_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_mD7644B52E551EAE3D253267D4AEF51A360F2FC5D_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m79405EC7E3E59E363327CF644A92EDBB8445DCB0_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t108DF0D4E29AADABDF2147FFBFC12DFE008A0100 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m89E8C2CE93DB4EF33D5D19F60D1AA0A95C1CA6E8_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m486142A82F80922D40774EEAE083D3CF5E0D9A71_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m822323A60D0E7A88E562F3550B144289B6CCF4DB_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m4AD5BA1B1D693D9D869B406754DA428B1F71A0B0_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m3C97CA6190B59CBDDCDF175A37274B22CC6F4EA4_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m0FF1FCFC30F2971B73F6F53A69D5D80A3805A2AE_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t4485139997CEB69C6DFAEC88C70820BF2E32CFD4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m56BED7EEE06E3C3BB96602DAEBD00D19B9096F4E_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m1ECBD386A4B62720C1D77D195289F0A0CB67411A_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_mBFCCC6A88BAACD81086AF7CCB82C59EC8CB80128_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m41AB4BB8FE5C4F45C56D10E79FC8171160F45703_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m50CB3FA3F80B1B8705D617BB08FDE82CB0C7F5AF_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.IntPtr>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m0991B758F0CC6DD36A422A49C677D3C545917609_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t9BF107C09783AEE40302DF6DEBB1E5B421DAA7C8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m5499FDDBCEA3FF51E04CF95B6ECCBD51B1810DE2_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m6782981E0BA7F6BC4690724521D5BF9D29354B97_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m8C657924C285F8177A5DEEB2BFC2521ABB8EC621_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m284306345F51BF433687725046F49638768443D3_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m96A3F7CC5824DC658D6AFAD5707545BF388D7BEC_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m542D1FD24D4A351C0F8958B97F29F8016CDE16C6_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tEB5442F5357AEE195B1C21250937208C2ABEE204 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m715F85A6C22A76E9CAFF2DFD24F3D05E9DD44A1B_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m6D5183E7AFEDB524E53A0D58721CE80BA86EBAC3_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_mF73D8480CBB424F87ACF122DFD2D0FB4654C6282_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_mBBCB0AFF1E6811922A02E63C221C83D8D1A34389_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m7C7A290BC8426E58FF293E5B40487718BB167C07_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m204935675A465F7BC802779A477BCF9D0E9AF8AD_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t48305EF39FE41D3DC40A163CB0D40A2BC6117B7A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m41D9E23EDFE339D47C688C44F5B4225764246A63_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_m0B570C3F57476694B9DCC431C96CFB384582A4BA_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m9D2D38C91ABA9C8D2324F0753C4EC3FF428F30A3_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m21723225F3294918037EA4A741BA5A067C8D97D2_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m67F92FF85EFA431741AE93E4269278B1DF7B8601_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<nSQKzuFgkuUgePhnvOTkeuGuQDqo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_mF8F80842D701122CA06DEB4D4BC3438BEB79CC42_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t2B9A40B52D42ADD37AEE705C4F2A1484570D859A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_mE0251B691B96DA418608A0360E4B65793F15F42D_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_mDA5FFED254ED4C27A6DC8B730828E540DD49C873_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_mC18ABB35B47AD8A95F0F102E2DDD70ABB8627416_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m3B65479F04A5B84FCC23E67FB299A0631A61AB34_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m5DEF3F9EE42F58A806E671E804988EBC1E6A23E9_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<Rewired.Utils.Classes.Data.SerializedObject/AhoBNMNzWieULmaZjWUIulsNcWuAA>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_m5F38785D2939263E1343B884079C29DFBEF5CD30_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_tB077C8C9C4757913D651004CA7F374B8CE2030AA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<?> Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::LIuPjCmDvVMYdSpFXybZDRrEnmIi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * wArbswEROYSIldLWMJeAXCdoxbzuA_LIuPjCmDvVMYdSpFXybZDRrEnmIi_m80529E9236D5703C6438FBB6EA8ABA92B7F6CAD3_gshared (const RuntimeMethod* method)
{
	wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * G_B2_0 = NULL;
	wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * G_B1_0 = NULL;
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * L_0 = ((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_mJiiUbHNLBekzUQakGJdNUzzeWhy_0();
		wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * L_1 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * L_2 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * L_3 = (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)L_2;
		((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_mJiiUbHNLBekzUQakGJdNUzzeWhy_0(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)G_B2_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_Equals_mF8D069EC1D11121AB8973A826BDC8BFB3FDE6EFC_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_GetHashCode_m39F51161B997179802FBB432500C631D3CED7EED_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_m5111B9229C948E0B734597AED742936F9542E093((uint8_t*)(uint8_t*)(&___obj0), /*hidden argument*/NULL);
		return (int32_t)L_0;
	}
}
// System.Boolean Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_Equals_m143C2F2F469E2351AACEABB5429B4A9478DCA448_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
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
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___x0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_3 = ___y1;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_3, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		RuntimeObject * L_4 = ___x0;
		RuntimeObject * L_5 = ___y1;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *, uint8_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_6;
	}
}
// System.Int32 Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t wArbswEROYSIldLWMJeAXCdoxbzuA_System_Collections_IEqualityComparer_GetHashCode_m9B25259AD5DEF317321E185495FF10564E985667_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (int32_t)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)__this);
		int32_t L_3;
		L_3 = ((  int32_t (*) (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_3;
	}
}
// System.Void Rewired.Utils.EqualityComparerNoAlloc`1/wArbswEROYSIldLWMJeAXCdoxbzuA<lOaGwNFKosAYVzBMPIOzPQUuPhbib/CdtWXqrdQkFHHZzIVmcIUCnhRWfL>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wArbswEROYSIldLWMJeAXCdoxbzuA__ctor_mAE7E1A0362BD015634E86F6D7BCC792860CCA919_gshared (wArbswEROYSIldLWMJeAXCdoxbzuA_t19B0E8FA61236DAE0726224091B843B0F26F7150 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xAWZvtDLKGBwNoOdaldpyAREKxkM_1__ctor_m07E3D83C021BF7CBAF417E0B3293223CB260E134_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_IDisposable_Dispose_m5CCD9838434D21EE12E7DD945AF98996C318577D_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = (int32_t)__this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		NullCheck((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this);
		((  void (*) (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool xAWZvtDLKGBwNoOdaldpyAREKxkM_1_MoveNext_m515422FF08EB137652DF6F6C8A7C6F5E0F4C7C3B_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * V_2 = NULL;
	ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * V_3 = NULL;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)__this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = (int32_t)L_0;
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_1 = (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 *)__this->get_TtytLoUfsgUyhsklaKccrnoMiiek_11();
			V_2 = (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 *)L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0142;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_0197;
		}

IL_001f:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * L_4 = (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)__this->get_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3();
			if (!L_4)
			{
				goto IL_003b;
			}
		}

IL_002e:
		{
			RuntimeObject * L_5 = (RuntimeObject *)__this->get_JqjXscgYJCBWoBQevWOUKOFcuoAj_5();
			if (L_5)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			V_0 = (bool)0;
			goto IL_0197;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * L_6;
			L_6 = ReInput_get_mapping_m50C89F39E4213A29DE4D12C55F10C4CCB28D26BB(/*hidden argument*/NULL);
			RuntimeObject * L_7 = (RuntimeObject *)__this->get_JqjXscgYJCBWoBQevWOUKOFcuoAj_5();
			NullCheck((ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_7);
			int32_t L_8;
			L_8 = ControllerMap_get_categoryId_m07F288F2819E33005FF4BD9CEFACDB1E30D38085((ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_7, /*hidden argument*/NULL);
			NullCheck((MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *)L_6);
			InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * L_9;
			L_9 = MappingHelper_GetMapCategory_mA048CB73E3B1123976D5693D1E7931BB6D9E7797((MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 *)L_6, (int32_t)L_8, /*hidden argument*/NULL);
			__this->set_STdVkeWiaQaJpCcdGMbaLyGekstk_16(L_9);
			InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * L_10 = (InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C *)__this->get_STdVkeWiaQaJpCcdGMbaLyGekstk_16();
			if (L_10)
			{
				goto IL_0071;
			}
		}

IL_006a:
		{
			V_0 = (bool)0;
			goto IL_0197;
		}

IL_0071:
		{
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_17(0);
			goto IL_0176;
		}

IL_007d:
		{
			tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * L_11 = (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)__this->get_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3();
			int32_t L_12 = (int32_t)__this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_17();
			NullCheck((tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)L_11);
			RuntimeObject * L_13;
			L_13 = ((  RuntimeObject * (*) (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			V_3 = (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_13;
			bool L_14 = (bool)__this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_7();
			if (!L_14)
			{
				goto IL_00a7;
			}
		}

IL_009c:
		{
			ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * L_15 = V_3;
			NullCheck((ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_15);
			bool L_16;
			L_16 = ControllerMap_get_enabled_m470C40390CA53B3F17C122FF8BF0274C52FFC654((ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0164;
			}
		}

IL_00a7:
		{
			bool L_17 = (bool)__this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9();
			if (L_17)
			{
				goto IL_00c1;
			}
		}

IL_00af:
		{
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_18 = V_2;
			InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C * L_19 = (InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C *)__this->get_STdVkeWiaQaJpCcdGMbaLyGekstk_16();
			ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * L_20 = V_3;
			NullCheck((ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 *)L_18);
			bool L_21;
			L_21 = ConflictCheckingHelper_hdiHaSsrVnTablWnuQPjPPuqmPNH_m2A663D840A802A55DD061E2701F9BEC90D514CAD((ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 *)L_18, (InputMapCategory_t753B867C2AED066C9E3C5F0EC4EAF954D131658C *)L_19, (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0164;
			}
		}

IL_00c1:
		{
			ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * L_22 = V_3;
			RuntimeObject * L_23 = (RuntimeObject *)__this->get_JqjXscgYJCBWoBQevWOUKOFcuoAj_5();
			bool L_24 = (bool)__this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_7();
			NullCheck((ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_22);
			RuntimeObject* L_25;
			L_25 = VirtFuncInvoker2< RuntimeObject*, ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *, bool >::Invoke(20 /* System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.ControllerMap::ElementAssignmentConflicts(Rewired.ControllerMap,System.Boolean) */, (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_22, (ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D *)L_23, (bool)L_24);
			NullCheck((RuntimeObject*)L_25);
			RuntimeObject* L_26;
			L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_18(L_26);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_014a;
		}

IL_00ed:
		{
			RuntimeObject* L_27 = (RuntimeObject*)__this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_18();
			NullCheck((RuntimeObject*)L_27);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_28;
			L_28 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
			V_4 = (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )L_28;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_29 = V_4;
			ElementAssignmentConflictInfo__ctor_m8C8A2D38BB3C25622AC2B1DB6C47EBE7A06125DC((ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(&V_5), (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )L_29, /*hidden argument*/NULL);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_30 = V_2;
			NullCheck(L_30);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_31 = (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)L_30->get_XAbNzJSvSNjTFwhnJridEdiVWtEM_0();
			NullCheck(L_31);
			int32_t L_32 = (int32_t)L_31->get_YVGDeWQAhUWKAOSPoxXuizkXaiTI_2();
			ElementAssignmentConflictInfo_JTlChJEDrPyhCpommhesSOVQjIrlA_m2679E7D3EE8C4FC15DBA2BC9351D6D4B3CFFBD5B_inline((ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(&V_5), (int32_t)L_32, /*hidden argument*/NULL);
			int32_t L_33 = (int32_t)__this->get_pnzSyQiGomphPyQUZqSimyUVoWVK_12();
			ElementAssignmentConflictInfo_wlAgKJIIcfcfQdqTuFSHQypFIQRO_m4DDB8BAAC7561B1383822713725D271ED02DFB52_inline((ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(&V_5), (int32_t)L_33, /*hidden argument*/NULL);
			int32_t L_34 = (int32_t)__this->get_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14();
			ElementAssignmentConflictInfo_CvTXqvoxPGOpJIGVlCfgqxiAAxFI_m29DFA26ABE24F86E5D843081334A0DE4D5EE5D4B_inline((ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 *)(&V_5), (int32_t)L_34, /*hidden argument*/NULL);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_35 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_35);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_0197;
		}

IL_0142:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_014a:
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_18();
			NullCheck((RuntimeObject*)L_36);
			bool L_37;
			L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			if (L_37)
			{
				goto IL_00ed;
			}
		}

IL_0157:
		{
			NullCheck((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this);
			((  void (*) (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_18((RuntimeObject*)NULL);
		}

IL_0164:
		{
			int32_t L_38 = (int32_t)__this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_17();
			V_6 = (int32_t)L_38;
			int32_t L_39 = V_6;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_17(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		}

IL_0176:
		{
			int32_t L_40 = (int32_t)__this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_17();
			tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * L_41 = (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)__this->get_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3();
			NullCheck((tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)L_41);
			int32_t L_42;
			L_42 = ((  int32_t (*) (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
			if ((((int32_t)L_40) < ((int32_t)L_42)))
			{
				goto IL_007d;
			}
		}

IL_018c:
		{
			V_0 = (bool)0;
			goto IL_0197;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0190;
	}

FAULT_0190:
	{ // begin fault (depth: 1)
		NullCheck((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this);
		((  void (*) (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		IL2CPP_END_FINALLY(400)
	} // end fault
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0197:
	{
		bool L_43 = V_0;
		return (bool)L_43;
	}
}
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xAWZvtDLKGBwNoOdaldpyAREKxkM_1_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC8112A6CC88AA589A823334CAA7B28F7CD2A511A_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_18();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_18();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_m5CBCCE12938FD38A15BC427DBDD204F346E6A386_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )__this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )L_0;
	}
}
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_IEnumerator_Reset_m9FAD3ED0CE8A8FB9C9543A903289063ACB391E2A_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_IEnumerator_Reset_m9FAD3ED0CE8A8FB9C9543A903289063ACB391E2A_RuntimeMethod_var)));
	}
}
// System.Object Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_IEnumerator_get_Current_m91540D00D6BE4B476BFC4121634548ED1C546F41_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )__this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 )L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m19CCA85BAC14E89572E9AA5CFB36E55C5E8ED84B_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this;
		goto IL_003a;
	}

IL_0027:
	{
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_4 = (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_4, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)L_4;
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_5 = V_0;
		ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_6 = (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 *)__this->get_TtytLoUfsgUyhsklaKccrnoMiiek_11();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_11(L_6);
	}

IL_003a:
	{
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_7 = V_0;
		int32_t L_8 = (int32_t)__this->get_wvICkaVYiVimAbCZjjjEGpOLkAqU_13();
		NullCheck(L_7);
		L_7->set_pnzSyQiGomphPyQUZqSimyUVoWVK_12(L_8);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_9 = V_0;
		int32_t L_10 = (int32_t)__this->get_jlIXVZDtFsnROBFFeioGjHLtDHTQA_15();
		NullCheck(L_9);
		L_9->set_gFpfxYoGAEbAvfIvnQdMoFBwiAddA_14(L_10);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_11 = V_0;
		RuntimeObject * L_12 = (RuntimeObject *)__this->get_QxfxwQEdrUwglmnqQMywlyTVzCfK_6();
		NullCheck(L_11);
		L_11->set_JqjXscgYJCBWoBQevWOUKOFcuoAj_5(L_12);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_13 = V_0;
		bool L_14 = (bool)__this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8();
		NullCheck(L_13);
		L_13->set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(L_14);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_15 = V_0;
		bool L_16 = (bool)__this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10();
		NullCheck(L_15);
		L_15->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(L_16);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_17 = V_0;
		tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 * L_18 = (tmPBYsdGCEOnbogabbGMuUDuHrHj_1_tD200643C31CACCE5ED7321B788917F0D030A2C71 *)__this->get_oGBfseuEUHAeReWreIWWRxvOEuXr_4();
		NullCheck(L_17);
		L_17->set_xWSXClSoSXqSOyHuTBmDpNuPDFUE_3(L_18);
		xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * L_19 = V_0;
		return (RuntimeObject*)L_19;
	}
}
// System.Collections.IEnumerator Rewired.Player/ControllerHelper/ConflictCheckingHelper/xAWZvtDLKGBwNoOdaldpyAREKxkM`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xAWZvtDLKGBwNoOdaldpyAREKxkM_1_System_Collections_IEnumerable_GetEnumerator_mDD2E66C351AC4D58DBA1FCE01E1670519D119D21_gshared (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((xAWZvtDLKGBwNoOdaldpyAREKxkM_1_t53163C1124BD81C978954F4D44A2AC88A76188EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_0;
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
// System.Void ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xDMeWSgLfoREkVdoVIIzinNjKoJc__ctor_mB44689ABD491A9646468C9BCE23CD07AF2392D71_gshared (xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/xDMeWSgLfoREkVdoVIIzinNjKoJc<System.Object>::qYHdAyOAzfkmFHLRISqgUGHbsEVy(ZwDloEtZBOpgSMOMTiwZBlYlgeQCA`1/imnmUTPynnSebJugdVyxlrHRxXLm<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool xDMeWSgLfoREkVdoVIIzinNjKoJc_qYHdAyOAzfkmFHLRISqgUGHbsEVy_m86FF307163CE1F6EC01868428CC97FEDA243477D_gshared (xDMeWSgLfoREkVdoVIIzinNjKoJc_t63306A6F7F1E140FA4AD9BDE6D94B1AD85F6A149 * __this, imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67 * p0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67 * L_1 = p0;
		NullCheck(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)L_1->get_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0();
		RuntimeObject * L_3 = (RuntimeObject *)__this->get_WUeFPJaEWbVRprOwcEhhdDLoRqieA_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_2, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		imnmUTPynnSebJugdVyxlrHRxXLm_tFD6C7FE0E674A564014B63401AD46B8063BC6D67 * L_5 = p0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1();
		int32_t L_7 = (int32_t)__this->get_zCReGrIKaGDiebYAdEKHNKYMyFBzA_1();
		return (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
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
// System.Void Rewired.UpdateLoopDataSet`1/xsMJBGmRwWlPzYApiztwYCiVQxLi<System.Object>::.ctor(Rewired.UpdateLoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xsMJBGmRwWlPzYApiztwYCiVQxLi__ctor_mD21506C15F86B5D57A3BC6BADC1BB7FA870A96A4_gshared (xsMJBGmRwWlPzYApiztwYCiVQxLi_t87B12F3FBF24CB90F55D337F3A683C971F3B1FC3 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_PiEdbgjMHSsksYjRKSGckYZEsfAE_0(L_0);
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
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::uueJiYlwOmDHUNibKhvQHVAwRDveA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_uueJiYlwOmDHUNibKhvQHVAwRDveA_m5261E17D8716B2171F6482B8B94682A34AF32477_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::JXQYCqxIFkDGZeLuFZlXEfMklrZtA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_JXQYCqxIFkDGZeLuFZlXEfMklrZtA_m60A0E4ABF49D195A492DD0C47F72EBEC639E9B4F_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		int32_t L_1 = (int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		G_B1_0 = L_1;
		if (!L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		G_B2_0 = G_B1_0;
	}

IL_0013:
	{
		return (bool)G_B2_0;
	}
}
// ? zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::fdWsvXBYwYDYVxuAObwqwefAvLip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_fdWsvXBYwYDYVxuAObwqwefAvLip_mDBFD54DBCBBB00D878269768FDE14954F15D527B_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
		return (bool)L_0;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::.ctor(System.Boolean,System.Func`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m1D5376E131519DE8EF0F955DD4AFFC8DA583BD7C_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, bool p0, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = p0;
		__this->set_rEkAjSkJQsJIwYRoeExNyXIfzLep_5(L_0);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = p1;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45A81267D699970B09DEE0F3FB4B558B501AF827)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m1D5376E131519DE8EF0F955DD4AFFC8DA583BD7C_RuntimeMethod_var)));
	}

IL_001b:
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = p1;
		__this->set_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4(L_3);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_4 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_4, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)), /*hidden argument*/NULL);
		__this->set_SiXixQSMucyuJvNwhknxJlowTWAA_2(L_4);
		RuntimeObject * L_5 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_5, /*hidden argument*/NULL);
		__this->set_PdLebfCotqexuGgniZIhMvALVeSjB_3(L_5);
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		bool L_6 = p0;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_004e:
	{
		return;
	}
}
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::uRxHPttoThKrBNCurCuvwPhMcGUfA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_uRxHPttoThKrBNCurCuvwPhMcGUfA_m5CDED36E44596DC5D08027DDB97ED1E5D2E768BE_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
			if ((!(((uint32_t)L_2) == ((uint32_t)1))))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_1 = (bool)0;
			IL2CPP_LEAVE(0x5A, FINALLY_002f);
		}

IL_001a:
		{
			bool* L_3 = (bool*)__this->get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
			il2cpp_codegen_initobj(L_3, sizeof(bool));
			__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(1);
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
	{
		bool L_5 = (bool)__this->get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5();
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_6 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)__this->get_SiXixQSMucyuJvNwhknxJlowTWAA_2();
		((  void (*) (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		goto IL_0058;
	}

IL_004b:
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_7 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)__this->get_SiXixQSMucyuJvNwhknxJlowTWAA_2();
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_mE7FD1E4AAAB1B73522158FAA3299AA115EAC02F4((WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)L_7, (RuntimeObject *)__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return (bool)1;
	}

IL_005a:
	{
		bool L_9 = V_1;
		return (bool)L_9;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::ZrbFhGEbWRbTzVxxQimUntnkwisKA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_ZrbFhGEbWRbTzVxxQimUntnkwisKA_mC3E38F6E1678C24CE12E5CE5C595B74B7565CBC1_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool* L_2 = (bool*)__this->get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::YnXqJKSXpGAWUEZqqLOFfvlYcBEw(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_YnXqJKSXpGAWUEZqqLOFfvlYcBEw_m7D973FB7ED57B43D4CA03D37DDD2E7D8CD616AA1_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}

IL_0018:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)__this->get_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4();
			NullCheck((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)L_3);
			bool L_4;
			L_4 = ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
			__this->set_TzxgiwAmsezBHlJhnNRRkIJteFpY_1(L_4);
			__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(2);
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::lDxnsjCDTQrmresvWgbliNUVruIc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_lDxnsjCDTQrmresvWgbliNUVruIc_m4DD0BA7B073E6C1EF720C9C4207174C9321BF4A9_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean) */, (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::zNJVymYugIbeeZuNgMrKxyYWbziV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_zNJVymYugIbeeZuNgMrKxyYWbziV_m9DF23003D8EBD61F2816DA2797456721C2D67744_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean) */, (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Boolean>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_lDxnsjCDTQrmresvWgbliNUVruIc_mF26992931798FDCCE0D4C724ED4BFB57A12A546D_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 * __this, bool p0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_NchdYNbKzqsssgcQJdenZuGqXgLo_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = p0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this);
		((  void (*) (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_t9482C34D01C804ABAEBC35FC0D024C4DE632AB99 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0012:
	{
		bool L_2 = (bool)__this->get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_001f:
	{
		__this->set_NchdYNbKzqsssgcQJdenZuGqXgLo_6((bool)1);
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
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::uueJiYlwOmDHUNibKhvQHVAwRDveA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_uueJiYlwOmDHUNibKhvQHVAwRDveA_mB9959F2367ECA5C1D3495E3A6458D47C1528CC44_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::JXQYCqxIFkDGZeLuFZlXEfMklrZtA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_JXQYCqxIFkDGZeLuFZlXEfMklrZtA_m44B4E5D9622E8E47E02B911564D24EE895A54749_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
		int32_t L_1 = (int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		G_B1_0 = L_1;
		if (!L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		G_B2_0 = G_B1_0;
	}

IL_0013:
	{
		return (bool)G_B2_0;
	}
}
// ? zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::fdWsvXBYwYDYVxuAObwqwefAvLip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_fdWsvXBYwYDYVxuAObwqwefAvLip_mB405918F48FC199063CAC8E45E8E2F060F3C4923_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::.ctor(System.Boolean,System.Func`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m0096A4366DBC35FA0990E6803466BAB690BDFAE2_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, bool p0, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = p0;
		__this->set_rEkAjSkJQsJIwYRoeExNyXIfzLep_5(L_0);
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_1 = p1;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45A81267D699970B09DEE0F3FB4B558B501AF827)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&zCiKSorjoVkhIfNAHGoZOwuVeIyT_1__ctor_m0096A4366DBC35FA0990E6803466BAB690BDFAE2_RuntimeMethod_var)));
	}

IL_001b:
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_3 = p1;
		__this->set_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4(L_3);
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_4 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_4, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)), /*hidden argument*/NULL);
		__this->set_SiXixQSMucyuJvNwhknxJlowTWAA_2(L_4);
		RuntimeObject * L_5 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_5, /*hidden argument*/NULL);
		__this->set_PdLebfCotqexuGgniZIhMvALVeSjB_3(L_5);
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		bool L_6 = p0;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_004e:
	{
		return;
	}
}
// System.Boolean zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::uRxHPttoThKrBNCurCuvwPhMcGUfA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_uRxHPttoThKrBNCurCuvwPhMcGUfA_mA656DAE3F2EF0027EDFC6EDE24AAA2AD1650C743_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
			if ((!(((uint32_t)L_2) == ((uint32_t)1))))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_1 = (bool)0;
			IL2CPP_LEAVE(0x5A, FINALLY_002f);
		}

IL_001a:
		{
			RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
			il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject *));
			__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(1);
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
	{
		bool L_5 = (bool)__this->get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5();
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_6 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)__this->get_SiXixQSMucyuJvNwhknxJlowTWAA_2();
		((  void (*) (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		goto IL_0058;
	}

IL_004b:
	{
		WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_7 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)__this->get_SiXixQSMucyuJvNwhknxJlowTWAA_2();
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_mE7FD1E4AAAB1B73522158FAA3299AA115EAC02F4((WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)L_7, (RuntimeObject *)__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return (bool)1;
	}

IL_005a:
	{
		bool L_9 = V_1;
		return (bool)L_9;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::ZrbFhGEbWRbTzVxxQimUntnkwisKA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_ZrbFhGEbWRbTzVxxQimUntnkwisKA_m6907752B54B2D1280EDD2D462B4C173887545DDA_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_TzxgiwAmsezBHlJhnNRRkIJteFpY_1();
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(0);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::YnXqJKSXpGAWUEZqqLOFfvlYcBEw(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_YnXqJKSXpGAWUEZqqLOFfvlYcBEw_m7A1408C76520173DEDF7CE3EA8ED29EF6246FC54_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_PdLebfCotqexuGgniZIhMvALVeSjB_3();
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mEE5A7B63923FB9E8B31A64390A26E3B3AEFAF7F7((RuntimeObject *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = (int32_t)__this->get_YBVLHhuEMfAdNIdivBJanHRaJQaM_0();
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}

IL_0018:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_3 = (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)__this->get_WcOlqlWHdVZXMWMHBWLvgwsXCteu_4();
			NullCheck((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_3);
			RuntimeObject * L_4;
			L_4 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
			__this->set_TzxgiwAmsezBHlJhnNRRkIJteFpY_1(L_4);
			__this->set_YBVLHhuEMfAdNIdivBJanHRaJQaM_0(2);
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1((RuntimeObject *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::lDxnsjCDTQrmresvWgbliNUVruIc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_lDxnsjCDTQrmresvWgbliNUVruIc_m4F23F9AC8F76D09F5D0CC5B2CE573419352E3C04_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean) */, (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::zNJVymYugIbeeZuNgMrKxyYWbziV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_zNJVymYugIbeeZuNgMrKxyYWbziV_mEC8F9665A7DB6A2C4725C422025E0751026E31FA_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean) */, (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void zCiKSorjoVkhIfNAHGoZOwuVeIyT`1<System.Object>::lDxnsjCDTQrmresvWgbliNUVruIc(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_lDxnsjCDTQrmresvWgbliNUVruIc_m30FB6BF49B2490A533AF4DB68DA2494FB723072F_gshared (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 * __this, bool p0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_NchdYNbKzqsssgcQJdenZuGqXgLo_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = p0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		NullCheck((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this);
		((  void (*) (zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((zCiKSorjoVkhIfNAHGoZOwuVeIyT_1_tCECF7B457837DD072F4D7CE407ABE7B7299BF055 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0012:
	{
		bool L_2 = (bool)__this->get_rEkAjSkJQsJIwYRoeExNyXIfzLep_5();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_001f:
	{
		__this->set_NchdYNbKzqsssgcQJdenZuGqXgLo_6((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_JTlChJEDrPyhCpommhesSOVQjIrlA_m2679E7D3EE8C4FC15DBA2BC9351D6D4B3CFFBD5B_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		__this->set_DCGJXzigEdTcwzFynDKUcORiHGSOA_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_wlAgKJIIcfcfQdqTuFSHQypFIQRO_m4DDB8BAAC7561B1383822713725D271ED02DFB52_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		__this->set_KHkewZTAeuvHVDDJaWvnQRRxxDiF_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ElementAssignmentConflictInfo_CvTXqvoxPGOpJIGVlCfgqxiAAxFI_m29DFA26ABE24F86E5D843081334A0DE4D5EE5D4B_inline (ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = p0;
		__this->set_UceKlChkUHGjQaNwpAzeqaieFMpt_4(L_0);
		return;
	}
}
