#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// Rewired.Utils.Classes.Data.ADictionary`2<System.Int32,pmhdIRhCoLlQZffSYgOmsLkpxsjN/PJMZIbSFLOAsjEebtpNfFsEvvMVbb>
struct ADictionary_2_tF3DFFD748F0B86E8F7C3CDE334C531B7BE9BB9F1;
// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap>
struct AList_1_tFC6844D93F59DB79C329A4AECBE45E8432028CFC;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Rewired.ControllerStatusChangedEventArgs>
struct Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A;
// System.Action`1<UnityEngine.FullScreenMode>
struct Action_1_tAD2B31A3F05D0E166AA6ADF95BC1A866EC04D5F2;
// System.Action`1<Rewired.UpdateLoopType>
struct Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3;
// System.Action`2<Rewired.ControllerType,System.Int32>
struct Action_2_t8379F1FFE6303A3B05EAEAEB60014120AA2CC538;
// System.Action`2<System.Int32,Rewired.ControllerDataUpdater>
struct Action_2_t7893BB102AD7DF4981A3D8760D8616A558E33977;
// System.Action`3<System.Boolean,System.Int32,System.Int32>
struct Action_3_t4E6238F5923C4067CE414EEB78776B166E41BEBC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6;
// System.Func`3<Rewired.Controller,System.Guid,System.Boolean>
struct Func_3_tC7CDCED8125464716673C1EE28F3A931BC20762C;
// System.Func`3<Rewired.Controller,System.Type,System.Boolean>
struct Func_3_t450ACC03ADE64895DE2392904F328C647165F55C;
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>
struct IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3;
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>
struct IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97;
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>
struct IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987;
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>
struct IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B;
// System.Collections.Generic.IList`1<Rewired.ActionElementMap>
struct IList_1_tDD0D439AC0C19AFF22C25D19667AFFC6FB4E4D5C;
// System.Collections.Generic.IList`1<Rewired.CustomController>
struct IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9;
// System.Collections.Generic.IList`1<Rewired.Joystick>
struct IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB;
// System.Collections.Generic.IList`1<Rewired.Player>
struct IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C;
// System.Collections.Generic.IList`1<Rewired.Controller/CompoundElement>
struct IList_1_tFE41A1E36308A5BF85DAFF1199CFFF41AA504042;
// System.Collections.Generic.IList`1<Rewired.Controller/Element>
struct IList_1_tBD4620FB508CBEF7C10A2301681040EFCE42F753;
// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.ActiveControllerChangedDelegate>
struct KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t7CD670BBE53CFBA060A2FD666CDDAD3D10EFBA57;
// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.PlayerActiveControllerChangedDelegate>
struct KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t5D3DC75C35FE3C1DA6A11A336F77CF43426C9ABC;
// System.Collections.Generic.List`1<Rewired.Controller>
struct List_1_t59162A5B40F5A456FB95DCA7AB9F81F095FB9D8C;
// System.Collections.Generic.List`1<Rewired.CustomController>
struct List_1_t24C19A41F7F7B493FB20286264B0171BD39A9F75;
// System.Collections.Generic.List`1<Rewired.Joystick>
struct List_1_t653C235E0A504D9E632D8E287742815F3802BD1F;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap>
struct ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller>
struct ReadOnlyCollection_1_tD0DE3DD96FE01F7F47376F031B79F8A6155D38EF;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate>
struct ReadOnlyCollection_1_tBE93B3A9A6765DFB527D9D1326BDC68318E55CFB;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.JoystickType>
struct ReadOnlyCollection_1_t245A5F483FC86FCE8F523B5685CCC251B8346714;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis>
struct ReadOnlyCollection_1_t87D02809CCBCDB8140E346DDA3F0843F50F7871F;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis2D>
struct ReadOnlyCollection_1_t4D2DA1D1F2AFAE868B9CC79BFFD445B34D4C42DB;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Button>
struct ReadOnlyCollection_1_tA9233C4BFF3FE1F9F86624120F0AA0D6A779E21D;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/CompoundElement>
struct ReadOnlyCollection_1_tF7D4DDAC6D5AF902F3A330CD2267A89817D880F2;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Element>
struct ReadOnlyCollection_1_t8ECE77472397A3167B3A93EC0B5A7C3560C97448;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Hat>
struct ReadOnlyCollection_1_tE80AF83113933EEC5AA20C3DF69343C44834ED47;
// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs>
struct SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598;
// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs>
struct SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F;
// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.PlayerActiveControllerChangedDelegate>[]
struct KxFbllcCGygjmUeLFqyAeiTIGWMf_1U5BU5D_t7723E812A567A3A9300AEDA10941E6541703CA36;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Rewired.IControllerTemplate[]
struct IControllerTemplateU5BU5D_tAB2CE74F6B138AF26BD21E5ECF585199E8A41DFE;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// ItaEjuKtoATtafYloiocFOanqPQc[]
struct ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6;
// Rewired.JoystickType[]
struct JoystickTypeU5BU5D_tBF881107A1B4DA23E3FB7734196B866E0EF65540;
// Rewired.Player[]
struct PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Rewired.Utils.Classes.Utility.TimerAbs[]
struct TimerAbsU5BU5D_t5110F2E50A329FE8F8B9E9924EC847080FAC1AF5;
// gTyYgmXURpDluqEDVAzYahaASSNCb[]
struct gTyYgmXURpDluqEDVAzYahaASSNCbU5BU5D_t0964D947D4A32740786C853F7FDC7B3189A7D668;
// Rewired.Controller/Axis[]
struct AxisU5BU5D_tF4D89F7138259317CAEDB9CCDE0F5038A9F6BCA9;
// Rewired.Controller/Axis2D[]
struct Axis2DU5BU5D_t8B30D85A4FDFB9B315ECE51A3AA27C4ABE980715;
// Rewired.Controller/Button[]
struct ButtonU5BU5D_t447D890CB7AB686BF4C5321FA3ECA01D1B36D38F;
// Rewired.Controller/Hat[]
struct HatU5BU5D_t47549FEE2F3BE2F181A4F7F36EA71FD47DE6C319;
// ItaEjuKtoATtafYloiocFOanqPQc[0...,0...]
struct ItaEjuKtoATtafYloiocFOanqPQcU5BU2CU5D_tFAA503EF7B06056D01D911DCD6363F593C9C13FB;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Rewired.ActionElementMap
struct ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537;
// BBctKivJxEjGKRzyEkHSRjJoJqnW
struct BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10;
// Rewired.CalibrationMap
struct CalibrationMap_t956E6C639DCA61300AFE35D2C65226183DFFCBDE;
// Rewired.Data.ConfigVars
struct ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03;
// Rewired.Data.ControllerDataFiles
struct ControllerDataFiles_t8E19CA6542D92ADE6C8BBC451AC22738803A4B61;
// Rewired.ControllerDataUpdater
struct ControllerDataUpdater_t3CD74FE6329BC8F9910EA24ADAED51CD6F6AD6E7;
// Rewired.ControllerMap
struct ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D;
// Rewired.ControllerWithAxes
struct ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Rewired.CustomControllerMap
struct CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// Rewired.HardwareControllerMap_Game
struct HardwareControllerMap_Game_tB4334BF87AC425C3C9CB4C6895FFFB76204A20E7;
// Rewired.Interfaces.IControllerAssigner
struct IControllerAssigner_t91D40EC79699E779EB143F7561B852A95AAABF65;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Rewired.Interfaces.IInputManagerJoystickPublic
struct IInputManagerJoystickPublic_t936328244F80FD714E239075B8BC1D890B5979AA;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// Rewired.Interfaces.IUnifiedKeyboardSource
struct IUnifiedKeyboardSource_t1AC0C933209E74FD41CFF5E1B7183924789B08B4;
// Rewired.Interfaces.IUnifiedMouseSource
struct IUnifiedMouseSource_t05E31CAE7FEBB169D194125D1D6D185384FECC61;
// Rewired.InputManager_Base
struct InputManager_Base_tCAC8EF372D63A0FA6FDC9D2D83AFC6E2AE17ACA3;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// Rewired.JoystickMap
struct JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951;
// Rewired.Keyboard
struct Keyboard_tAC0F1BB02181DB88C6859CC83B6CCC5DFD4FB871;
// Rewired.KeyboardMap
struct KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// Rewired.Mouse
struct Mouse_t0951C4724C43F3B3C9108A1337D9E7D1C087F954;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Rewired.PlatformInputManager
struct PlatformInputManager_t7FCA8CC07D7B77B9F368C4224CE8E21184228C97;
// Rewired.Player
struct Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Rewired.Utils.SafeAction
struct SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// Rewired.Utils.Classes.Utility.TimerAbs
struct TimerAbs_t853769877A40479D16E384FAC2FF477C0A7A4835;
// Rewired.Data.UserData
struct UserData_t4427A82FF543EBDF348050A2390ADD6D9DA48C1C;
// Rewired.Data.UserDataStore
struct UserDataStore_tA9914C1C5350516C21FF357E89352D4E38AE52DE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WiGEESztaQcOlAVSzDYLfidomemMA
struct WiGEESztaQcOlAVSzDYLfidomemMA_t12E93A731BB5D3D7C6A9C764C66699D19F4E23D8;
// YsOrrlNIumifyOKxnwVmvgJjFiYZ
struct YsOrrlNIumifyOKxnwVmvgJjFiYZ_tEF3D6F85C15E3C8F18D8C52D3C50DABAAB4231C0;
// gTyYgmXURpDluqEDVAzYahaASSNCb
struct gTyYgmXURpDluqEDVAzYahaASSNCb_t2BC45821C11CA778C9E0B85BA110F9659E3C5C48;
// jwwEVOVklpzvRHhBdNqsduEELqpv
struct jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2;
// nWObnmDQDyPAcKuVnyCIqGPjixDdb
struct nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602;
// pmhdIRhCoLlQZffSYgOmsLkpxsjN
struct pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB;
// Rewired.Controller/Extension
struct Extension_t76FEF4536CCC26B1CE19F86D50624757119FA1F7;
// Rewired.Player/ControllerHelper
struct ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268;
// Rewired.ReInput/ConfigHelper
struct ConfigHelper_tFD4D250A2384858C59BD27416B61B992E8115446;
// Rewired.ReInput/ControllerHelper
struct ControllerHelper_t1F189C4A6665BE43AEAD6FF1AD7F2A879D6B19F3;
// Rewired.ReInput/MappingHelper
struct MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126;
// Rewired.ReInput/MqUEZjlwiIeKTuXxUzFWBUliKyLL
struct MqUEZjlwiIeKTuXxUzFWBUliKyLL_t7507B4BBB0A38E3CD76BECBAAFE6BD5447B784BC;
// Rewired.ReInput/PlayerHelper
struct PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A;
// Rewired.ReInput/TimeHelper
struct TimeHelper_t9872564F84504E5F0CB2F711CD665D780872703D;
// Rewired.ReInput/UnityTouch
struct UnityTouch_tDDD52031E8E052D791D773F08E1477DE9D1D88A5;
// Rewired.ReInput/hZoSIeiGQlsNpxKnhkskatxNwdZA
struct hZoSIeiGQlsNpxKnhkskatxNwdZA_t4CC71F906A9790E78BE053F1E8440B1CE0172112;
// Rewired.Player/ControllerHelper/BYuFLYrdnTvMhPgAoDWdUTXeJgRw
struct BYuFLYrdnTvMhPgAoDWdUTXeJgRw_tE9A7E25A121BBB8163ACB60187B3D43A6343A349;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610;
// Rewired.Player/ControllerHelper/MapHelper
struct MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D;
// Rewired.Player/ControllerHelper/PollingHelper
struct PollingHelper_tE9EC170CBDD9D966088D85CE9065842F50898D67;
// Rewired.Player/ControllerHelper/SIBfUlfTgntgslhWDKNJqDKSOYphA
struct SIBfUlfTgntgslhWDKNJqDKSOYphA_tDCAE7ECCE9DB5EA67497C8A0379440348D43BE5F;
// Rewired.ReInput/ControllerHelper/PollingHelper
struct PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC
struct TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb
struct WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv
struct mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA
struct nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB
struct vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC
struct ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8;
// Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ
struct CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD;
// Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg
struct DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1;
// Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl
struct LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4;
// Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi
struct MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F;
// Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD
struct MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15;
// Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg
struct QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF;
// Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM
struct VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E;
// Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv
struct VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A;
// Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv
struct aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC;
// Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA
struct bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428;
// Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG
struct lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD;
// Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL
struct sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705;
// Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA
struct tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937;
// Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA
struct ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C;
// Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup
struct ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7;

IL2CPP_EXTERN_C RuntimeClass* ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_IEnumerator_Reset_mED6971B80F6EC1BBC4719F2DC3786F5D42D8B4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_IEnumerator_Reset_m5725B69358C3A951232A9085264E5786D4EC46E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_IEnumerator_Reset_m71ADB60C8FAA1C62ABCDFE950B44CED8F267E3FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_IEnumerator_Reset_m34B1B4E22EEE20E90BA42DE2323D59A41B62940C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_IEnumerator_Reset_mAB92E0BA13F5EE3FFF4BECEAF06400FEBDF8452C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_IEnumerator_Reset_mF2E57BFE669450EBFFF4D2594929E324ED92996D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_IEnumerator_Reset_m97F753F7BE2A06E9FF6CDAFE28E8EBB934B9CA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_IEnumerator_Reset_m8282E0A7ABA851227EAA3EE631C0404433C1B0B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_IEnumerator_Reset_mF1070F491637D10CFE5D3B0311D38DD8E40894D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_IEnumerator_Reset_mB759896C8975D53A05DF55D5FC7E5CDEEE1A0EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_IEnumerator_Reset_m74D22329749B7F9654D2C22A73DA3C1F6F290539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_IEnumerator_Reset_m25F3AC22395FFFA9F1E6D8724E20E933237A93AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_IEnumerator_Reset_m77A9FB5DE81DF21B37C7AEC77CC43C0CEEF17205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_IEnumerator_Reset_m3DAD000CD0566A235099E0DE4338A2158DE24971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_IEnumerator_Reset_mA18B78EFB449A9A62CB0BEF4FBB486F730F9E000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_IEnumerator_Reset_m69F0F7692F6EF05D07545D2B53DB2590D5512954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_IEnumerator_Reset_m45CEDAC313362E20507A56590B3EAEE46B7DD5E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_IEnumerator_Reset_m5EC5B78CA97CEA88F97E6C40904703EB17953920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_IEnumerator_Reset_mA2AA917692C2B6BC2694968836C5145C9F857BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_IEnumerator_Reset_m18ED040546255EE2510F7C6754573A11C9E7CE57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_IEnumerator_Reset_m4188CDD06F88BE62D4E7F15500F59BCEFFF3C21F_RuntimeMethod_var;
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

struct Il2CppArrayBounds;

// System.Array


// BBctKivJxEjGKRzyEkHSRjJoJqnW
struct BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10  : public RuntimeObject
{
public:
	// System.Int32 BBctKivJxEjGKRzyEkHSRjJoJqnW::gcznhDktyGCftDBMpxtFbLOxFwAg
	int32_t ___gcznhDktyGCftDBMpxtFbLOxFwAg_0;
	// System.Int32 BBctKivJxEjGKRzyEkHSRjJoJqnW::yWdrYraBblaXyeFWBvtthunxkAQNA
	int32_t ___yWdrYraBblaXyeFWBvtthunxkAQNA_1;
	// Rewired.Player BBctKivJxEjGKRzyEkHSRjJoJqnW::dPIAWppcMaaxGzcMrOGonBXQzXqJ
	Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * ___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2;
	// Rewired.Player[] BBctKivJxEjGKRzyEkHSRjJoJqnW::ZEETyWEfPMcQgBGMtHMYilOBxUXA
	PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* ___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3;
	// Rewired.Player[] BBctKivJxEjGKRzyEkHSRjJoJqnW::YsdVcyiGSSvqDbiDKKWiKnCuHAWB
	PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* ___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4;
	// System.Collections.Generic.IList`1<Rewired.Player> BBctKivJxEjGKRzyEkHSRjJoJqnW::QBTmfnuLmkWqGrYTHtzcouycAfBw
	RuntimeObject* ___QBTmfnuLmkWqGrYTHtzcouycAfBw_5;
	// System.Collections.Generic.IList`1<Rewired.Player> BBctKivJxEjGKRzyEkHSRjJoJqnW::XiZDdKkKiqMSUOtqNKwptXZMJABe
	RuntimeObject* ___XiZDdKkKiqMSUOtqNKwptXZMJABe_6;
	// Rewired.Data.ConfigVars BBctKivJxEjGKRzyEkHSRjJoJqnW::dNgrfdLJdsfeJmlYYJJiwGpIkluS
	ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7;
	// System.Boolean BBctKivJxEjGKRzyEkHSRjJoJqnW::jYTNgflwwEgvgbZuuTHYnPAnuRao
	bool ___jYTNgflwwEgvgbZuuTHYnPAnuRao_8;

public:
	inline static int32_t get_offset_of_gcznhDktyGCftDBMpxtFbLOxFwAg_0() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___gcznhDktyGCftDBMpxtFbLOxFwAg_0)); }
	inline int32_t get_gcznhDktyGCftDBMpxtFbLOxFwAg_0() const { return ___gcznhDktyGCftDBMpxtFbLOxFwAg_0; }
	inline int32_t* get_address_of_gcznhDktyGCftDBMpxtFbLOxFwAg_0() { return &___gcznhDktyGCftDBMpxtFbLOxFwAg_0; }
	inline void set_gcznhDktyGCftDBMpxtFbLOxFwAg_0(int32_t value)
	{
		___gcznhDktyGCftDBMpxtFbLOxFwAg_0 = value;
	}

	inline static int32_t get_offset_of_yWdrYraBblaXyeFWBvtthunxkAQNA_1() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___yWdrYraBblaXyeFWBvtthunxkAQNA_1)); }
	inline int32_t get_yWdrYraBblaXyeFWBvtthunxkAQNA_1() const { return ___yWdrYraBblaXyeFWBvtthunxkAQNA_1; }
	inline int32_t* get_address_of_yWdrYraBblaXyeFWBvtthunxkAQNA_1() { return &___yWdrYraBblaXyeFWBvtthunxkAQNA_1; }
	inline void set_yWdrYraBblaXyeFWBvtthunxkAQNA_1(int32_t value)
	{
		___yWdrYraBblaXyeFWBvtthunxkAQNA_1 = value;
	}

	inline static int32_t get_offset_of_dPIAWppcMaaxGzcMrOGonBXQzXqJ_2() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2)); }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * get_dPIAWppcMaaxGzcMrOGonBXQzXqJ_2() const { return ___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2; }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E ** get_address_of_dPIAWppcMaaxGzcMrOGonBXQzXqJ_2() { return &___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2; }
	inline void set_dPIAWppcMaaxGzcMrOGonBXQzXqJ_2(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * value)
	{
		___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dPIAWppcMaaxGzcMrOGonBXQzXqJ_2), (void*)value);
	}

	inline static int32_t get_offset_of_ZEETyWEfPMcQgBGMtHMYilOBxUXA_3() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3)); }
	inline PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* get_ZEETyWEfPMcQgBGMtHMYilOBxUXA_3() const { return ___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3; }
	inline PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477** get_address_of_ZEETyWEfPMcQgBGMtHMYilOBxUXA_3() { return &___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3; }
	inline void set_ZEETyWEfPMcQgBGMtHMYilOBxUXA_3(PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* value)
	{
		___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZEETyWEfPMcQgBGMtHMYilOBxUXA_3), (void*)value);
	}

	inline static int32_t get_offset_of_YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4)); }
	inline PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* get_YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4() const { return ___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4; }
	inline PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477** get_address_of_YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4() { return &___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4; }
	inline void set_YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4(PlayerU5BU5D_tECCB611376A9CBD2B79C3A1D9DEDECFE77278477* value)
	{
		___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YsdVcyiGSSvqDbiDKKWiKnCuHAWB_4), (void*)value);
	}

	inline static int32_t get_offset_of_QBTmfnuLmkWqGrYTHtzcouycAfBw_5() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___QBTmfnuLmkWqGrYTHtzcouycAfBw_5)); }
	inline RuntimeObject* get_QBTmfnuLmkWqGrYTHtzcouycAfBw_5() const { return ___QBTmfnuLmkWqGrYTHtzcouycAfBw_5; }
	inline RuntimeObject** get_address_of_QBTmfnuLmkWqGrYTHtzcouycAfBw_5() { return &___QBTmfnuLmkWqGrYTHtzcouycAfBw_5; }
	inline void set_QBTmfnuLmkWqGrYTHtzcouycAfBw_5(RuntimeObject* value)
	{
		___QBTmfnuLmkWqGrYTHtzcouycAfBw_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QBTmfnuLmkWqGrYTHtzcouycAfBw_5), (void*)value);
	}

	inline static int32_t get_offset_of_XiZDdKkKiqMSUOtqNKwptXZMJABe_6() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___XiZDdKkKiqMSUOtqNKwptXZMJABe_6)); }
	inline RuntimeObject* get_XiZDdKkKiqMSUOtqNKwptXZMJABe_6() const { return ___XiZDdKkKiqMSUOtqNKwptXZMJABe_6; }
	inline RuntimeObject** get_address_of_XiZDdKkKiqMSUOtqNKwptXZMJABe_6() { return &___XiZDdKkKiqMSUOtqNKwptXZMJABe_6; }
	inline void set_XiZDdKkKiqMSUOtqNKwptXZMJABe_6(RuntimeObject* value)
	{
		___XiZDdKkKiqMSUOtqNKwptXZMJABe_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XiZDdKkKiqMSUOtqNKwptXZMJABe_6), (void*)value);
	}

	inline static int32_t get_offset_of_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7)); }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * get_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() const { return ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7; }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 ** get_address_of_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() { return &___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7; }
	inline void set_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7(ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * value)
	{
		___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7), (void*)value);
	}

	inline static int32_t get_offset_of_jYTNgflwwEgvgbZuuTHYnPAnuRao_8() { return static_cast<int32_t>(offsetof(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10, ___jYTNgflwwEgvgbZuuTHYnPAnuRao_8)); }
	inline bool get_jYTNgflwwEgvgbZuuTHYnPAnuRao_8() const { return ___jYTNgflwwEgvgbZuuTHYnPAnuRao_8; }
	inline bool* get_address_of_jYTNgflwwEgvgbZuuTHYnPAnuRao_8() { return &___jYTNgflwwEgvgbZuuTHYnPAnuRao_8; }
	inline void set_jYTNgflwwEgvgbZuuTHYnPAnuRao_8(bool value)
	{
		___jYTNgflwwEgvgbZuuTHYnPAnuRao_8 = value;
	}
};


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

// pmhdIRhCoLlQZffSYgOmsLkpxsjN
struct pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Rewired.Joystick> pmhdIRhCoLlQZffSYgOmsLkpxsjN::YYasSHCtpzGGHqjStqqVkdXZiWHH
	List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * ___YYasSHCtpzGGHqjStqqVkdXZiWHH_0;
	// System.Collections.Generic.List`1<Rewired.Joystick> pmhdIRhCoLlQZffSYgOmsLkpxsjN::hXYIgyCpgDGjSSuuYxDApkRKvfGq
	List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * ___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1;
	// System.Collections.Generic.List`1<Rewired.CustomController> pmhdIRhCoLlQZffSYgOmsLkpxsjN::vUFoteRIgwMjMHesIRSyNjZtxfgn
	List_1_t24C19A41F7F7B493FB20286264B0171BD39A9F75 * ___vUFoteRIgwMjMHesIRSyNjZtxfgn_2;
	// System.Collections.Generic.List`1<Rewired.Controller> pmhdIRhCoLlQZffSYgOmsLkpxsjN::xLmeyCEvHjFDowSsezuNCUAMXWmL
	List_1_t59162A5B40F5A456FB95DCA7AB9F81F095FB9D8C * ___xLmeyCEvHjFDowSsezuNCUAMXWmL_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller> pmhdIRhCoLlQZffSYgOmsLkpxsjN::zAapaVyddVmRriQiWinbIMUoxoDW
	ReadOnlyCollection_1_tD0DE3DD96FE01F7F47376F031B79F8A6155D38EF * ___zAapaVyddVmRriQiWinbIMUoxoDW_4;
	// Rewired.Keyboard pmhdIRhCoLlQZffSYgOmsLkpxsjN::OlktKbOjbgGrTJEsAkUzsiYeMHYb
	Keyboard_tAC0F1BB02181DB88C6859CC83B6CCC5DFD4FB871 * ___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5;
	// Rewired.Mouse pmhdIRhCoLlQZffSYgOmsLkpxsjN::dEcTjrSkAbFekEIeQDAfncJOVAhdA
	Mouse_t0951C4724C43F3B3C9108A1337D9E7D1C087F954 * ___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6;
	// Rewired.Data.ConfigVars pmhdIRhCoLlQZffSYgOmsLkpxsjN::dNgrfdLJdsfeJmlYYJJiwGpIkluS
	ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7;
	// ItaEjuKtoATtafYloiocFOanqPQc[] pmhdIRhCoLlQZffSYgOmsLkpxsjN::ibSPyLhzomBLVYeqxJcktMghzOgj
	ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* ___ibSPyLhzomBLVYeqxJcktMghzOgj_8;
	// ItaEjuKtoATtafYloiocFOanqPQc[] pmhdIRhCoLlQZffSYgOmsLkpxsjN::tgNELAiNXZMjZMcUZhoHllhenZUfA
	ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* ___tgNELAiNXZMjZMcUZhoHllhenZUfA_9;
	// ItaEjuKtoATtafYloiocFOanqPQc[0...,0...] pmhdIRhCoLlQZffSYgOmsLkpxsjN::OUADEDsGMLnIILsOyroWSEdclIJD
	ItaEjuKtoATtafYloiocFOanqPQcU5BU2CU5D_tFAA503EF7B06056D01D911DCD6363F593C9C13FB* ___OUADEDsGMLnIILsOyroWSEdclIJD_10;
	// YsOrrlNIumifyOKxnwVmvgJjFiYZ pmhdIRhCoLlQZffSYgOmsLkpxsjN::tDEfcwuerNXHdNWhqfUXcHaLJUBh
	YsOrrlNIumifyOKxnwVmvgJjFiYZ_tEF3D6F85C15E3C8F18D8C52D3C50DABAAB4231C0 * ___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11;
	// gTyYgmXURpDluqEDVAzYahaASSNCb pmhdIRhCoLlQZffSYgOmsLkpxsjN::YIYErldVrijfYfrevxuAbluBNlnI
	gTyYgmXURpDluqEDVAzYahaASSNCb_t2BC45821C11CA778C9E0B85BA110F9659E3C5C48 * ___YIYErldVrijfYfrevxuAbluBNlnI_12;
	// gTyYgmXURpDluqEDVAzYahaASSNCb[] pmhdIRhCoLlQZffSYgOmsLkpxsjN::RfSHmwHwAbxbYEnRZzPmlzoVqRaV
	gTyYgmXURpDluqEDVAzYahaASSNCbU5BU5D_t0964D947D4A32740786C853F7FDC7B3189A7D668* ___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13;
	// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.ActiveControllerChangedDelegate> pmhdIRhCoLlQZffSYgOmsLkpxsjN::fyHVWbKFunKAyypmzpTWUaRdcnKjA
	KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t7CD670BBE53CFBA060A2FD666CDDAD3D10EFBA57 * ___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14;
	// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.PlayerActiveControllerChangedDelegate> pmhdIRhCoLlQZffSYgOmsLkpxsjN::xiubogzFXvIuQeBbfawPsDyKfmce
	KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t5D3DC75C35FE3C1DA6A11A336F77CF43426C9ABC * ___xiubogzFXvIuQeBbfawPsDyKfmce_15;
	// KxFbllcCGygjmUeLFqyAeiTIGWMf`1<Rewired.PlayerActiveControllerChangedDelegate>[] pmhdIRhCoLlQZffSYgOmsLkpxsjN::diKlwWVZnsNvkfCPbFhcQDkJDIsO
	KxFbllcCGygjmUeLFqyAeiTIGWMf_1U5BU5D_t7723E812A567A3A9300AEDA10941E6541703CA36* ___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16;
	// Rewired.Utils.Classes.Data.ADictionary`2<System.Int32,pmhdIRhCoLlQZffSYgOmsLkpxsjN/PJMZIbSFLOAsjEebtpNfFsEvvMVbb> pmhdIRhCoLlQZffSYgOmsLkpxsjN::hmyGBQfyaWazZLqcjhHmFczCcGjfB
	ADictionary_2_tF3DFFD748F0B86E8F7C3CDE334C531B7BE9BB9F1 * ___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17;
	// jwwEVOVklpzvRHhBdNqsduEELqpv pmhdIRhCoLlQZffSYgOmsLkpxsjN::sOyJxxGPTWlVyzPJIvrZyYyRatmE
	jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18;
	// System.Collections.Generic.IList`1<Rewired.Joystick> pmhdIRhCoLlQZffSYgOmsLkpxsjN::EZkeaGNjmfUUVrykZmLhuXIZgwOf
	RuntimeObject* ___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19;
	// System.Collections.Generic.IList`1<Rewired.CustomController> pmhdIRhCoLlQZffSYgOmsLkpxsjN::YhufnUJBrjmuLslaygcAwWOOSGscA
	RuntimeObject* ___YhufnUJBrjmuLslaygcAwWOOSGscA_20;
	// System.Int32 pmhdIRhCoLlQZffSYgOmsLkpxsjN::dVSeywEvtXvpViovnwUfHUKkKgtbb
	int32_t ___dVSeywEvtXvpViovnwUfHUKkKgtbb_21;
	// System.Boolean pmhdIRhCoLlQZffSYgOmsLkpxsjN::sXLLyWhVtnTsJUdLYDsshzdInxBV
	bool ___sXLLyWhVtnTsJUdLYDsshzdInxBV_22;
	// System.Boolean pmhdIRhCoLlQZffSYgOmsLkpxsjN::hnvMKVcKgNVmSXgWGXLrQdCHStBg
	bool ___hnvMKVcKgNVmSXgWGXLrQdCHStBg_23;
	// System.Boolean pmhdIRhCoLlQZffSYgOmsLkpxsjN::nzKAgdkNjptUfxogWPtGXJvoIweb
	bool ___nzKAgdkNjptUfxogWPtGXJvoIweb_24;
	// Rewired.Interfaces.IUnifiedKeyboardSource pmhdIRhCoLlQZffSYgOmsLkpxsjN::tSzApJiwheMYhjgvAaTrNbSHdHgP
	RuntimeObject* ___tSzApJiwheMYhjgvAaTrNbSHdHgP_25;
	// Rewired.Interfaces.IUnifiedMouseSource pmhdIRhCoLlQZffSYgOmsLkpxsjN::CDQvdxrBYeaibeuILXSWZTLflVSS
	RuntimeObject* ___CDQvdxrBYeaibeuILXSWZTLflVSS_26;
	// System.Int32 pmhdIRhCoLlQZffSYgOmsLkpxsjN::IagzVHFlWCLJUEfGubXiUScVfGmCA
	int32_t ___IagzVHFlWCLJUEfGubXiUScVfGmCA_27;
	// nWObnmDQDyPAcKuVnyCIqGPjixDdb pmhdIRhCoLlQZffSYgOmsLkpxsjN::GAwkqrvWlvpikRXvCLOCwZfKeMsC
	nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28;
	// BBctKivJxEjGKRzyEkHSRjJoJqnW pmhdIRhCoLlQZffSYgOmsLkpxsjN::hqGXmYxZUrSrCxDobJTGEPCWvHAsA
	BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29;
	// System.Int32 pmhdIRhCoLlQZffSYgOmsLkpxsjN::CQIAQFpzVmISknegYFOIxRunxPpK
	int32_t ___CQIAQFpzVmISknegYFOIxRunxPpK_30;
	// System.Int32 pmhdIRhCoLlQZffSYgOmsLkpxsjN::aLLlpNUjcfjiKpSIORbqbGLhIBol
	int32_t ___aLLlpNUjcfjiKpSIORbqbGLhIBol_31;
	// System.Action`2<System.Int32,Rewired.ControllerDataUpdater> pmhdIRhCoLlQZffSYgOmsLkpxsjN::xeKrMCpTCMtvKGhOQAkmgoChmmzib
	Action_2_t7893BB102AD7DF4981A3D8760D8616A558E33977 * ___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32;
	// System.Action`3<System.Boolean,System.Int32,System.Int32> pmhdIRhCoLlQZffSYgOmsLkpxsjN::jTGnCWWqtRRsUxstEqWASkKUAfYd
	Action_3_t4E6238F5923C4067CE414EEB78776B166E41BEBC * ___jTGnCWWqtRRsUxstEqWASkKUAfYd_33;
	// System.Action`1<Rewired.ControllerStatusChangedEventArgs> pmhdIRhCoLlQZffSYgOmsLkpxsjN::kGVOImGbVNwKiMTMLDkVUZdzwWAI
	Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A * ___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34;
	// System.Action`2<Rewired.ControllerType,System.Int32> pmhdIRhCoLlQZffSYgOmsLkpxsjN::lJrmwhYszLAVKekZLdGKVsHAVsdp
	Action_2_t8379F1FFE6303A3B05EAEAEB60014120AA2CC538 * ___lJrmwhYszLAVKekZLdGKVsHAVsdp_35;
	// System.Boolean pmhdIRhCoLlQZffSYgOmsLkpxsjN::AeWaeWamxRrERkciQkpFDWbRfZMkA
	bool ___AeWaeWamxRrERkciQkpFDWbRfZMkA_36;

public:
	inline static int32_t get_offset_of_YYasSHCtpzGGHqjStqqVkdXZiWHH_0() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___YYasSHCtpzGGHqjStqqVkdXZiWHH_0)); }
	inline List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * get_YYasSHCtpzGGHqjStqqVkdXZiWHH_0() const { return ___YYasSHCtpzGGHqjStqqVkdXZiWHH_0; }
	inline List_1_t653C235E0A504D9E632D8E287742815F3802BD1F ** get_address_of_YYasSHCtpzGGHqjStqqVkdXZiWHH_0() { return &___YYasSHCtpzGGHqjStqqVkdXZiWHH_0; }
	inline void set_YYasSHCtpzGGHqjStqqVkdXZiWHH_0(List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * value)
	{
		___YYasSHCtpzGGHqjStqqVkdXZiWHH_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YYasSHCtpzGGHqjStqqVkdXZiWHH_0), (void*)value);
	}

	inline static int32_t get_offset_of_hXYIgyCpgDGjSSuuYxDApkRKvfGq_1() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1)); }
	inline List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * get_hXYIgyCpgDGjSSuuYxDApkRKvfGq_1() const { return ___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1; }
	inline List_1_t653C235E0A504D9E632D8E287742815F3802BD1F ** get_address_of_hXYIgyCpgDGjSSuuYxDApkRKvfGq_1() { return &___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1; }
	inline void set_hXYIgyCpgDGjSSuuYxDApkRKvfGq_1(List_1_t653C235E0A504D9E632D8E287742815F3802BD1F * value)
	{
		___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hXYIgyCpgDGjSSuuYxDApkRKvfGq_1), (void*)value);
	}

	inline static int32_t get_offset_of_vUFoteRIgwMjMHesIRSyNjZtxfgn_2() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___vUFoteRIgwMjMHesIRSyNjZtxfgn_2)); }
	inline List_1_t24C19A41F7F7B493FB20286264B0171BD39A9F75 * get_vUFoteRIgwMjMHesIRSyNjZtxfgn_2() const { return ___vUFoteRIgwMjMHesIRSyNjZtxfgn_2; }
	inline List_1_t24C19A41F7F7B493FB20286264B0171BD39A9F75 ** get_address_of_vUFoteRIgwMjMHesIRSyNjZtxfgn_2() { return &___vUFoteRIgwMjMHesIRSyNjZtxfgn_2; }
	inline void set_vUFoteRIgwMjMHesIRSyNjZtxfgn_2(List_1_t24C19A41F7F7B493FB20286264B0171BD39A9F75 * value)
	{
		___vUFoteRIgwMjMHesIRSyNjZtxfgn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vUFoteRIgwMjMHesIRSyNjZtxfgn_2), (void*)value);
	}

	inline static int32_t get_offset_of_xLmeyCEvHjFDowSsezuNCUAMXWmL_3() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___xLmeyCEvHjFDowSsezuNCUAMXWmL_3)); }
	inline List_1_t59162A5B40F5A456FB95DCA7AB9F81F095FB9D8C * get_xLmeyCEvHjFDowSsezuNCUAMXWmL_3() const { return ___xLmeyCEvHjFDowSsezuNCUAMXWmL_3; }
	inline List_1_t59162A5B40F5A456FB95DCA7AB9F81F095FB9D8C ** get_address_of_xLmeyCEvHjFDowSsezuNCUAMXWmL_3() { return &___xLmeyCEvHjFDowSsezuNCUAMXWmL_3; }
	inline void set_xLmeyCEvHjFDowSsezuNCUAMXWmL_3(List_1_t59162A5B40F5A456FB95DCA7AB9F81F095FB9D8C * value)
	{
		___xLmeyCEvHjFDowSsezuNCUAMXWmL_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xLmeyCEvHjFDowSsezuNCUAMXWmL_3), (void*)value);
	}

	inline static int32_t get_offset_of_zAapaVyddVmRriQiWinbIMUoxoDW_4() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___zAapaVyddVmRriQiWinbIMUoxoDW_4)); }
	inline ReadOnlyCollection_1_tD0DE3DD96FE01F7F47376F031B79F8A6155D38EF * get_zAapaVyddVmRriQiWinbIMUoxoDW_4() const { return ___zAapaVyddVmRriQiWinbIMUoxoDW_4; }
	inline ReadOnlyCollection_1_tD0DE3DD96FE01F7F47376F031B79F8A6155D38EF ** get_address_of_zAapaVyddVmRriQiWinbIMUoxoDW_4() { return &___zAapaVyddVmRriQiWinbIMUoxoDW_4; }
	inline void set_zAapaVyddVmRriQiWinbIMUoxoDW_4(ReadOnlyCollection_1_tD0DE3DD96FE01F7F47376F031B79F8A6155D38EF * value)
	{
		___zAapaVyddVmRriQiWinbIMUoxoDW_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zAapaVyddVmRriQiWinbIMUoxoDW_4), (void*)value);
	}

	inline static int32_t get_offset_of_OlktKbOjbgGrTJEsAkUzsiYeMHYb_5() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5)); }
	inline Keyboard_tAC0F1BB02181DB88C6859CC83B6CCC5DFD4FB871 * get_OlktKbOjbgGrTJEsAkUzsiYeMHYb_5() const { return ___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5; }
	inline Keyboard_tAC0F1BB02181DB88C6859CC83B6CCC5DFD4FB871 ** get_address_of_OlktKbOjbgGrTJEsAkUzsiYeMHYb_5() { return &___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5; }
	inline void set_OlktKbOjbgGrTJEsAkUzsiYeMHYb_5(Keyboard_tAC0F1BB02181DB88C6859CC83B6CCC5DFD4FB871 * value)
	{
		___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OlktKbOjbgGrTJEsAkUzsiYeMHYb_5), (void*)value);
	}

	inline static int32_t get_offset_of_dEcTjrSkAbFekEIeQDAfncJOVAhdA_6() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6)); }
	inline Mouse_t0951C4724C43F3B3C9108A1337D9E7D1C087F954 * get_dEcTjrSkAbFekEIeQDAfncJOVAhdA_6() const { return ___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6; }
	inline Mouse_t0951C4724C43F3B3C9108A1337D9E7D1C087F954 ** get_address_of_dEcTjrSkAbFekEIeQDAfncJOVAhdA_6() { return &___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6; }
	inline void set_dEcTjrSkAbFekEIeQDAfncJOVAhdA_6(Mouse_t0951C4724C43F3B3C9108A1337D9E7D1C087F954 * value)
	{
		___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dEcTjrSkAbFekEIeQDAfncJOVAhdA_6), (void*)value);
	}

	inline static int32_t get_offset_of_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7)); }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * get_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() const { return ___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7; }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 ** get_address_of_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7() { return &___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7; }
	inline void set_dNgrfdLJdsfeJmlYYJJiwGpIkluS_7(ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * value)
	{
		___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dNgrfdLJdsfeJmlYYJJiwGpIkluS_7), (void*)value);
	}

	inline static int32_t get_offset_of_ibSPyLhzomBLVYeqxJcktMghzOgj_8() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___ibSPyLhzomBLVYeqxJcktMghzOgj_8)); }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* get_ibSPyLhzomBLVYeqxJcktMghzOgj_8() const { return ___ibSPyLhzomBLVYeqxJcktMghzOgj_8; }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6** get_address_of_ibSPyLhzomBLVYeqxJcktMghzOgj_8() { return &___ibSPyLhzomBLVYeqxJcktMghzOgj_8; }
	inline void set_ibSPyLhzomBLVYeqxJcktMghzOgj_8(ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* value)
	{
		___ibSPyLhzomBLVYeqxJcktMghzOgj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ibSPyLhzomBLVYeqxJcktMghzOgj_8), (void*)value);
	}

	inline static int32_t get_offset_of_tgNELAiNXZMjZMcUZhoHllhenZUfA_9() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___tgNELAiNXZMjZMcUZhoHllhenZUfA_9)); }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* get_tgNELAiNXZMjZMcUZhoHllhenZUfA_9() const { return ___tgNELAiNXZMjZMcUZhoHllhenZUfA_9; }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6** get_address_of_tgNELAiNXZMjZMcUZhoHllhenZUfA_9() { return &___tgNELAiNXZMjZMcUZhoHllhenZUfA_9; }
	inline void set_tgNELAiNXZMjZMcUZhoHllhenZUfA_9(ItaEjuKtoATtafYloiocFOanqPQcU5BU5D_t606C2BBD8301A5BAEC7DC6BBD6C3C30CD78983F6* value)
	{
		___tgNELAiNXZMjZMcUZhoHllhenZUfA_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tgNELAiNXZMjZMcUZhoHllhenZUfA_9), (void*)value);
	}

	inline static int32_t get_offset_of_OUADEDsGMLnIILsOyroWSEdclIJD_10() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___OUADEDsGMLnIILsOyroWSEdclIJD_10)); }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU2CU5D_tFAA503EF7B06056D01D911DCD6363F593C9C13FB* get_OUADEDsGMLnIILsOyroWSEdclIJD_10() const { return ___OUADEDsGMLnIILsOyroWSEdclIJD_10; }
	inline ItaEjuKtoATtafYloiocFOanqPQcU5BU2CU5D_tFAA503EF7B06056D01D911DCD6363F593C9C13FB** get_address_of_OUADEDsGMLnIILsOyroWSEdclIJD_10() { return &___OUADEDsGMLnIILsOyroWSEdclIJD_10; }
	inline void set_OUADEDsGMLnIILsOyroWSEdclIJD_10(ItaEjuKtoATtafYloiocFOanqPQcU5BU2CU5D_tFAA503EF7B06056D01D911DCD6363F593C9C13FB* value)
	{
		___OUADEDsGMLnIILsOyroWSEdclIJD_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OUADEDsGMLnIILsOyroWSEdclIJD_10), (void*)value);
	}

	inline static int32_t get_offset_of_tDEfcwuerNXHdNWhqfUXcHaLJUBh_11() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11)); }
	inline YsOrrlNIumifyOKxnwVmvgJjFiYZ_tEF3D6F85C15E3C8F18D8C52D3C50DABAAB4231C0 * get_tDEfcwuerNXHdNWhqfUXcHaLJUBh_11() const { return ___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11; }
	inline YsOrrlNIumifyOKxnwVmvgJjFiYZ_tEF3D6F85C15E3C8F18D8C52D3C50DABAAB4231C0 ** get_address_of_tDEfcwuerNXHdNWhqfUXcHaLJUBh_11() { return &___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11; }
	inline void set_tDEfcwuerNXHdNWhqfUXcHaLJUBh_11(YsOrrlNIumifyOKxnwVmvgJjFiYZ_tEF3D6F85C15E3C8F18D8C52D3C50DABAAB4231C0 * value)
	{
		___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tDEfcwuerNXHdNWhqfUXcHaLJUBh_11), (void*)value);
	}

	inline static int32_t get_offset_of_YIYErldVrijfYfrevxuAbluBNlnI_12() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___YIYErldVrijfYfrevxuAbluBNlnI_12)); }
	inline gTyYgmXURpDluqEDVAzYahaASSNCb_t2BC45821C11CA778C9E0B85BA110F9659E3C5C48 * get_YIYErldVrijfYfrevxuAbluBNlnI_12() const { return ___YIYErldVrijfYfrevxuAbluBNlnI_12; }
	inline gTyYgmXURpDluqEDVAzYahaASSNCb_t2BC45821C11CA778C9E0B85BA110F9659E3C5C48 ** get_address_of_YIYErldVrijfYfrevxuAbluBNlnI_12() { return &___YIYErldVrijfYfrevxuAbluBNlnI_12; }
	inline void set_YIYErldVrijfYfrevxuAbluBNlnI_12(gTyYgmXURpDluqEDVAzYahaASSNCb_t2BC45821C11CA778C9E0B85BA110F9659E3C5C48 * value)
	{
		___YIYErldVrijfYfrevxuAbluBNlnI_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YIYErldVrijfYfrevxuAbluBNlnI_12), (void*)value);
	}

	inline static int32_t get_offset_of_RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13)); }
	inline gTyYgmXURpDluqEDVAzYahaASSNCbU5BU5D_t0964D947D4A32740786C853F7FDC7B3189A7D668* get_RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13() const { return ___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13; }
	inline gTyYgmXURpDluqEDVAzYahaASSNCbU5BU5D_t0964D947D4A32740786C853F7FDC7B3189A7D668** get_address_of_RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13() { return &___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13; }
	inline void set_RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13(gTyYgmXURpDluqEDVAzYahaASSNCbU5BU5D_t0964D947D4A32740786C853F7FDC7B3189A7D668* value)
	{
		___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfSHmwHwAbxbYEnRZzPmlzoVqRaV_13), (void*)value);
	}

	inline static int32_t get_offset_of_fyHVWbKFunKAyypmzpTWUaRdcnKjA_14() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14)); }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t7CD670BBE53CFBA060A2FD666CDDAD3D10EFBA57 * get_fyHVWbKFunKAyypmzpTWUaRdcnKjA_14() const { return ___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14; }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t7CD670BBE53CFBA060A2FD666CDDAD3D10EFBA57 ** get_address_of_fyHVWbKFunKAyypmzpTWUaRdcnKjA_14() { return &___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14; }
	inline void set_fyHVWbKFunKAyypmzpTWUaRdcnKjA_14(KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t7CD670BBE53CFBA060A2FD666CDDAD3D10EFBA57 * value)
	{
		___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fyHVWbKFunKAyypmzpTWUaRdcnKjA_14), (void*)value);
	}

	inline static int32_t get_offset_of_xiubogzFXvIuQeBbfawPsDyKfmce_15() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___xiubogzFXvIuQeBbfawPsDyKfmce_15)); }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t5D3DC75C35FE3C1DA6A11A336F77CF43426C9ABC * get_xiubogzFXvIuQeBbfawPsDyKfmce_15() const { return ___xiubogzFXvIuQeBbfawPsDyKfmce_15; }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t5D3DC75C35FE3C1DA6A11A336F77CF43426C9ABC ** get_address_of_xiubogzFXvIuQeBbfawPsDyKfmce_15() { return &___xiubogzFXvIuQeBbfawPsDyKfmce_15; }
	inline void set_xiubogzFXvIuQeBbfawPsDyKfmce_15(KxFbllcCGygjmUeLFqyAeiTIGWMf_1_t5D3DC75C35FE3C1DA6A11A336F77CF43426C9ABC * value)
	{
		___xiubogzFXvIuQeBbfawPsDyKfmce_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xiubogzFXvIuQeBbfawPsDyKfmce_15), (void*)value);
	}

	inline static int32_t get_offset_of_diKlwWVZnsNvkfCPbFhcQDkJDIsO_16() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16)); }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1U5BU5D_t7723E812A567A3A9300AEDA10941E6541703CA36* get_diKlwWVZnsNvkfCPbFhcQDkJDIsO_16() const { return ___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16; }
	inline KxFbllcCGygjmUeLFqyAeiTIGWMf_1U5BU5D_t7723E812A567A3A9300AEDA10941E6541703CA36** get_address_of_diKlwWVZnsNvkfCPbFhcQDkJDIsO_16() { return &___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16; }
	inline void set_diKlwWVZnsNvkfCPbFhcQDkJDIsO_16(KxFbllcCGygjmUeLFqyAeiTIGWMf_1U5BU5D_t7723E812A567A3A9300AEDA10941E6541703CA36* value)
	{
		___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diKlwWVZnsNvkfCPbFhcQDkJDIsO_16), (void*)value);
	}

	inline static int32_t get_offset_of_hmyGBQfyaWazZLqcjhHmFczCcGjfB_17() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17)); }
	inline ADictionary_2_tF3DFFD748F0B86E8F7C3CDE334C531B7BE9BB9F1 * get_hmyGBQfyaWazZLqcjhHmFczCcGjfB_17() const { return ___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17; }
	inline ADictionary_2_tF3DFFD748F0B86E8F7C3CDE334C531B7BE9BB9F1 ** get_address_of_hmyGBQfyaWazZLqcjhHmFczCcGjfB_17() { return &___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17; }
	inline void set_hmyGBQfyaWazZLqcjhHmFczCcGjfB_17(ADictionary_2_tF3DFFD748F0B86E8F7C3CDE334C531B7BE9BB9F1 * value)
	{
		___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hmyGBQfyaWazZLqcjhHmFczCcGjfB_17), (void*)value);
	}

	inline static int32_t get_offset_of_sOyJxxGPTWlVyzPJIvrZyYyRatmE_18() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18)); }
	inline jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * get_sOyJxxGPTWlVyzPJIvrZyYyRatmE_18() const { return ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18; }
	inline jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 ** get_address_of_sOyJxxGPTWlVyzPJIvrZyYyRatmE_18() { return &___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18; }
	inline void set_sOyJxxGPTWlVyzPJIvrZyYyRatmE_18(jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * value)
	{
		___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sOyJxxGPTWlVyzPJIvrZyYyRatmE_18), (void*)value);
	}

	inline static int32_t get_offset_of_EZkeaGNjmfUUVrykZmLhuXIZgwOf_19() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19)); }
	inline RuntimeObject* get_EZkeaGNjmfUUVrykZmLhuXIZgwOf_19() const { return ___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19; }
	inline RuntimeObject** get_address_of_EZkeaGNjmfUUVrykZmLhuXIZgwOf_19() { return &___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19; }
	inline void set_EZkeaGNjmfUUVrykZmLhuXIZgwOf_19(RuntimeObject* value)
	{
		___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EZkeaGNjmfUUVrykZmLhuXIZgwOf_19), (void*)value);
	}

	inline static int32_t get_offset_of_YhufnUJBrjmuLslaygcAwWOOSGscA_20() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___YhufnUJBrjmuLslaygcAwWOOSGscA_20)); }
	inline RuntimeObject* get_YhufnUJBrjmuLslaygcAwWOOSGscA_20() const { return ___YhufnUJBrjmuLslaygcAwWOOSGscA_20; }
	inline RuntimeObject** get_address_of_YhufnUJBrjmuLslaygcAwWOOSGscA_20() { return &___YhufnUJBrjmuLslaygcAwWOOSGscA_20; }
	inline void set_YhufnUJBrjmuLslaygcAwWOOSGscA_20(RuntimeObject* value)
	{
		___YhufnUJBrjmuLslaygcAwWOOSGscA_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YhufnUJBrjmuLslaygcAwWOOSGscA_20), (void*)value);
	}

	inline static int32_t get_offset_of_dVSeywEvtXvpViovnwUfHUKkKgtbb_21() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___dVSeywEvtXvpViovnwUfHUKkKgtbb_21)); }
	inline int32_t get_dVSeywEvtXvpViovnwUfHUKkKgtbb_21() const { return ___dVSeywEvtXvpViovnwUfHUKkKgtbb_21; }
	inline int32_t* get_address_of_dVSeywEvtXvpViovnwUfHUKkKgtbb_21() { return &___dVSeywEvtXvpViovnwUfHUKkKgtbb_21; }
	inline void set_dVSeywEvtXvpViovnwUfHUKkKgtbb_21(int32_t value)
	{
		___dVSeywEvtXvpViovnwUfHUKkKgtbb_21 = value;
	}

	inline static int32_t get_offset_of_sXLLyWhVtnTsJUdLYDsshzdInxBV_22() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___sXLLyWhVtnTsJUdLYDsshzdInxBV_22)); }
	inline bool get_sXLLyWhVtnTsJUdLYDsshzdInxBV_22() const { return ___sXLLyWhVtnTsJUdLYDsshzdInxBV_22; }
	inline bool* get_address_of_sXLLyWhVtnTsJUdLYDsshzdInxBV_22() { return &___sXLLyWhVtnTsJUdLYDsshzdInxBV_22; }
	inline void set_sXLLyWhVtnTsJUdLYDsshzdInxBV_22(bool value)
	{
		___sXLLyWhVtnTsJUdLYDsshzdInxBV_22 = value;
	}

	inline static int32_t get_offset_of_hnvMKVcKgNVmSXgWGXLrQdCHStBg_23() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___hnvMKVcKgNVmSXgWGXLrQdCHStBg_23)); }
	inline bool get_hnvMKVcKgNVmSXgWGXLrQdCHStBg_23() const { return ___hnvMKVcKgNVmSXgWGXLrQdCHStBg_23; }
	inline bool* get_address_of_hnvMKVcKgNVmSXgWGXLrQdCHStBg_23() { return &___hnvMKVcKgNVmSXgWGXLrQdCHStBg_23; }
	inline void set_hnvMKVcKgNVmSXgWGXLrQdCHStBg_23(bool value)
	{
		___hnvMKVcKgNVmSXgWGXLrQdCHStBg_23 = value;
	}

	inline static int32_t get_offset_of_nzKAgdkNjptUfxogWPtGXJvoIweb_24() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___nzKAgdkNjptUfxogWPtGXJvoIweb_24)); }
	inline bool get_nzKAgdkNjptUfxogWPtGXJvoIweb_24() const { return ___nzKAgdkNjptUfxogWPtGXJvoIweb_24; }
	inline bool* get_address_of_nzKAgdkNjptUfxogWPtGXJvoIweb_24() { return &___nzKAgdkNjptUfxogWPtGXJvoIweb_24; }
	inline void set_nzKAgdkNjptUfxogWPtGXJvoIweb_24(bool value)
	{
		___nzKAgdkNjptUfxogWPtGXJvoIweb_24 = value;
	}

	inline static int32_t get_offset_of_tSzApJiwheMYhjgvAaTrNbSHdHgP_25() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___tSzApJiwheMYhjgvAaTrNbSHdHgP_25)); }
	inline RuntimeObject* get_tSzApJiwheMYhjgvAaTrNbSHdHgP_25() const { return ___tSzApJiwheMYhjgvAaTrNbSHdHgP_25; }
	inline RuntimeObject** get_address_of_tSzApJiwheMYhjgvAaTrNbSHdHgP_25() { return &___tSzApJiwheMYhjgvAaTrNbSHdHgP_25; }
	inline void set_tSzApJiwheMYhjgvAaTrNbSHdHgP_25(RuntimeObject* value)
	{
		___tSzApJiwheMYhjgvAaTrNbSHdHgP_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tSzApJiwheMYhjgvAaTrNbSHdHgP_25), (void*)value);
	}

	inline static int32_t get_offset_of_CDQvdxrBYeaibeuILXSWZTLflVSS_26() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___CDQvdxrBYeaibeuILXSWZTLflVSS_26)); }
	inline RuntimeObject* get_CDQvdxrBYeaibeuILXSWZTLflVSS_26() const { return ___CDQvdxrBYeaibeuILXSWZTLflVSS_26; }
	inline RuntimeObject** get_address_of_CDQvdxrBYeaibeuILXSWZTLflVSS_26() { return &___CDQvdxrBYeaibeuILXSWZTLflVSS_26; }
	inline void set_CDQvdxrBYeaibeuILXSWZTLflVSS_26(RuntimeObject* value)
	{
		___CDQvdxrBYeaibeuILXSWZTLflVSS_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CDQvdxrBYeaibeuILXSWZTLflVSS_26), (void*)value);
	}

	inline static int32_t get_offset_of_IagzVHFlWCLJUEfGubXiUScVfGmCA_27() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___IagzVHFlWCLJUEfGubXiUScVfGmCA_27)); }
	inline int32_t get_IagzVHFlWCLJUEfGubXiUScVfGmCA_27() const { return ___IagzVHFlWCLJUEfGubXiUScVfGmCA_27; }
	inline int32_t* get_address_of_IagzVHFlWCLJUEfGubXiUScVfGmCA_27() { return &___IagzVHFlWCLJUEfGubXiUScVfGmCA_27; }
	inline void set_IagzVHFlWCLJUEfGubXiUScVfGmCA_27(int32_t value)
	{
		___IagzVHFlWCLJUEfGubXiUScVfGmCA_27 = value;
	}

	inline static int32_t get_offset_of_GAwkqrvWlvpikRXvCLOCwZfKeMsC_28() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28)); }
	inline nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * get_GAwkqrvWlvpikRXvCLOCwZfKeMsC_28() const { return ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28; }
	inline nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 ** get_address_of_GAwkqrvWlvpikRXvCLOCwZfKeMsC_28() { return &___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28; }
	inline void set_GAwkqrvWlvpikRXvCLOCwZfKeMsC_28(nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * value)
	{
		___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GAwkqrvWlvpikRXvCLOCwZfKeMsC_28), (void*)value);
	}

	inline static int32_t get_offset_of_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29)); }
	inline BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29() const { return ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29; }
	inline BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 ** get_address_of_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29() { return &___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29; }
	inline void set_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * value)
	{
		___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_29), (void*)value);
	}

	inline static int32_t get_offset_of_CQIAQFpzVmISknegYFOIxRunxPpK_30() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___CQIAQFpzVmISknegYFOIxRunxPpK_30)); }
	inline int32_t get_CQIAQFpzVmISknegYFOIxRunxPpK_30() const { return ___CQIAQFpzVmISknegYFOIxRunxPpK_30; }
	inline int32_t* get_address_of_CQIAQFpzVmISknegYFOIxRunxPpK_30() { return &___CQIAQFpzVmISknegYFOIxRunxPpK_30; }
	inline void set_CQIAQFpzVmISknegYFOIxRunxPpK_30(int32_t value)
	{
		___CQIAQFpzVmISknegYFOIxRunxPpK_30 = value;
	}

	inline static int32_t get_offset_of_aLLlpNUjcfjiKpSIORbqbGLhIBol_31() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___aLLlpNUjcfjiKpSIORbqbGLhIBol_31)); }
	inline int32_t get_aLLlpNUjcfjiKpSIORbqbGLhIBol_31() const { return ___aLLlpNUjcfjiKpSIORbqbGLhIBol_31; }
	inline int32_t* get_address_of_aLLlpNUjcfjiKpSIORbqbGLhIBol_31() { return &___aLLlpNUjcfjiKpSIORbqbGLhIBol_31; }
	inline void set_aLLlpNUjcfjiKpSIORbqbGLhIBol_31(int32_t value)
	{
		___aLLlpNUjcfjiKpSIORbqbGLhIBol_31 = value;
	}

	inline static int32_t get_offset_of_xeKrMCpTCMtvKGhOQAkmgoChmmzib_32() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32)); }
	inline Action_2_t7893BB102AD7DF4981A3D8760D8616A558E33977 * get_xeKrMCpTCMtvKGhOQAkmgoChmmzib_32() const { return ___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32; }
	inline Action_2_t7893BB102AD7DF4981A3D8760D8616A558E33977 ** get_address_of_xeKrMCpTCMtvKGhOQAkmgoChmmzib_32() { return &___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32; }
	inline void set_xeKrMCpTCMtvKGhOQAkmgoChmmzib_32(Action_2_t7893BB102AD7DF4981A3D8760D8616A558E33977 * value)
	{
		___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xeKrMCpTCMtvKGhOQAkmgoChmmzib_32), (void*)value);
	}

	inline static int32_t get_offset_of_jTGnCWWqtRRsUxstEqWASkKUAfYd_33() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___jTGnCWWqtRRsUxstEqWASkKUAfYd_33)); }
	inline Action_3_t4E6238F5923C4067CE414EEB78776B166E41BEBC * get_jTGnCWWqtRRsUxstEqWASkKUAfYd_33() const { return ___jTGnCWWqtRRsUxstEqWASkKUAfYd_33; }
	inline Action_3_t4E6238F5923C4067CE414EEB78776B166E41BEBC ** get_address_of_jTGnCWWqtRRsUxstEqWASkKUAfYd_33() { return &___jTGnCWWqtRRsUxstEqWASkKUAfYd_33; }
	inline void set_jTGnCWWqtRRsUxstEqWASkKUAfYd_33(Action_3_t4E6238F5923C4067CE414EEB78776B166E41BEBC * value)
	{
		___jTGnCWWqtRRsUxstEqWASkKUAfYd_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jTGnCWWqtRRsUxstEqWASkKUAfYd_33), (void*)value);
	}

	inline static int32_t get_offset_of_kGVOImGbVNwKiMTMLDkVUZdzwWAI_34() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34)); }
	inline Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A * get_kGVOImGbVNwKiMTMLDkVUZdzwWAI_34() const { return ___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34; }
	inline Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A ** get_address_of_kGVOImGbVNwKiMTMLDkVUZdzwWAI_34() { return &___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34; }
	inline void set_kGVOImGbVNwKiMTMLDkVUZdzwWAI_34(Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A * value)
	{
		___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kGVOImGbVNwKiMTMLDkVUZdzwWAI_34), (void*)value);
	}

	inline static int32_t get_offset_of_lJrmwhYszLAVKekZLdGKVsHAVsdp_35() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___lJrmwhYszLAVKekZLdGKVsHAVsdp_35)); }
	inline Action_2_t8379F1FFE6303A3B05EAEAEB60014120AA2CC538 * get_lJrmwhYszLAVKekZLdGKVsHAVsdp_35() const { return ___lJrmwhYszLAVKekZLdGKVsHAVsdp_35; }
	inline Action_2_t8379F1FFE6303A3B05EAEAEB60014120AA2CC538 ** get_address_of_lJrmwhYszLAVKekZLdGKVsHAVsdp_35() { return &___lJrmwhYszLAVKekZLdGKVsHAVsdp_35; }
	inline void set_lJrmwhYszLAVKekZLdGKVsHAVsdp_35(Action_2_t8379F1FFE6303A3B05EAEAEB60014120AA2CC538 * value)
	{
		___lJrmwhYszLAVKekZLdGKVsHAVsdp_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lJrmwhYszLAVKekZLdGKVsHAVsdp_35), (void*)value);
	}

	inline static int32_t get_offset_of_AeWaeWamxRrERkciQkpFDWbRfZMkA_36() { return static_cast<int32_t>(offsetof(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB, ___AeWaeWamxRrERkciQkpFDWbRfZMkA_36)); }
	inline bool get_AeWaeWamxRrERkciQkpFDWbRfZMkA_36() const { return ___AeWaeWamxRrERkciQkpFDWbRfZMkA_36; }
	inline bool* get_address_of_AeWaeWamxRrERkciQkpFDWbRfZMkA_36() { return &___AeWaeWamxRrERkciQkpFDWbRfZMkA_36; }
	inline void set_AeWaeWamxRrERkciQkpFDWbRfZMkA_36(bool value)
	{
		___AeWaeWamxRrERkciQkpFDWbRfZMkA_36 = value;
	}
};


// Rewired.Player/ControllerHelper
struct ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268  : public RuntimeObject
{
public:
	// Rewired.Player/ControllerHelper/BYuFLYrdnTvMhPgAoDWdUTXeJgRw Rewired.Player/ControllerHelper::LZLGbxjoptQqYnlHPLBqfcujVWNSB
	BYuFLYrdnTvMhPgAoDWdUTXeJgRw_tE9A7E25A121BBB8163ACB60187B3D43A6343A349 * ___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0;
	// System.Boolean Rewired.Player/ControllerHelper::gWUNhyZuEqhwxGctBSqaPHRtdBxBA
	bool ___gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1;
	// System.Boolean Rewired.Player/ControllerHelper::DkYnbyLmGLATnzonhFATZrBinglC
	bool ___DkYnbyLmGLATnzonhFATZrBinglC_2;
	// System.Boolean Rewired.Player/ControllerHelper::ieLevtEAMkPSZTKSKkeqaejbcExac
	bool ___ieLevtEAMkPSZTKSKkeqaejbcExac_3;
	// System.Double Rewired.Player/ControllerHelper::GPDqIotBUPfzEIVVeYRfknbPJkbI
	double ___GPDqIotBUPfzEIVVeYRfknbPJkbI_4;
	// System.Double Rewired.Player/ControllerHelper::KTpsqGqdGuSmeLMUzGDRIrsaDULDA
	double ___KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player/ControllerHelper::GGQSjhTqFjNcZncTXTHPSReDNPlW
	SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * ___GGQSjhTqFjNcZncTXTHPSReDNPlW_6;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player/ControllerHelper::FqUoiFiCPDAaAlhDaLURTtpgmQLB
	SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * ___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7;
	// Rewired.Player/ControllerHelper/SIBfUlfTgntgslhWDKNJqDKSOYphA Rewired.Player/ControllerHelper::yOgOXMdWSZKgHOWSXqOzTssrAWni
	SIBfUlfTgntgslhWDKNJqDKSOYphA_tDCAE7ECCE9DB5EA67497C8A0379440348D43BE5F * ___yOgOXMdWSZKgHOWSXqOzTssrAWni_8;
	// Rewired.Player Rewired.Player/ControllerHelper::XAbNzJSvSNjTFwhnJridEdiVWtEM
	Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * ___XAbNzJSvSNjTFwhnJridEdiVWtEM_9;
	// jwwEVOVklpzvRHhBdNqsduEELqpv Rewired.Player/ControllerHelper::sOyJxxGPTWlVyzPJIvrZyYyRatmE
	jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10;
	// System.Int32 Rewired.Player/ControllerHelper::QajDFFaomlkLHzaostfWYpGUioys
	int32_t ___QajDFFaomlkLHzaostfWYpGUioys_11;
	// Rewired.Player/ControllerHelper/MapHelper Rewired.Player/ControllerHelper::maps
	MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D * ___maps_12;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper::conflictChecking
	ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * ___conflictChecking_13;
	// Rewired.Player/ControllerHelper/PollingHelper Rewired.Player/ControllerHelper::polling
	PollingHelper_tE9EC170CBDD9D966088D85CE9065842F50898D67 * ___polling_14;

public:
	inline static int32_t get_offset_of_LZLGbxjoptQqYnlHPLBqfcujVWNSB_0() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0)); }
	inline BYuFLYrdnTvMhPgAoDWdUTXeJgRw_tE9A7E25A121BBB8163ACB60187B3D43A6343A349 * get_LZLGbxjoptQqYnlHPLBqfcujVWNSB_0() const { return ___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0; }
	inline BYuFLYrdnTvMhPgAoDWdUTXeJgRw_tE9A7E25A121BBB8163ACB60187B3D43A6343A349 ** get_address_of_LZLGbxjoptQqYnlHPLBqfcujVWNSB_0() { return &___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0; }
	inline void set_LZLGbxjoptQqYnlHPLBqfcujVWNSB_0(BYuFLYrdnTvMhPgAoDWdUTXeJgRw_tE9A7E25A121BBB8163ACB60187B3D43A6343A349 * value)
	{
		___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LZLGbxjoptQqYnlHPLBqfcujVWNSB_0), (void*)value);
	}

	inline static int32_t get_offset_of_gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1)); }
	inline bool get_gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1() const { return ___gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1; }
	inline bool* get_address_of_gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1() { return &___gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1; }
	inline void set_gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1(bool value)
	{
		___gWUNhyZuEqhwxGctBSqaPHRtdBxBA_1 = value;
	}

	inline static int32_t get_offset_of_DkYnbyLmGLATnzonhFATZrBinglC_2() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___DkYnbyLmGLATnzonhFATZrBinglC_2)); }
	inline bool get_DkYnbyLmGLATnzonhFATZrBinglC_2() const { return ___DkYnbyLmGLATnzonhFATZrBinglC_2; }
	inline bool* get_address_of_DkYnbyLmGLATnzonhFATZrBinglC_2() { return &___DkYnbyLmGLATnzonhFATZrBinglC_2; }
	inline void set_DkYnbyLmGLATnzonhFATZrBinglC_2(bool value)
	{
		___DkYnbyLmGLATnzonhFATZrBinglC_2 = value;
	}

	inline static int32_t get_offset_of_ieLevtEAMkPSZTKSKkeqaejbcExac_3() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___ieLevtEAMkPSZTKSKkeqaejbcExac_3)); }
	inline bool get_ieLevtEAMkPSZTKSKkeqaejbcExac_3() const { return ___ieLevtEAMkPSZTKSKkeqaejbcExac_3; }
	inline bool* get_address_of_ieLevtEAMkPSZTKSKkeqaejbcExac_3() { return &___ieLevtEAMkPSZTKSKkeqaejbcExac_3; }
	inline void set_ieLevtEAMkPSZTKSKkeqaejbcExac_3(bool value)
	{
		___ieLevtEAMkPSZTKSKkeqaejbcExac_3 = value;
	}

	inline static int32_t get_offset_of_GPDqIotBUPfzEIVVeYRfknbPJkbI_4() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___GPDqIotBUPfzEIVVeYRfknbPJkbI_4)); }
	inline double get_GPDqIotBUPfzEIVVeYRfknbPJkbI_4() const { return ___GPDqIotBUPfzEIVVeYRfknbPJkbI_4; }
	inline double* get_address_of_GPDqIotBUPfzEIVVeYRfknbPJkbI_4() { return &___GPDqIotBUPfzEIVVeYRfknbPJkbI_4; }
	inline void set_GPDqIotBUPfzEIVVeYRfknbPJkbI_4(double value)
	{
		___GPDqIotBUPfzEIVVeYRfknbPJkbI_4 = value;
	}

	inline static int32_t get_offset_of_KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5)); }
	inline double get_KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5() const { return ___KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5; }
	inline double* get_address_of_KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5() { return &___KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5; }
	inline void set_KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5(double value)
	{
		___KTpsqGqdGuSmeLMUzGDRIrsaDULDA_5 = value;
	}

	inline static int32_t get_offset_of_GGQSjhTqFjNcZncTXTHPSReDNPlW_6() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___GGQSjhTqFjNcZncTXTHPSReDNPlW_6)); }
	inline SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * get_GGQSjhTqFjNcZncTXTHPSReDNPlW_6() const { return ___GGQSjhTqFjNcZncTXTHPSReDNPlW_6; }
	inline SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 ** get_address_of_GGQSjhTqFjNcZncTXTHPSReDNPlW_6() { return &___GGQSjhTqFjNcZncTXTHPSReDNPlW_6; }
	inline void set_GGQSjhTqFjNcZncTXTHPSReDNPlW_6(SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * value)
	{
		___GGQSjhTqFjNcZncTXTHPSReDNPlW_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GGQSjhTqFjNcZncTXTHPSReDNPlW_6), (void*)value);
	}

	inline static int32_t get_offset_of_FqUoiFiCPDAaAlhDaLURTtpgmQLB_7() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7)); }
	inline SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * get_FqUoiFiCPDAaAlhDaLURTtpgmQLB_7() const { return ___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7; }
	inline SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 ** get_address_of_FqUoiFiCPDAaAlhDaLURTtpgmQLB_7() { return &___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7; }
	inline void set_FqUoiFiCPDAaAlhDaLURTtpgmQLB_7(SafeAction_1_t4E177274B1233171A42756F780C8D39EF9C6E598 * value)
	{
		___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FqUoiFiCPDAaAlhDaLURTtpgmQLB_7), (void*)value);
	}

	inline static int32_t get_offset_of_yOgOXMdWSZKgHOWSXqOzTssrAWni_8() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___yOgOXMdWSZKgHOWSXqOzTssrAWni_8)); }
	inline SIBfUlfTgntgslhWDKNJqDKSOYphA_tDCAE7ECCE9DB5EA67497C8A0379440348D43BE5F * get_yOgOXMdWSZKgHOWSXqOzTssrAWni_8() const { return ___yOgOXMdWSZKgHOWSXqOzTssrAWni_8; }
	inline SIBfUlfTgntgslhWDKNJqDKSOYphA_tDCAE7ECCE9DB5EA67497C8A0379440348D43BE5F ** get_address_of_yOgOXMdWSZKgHOWSXqOzTssrAWni_8() { return &___yOgOXMdWSZKgHOWSXqOzTssrAWni_8; }
	inline void set_yOgOXMdWSZKgHOWSXqOzTssrAWni_8(SIBfUlfTgntgslhWDKNJqDKSOYphA_tDCAE7ECCE9DB5EA67497C8A0379440348D43BE5F * value)
	{
		___yOgOXMdWSZKgHOWSXqOzTssrAWni_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yOgOXMdWSZKgHOWSXqOzTssrAWni_8), (void*)value);
	}

	inline static int32_t get_offset_of_XAbNzJSvSNjTFwhnJridEdiVWtEM_9() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___XAbNzJSvSNjTFwhnJridEdiVWtEM_9)); }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * get_XAbNzJSvSNjTFwhnJridEdiVWtEM_9() const { return ___XAbNzJSvSNjTFwhnJridEdiVWtEM_9; }
	inline Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E ** get_address_of_XAbNzJSvSNjTFwhnJridEdiVWtEM_9() { return &___XAbNzJSvSNjTFwhnJridEdiVWtEM_9; }
	inline void set_XAbNzJSvSNjTFwhnJridEdiVWtEM_9(Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * value)
	{
		___XAbNzJSvSNjTFwhnJridEdiVWtEM_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XAbNzJSvSNjTFwhnJridEdiVWtEM_9), (void*)value);
	}

	inline static int32_t get_offset_of_sOyJxxGPTWlVyzPJIvrZyYyRatmE_10() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10)); }
	inline jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * get_sOyJxxGPTWlVyzPJIvrZyYyRatmE_10() const { return ___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10; }
	inline jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 ** get_address_of_sOyJxxGPTWlVyzPJIvrZyYyRatmE_10() { return &___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10; }
	inline void set_sOyJxxGPTWlVyzPJIvrZyYyRatmE_10(jwwEVOVklpzvRHhBdNqsduEELqpv_t6FCB3DF78FB5AF60E1F968E032C87A7C38FB9DE2 * value)
	{
		___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sOyJxxGPTWlVyzPJIvrZyYyRatmE_10), (void*)value);
	}

	inline static int32_t get_offset_of_QajDFFaomlkLHzaostfWYpGUioys_11() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___QajDFFaomlkLHzaostfWYpGUioys_11)); }
	inline int32_t get_QajDFFaomlkLHzaostfWYpGUioys_11() const { return ___QajDFFaomlkLHzaostfWYpGUioys_11; }
	inline int32_t* get_address_of_QajDFFaomlkLHzaostfWYpGUioys_11() { return &___QajDFFaomlkLHzaostfWYpGUioys_11; }
	inline void set_QajDFFaomlkLHzaostfWYpGUioys_11(int32_t value)
	{
		___QajDFFaomlkLHzaostfWYpGUioys_11 = value;
	}

	inline static int32_t get_offset_of_maps_12() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___maps_12)); }
	inline MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D * get_maps_12() const { return ___maps_12; }
	inline MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D ** get_address_of_maps_12() { return &___maps_12; }
	inline void set_maps_12(MapHelper_t58AB9B830B39654835B74258921F7F6D30F7B00D * value)
	{
		___maps_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_12), (void*)value);
	}

	inline static int32_t get_offset_of_conflictChecking_13() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___conflictChecking_13)); }
	inline ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * get_conflictChecking_13() const { return ___conflictChecking_13; }
	inline ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 ** get_address_of_conflictChecking_13() { return &___conflictChecking_13; }
	inline void set_conflictChecking_13(ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * value)
	{
		___conflictChecking_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conflictChecking_13), (void*)value);
	}

	inline static int32_t get_offset_of_polling_14() { return static_cast<int32_t>(offsetof(ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268, ___polling_14)); }
	inline PollingHelper_tE9EC170CBDD9D966088D85CE9065842F50898D67 * get_polling_14() const { return ___polling_14; }
	inline PollingHelper_tE9EC170CBDD9D966088D85CE9065842F50898D67 ** get_address_of_polling_14() { return &___polling_14; }
	inline void set_polling_14(PollingHelper_tE9EC170CBDD9D966088D85CE9065842F50898D67 * value)
	{
		___polling_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polling_14), (void*)value);
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


// Rewired.ReInput/ControllerHelper/PollingHelper
struct PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A  : public CodeHelper_t9B466A2480D151C2FA48F277202C969D6015DC13
{
public:

public:
};

struct PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A_StaticFields
{
public:
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper::LDnMtBpByMhNcmNpPzdzLRPijZRi
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0;

public:
	inline static int32_t get_offset_of_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() { return static_cast<int32_t>(offsetof(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A_StaticFields, ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() const { return ___LDnMtBpByMhNcmNpPzdzLRPijZRi_0; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_LDnMtBpByMhNcmNpPzdzLRPijZRi_0() { return &___LDnMtBpByMhNcmNpPzdzLRPijZRi_0; }
	inline void set_LDnMtBpByMhNcmNpPzdzLRPijZRi_0(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___LDnMtBpByMhNcmNpPzdzLRPijZRi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LDnMtBpByMhNcmNpPzdzLRPijZRi_0), (void*)value);
	}
};


// Rewired.AxisRange
struct AxisRange_t24E953A8C00337DE7B41551234FCFD375D16E9AF 
{
public:
	// System.Int32 Rewired.AxisRange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisRange_t24E953A8C00337DE7B41551234FCFD375D16E9AF, ___value___2)); }
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


// Rewired.Platforms.EditorPlatform
struct EditorPlatform_t88EA00FBB39EEAE5382E576C4EA20BF71E46F2D1 
{
public:
	// System.Int32 Rewired.Platforms.EditorPlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorPlatform_t88EA00FBB39EEAE5382E576C4EA20BF71E46F2D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ElementAssignmentType
struct ElementAssignmentType_t2427BCA4F03390B570FC50F2C5443A10A2ABC5E1 
{
public:
	// System.Int32 Rewired.ElementAssignmentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ElementAssignmentType_t2427BCA4F03390B570FC50F2C5443A10A2ABC5E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Rewired.InputSource
struct InputSource_t13A2AE6CED5EAB2C0DB7BA760497DEB239F211BB 
{
public:
	// System.Int32 Rewired.InputSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSource_t13A2AE6CED5EAB2C0DB7BA760497DEB239F211BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Rewired.KeyboardKeyCode
struct KeyboardKeyCode_tB077792A12E74E897DCECA311FBB8F912C5AA5F2 
{
public:
	// System.Int32 Rewired.KeyboardKeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyboardKeyCode_tB077792A12E74E897DCECA311FBB8F912C5AA5F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ModifierKey
struct ModifierKey_tC4FD3490E91876E542031BCC9E18C03BD72E3CFD 
{
public:
	// System.Int32 Rewired.ModifierKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModifierKey_tC4FD3490E91876E542031BCC9E18C03BD72E3CFD, ___value___2)); }
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


// Rewired.Platforms.Platform
struct Platform_tE1A2241A03A81AC98AC7CC23C6F1905BEA4309D1 
{
public:
	// System.Int32 Rewired.Platforms.Platform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Platform_tE1A2241A03A81AC98AC7CC23C6F1905BEA4309D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.Pole
struct Pole_t3EA462A7DCD577495F051345316980CE1DD26399 
{
public:
	// System.Int32 Rewired.Pole::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pole_t3EA462A7DCD577495F051345316980CE1DD26399, ___value___2)); }
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


// Rewired.Platforms.WebplayerPlatform
struct WebplayerPlatform_tA658FB95F976D6DB095A166E327D1104F2C7C94C 
{
public:
	// System.Int32 Rewired.Platforms.WebplayerPlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebplayerPlatform_tA658FB95F976D6DB095A166E327D1104F2C7C94C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.Data.UserData/zErewWsElUgBaKXLzTOENJhkptHEb/nujuvJulgYzNRYueyruWPgnaqlHP/KfuHwiomPteqWnzNNKhAzBQQnmQh
struct KfuHwiomPteqWnzNNKhAzBQQnmQh_tF2ADDD00B310F91D6C55EF2CE84A5BD3B9C39780 
{
public:
	// System.Int32 Rewired.Data.UserData/zErewWsElUgBaKXLzTOENJhkptHEb/nujuvJulgYzNRYueyruWPgnaqlHP/KfuHwiomPteqWnzNNKhAzBQQnmQh::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KfuHwiomPteqWnzNNKhAzBQQnmQh_tF2ADDD00B310F91D6C55EF2CE84A5BD3B9C39780, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Rewired.ActionElementMap
struct ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ActionElementMap::_actionCategoryId
	int32_t ____actionCategoryId_0;
	// System.Int32 Rewired.ActionElementMap::_actionId
	int32_t ____actionId_1;
	// Rewired.ControllerElementType Rewired.ActionElementMap::_elementType
	int32_t ____elementType_2;
	// System.Int32 Rewired.ActionElementMap::_elementIdentifierId
	int32_t ____elementIdentifierId_3;
	// Rewired.AxisRange Rewired.ActionElementMap::_axisRange
	int32_t ____axisRange_4;
	// System.Boolean Rewired.ActionElementMap::_invert
	bool ____invert_5;
	// Rewired.Pole Rewired.ActionElementMap::_axisContribution
	int32_t ____axisContribution_6;
	// Rewired.KeyboardKeyCode Rewired.ActionElementMap::_keyboardKeyCode
	int32_t ____keyboardKeyCode_7;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey1
	int32_t ____modifierKey1_8;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey2
	int32_t ____modifierKey2_9;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey3
	int32_t ____modifierKey3_10;
	// Rewired.ControllerMap Rewired.ActionElementMap::mtCzlvnEPTtCfVpotNRemSaRaiHy
	ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * ___mtCzlvnEPTtCfVpotNRemSaRaiHy_11;
	// System.Boolean Rewired.ActionElementMap::kKFZZElqKQSUFMZnWdEudRvTJGpo
	bool ___kKFZZElqKQSUFMZnWdEudRvTJGpo_12;
	// System.String Rewired.ActionElementMap::PslWOFZWArVhPwzuPAbExXVaDTAn
	String_t* ___PslWOFZWArVhPwzuPAbExXVaDTAn_13;
	// System.String Rewired.ActionElementMap::SdQoKSvwiaNzVKQzixNlXbImXkJd
	String_t* ___SdQoKSvwiaNzVKQzixNlXbImXkJd_14;
	// System.Int32 Rewired.ActionElementMap::FBOOknsxpcCbVstgmGENdPFIgrbiA
	int32_t ___FBOOknsxpcCbVstgmGENdPFIgrbiA_15;
	// System.Int32 Rewired.ActionElementMap::YVGDeWQAhUWKAOSPoxXuizkXaiTI
	int32_t ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_16;
	// System.String Rewired.ActionElementMap::psPQblyfSyeXXqySXnnGpikIacn
	String_t* ___psPQblyfSyeXXqySXnnGpikIacn_17;
	// Rewired.ModifierKeyFlags Rewired.ActionElementMap::nnaFVGcLVdorJHZDQBRlgrMPmkJLA
	int32_t ___nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18;

public:
	inline static int32_t get_offset_of__actionCategoryId_0() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____actionCategoryId_0)); }
	inline int32_t get__actionCategoryId_0() const { return ____actionCategoryId_0; }
	inline int32_t* get_address_of__actionCategoryId_0() { return &____actionCategoryId_0; }
	inline void set__actionCategoryId_0(int32_t value)
	{
		____actionCategoryId_0 = value;
	}

	inline static int32_t get_offset_of__actionId_1() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____actionId_1)); }
	inline int32_t get__actionId_1() const { return ____actionId_1; }
	inline int32_t* get_address_of__actionId_1() { return &____actionId_1; }
	inline void set__actionId_1(int32_t value)
	{
		____actionId_1 = value;
	}

	inline static int32_t get_offset_of__elementType_2() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____elementType_2)); }
	inline int32_t get__elementType_2() const { return ____elementType_2; }
	inline int32_t* get_address_of__elementType_2() { return &____elementType_2; }
	inline void set__elementType_2(int32_t value)
	{
		____elementType_2 = value;
	}

	inline static int32_t get_offset_of__elementIdentifierId_3() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____elementIdentifierId_3)); }
	inline int32_t get__elementIdentifierId_3() const { return ____elementIdentifierId_3; }
	inline int32_t* get_address_of__elementIdentifierId_3() { return &____elementIdentifierId_3; }
	inline void set__elementIdentifierId_3(int32_t value)
	{
		____elementIdentifierId_3 = value;
	}

	inline static int32_t get_offset_of__axisRange_4() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____axisRange_4)); }
	inline int32_t get__axisRange_4() const { return ____axisRange_4; }
	inline int32_t* get_address_of__axisRange_4() { return &____axisRange_4; }
	inline void set__axisRange_4(int32_t value)
	{
		____axisRange_4 = value;
	}

	inline static int32_t get_offset_of__invert_5() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____invert_5)); }
	inline bool get__invert_5() const { return ____invert_5; }
	inline bool* get_address_of__invert_5() { return &____invert_5; }
	inline void set__invert_5(bool value)
	{
		____invert_5 = value;
	}

	inline static int32_t get_offset_of__axisContribution_6() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____axisContribution_6)); }
	inline int32_t get__axisContribution_6() const { return ____axisContribution_6; }
	inline int32_t* get_address_of__axisContribution_6() { return &____axisContribution_6; }
	inline void set__axisContribution_6(int32_t value)
	{
		____axisContribution_6 = value;
	}

	inline static int32_t get_offset_of__keyboardKeyCode_7() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____keyboardKeyCode_7)); }
	inline int32_t get__keyboardKeyCode_7() const { return ____keyboardKeyCode_7; }
	inline int32_t* get_address_of__keyboardKeyCode_7() { return &____keyboardKeyCode_7; }
	inline void set__keyboardKeyCode_7(int32_t value)
	{
		____keyboardKeyCode_7 = value;
	}

	inline static int32_t get_offset_of__modifierKey1_8() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____modifierKey1_8)); }
	inline int32_t get__modifierKey1_8() const { return ____modifierKey1_8; }
	inline int32_t* get_address_of__modifierKey1_8() { return &____modifierKey1_8; }
	inline void set__modifierKey1_8(int32_t value)
	{
		____modifierKey1_8 = value;
	}

	inline static int32_t get_offset_of__modifierKey2_9() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____modifierKey2_9)); }
	inline int32_t get__modifierKey2_9() const { return ____modifierKey2_9; }
	inline int32_t* get_address_of__modifierKey2_9() { return &____modifierKey2_9; }
	inline void set__modifierKey2_9(int32_t value)
	{
		____modifierKey2_9 = value;
	}

	inline static int32_t get_offset_of__modifierKey3_10() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ____modifierKey3_10)); }
	inline int32_t get__modifierKey3_10() const { return ____modifierKey3_10; }
	inline int32_t* get_address_of__modifierKey3_10() { return &____modifierKey3_10; }
	inline void set__modifierKey3_10(int32_t value)
	{
		____modifierKey3_10 = value;
	}

	inline static int32_t get_offset_of_mtCzlvnEPTtCfVpotNRemSaRaiHy_11() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___mtCzlvnEPTtCfVpotNRemSaRaiHy_11)); }
	inline ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * get_mtCzlvnEPTtCfVpotNRemSaRaiHy_11() const { return ___mtCzlvnEPTtCfVpotNRemSaRaiHy_11; }
	inline ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D ** get_address_of_mtCzlvnEPTtCfVpotNRemSaRaiHy_11() { return &___mtCzlvnEPTtCfVpotNRemSaRaiHy_11; }
	inline void set_mtCzlvnEPTtCfVpotNRemSaRaiHy_11(ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * value)
	{
		___mtCzlvnEPTtCfVpotNRemSaRaiHy_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mtCzlvnEPTtCfVpotNRemSaRaiHy_11), (void*)value);
	}

	inline static int32_t get_offset_of_kKFZZElqKQSUFMZnWdEudRvTJGpo_12() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___kKFZZElqKQSUFMZnWdEudRvTJGpo_12)); }
	inline bool get_kKFZZElqKQSUFMZnWdEudRvTJGpo_12() const { return ___kKFZZElqKQSUFMZnWdEudRvTJGpo_12; }
	inline bool* get_address_of_kKFZZElqKQSUFMZnWdEudRvTJGpo_12() { return &___kKFZZElqKQSUFMZnWdEudRvTJGpo_12; }
	inline void set_kKFZZElqKQSUFMZnWdEudRvTJGpo_12(bool value)
	{
		___kKFZZElqKQSUFMZnWdEudRvTJGpo_12 = value;
	}

	inline static int32_t get_offset_of_PslWOFZWArVhPwzuPAbExXVaDTAn_13() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___PslWOFZWArVhPwzuPAbExXVaDTAn_13)); }
	inline String_t* get_PslWOFZWArVhPwzuPAbExXVaDTAn_13() const { return ___PslWOFZWArVhPwzuPAbExXVaDTAn_13; }
	inline String_t** get_address_of_PslWOFZWArVhPwzuPAbExXVaDTAn_13() { return &___PslWOFZWArVhPwzuPAbExXVaDTAn_13; }
	inline void set_PslWOFZWArVhPwzuPAbExXVaDTAn_13(String_t* value)
	{
		___PslWOFZWArVhPwzuPAbExXVaDTAn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PslWOFZWArVhPwzuPAbExXVaDTAn_13), (void*)value);
	}

	inline static int32_t get_offset_of_SdQoKSvwiaNzVKQzixNlXbImXkJd_14() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___SdQoKSvwiaNzVKQzixNlXbImXkJd_14)); }
	inline String_t* get_SdQoKSvwiaNzVKQzixNlXbImXkJd_14() const { return ___SdQoKSvwiaNzVKQzixNlXbImXkJd_14; }
	inline String_t** get_address_of_SdQoKSvwiaNzVKQzixNlXbImXkJd_14() { return &___SdQoKSvwiaNzVKQzixNlXbImXkJd_14; }
	inline void set_SdQoKSvwiaNzVKQzixNlXbImXkJd_14(String_t* value)
	{
		___SdQoKSvwiaNzVKQzixNlXbImXkJd_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SdQoKSvwiaNzVKQzixNlXbImXkJd_14), (void*)value);
	}

	inline static int32_t get_offset_of_FBOOknsxpcCbVstgmGENdPFIgrbiA_15() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___FBOOknsxpcCbVstgmGENdPFIgrbiA_15)); }
	inline int32_t get_FBOOknsxpcCbVstgmGENdPFIgrbiA_15() const { return ___FBOOknsxpcCbVstgmGENdPFIgrbiA_15; }
	inline int32_t* get_address_of_FBOOknsxpcCbVstgmGENdPFIgrbiA_15() { return &___FBOOknsxpcCbVstgmGENdPFIgrbiA_15; }
	inline void set_FBOOknsxpcCbVstgmGENdPFIgrbiA_15(int32_t value)
	{
		___FBOOknsxpcCbVstgmGENdPFIgrbiA_15 = value;
	}

	inline static int32_t get_offset_of_YVGDeWQAhUWKAOSPoxXuizkXaiTI_16() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_16)); }
	inline int32_t get_YVGDeWQAhUWKAOSPoxXuizkXaiTI_16() const { return ___YVGDeWQAhUWKAOSPoxXuizkXaiTI_16; }
	inline int32_t* get_address_of_YVGDeWQAhUWKAOSPoxXuizkXaiTI_16() { return &___YVGDeWQAhUWKAOSPoxXuizkXaiTI_16; }
	inline void set_YVGDeWQAhUWKAOSPoxXuizkXaiTI_16(int32_t value)
	{
		___YVGDeWQAhUWKAOSPoxXuizkXaiTI_16 = value;
	}

	inline static int32_t get_offset_of_psPQblyfSyeXXqySXnnGpikIacn_17() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___psPQblyfSyeXXqySXnnGpikIacn_17)); }
	inline String_t* get_psPQblyfSyeXXqySXnnGpikIacn_17() const { return ___psPQblyfSyeXXqySXnnGpikIacn_17; }
	inline String_t** get_address_of_psPQblyfSyeXXqySXnnGpikIacn_17() { return &___psPQblyfSyeXXqySXnnGpikIacn_17; }
	inline void set_psPQblyfSyeXXqySXnnGpikIacn_17(String_t* value)
	{
		___psPQblyfSyeXXqySXnnGpikIacn_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___psPQblyfSyeXXqySXnnGpikIacn_17), (void*)value);
	}

	inline static int32_t get_offset_of_nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537, ___nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18)); }
	inline int32_t get_nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18() const { return ___nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18; }
	inline int32_t* get_address_of_nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18() { return &___nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18; }
	inline void set_nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18(int32_t value)
	{
		___nnaFVGcLVdorJHZDQBRlgrMPmkJLA_18 = value;
	}
};

struct ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537_StaticFields
{
public:
	// System.Int32 Rewired.ActionElementMap::uidCounter
	int32_t ___uidCounter_19;
	// System.Text.StringBuilder Rewired.ActionElementMap::s_toStringSB
	StringBuilder_t * ___s_toStringSB_20;

public:
	inline static int32_t get_offset_of_uidCounter_19() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537_StaticFields, ___uidCounter_19)); }
	inline int32_t get_uidCounter_19() const { return ___uidCounter_19; }
	inline int32_t* get_address_of_uidCounter_19() { return &___uidCounter_19; }
	inline void set_uidCounter_19(int32_t value)
	{
		___uidCounter_19 = value;
	}

	inline static int32_t get_offset_of_s_toStringSB_20() { return static_cast<int32_t>(offsetof(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537_StaticFields, ___s_toStringSB_20)); }
	inline StringBuilder_t * get_s_toStringSB_20() const { return ___s_toStringSB_20; }
	inline StringBuilder_t ** get_address_of_s_toStringSB_20() { return &___s_toStringSB_20; }
	inline void set_s_toStringSB_20(StringBuilder_t * value)
	{
		___s_toStringSB_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_toStringSB_20), (void*)value);
	}
};


// Rewired.ControllerIdentifier
struct ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C 
{
public:
	// System.Int32 Rewired.ControllerIdentifier::UceKlChkUHGjQaNwpAzeqaieFMpt
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_0;
	// Rewired.ControllerType Rewired.ControllerIdentifier::KHkewZTAeuvHVDDJaWvnQRRxxDiF
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1;
	// System.Guid Rewired.ControllerIdentifier::fMxZVPLmyEupjctdQIaGgbDJdlvHA
	Guid_t  ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2;
	// System.String Rewired.ControllerIdentifier::xBrcfixGFlRWLdALITGLqMbVvAXW
	String_t* ___xBrcfixGFlRWLdALITGLqMbVvAXW_3;
	// System.Guid Rewired.ControllerIdentifier::guGxXkQdSCnhDedSVaPzhraGphmHA
	Guid_t  ___guGxXkQdSCnhDedSVaPzhraGphmHA_4;

public:
	inline static int32_t get_offset_of_UceKlChkUHGjQaNwpAzeqaieFMpt_0() { return static_cast<int32_t>(offsetof(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C, ___UceKlChkUHGjQaNwpAzeqaieFMpt_0)); }
	inline int32_t get_UceKlChkUHGjQaNwpAzeqaieFMpt_0() const { return ___UceKlChkUHGjQaNwpAzeqaieFMpt_0; }
	inline int32_t* get_address_of_UceKlChkUHGjQaNwpAzeqaieFMpt_0() { return &___UceKlChkUHGjQaNwpAzeqaieFMpt_0; }
	inline void set_UceKlChkUHGjQaNwpAzeqaieFMpt_0(int32_t value)
	{
		___UceKlChkUHGjQaNwpAzeqaieFMpt_0 = value;
	}

	inline static int32_t get_offset_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_1() { return static_cast<int32_t>(offsetof(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C, ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1)); }
	inline int32_t get_KHkewZTAeuvHVDDJaWvnQRRxxDiF_1() const { return ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1; }
	inline int32_t* get_address_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_1() { return &___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1; }
	inline void set_KHkewZTAeuvHVDDJaWvnQRRxxDiF_1(int32_t value)
	{
		___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1 = value;
	}

	inline static int32_t get_offset_of_fMxZVPLmyEupjctdQIaGgbDJdlvHA_2() { return static_cast<int32_t>(offsetof(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C, ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2)); }
	inline Guid_t  get_fMxZVPLmyEupjctdQIaGgbDJdlvHA_2() const { return ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2; }
	inline Guid_t * get_address_of_fMxZVPLmyEupjctdQIaGgbDJdlvHA_2() { return &___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2; }
	inline void set_fMxZVPLmyEupjctdQIaGgbDJdlvHA_2(Guid_t  value)
	{
		___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2 = value;
	}

	inline static int32_t get_offset_of_xBrcfixGFlRWLdALITGLqMbVvAXW_3() { return static_cast<int32_t>(offsetof(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C, ___xBrcfixGFlRWLdALITGLqMbVvAXW_3)); }
	inline String_t* get_xBrcfixGFlRWLdALITGLqMbVvAXW_3() const { return ___xBrcfixGFlRWLdALITGLqMbVvAXW_3; }
	inline String_t** get_address_of_xBrcfixGFlRWLdALITGLqMbVvAXW_3() { return &___xBrcfixGFlRWLdALITGLqMbVvAXW_3; }
	inline void set_xBrcfixGFlRWLdALITGLqMbVvAXW_3(String_t* value)
	{
		___xBrcfixGFlRWLdALITGLqMbVvAXW_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xBrcfixGFlRWLdALITGLqMbVvAXW_3), (void*)value);
	}

	inline static int32_t get_offset_of_guGxXkQdSCnhDedSVaPzhraGphmHA_4() { return static_cast<int32_t>(offsetof(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C, ___guGxXkQdSCnhDedSVaPzhraGphmHA_4)); }
	inline Guid_t  get_guGxXkQdSCnhDedSVaPzhraGphmHA_4() const { return ___guGxXkQdSCnhDedSVaPzhraGphmHA_4; }
	inline Guid_t * get_address_of_guGxXkQdSCnhDedSVaPzhraGphmHA_4() { return &___guGxXkQdSCnhDedSVaPzhraGphmHA_4; }
	inline void set_guGxXkQdSCnhDedSVaPzhraGphmHA_4(Guid_t  value)
	{
		___guGxXkQdSCnhDedSVaPzhraGphmHA_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C_marshaled_pinvoke
{
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_0;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1;
	Guid_t  ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2;
	char* ___xBrcfixGFlRWLdALITGLqMbVvAXW_3;
	Guid_t  ___guGxXkQdSCnhDedSVaPzhraGphmHA_4;
};
// Native definition for COM marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C_marshaled_com
{
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_0;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_1;
	Guid_t  ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_2;
	Il2CppChar* ___xBrcfixGFlRWLdALITGLqMbVvAXW_3;
	Guid_t  ___guGxXkQdSCnhDedSVaPzhraGphmHA_4;
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


// Rewired.ControllerPollingInfo
struct ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 
{
public:
	// System.Boolean Rewired.ControllerPollingInfo::RgJlwlHPWKGUDrAhTMwzcxKAffwI
	bool ___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0;
	// System.Int32 Rewired.ControllerPollingInfo::DCGJXzigEdTcwzFynDKUcORiHGSOA
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	// System.Int32 Rewired.ControllerPollingInfo::UceKlChkUHGjQaNwpAzeqaieFMpt
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_2;
	// System.String Rewired.ControllerPollingInfo::tnqDtnjrRmrTJiUPBcWlFVtippWic
	String_t* ___tnqDtnjrRmrTJiUPBcWlFVtippWic_3;
	// Rewired.ControllerType Rewired.ControllerPollingInfo::KHkewZTAeuvHVDDJaWvnQRRxxDiF
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4;
	// Rewired.ControllerElementType Rewired.ControllerPollingInfo::RUyyQSEmqRidLNphokXShBrzehNy
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_5;
	// System.Int32 Rewired.ControllerPollingInfo::FBOOknsxpcCbVstgmGENdPFIgrbiA
	int32_t ___FBOOknsxpcCbVstgmGENdPFIgrbiA_6;
	// Rewired.Pole Rewired.ControllerPollingInfo::wthecuAoLwkFVagmarzrbcdkdZbFc
	int32_t ___wthecuAoLwkFVagmarzrbcdkdZbFc_7;
	// System.String Rewired.ControllerPollingInfo::PslWOFZWArVhPwzuPAbExXVaDTAn
	String_t* ___PslWOFZWArVhPwzuPAbExXVaDTAn_8;
	// System.Int32 Rewired.ControllerPollingInfo::NPuaUGjYHfmjnFZazhpMoRbThWzG
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_9;
	// UnityEngine.KeyCode Rewired.ControllerPollingInfo::UdwLoYILOubLSIDfSvbdnKJFoCVNA
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10;

public:
	inline static int32_t get_offset_of_RgJlwlHPWKGUDrAhTMwzcxKAffwI_0() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0)); }
	inline bool get_RgJlwlHPWKGUDrAhTMwzcxKAffwI_0() const { return ___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0; }
	inline bool* get_address_of_RgJlwlHPWKGUDrAhTMwzcxKAffwI_0() { return &___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0; }
	inline void set_RgJlwlHPWKGUDrAhTMwzcxKAffwI_0(bool value)
	{
		___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0 = value;
	}

	inline static int32_t get_offset_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1)); }
	inline int32_t get_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() const { return ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1; }
	inline int32_t* get_address_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() { return &___DCGJXzigEdTcwzFynDKUcORiHGSOA_1; }
	inline void set_DCGJXzigEdTcwzFynDKUcORiHGSOA_1(int32_t value)
	{
		___DCGJXzigEdTcwzFynDKUcORiHGSOA_1 = value;
	}

	inline static int32_t get_offset_of_UceKlChkUHGjQaNwpAzeqaieFMpt_2() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___UceKlChkUHGjQaNwpAzeqaieFMpt_2)); }
	inline int32_t get_UceKlChkUHGjQaNwpAzeqaieFMpt_2() const { return ___UceKlChkUHGjQaNwpAzeqaieFMpt_2; }
	inline int32_t* get_address_of_UceKlChkUHGjQaNwpAzeqaieFMpt_2() { return &___UceKlChkUHGjQaNwpAzeqaieFMpt_2; }
	inline void set_UceKlChkUHGjQaNwpAzeqaieFMpt_2(int32_t value)
	{
		___UceKlChkUHGjQaNwpAzeqaieFMpt_2 = value;
	}

	inline static int32_t get_offset_of_tnqDtnjrRmrTJiUPBcWlFVtippWic_3() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___tnqDtnjrRmrTJiUPBcWlFVtippWic_3)); }
	inline String_t* get_tnqDtnjrRmrTJiUPBcWlFVtippWic_3() const { return ___tnqDtnjrRmrTJiUPBcWlFVtippWic_3; }
	inline String_t** get_address_of_tnqDtnjrRmrTJiUPBcWlFVtippWic_3() { return &___tnqDtnjrRmrTJiUPBcWlFVtippWic_3; }
	inline void set_tnqDtnjrRmrTJiUPBcWlFVtippWic_3(String_t* value)
	{
		___tnqDtnjrRmrTJiUPBcWlFVtippWic_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)value);
	}

	inline static int32_t get_offset_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_4() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4)); }
	inline int32_t get_KHkewZTAeuvHVDDJaWvnQRRxxDiF_4() const { return ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4; }
	inline int32_t* get_address_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_4() { return &___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4; }
	inline void set_KHkewZTAeuvHVDDJaWvnQRRxxDiF_4(int32_t value)
	{
		___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4 = value;
	}

	inline static int32_t get_offset_of_RUyyQSEmqRidLNphokXShBrzehNy_5() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___RUyyQSEmqRidLNphokXShBrzehNy_5)); }
	inline int32_t get_RUyyQSEmqRidLNphokXShBrzehNy_5() const { return ___RUyyQSEmqRidLNphokXShBrzehNy_5; }
	inline int32_t* get_address_of_RUyyQSEmqRidLNphokXShBrzehNy_5() { return &___RUyyQSEmqRidLNphokXShBrzehNy_5; }
	inline void set_RUyyQSEmqRidLNphokXShBrzehNy_5(int32_t value)
	{
		___RUyyQSEmqRidLNphokXShBrzehNy_5 = value;
	}

	inline static int32_t get_offset_of_FBOOknsxpcCbVstgmGENdPFIgrbiA_6() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___FBOOknsxpcCbVstgmGENdPFIgrbiA_6)); }
	inline int32_t get_FBOOknsxpcCbVstgmGENdPFIgrbiA_6() const { return ___FBOOknsxpcCbVstgmGENdPFIgrbiA_6; }
	inline int32_t* get_address_of_FBOOknsxpcCbVstgmGENdPFIgrbiA_6() { return &___FBOOknsxpcCbVstgmGENdPFIgrbiA_6; }
	inline void set_FBOOknsxpcCbVstgmGENdPFIgrbiA_6(int32_t value)
	{
		___FBOOknsxpcCbVstgmGENdPFIgrbiA_6 = value;
	}

	inline static int32_t get_offset_of_wthecuAoLwkFVagmarzrbcdkdZbFc_7() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___wthecuAoLwkFVagmarzrbcdkdZbFc_7)); }
	inline int32_t get_wthecuAoLwkFVagmarzrbcdkdZbFc_7() const { return ___wthecuAoLwkFVagmarzrbcdkdZbFc_7; }
	inline int32_t* get_address_of_wthecuAoLwkFVagmarzrbcdkdZbFc_7() { return &___wthecuAoLwkFVagmarzrbcdkdZbFc_7; }
	inline void set_wthecuAoLwkFVagmarzrbcdkdZbFc_7(int32_t value)
	{
		___wthecuAoLwkFVagmarzrbcdkdZbFc_7 = value;
	}

	inline static int32_t get_offset_of_PslWOFZWArVhPwzuPAbExXVaDTAn_8() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___PslWOFZWArVhPwzuPAbExXVaDTAn_8)); }
	inline String_t* get_PslWOFZWArVhPwzuPAbExXVaDTAn_8() const { return ___PslWOFZWArVhPwzuPAbExXVaDTAn_8; }
	inline String_t** get_address_of_PslWOFZWArVhPwzuPAbExXVaDTAn_8() { return &___PslWOFZWArVhPwzuPAbExXVaDTAn_8; }
	inline void set_PslWOFZWArVhPwzuPAbExXVaDTAn_8(String_t* value)
	{
		___PslWOFZWArVhPwzuPAbExXVaDTAn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)value);
	}

	inline static int32_t get_offset_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_9() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___NPuaUGjYHfmjnFZazhpMoRbThWzG_9)); }
	inline int32_t get_NPuaUGjYHfmjnFZazhpMoRbThWzG_9() const { return ___NPuaUGjYHfmjnFZazhpMoRbThWzG_9; }
	inline int32_t* get_address_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_9() { return &___NPuaUGjYHfmjnFZazhpMoRbThWzG_9; }
	inline void set_NPuaUGjYHfmjnFZazhpMoRbThWzG_9(int32_t value)
	{
		___NPuaUGjYHfmjnFZazhpMoRbThWzG_9 = value;
	}

	inline static int32_t get_offset_of_UdwLoYILOubLSIDfSvbdnKJFoCVNA_10() { return static_cast<int32_t>(offsetof(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0, ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10)); }
	inline int32_t get_UdwLoYILOubLSIDfSvbdnKJFoCVNA_10() const { return ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10; }
	inline int32_t* get_address_of_UdwLoYILOubLSIDfSvbdnKJFoCVNA_10() { return &___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10; }
	inline void set_UdwLoYILOubLSIDfSvbdnKJFoCVNA_10(int32_t value)
	{
		___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10 = value;
	}
};

// Native definition for P/Invoke marshalling of Rewired.ControllerPollingInfo
struct ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_marshaled_pinvoke
{
	int32_t ___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_2;
	char* ___tnqDtnjrRmrTJiUPBcWlFVtippWic_3;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4;
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_5;
	int32_t ___FBOOknsxpcCbVstgmGENdPFIgrbiA_6;
	int32_t ___wthecuAoLwkFVagmarzrbcdkdZbFc_7;
	char* ___PslWOFZWArVhPwzuPAbExXVaDTAn_8;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_9;
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10;
};
// Native definition for COM marshalling of Rewired.ControllerPollingInfo
struct ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_marshaled_com
{
	int32_t ___RgJlwlHPWKGUDrAhTMwzcxKAffwI_0;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_2;
	Il2CppChar* ___tnqDtnjrRmrTJiUPBcWlFVtippWic_3;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_4;
	int32_t ___RUyyQSEmqRidLNphokXShBrzehNy_5;
	int32_t ___FBOOknsxpcCbVstgmGENdPFIgrbiA_6;
	int32_t ___wthecuAoLwkFVagmarzrbcdkdZbFc_7;
	Il2CppChar* ___PslWOFZWArVhPwzuPAbExXVaDTAn_8;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_9;
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_10;
};

// Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 
{
public:
	// Rewired.ElementAssignmentType Rewired.ElementAssignmentConflictCheck::TnqkoEbLYCoEpWLJmIGjaPeGnGXs
	int32_t ___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::DCGJXzigEdTcwzFynDKUcORiHGSOA
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	// Rewired.ControllerType Rewired.ElementAssignmentConflictCheck::KHkewZTAeuvHVDDJaWvnQRRxxDiF
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::UceKlChkUHGjQaNwpAzeqaieFMpt
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_3;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::ckPQPTauGgjqsjnoEwPMbqktUGkt
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_4;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::hHMbZxTvRZqjCcQsmdscAmnFySQl
	int32_t ___hHMbZxTvRZqjCcQsmdscAmnFySQl_5;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::HMJUwIEbjwQyUZsaCSgzsDgauWV
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::NPuaUGjYHfmjnFZazhpMoRbThWzG
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_7;
	// Rewired.AxisRange Rewired.ElementAssignmentConflictCheck::dnqcDaKuDzTeZpkjWrulGAfmNtHmA
	int32_t ___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8;
	// UnityEngine.KeyCode Rewired.ElementAssignmentConflictCheck::UdwLoYILOubLSIDfSvbdnKJFoCVNA
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9;
	// Rewired.ModifierKeyFlags Rewired.ElementAssignmentConflictCheck::njfMvUCuswHuLtHoZcdqAwTyNgamA
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::JwOchbdvhsvHVdSyYjtqEJdTZzYG
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;
	// Rewired.Pole Rewired.ElementAssignmentConflictCheck::ysANvLtALhiLvQPHMrzVONBSGlf
	int32_t ___ysANvLtALhiLvQPHMrzVONBSGlf_12;
	// System.Boolean Rewired.ElementAssignmentConflictCheck::GYjNfJzKOfaDDnMNUsNgyurjLVIT
	bool ___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13;

public:
	inline static int32_t get_offset_of_TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0)); }
	inline int32_t get_TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0() const { return ___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0; }
	inline int32_t* get_address_of_TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0() { return &___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0; }
	inline void set_TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0(int32_t value)
	{
		___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0 = value;
	}

	inline static int32_t get_offset_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1)); }
	inline int32_t get_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() const { return ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1; }
	inline int32_t* get_address_of_DCGJXzigEdTcwzFynDKUcORiHGSOA_1() { return &___DCGJXzigEdTcwzFynDKUcORiHGSOA_1; }
	inline void set_DCGJXzigEdTcwzFynDKUcORiHGSOA_1(int32_t value)
	{
		___DCGJXzigEdTcwzFynDKUcORiHGSOA_1 = value;
	}

	inline static int32_t get_offset_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_2() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2)); }
	inline int32_t get_KHkewZTAeuvHVDDJaWvnQRRxxDiF_2() const { return ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2; }
	inline int32_t* get_address_of_KHkewZTAeuvHVDDJaWvnQRRxxDiF_2() { return &___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2; }
	inline void set_KHkewZTAeuvHVDDJaWvnQRRxxDiF_2(int32_t value)
	{
		___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2 = value;
	}

	inline static int32_t get_offset_of_UceKlChkUHGjQaNwpAzeqaieFMpt_3() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___UceKlChkUHGjQaNwpAzeqaieFMpt_3)); }
	inline int32_t get_UceKlChkUHGjQaNwpAzeqaieFMpt_3() const { return ___UceKlChkUHGjQaNwpAzeqaieFMpt_3; }
	inline int32_t* get_address_of_UceKlChkUHGjQaNwpAzeqaieFMpt_3() { return &___UceKlChkUHGjQaNwpAzeqaieFMpt_3; }
	inline void set_UceKlChkUHGjQaNwpAzeqaieFMpt_3(int32_t value)
	{
		___UceKlChkUHGjQaNwpAzeqaieFMpt_3 = value;
	}

	inline static int32_t get_offset_of_ckPQPTauGgjqsjnoEwPMbqktUGkt_4() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___ckPQPTauGgjqsjnoEwPMbqktUGkt_4)); }
	inline int32_t get_ckPQPTauGgjqsjnoEwPMbqktUGkt_4() const { return ___ckPQPTauGgjqsjnoEwPMbqktUGkt_4; }
	inline int32_t* get_address_of_ckPQPTauGgjqsjnoEwPMbqktUGkt_4() { return &___ckPQPTauGgjqsjnoEwPMbqktUGkt_4; }
	inline void set_ckPQPTauGgjqsjnoEwPMbqktUGkt_4(int32_t value)
	{
		___ckPQPTauGgjqsjnoEwPMbqktUGkt_4 = value;
	}

	inline static int32_t get_offset_of_hHMbZxTvRZqjCcQsmdscAmnFySQl_5() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___hHMbZxTvRZqjCcQsmdscAmnFySQl_5)); }
	inline int32_t get_hHMbZxTvRZqjCcQsmdscAmnFySQl_5() const { return ___hHMbZxTvRZqjCcQsmdscAmnFySQl_5; }
	inline int32_t* get_address_of_hHMbZxTvRZqjCcQsmdscAmnFySQl_5() { return &___hHMbZxTvRZqjCcQsmdscAmnFySQl_5; }
	inline void set_hHMbZxTvRZqjCcQsmdscAmnFySQl_5(int32_t value)
	{
		___hHMbZxTvRZqjCcQsmdscAmnFySQl_5 = value;
	}

	inline static int32_t get_offset_of_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6)); }
	inline int32_t get_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() const { return ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6; }
	inline int32_t* get_address_of_HMJUwIEbjwQyUZsaCSgzsDgauWV_6() { return &___HMJUwIEbjwQyUZsaCSgzsDgauWV_6; }
	inline void set_HMJUwIEbjwQyUZsaCSgzsDgauWV_6(int32_t value)
	{
		___HMJUwIEbjwQyUZsaCSgzsDgauWV_6 = value;
	}

	inline static int32_t get_offset_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_7() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___NPuaUGjYHfmjnFZazhpMoRbThWzG_7)); }
	inline int32_t get_NPuaUGjYHfmjnFZazhpMoRbThWzG_7() const { return ___NPuaUGjYHfmjnFZazhpMoRbThWzG_7; }
	inline int32_t* get_address_of_NPuaUGjYHfmjnFZazhpMoRbThWzG_7() { return &___NPuaUGjYHfmjnFZazhpMoRbThWzG_7; }
	inline void set_NPuaUGjYHfmjnFZazhpMoRbThWzG_7(int32_t value)
	{
		___NPuaUGjYHfmjnFZazhpMoRbThWzG_7 = value;
	}

	inline static int32_t get_offset_of_dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8)); }
	inline int32_t get_dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8() const { return ___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8; }
	inline int32_t* get_address_of_dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8() { return &___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8; }
	inline void set_dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8(int32_t value)
	{
		___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8 = value;
	}

	inline static int32_t get_offset_of_UdwLoYILOubLSIDfSvbdnKJFoCVNA_9() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9)); }
	inline int32_t get_UdwLoYILOubLSIDfSvbdnKJFoCVNA_9() const { return ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9; }
	inline int32_t* get_address_of_UdwLoYILOubLSIDfSvbdnKJFoCVNA_9() { return &___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9; }
	inline void set_UdwLoYILOubLSIDfSvbdnKJFoCVNA_9(int32_t value)
	{
		___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9 = value;
	}

	inline static int32_t get_offset_of_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10)); }
	inline int32_t get_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() const { return ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10; }
	inline int32_t* get_address_of_njfMvUCuswHuLtHoZcdqAwTyNgamA_10() { return &___njfMvUCuswHuLtHoZcdqAwTyNgamA_10; }
	inline void set_njfMvUCuswHuLtHoZcdqAwTyNgamA_10(int32_t value)
	{
		___njfMvUCuswHuLtHoZcdqAwTyNgamA_10 = value;
	}

	inline static int32_t get_offset_of_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11)); }
	inline int32_t get_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() const { return ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11; }
	inline int32_t* get_address_of_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11() { return &___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11; }
	inline void set_JwOchbdvhsvHVdSyYjtqEJdTZzYG_11(int32_t value)
	{
		___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11 = value;
	}

	inline static int32_t get_offset_of_ysANvLtALhiLvQPHMrzVONBSGlf_12() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___ysANvLtALhiLvQPHMrzVONBSGlf_12)); }
	inline int32_t get_ysANvLtALhiLvQPHMrzVONBSGlf_12() const { return ___ysANvLtALhiLvQPHMrzVONBSGlf_12; }
	inline int32_t* get_address_of_ysANvLtALhiLvQPHMrzVONBSGlf_12() { return &___ysANvLtALhiLvQPHMrzVONBSGlf_12; }
	inline void set_ysANvLtALhiLvQPHMrzVONBSGlf_12(int32_t value)
	{
		___ysANvLtALhiLvQPHMrzVONBSGlf_12 = value;
	}

	inline static int32_t get_offset_of_GYjNfJzKOfaDDnMNUsNgyurjLVIT_13() { return static_cast<int32_t>(offsetof(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123, ___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13)); }
	inline bool get_GYjNfJzKOfaDDnMNUsNgyurjLVIT_13() const { return ___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13; }
	inline bool* get_address_of_GYjNfJzKOfaDDnMNUsNgyurjLVIT_13() { return &___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13; }
	inline void set_GYjNfJzKOfaDDnMNUsNgyurjLVIT_13(bool value)
	{
		___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13 = value;
	}
};

// Native definition for P/Invoke marshalling of Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123_marshaled_pinvoke
{
	int32_t ___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_3;
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_4;
	int32_t ___hHMbZxTvRZqjCcQsmdscAmnFySQl_5;
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_7;
	int32_t ___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8;
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9;
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;
	int32_t ___ysANvLtALhiLvQPHMrzVONBSGlf_12;
	int32_t ___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13;
};
// Native definition for COM marshalling of Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123_marshaled_com
{
	int32_t ___TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0;
	int32_t ___DCGJXzigEdTcwzFynDKUcORiHGSOA_1;
	int32_t ___KHkewZTAeuvHVDDJaWvnQRRxxDiF_2;
	int32_t ___UceKlChkUHGjQaNwpAzeqaieFMpt_3;
	int32_t ___ckPQPTauGgjqsjnoEwPMbqktUGkt_4;
	int32_t ___hHMbZxTvRZqjCcQsmdscAmnFySQl_5;
	int32_t ___HMJUwIEbjwQyUZsaCSgzsDgauWV_6;
	int32_t ___NPuaUGjYHfmjnFZazhpMoRbThWzG_7;
	int32_t ___dnqcDaKuDzTeZpkjWrulGAfmNtHmA_8;
	int32_t ___UdwLoYILOubLSIDfSvbdnKJFoCVNA_9;
	int32_t ___njfMvUCuswHuLtHoZcdqAwTyNgamA_10;
	int32_t ___JwOchbdvhsvHVdSyYjtqEJdTZzYG_11;
	int32_t ___ysANvLtALhiLvQPHMrzVONBSGlf_12;
	int32_t ___GYjNfJzKOfaDDnMNUsNgyurjLVIT_13;
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

// Rewired.ReInput
struct ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194  : public RuntimeObject
{
public:

public:
};

struct ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields
{
public:
	// Rewired.InputManager_Base Rewired.ReInput::HvlowarpEJjTwmVIKndWValQpypI
	InputManager_Base_tCAC8EF372D63A0FA6FDC9D2D83AFC6E2AE17ACA3 * ___HvlowarpEJjTwmVIKndWValQpypI_7;
	// Rewired.PlatformInputManager Rewired.ReInput::CTpVLYlUovEEvUpcNlivRncrrQbW
	PlatformInputManager_t7FCA8CC07D7B77B9F368C4224CE8E21184228C97 * ___CTpVLYlUovEEvUpcNlivRncrrQbW_8;
	// nWObnmDQDyPAcKuVnyCIqGPjixDdb Rewired.ReInput::GAwkqrvWlvpikRXvCLOCwZfKeMsC
	nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9;
	// pmhdIRhCoLlQZffSYgOmsLkpxsjN Rewired.ReInput::VmqcbbbvPImXBEBcMHWjUAXVfrUSA
	pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * ___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10;
	// BBctKivJxEjGKRzyEkHSRjJoJqnW Rewired.ReInput::hqGXmYxZUrSrCxDobJTGEPCWvHAsA
	BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11;
	// Rewired.Data.ControllerDataFiles Rewired.ReInput::hvtSbKLcAoLwFocNZGaXyDHVIyhp
	ControllerDataFiles_t8E19CA6542D92ADE6C8BBC451AC22738803A4B61 * ___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12;
	// Rewired.Data.UserData Rewired.ReInput::afarNIRJlvcfXIrnUwLxEgdcbDEjA
	UserData_t4427A82FF543EBDF348050A2390ADD6D9DA48C1C * ___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13;
	// System.Boolean Rewired.ReInput::obpzIVquVRQseulcTcTZaHvizTjRA
	bool ___obpzIVquVRQseulcTcTZaHvizTjRA_14;
	// Rewired.Data.ConfigVars Rewired.ReInput::MzljsQKNnzXzAuzZSJhUefpPCcEy
	ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * ___MzljsQKNnzXzAuzZSJhUefpPCcEy_15;
	// Rewired.UpdateLoopType Rewired.ReInput::JZKJGBsuSaOLhJiTvsRyNFkLxwMp
	int32_t ___JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16;
	// System.Boolean Rewired.ReInput::ccufkjAWAhTbJaDuyGebaJsLxHKUA
	bool ___ccufkjAWAhTbJaDuyGebaJsLxHKUA_17;
	// Rewired.Platforms.Platform Rewired.ReInput::uDnCOOlZZpUIrgXGeSbcMIctXMiG
	int32_t ___uDnCOOlZZpUIrgXGeSbcMIctXMiG_18;
	// Rewired.Platforms.WebplayerPlatform Rewired.ReInput::EWHwzexfoiyRFhLiBgPzrmmYiUKt
	int32_t ___EWHwzexfoiyRFhLiBgPzrmmYiUKt_19;
	// Rewired.Platforms.EditorPlatform Rewired.ReInput::unICjthLTqHPNnLSrXcmbvFaXzQQ
	int32_t ___unICjthLTqHPNnLSrXcmbvFaXzQQ_20;
	// System.Boolean Rewired.ReInput::uncSVBAxHAmqUjuITaNtgwfiLSRd
	bool ___uncSVBAxHAmqUjuITaNtgwfiLSRd_21;
	// Rewired.Utils.Classes.Utility.TimerAbs Rewired.ReInput::HmHsEaZxDIDUXLKxzIztJkUaaoZm
	TimerAbs_t853769877A40479D16E384FAC2FF477C0A7A4835 * ___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22;
	// Rewired.ReInput/hZoSIeiGQlsNpxKnhkskatxNwdZA Rewired.ReInput::EgFqVkhnQuwqWzKlxbTTqBIkwAdn
	hZoSIeiGQlsNpxKnhkskatxNwdZA_t4CC71F906A9790E78BE053F1E8440B1CE0172112 * ___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23;
	// System.String Rewired.ReInput::qvEajoyMuISFgeEqGQeJiQKMKgmK
	String_t* ___qvEajoyMuISFgeEqGQeJiQKMKgmK_24;
	// System.Boolean Rewired.ReInput::hCmEAcPmvppxEjhawxLgIZABpLik
	bool ___hCmEAcPmvppxEjhawxLgIZABpLik_25;
	// System.Boolean Rewired.ReInput::GkmiXdOXsbIXKjeFpIDPABcVkAEp
	bool ___GkmiXdOXsbIXKjeFpIDPABcVkAEp_26;
	// System.Boolean Rewired.ReInput::ciaKHlkdfnxSFTEXSBgJHScCNEMbA
	bool ___ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27;
	// System.Int32 Rewired.ReInput::UELUFrjaUxsAhaTllRzYIkUctOmj
	int32_t ___UELUFrjaUxsAhaTllRzYIkUctOmj_28;
	// System.Int32 Rewired.ReInput::_id
	int32_t ____id_29;
	// System.Int32 Rewired.ReInput::eiTDtHWtAjacrCGIktMvceGodkmNA
	int32_t ___eiTDtHWtAjacrCGIktMvceGodkmNA_30;
	// System.Int32 Rewired.ReInput::CDFHTYcVYyNjfwcbyMnOntgUhkKJ
	int32_t ___CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31;
	// System.Boolean Rewired.ReInput::DxzQhCtDRoyInHoxWcnNRxVqcFzB
	bool ___DxzQhCtDRoyInHoxWcnNRxVqcFzB_32;
	// Rewired.ReInput/UnityTouch Rewired.ReInput::akZVbtgXAOvjVgWMOQHFJjdJMvoD
	UnityTouch_tDDD52031E8E052D791D773F08E1477DE9D1D88A5 * ___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33;
	// Rewired.ReInput/PlayerHelper Rewired.ReInput::GdwWjDCOcxwJUizjrHagUJgJeCNJ
	PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A * ___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34;
	// Rewired.ReInput/ControllerHelper Rewired.ReInput::QpbBNmWrfInkcoGyYFaZIQVXTXrNA
	ControllerHelper_t1F189C4A6665BE43AEAD6FF1AD7F2A879D6B19F3 * ___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35;
	// Rewired.ReInput/MappingHelper Rewired.ReInput::qIzETGiaCujiFKelzjMBwftDgerG
	MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * ___qIzETGiaCujiFKelzjMBwftDgerG_36;
	// Rewired.ReInput/TimeHelper Rewired.ReInput::ecdLtUBiFgzGXZaYvntixqlbMFjm
	TimeHelper_t9872564F84504E5F0CB2F711CD665D780872703D * ___ecdLtUBiFgzGXZaYvntixqlbMFjm_37;
	// Rewired.ReInput/ConfigHelper Rewired.ReInput::zFposRXLCpdyIpBgRutQBeayGyFI
	ConfigHelper_tFD4D250A2384858C59BD27416B61B992E8115446 * ___zFposRXLCpdyIpBgRutQBeayGyFI_38;
	// WiGEESztaQcOlAVSzDYLfidomemMA Rewired.ReInput::apYTMDWGCXhutvjiTTLcQkjwiobJ
	WiGEESztaQcOlAVSzDYLfidomemMA_t12E93A731BB5D3D7C6A9C764C66699D19F4E23D8 * ___apYTMDWGCXhutvjiTTLcQkjwiobJ_39;
	// Rewired.Data.UserDataStore Rewired.ReInput::LPxDLELdQfiHxinMUfSElrZHFOEd
	UserDataStore_tA9914C1C5350516C21FF357E89352D4E38AE52DE * ___LPxDLELdQfiHxinMUfSElrZHFOEd_40;
	// Rewired.Interfaces.IControllerAssigner Rewired.ReInput::CDsiOyqanEANRJmTqOQLnofCbVXm
	RuntimeObject* ___CDsiOyqanEANRJmTqOQLnofCbVXm_41;
	// Rewired.ReInput/MqUEZjlwiIeKTuXxUzFWBUliKyLL Rewired.ReInput::KCnPsFgFLyiYyEYWEjTridcaKheJA
	MqUEZjlwiIeKTuXxUzFWBUliKyLL_t7507B4BBB0A38E3CD76BECBAAFE6BD5447B784BC * ___KCnPsFgFLyiYyEYWEjTridcaKheJA_42;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::uFMSNayMaqnyuBvdoywREwUAsimj
	SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * ___uFMSNayMaqnyuBvdoywREwUAsimj_43;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::RSMIOQyasZdEIGhSzpIEFbajfJYPc
	SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * ___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::JYXlYmJfMTgurfCCixbvqZlIozKP
	SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * ___JYXlYmJfMTgurfCCixbvqZlIozKP_45;
	// Rewired.Utils.SafeAction Rewired.ReInput::BbIMbQeLvHjivRxkUFEuuHyecJUe
	SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * ___BbIMbQeLvHjivRxkUFEuuHyecJUe_46;
	// Rewired.Utils.SafeAction Rewired.ReInput::DoMcMTFZOcROcVWyENyvXEFgDWYm
	SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * ___DoMcMTFZOcROcVWyENyvXEFgDWYm_47;
	// Rewired.Utils.SafeAction Rewired.ReInput::DxDDJgdGopEpAltRNiEBalwJEIfob
	SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * ___DxDDJgdGopEpAltRNiEBalwJEIfob_48;
	// Rewired.Utils.SafeAction Rewired.ReInput::BDmisuCgVCeghMSBpbXRvlOriVYBb
	SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * ___BDmisuCgVCeghMSBpbXRvlOriVYBb_49;
	// Rewired.Utils.SafeAction Rewired.ReInput::vMWkXfFtLyWssWlmvPyaljgWTHhk
	SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * ___vMWkXfFtLyWssWlmvPyaljgWTHhk_50;
	// System.Action`1<System.Boolean> Rewired.ReInput::_ApplicationFocusChangedEvent
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ____ApplicationFocusChangedEvent_51;
	// System.Action Rewired.ReInput::IzBYZMAEXTGrtOeLAlYNcYpctpQK
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::TrQuHFJWSbBEQkUuadDRDhOfcwRn
	Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * ___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::DIGTJvqzbyagBhANOgLCGihAWkgZ
	Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * ___DIGTJvqzbyagBhANOgLCGihAWkgZ_54;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::RwMSqmrPEIcUWPMqqCGgofpACAIz
	Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * ___RwMSqmrPEIcUWPMqqCGgofpACAIz_55;
	// System.Action Rewired.ReInput::nEoJdFSxGZTTQgqVzwyiDJlZpkoT
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56;
	// System.Action`1<System.Boolean> Rewired.ReInput::yNbnOmzfriGRWQMmXbBnZbjOIcYA
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57;
	// System.Action`1<System.Boolean> Rewired.ReInput::TcVDZtTBkbCPvFcbwUNzUxWXdNzKA
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58;
	// System.Action`1<System.Boolean> Rewired.ReInput::EPCOWdjrRVZgEJREalGNkcBsOdV
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___EPCOWdjrRVZgEJREalGNkcBsOdV_59;
	// System.Action`1<UnityEngine.FullScreenMode> Rewired.ReInput::IQDcUMOkJbbJpvsxoxIaATuqmVFJ
	Action_1_tAD2B31A3F05D0E166AA6ADF95BC1A866EC04D5F2 * ___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60;
	// System.Action Rewired.ReInput::atJFAUEGsWvXzxPSVIFgFPyLZccI
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___atJFAUEGsWvXzxPSVIFgFPyLZccI_61;
	// System.Action`1<System.Boolean> Rewired.ReInput::BHfOhXExzTwULJhJBFXiuCiXbVPK
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___BHfOhXExzTwULJhJBFXiuCiXbVPK_62;
	// System.Double Rewired.ReInput::unscaledDeltaTime
	double ___unscaledDeltaTime_63;
	// System.Double Rewired.ReInput::unscaledTime
	double ___unscaledTime_64;
	// System.Double Rewired.ReInput::unscaledTimePrev
	double ___unscaledTimePrev_65;
	// System.UInt32 Rewired.ReInput::currentFrame
	uint32_t ___currentFrame_66;
	// System.UInt32 Rewired.ReInput::previousFrame
	uint32_t ___previousFrame_67;
	// System.UInt32 Rewired.ReInput::absFrame
	uint32_t ___absFrame_68;

public:
	inline static int32_t get_offset_of_HvlowarpEJjTwmVIKndWValQpypI_7() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___HvlowarpEJjTwmVIKndWValQpypI_7)); }
	inline InputManager_Base_tCAC8EF372D63A0FA6FDC9D2D83AFC6E2AE17ACA3 * get_HvlowarpEJjTwmVIKndWValQpypI_7() const { return ___HvlowarpEJjTwmVIKndWValQpypI_7; }
	inline InputManager_Base_tCAC8EF372D63A0FA6FDC9D2D83AFC6E2AE17ACA3 ** get_address_of_HvlowarpEJjTwmVIKndWValQpypI_7() { return &___HvlowarpEJjTwmVIKndWValQpypI_7; }
	inline void set_HvlowarpEJjTwmVIKndWValQpypI_7(InputManager_Base_tCAC8EF372D63A0FA6FDC9D2D83AFC6E2AE17ACA3 * value)
	{
		___HvlowarpEJjTwmVIKndWValQpypI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HvlowarpEJjTwmVIKndWValQpypI_7), (void*)value);
	}

	inline static int32_t get_offset_of_CTpVLYlUovEEvUpcNlivRncrrQbW_8() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___CTpVLYlUovEEvUpcNlivRncrrQbW_8)); }
	inline PlatformInputManager_t7FCA8CC07D7B77B9F368C4224CE8E21184228C97 * get_CTpVLYlUovEEvUpcNlivRncrrQbW_8() const { return ___CTpVLYlUovEEvUpcNlivRncrrQbW_8; }
	inline PlatformInputManager_t7FCA8CC07D7B77B9F368C4224CE8E21184228C97 ** get_address_of_CTpVLYlUovEEvUpcNlivRncrrQbW_8() { return &___CTpVLYlUovEEvUpcNlivRncrrQbW_8; }
	inline void set_CTpVLYlUovEEvUpcNlivRncrrQbW_8(PlatformInputManager_t7FCA8CC07D7B77B9F368C4224CE8E21184228C97 * value)
	{
		___CTpVLYlUovEEvUpcNlivRncrrQbW_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CTpVLYlUovEEvUpcNlivRncrrQbW_8), (void*)value);
	}

	inline static int32_t get_offset_of_GAwkqrvWlvpikRXvCLOCwZfKeMsC_9() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9)); }
	inline nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * get_GAwkqrvWlvpikRXvCLOCwZfKeMsC_9() const { return ___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9; }
	inline nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 ** get_address_of_GAwkqrvWlvpikRXvCLOCwZfKeMsC_9() { return &___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9; }
	inline void set_GAwkqrvWlvpikRXvCLOCwZfKeMsC_9(nWObnmDQDyPAcKuVnyCIqGPjixDdb_tCCA0BB172D3624A9A0269EF520363741A2FA3602 * value)
	{
		___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GAwkqrvWlvpikRXvCLOCwZfKeMsC_9), (void*)value);
	}

	inline static int32_t get_offset_of_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10)); }
	inline pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10() const { return ___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10; }
	inline pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB ** get_address_of_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10() { return &___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10; }
	inline void set_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10(pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * value)
	{
		___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10), (void*)value);
	}

	inline static int32_t get_offset_of_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11)); }
	inline BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11() const { return ___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11; }
	inline BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 ** get_address_of_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11() { return &___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11; }
	inline void set_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11(BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * value)
	{
		___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11), (void*)value);
	}

	inline static int32_t get_offset_of_hvtSbKLcAoLwFocNZGaXyDHVIyhp_12() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12)); }
	inline ControllerDataFiles_t8E19CA6542D92ADE6C8BBC451AC22738803A4B61 * get_hvtSbKLcAoLwFocNZGaXyDHVIyhp_12() const { return ___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12; }
	inline ControllerDataFiles_t8E19CA6542D92ADE6C8BBC451AC22738803A4B61 ** get_address_of_hvtSbKLcAoLwFocNZGaXyDHVIyhp_12() { return &___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12; }
	inline void set_hvtSbKLcAoLwFocNZGaXyDHVIyhp_12(ControllerDataFiles_t8E19CA6542D92ADE6C8BBC451AC22738803A4B61 * value)
	{
		___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hvtSbKLcAoLwFocNZGaXyDHVIyhp_12), (void*)value);
	}

	inline static int32_t get_offset_of_afarNIRJlvcfXIrnUwLxEgdcbDEjA_13() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13)); }
	inline UserData_t4427A82FF543EBDF348050A2390ADD6D9DA48C1C * get_afarNIRJlvcfXIrnUwLxEgdcbDEjA_13() const { return ___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13; }
	inline UserData_t4427A82FF543EBDF348050A2390ADD6D9DA48C1C ** get_address_of_afarNIRJlvcfXIrnUwLxEgdcbDEjA_13() { return &___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13; }
	inline void set_afarNIRJlvcfXIrnUwLxEgdcbDEjA_13(UserData_t4427A82FF543EBDF348050A2390ADD6D9DA48C1C * value)
	{
		___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___afarNIRJlvcfXIrnUwLxEgdcbDEjA_13), (void*)value);
	}

	inline static int32_t get_offset_of_obpzIVquVRQseulcTcTZaHvizTjRA_14() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___obpzIVquVRQseulcTcTZaHvizTjRA_14)); }
	inline bool get_obpzIVquVRQseulcTcTZaHvizTjRA_14() const { return ___obpzIVquVRQseulcTcTZaHvizTjRA_14; }
	inline bool* get_address_of_obpzIVquVRQseulcTcTZaHvizTjRA_14() { return &___obpzIVquVRQseulcTcTZaHvizTjRA_14; }
	inline void set_obpzIVquVRQseulcTcTZaHvizTjRA_14(bool value)
	{
		___obpzIVquVRQseulcTcTZaHvizTjRA_14 = value;
	}

	inline static int32_t get_offset_of_MzljsQKNnzXzAuzZSJhUefpPCcEy_15() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___MzljsQKNnzXzAuzZSJhUefpPCcEy_15)); }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * get_MzljsQKNnzXzAuzZSJhUefpPCcEy_15() const { return ___MzljsQKNnzXzAuzZSJhUefpPCcEy_15; }
	inline ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 ** get_address_of_MzljsQKNnzXzAuzZSJhUefpPCcEy_15() { return &___MzljsQKNnzXzAuzZSJhUefpPCcEy_15; }
	inline void set_MzljsQKNnzXzAuzZSJhUefpPCcEy_15(ConfigVars_tE36C7356B7385DFC0CFB8D40230D688CFF184F03 * value)
	{
		___MzljsQKNnzXzAuzZSJhUefpPCcEy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MzljsQKNnzXzAuzZSJhUefpPCcEy_15), (void*)value);
	}

	inline static int32_t get_offset_of_JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16)); }
	inline int32_t get_JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16() const { return ___JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16; }
	inline int32_t* get_address_of_JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16() { return &___JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16; }
	inline void set_JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16(int32_t value)
	{
		___JZKJGBsuSaOLhJiTvsRyNFkLxwMp_16 = value;
	}

	inline static int32_t get_offset_of_ccufkjAWAhTbJaDuyGebaJsLxHKUA_17() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___ccufkjAWAhTbJaDuyGebaJsLxHKUA_17)); }
	inline bool get_ccufkjAWAhTbJaDuyGebaJsLxHKUA_17() const { return ___ccufkjAWAhTbJaDuyGebaJsLxHKUA_17; }
	inline bool* get_address_of_ccufkjAWAhTbJaDuyGebaJsLxHKUA_17() { return &___ccufkjAWAhTbJaDuyGebaJsLxHKUA_17; }
	inline void set_ccufkjAWAhTbJaDuyGebaJsLxHKUA_17(bool value)
	{
		___ccufkjAWAhTbJaDuyGebaJsLxHKUA_17 = value;
	}

	inline static int32_t get_offset_of_uDnCOOlZZpUIrgXGeSbcMIctXMiG_18() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___uDnCOOlZZpUIrgXGeSbcMIctXMiG_18)); }
	inline int32_t get_uDnCOOlZZpUIrgXGeSbcMIctXMiG_18() const { return ___uDnCOOlZZpUIrgXGeSbcMIctXMiG_18; }
	inline int32_t* get_address_of_uDnCOOlZZpUIrgXGeSbcMIctXMiG_18() { return &___uDnCOOlZZpUIrgXGeSbcMIctXMiG_18; }
	inline void set_uDnCOOlZZpUIrgXGeSbcMIctXMiG_18(int32_t value)
	{
		___uDnCOOlZZpUIrgXGeSbcMIctXMiG_18 = value;
	}

	inline static int32_t get_offset_of_EWHwzexfoiyRFhLiBgPzrmmYiUKt_19() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___EWHwzexfoiyRFhLiBgPzrmmYiUKt_19)); }
	inline int32_t get_EWHwzexfoiyRFhLiBgPzrmmYiUKt_19() const { return ___EWHwzexfoiyRFhLiBgPzrmmYiUKt_19; }
	inline int32_t* get_address_of_EWHwzexfoiyRFhLiBgPzrmmYiUKt_19() { return &___EWHwzexfoiyRFhLiBgPzrmmYiUKt_19; }
	inline void set_EWHwzexfoiyRFhLiBgPzrmmYiUKt_19(int32_t value)
	{
		___EWHwzexfoiyRFhLiBgPzrmmYiUKt_19 = value;
	}

	inline static int32_t get_offset_of_unICjthLTqHPNnLSrXcmbvFaXzQQ_20() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___unICjthLTqHPNnLSrXcmbvFaXzQQ_20)); }
	inline int32_t get_unICjthLTqHPNnLSrXcmbvFaXzQQ_20() const { return ___unICjthLTqHPNnLSrXcmbvFaXzQQ_20; }
	inline int32_t* get_address_of_unICjthLTqHPNnLSrXcmbvFaXzQQ_20() { return &___unICjthLTqHPNnLSrXcmbvFaXzQQ_20; }
	inline void set_unICjthLTqHPNnLSrXcmbvFaXzQQ_20(int32_t value)
	{
		___unICjthLTqHPNnLSrXcmbvFaXzQQ_20 = value;
	}

	inline static int32_t get_offset_of_uncSVBAxHAmqUjuITaNtgwfiLSRd_21() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___uncSVBAxHAmqUjuITaNtgwfiLSRd_21)); }
	inline bool get_uncSVBAxHAmqUjuITaNtgwfiLSRd_21() const { return ___uncSVBAxHAmqUjuITaNtgwfiLSRd_21; }
	inline bool* get_address_of_uncSVBAxHAmqUjuITaNtgwfiLSRd_21() { return &___uncSVBAxHAmqUjuITaNtgwfiLSRd_21; }
	inline void set_uncSVBAxHAmqUjuITaNtgwfiLSRd_21(bool value)
	{
		___uncSVBAxHAmqUjuITaNtgwfiLSRd_21 = value;
	}

	inline static int32_t get_offset_of_HmHsEaZxDIDUXLKxzIztJkUaaoZm_22() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22)); }
	inline TimerAbs_t853769877A40479D16E384FAC2FF477C0A7A4835 * get_HmHsEaZxDIDUXLKxzIztJkUaaoZm_22() const { return ___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22; }
	inline TimerAbs_t853769877A40479D16E384FAC2FF477C0A7A4835 ** get_address_of_HmHsEaZxDIDUXLKxzIztJkUaaoZm_22() { return &___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22; }
	inline void set_HmHsEaZxDIDUXLKxzIztJkUaaoZm_22(TimerAbs_t853769877A40479D16E384FAC2FF477C0A7A4835 * value)
	{
		___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HmHsEaZxDIDUXLKxzIztJkUaaoZm_22), (void*)value);
	}

	inline static int32_t get_offset_of_EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23)); }
	inline hZoSIeiGQlsNpxKnhkskatxNwdZA_t4CC71F906A9790E78BE053F1E8440B1CE0172112 * get_EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23() const { return ___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23; }
	inline hZoSIeiGQlsNpxKnhkskatxNwdZA_t4CC71F906A9790E78BE053F1E8440B1CE0172112 ** get_address_of_EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23() { return &___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23; }
	inline void set_EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23(hZoSIeiGQlsNpxKnhkskatxNwdZA_t4CC71F906A9790E78BE053F1E8440B1CE0172112 * value)
	{
		___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EgFqVkhnQuwqWzKlxbTTqBIkwAdn_23), (void*)value);
	}

	inline static int32_t get_offset_of_qvEajoyMuISFgeEqGQeJiQKMKgmK_24() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___qvEajoyMuISFgeEqGQeJiQKMKgmK_24)); }
	inline String_t* get_qvEajoyMuISFgeEqGQeJiQKMKgmK_24() const { return ___qvEajoyMuISFgeEqGQeJiQKMKgmK_24; }
	inline String_t** get_address_of_qvEajoyMuISFgeEqGQeJiQKMKgmK_24() { return &___qvEajoyMuISFgeEqGQeJiQKMKgmK_24; }
	inline void set_qvEajoyMuISFgeEqGQeJiQKMKgmK_24(String_t* value)
	{
		___qvEajoyMuISFgeEqGQeJiQKMKgmK_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qvEajoyMuISFgeEqGQeJiQKMKgmK_24), (void*)value);
	}

	inline static int32_t get_offset_of_hCmEAcPmvppxEjhawxLgIZABpLik_25() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___hCmEAcPmvppxEjhawxLgIZABpLik_25)); }
	inline bool get_hCmEAcPmvppxEjhawxLgIZABpLik_25() const { return ___hCmEAcPmvppxEjhawxLgIZABpLik_25; }
	inline bool* get_address_of_hCmEAcPmvppxEjhawxLgIZABpLik_25() { return &___hCmEAcPmvppxEjhawxLgIZABpLik_25; }
	inline void set_hCmEAcPmvppxEjhawxLgIZABpLik_25(bool value)
	{
		___hCmEAcPmvppxEjhawxLgIZABpLik_25 = value;
	}

	inline static int32_t get_offset_of_GkmiXdOXsbIXKjeFpIDPABcVkAEp_26() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___GkmiXdOXsbIXKjeFpIDPABcVkAEp_26)); }
	inline bool get_GkmiXdOXsbIXKjeFpIDPABcVkAEp_26() const { return ___GkmiXdOXsbIXKjeFpIDPABcVkAEp_26; }
	inline bool* get_address_of_GkmiXdOXsbIXKjeFpIDPABcVkAEp_26() { return &___GkmiXdOXsbIXKjeFpIDPABcVkAEp_26; }
	inline void set_GkmiXdOXsbIXKjeFpIDPABcVkAEp_26(bool value)
	{
		___GkmiXdOXsbIXKjeFpIDPABcVkAEp_26 = value;
	}

	inline static int32_t get_offset_of_ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27)); }
	inline bool get_ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27() const { return ___ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27; }
	inline bool* get_address_of_ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27() { return &___ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27; }
	inline void set_ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27(bool value)
	{
		___ciaKHlkdfnxSFTEXSBgJHScCNEMbA_27 = value;
	}

	inline static int32_t get_offset_of_UELUFrjaUxsAhaTllRzYIkUctOmj_28() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___UELUFrjaUxsAhaTllRzYIkUctOmj_28)); }
	inline int32_t get_UELUFrjaUxsAhaTllRzYIkUctOmj_28() const { return ___UELUFrjaUxsAhaTllRzYIkUctOmj_28; }
	inline int32_t* get_address_of_UELUFrjaUxsAhaTllRzYIkUctOmj_28() { return &___UELUFrjaUxsAhaTllRzYIkUctOmj_28; }
	inline void set_UELUFrjaUxsAhaTllRzYIkUctOmj_28(int32_t value)
	{
		___UELUFrjaUxsAhaTllRzYIkUctOmj_28 = value;
	}

	inline static int32_t get_offset_of__id_29() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ____id_29)); }
	inline int32_t get__id_29() const { return ____id_29; }
	inline int32_t* get_address_of__id_29() { return &____id_29; }
	inline void set__id_29(int32_t value)
	{
		____id_29 = value;
	}

	inline static int32_t get_offset_of_eiTDtHWtAjacrCGIktMvceGodkmNA_30() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___eiTDtHWtAjacrCGIktMvceGodkmNA_30)); }
	inline int32_t get_eiTDtHWtAjacrCGIktMvceGodkmNA_30() const { return ___eiTDtHWtAjacrCGIktMvceGodkmNA_30; }
	inline int32_t* get_address_of_eiTDtHWtAjacrCGIktMvceGodkmNA_30() { return &___eiTDtHWtAjacrCGIktMvceGodkmNA_30; }
	inline void set_eiTDtHWtAjacrCGIktMvceGodkmNA_30(int32_t value)
	{
		___eiTDtHWtAjacrCGIktMvceGodkmNA_30 = value;
	}

	inline static int32_t get_offset_of_CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31)); }
	inline int32_t get_CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31() const { return ___CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31; }
	inline int32_t* get_address_of_CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31() { return &___CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31; }
	inline void set_CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31(int32_t value)
	{
		___CDFHTYcVYyNjfwcbyMnOntgUhkKJ_31 = value;
	}

	inline static int32_t get_offset_of_DxzQhCtDRoyInHoxWcnNRxVqcFzB_32() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___DxzQhCtDRoyInHoxWcnNRxVqcFzB_32)); }
	inline bool get_DxzQhCtDRoyInHoxWcnNRxVqcFzB_32() const { return ___DxzQhCtDRoyInHoxWcnNRxVqcFzB_32; }
	inline bool* get_address_of_DxzQhCtDRoyInHoxWcnNRxVqcFzB_32() { return &___DxzQhCtDRoyInHoxWcnNRxVqcFzB_32; }
	inline void set_DxzQhCtDRoyInHoxWcnNRxVqcFzB_32(bool value)
	{
		___DxzQhCtDRoyInHoxWcnNRxVqcFzB_32 = value;
	}

	inline static int32_t get_offset_of_akZVbtgXAOvjVgWMOQHFJjdJMvoD_33() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33)); }
	inline UnityTouch_tDDD52031E8E052D791D773F08E1477DE9D1D88A5 * get_akZVbtgXAOvjVgWMOQHFJjdJMvoD_33() const { return ___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33; }
	inline UnityTouch_tDDD52031E8E052D791D773F08E1477DE9D1D88A5 ** get_address_of_akZVbtgXAOvjVgWMOQHFJjdJMvoD_33() { return &___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33; }
	inline void set_akZVbtgXAOvjVgWMOQHFJjdJMvoD_33(UnityTouch_tDDD52031E8E052D791D773F08E1477DE9D1D88A5 * value)
	{
		___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___akZVbtgXAOvjVgWMOQHFJjdJMvoD_33), (void*)value);
	}

	inline static int32_t get_offset_of_GdwWjDCOcxwJUizjrHagUJgJeCNJ_34() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34)); }
	inline PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A * get_GdwWjDCOcxwJUizjrHagUJgJeCNJ_34() const { return ___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34; }
	inline PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A ** get_address_of_GdwWjDCOcxwJUizjrHagUJgJeCNJ_34() { return &___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34; }
	inline void set_GdwWjDCOcxwJUizjrHagUJgJeCNJ_34(PlayerHelper_tE04CA1F995394B5A151627679981DAB10E122D5A * value)
	{
		___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GdwWjDCOcxwJUizjrHagUJgJeCNJ_34), (void*)value);
	}

	inline static int32_t get_offset_of_QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35)); }
	inline ControllerHelper_t1F189C4A6665BE43AEAD6FF1AD7F2A879D6B19F3 * get_QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35() const { return ___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35; }
	inline ControllerHelper_t1F189C4A6665BE43AEAD6FF1AD7F2A879D6B19F3 ** get_address_of_QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35() { return &___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35; }
	inline void set_QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35(ControllerHelper_t1F189C4A6665BE43AEAD6FF1AD7F2A879D6B19F3 * value)
	{
		___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QpbBNmWrfInkcoGyYFaZIQVXTXrNA_35), (void*)value);
	}

	inline static int32_t get_offset_of_qIzETGiaCujiFKelzjMBwftDgerG_36() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___qIzETGiaCujiFKelzjMBwftDgerG_36)); }
	inline MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * get_qIzETGiaCujiFKelzjMBwftDgerG_36() const { return ___qIzETGiaCujiFKelzjMBwftDgerG_36; }
	inline MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 ** get_address_of_qIzETGiaCujiFKelzjMBwftDgerG_36() { return &___qIzETGiaCujiFKelzjMBwftDgerG_36; }
	inline void set_qIzETGiaCujiFKelzjMBwftDgerG_36(MappingHelper_t93ADF1623793FCCDE27132DB2FBD2679DA11F126 * value)
	{
		___qIzETGiaCujiFKelzjMBwftDgerG_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qIzETGiaCujiFKelzjMBwftDgerG_36), (void*)value);
	}

	inline static int32_t get_offset_of_ecdLtUBiFgzGXZaYvntixqlbMFjm_37() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___ecdLtUBiFgzGXZaYvntixqlbMFjm_37)); }
	inline TimeHelper_t9872564F84504E5F0CB2F711CD665D780872703D * get_ecdLtUBiFgzGXZaYvntixqlbMFjm_37() const { return ___ecdLtUBiFgzGXZaYvntixqlbMFjm_37; }
	inline TimeHelper_t9872564F84504E5F0CB2F711CD665D780872703D ** get_address_of_ecdLtUBiFgzGXZaYvntixqlbMFjm_37() { return &___ecdLtUBiFgzGXZaYvntixqlbMFjm_37; }
	inline void set_ecdLtUBiFgzGXZaYvntixqlbMFjm_37(TimeHelper_t9872564F84504E5F0CB2F711CD665D780872703D * value)
	{
		___ecdLtUBiFgzGXZaYvntixqlbMFjm_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ecdLtUBiFgzGXZaYvntixqlbMFjm_37), (void*)value);
	}

	inline static int32_t get_offset_of_zFposRXLCpdyIpBgRutQBeayGyFI_38() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___zFposRXLCpdyIpBgRutQBeayGyFI_38)); }
	inline ConfigHelper_tFD4D250A2384858C59BD27416B61B992E8115446 * get_zFposRXLCpdyIpBgRutQBeayGyFI_38() const { return ___zFposRXLCpdyIpBgRutQBeayGyFI_38; }
	inline ConfigHelper_tFD4D250A2384858C59BD27416B61B992E8115446 ** get_address_of_zFposRXLCpdyIpBgRutQBeayGyFI_38() { return &___zFposRXLCpdyIpBgRutQBeayGyFI_38; }
	inline void set_zFposRXLCpdyIpBgRutQBeayGyFI_38(ConfigHelper_tFD4D250A2384858C59BD27416B61B992E8115446 * value)
	{
		___zFposRXLCpdyIpBgRutQBeayGyFI_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zFposRXLCpdyIpBgRutQBeayGyFI_38), (void*)value);
	}

	inline static int32_t get_offset_of_apYTMDWGCXhutvjiTTLcQkjwiobJ_39() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___apYTMDWGCXhutvjiTTLcQkjwiobJ_39)); }
	inline WiGEESztaQcOlAVSzDYLfidomemMA_t12E93A731BB5D3D7C6A9C764C66699D19F4E23D8 * get_apYTMDWGCXhutvjiTTLcQkjwiobJ_39() const { return ___apYTMDWGCXhutvjiTTLcQkjwiobJ_39; }
	inline WiGEESztaQcOlAVSzDYLfidomemMA_t12E93A731BB5D3D7C6A9C764C66699D19F4E23D8 ** get_address_of_apYTMDWGCXhutvjiTTLcQkjwiobJ_39() { return &___apYTMDWGCXhutvjiTTLcQkjwiobJ_39; }
	inline void set_apYTMDWGCXhutvjiTTLcQkjwiobJ_39(WiGEESztaQcOlAVSzDYLfidomemMA_t12E93A731BB5D3D7C6A9C764C66699D19F4E23D8 * value)
	{
		___apYTMDWGCXhutvjiTTLcQkjwiobJ_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apYTMDWGCXhutvjiTTLcQkjwiobJ_39), (void*)value);
	}

	inline static int32_t get_offset_of_LPxDLELdQfiHxinMUfSElrZHFOEd_40() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___LPxDLELdQfiHxinMUfSElrZHFOEd_40)); }
	inline UserDataStore_tA9914C1C5350516C21FF357E89352D4E38AE52DE * get_LPxDLELdQfiHxinMUfSElrZHFOEd_40() const { return ___LPxDLELdQfiHxinMUfSElrZHFOEd_40; }
	inline UserDataStore_tA9914C1C5350516C21FF357E89352D4E38AE52DE ** get_address_of_LPxDLELdQfiHxinMUfSElrZHFOEd_40() { return &___LPxDLELdQfiHxinMUfSElrZHFOEd_40; }
	inline void set_LPxDLELdQfiHxinMUfSElrZHFOEd_40(UserDataStore_tA9914C1C5350516C21FF357E89352D4E38AE52DE * value)
	{
		___LPxDLELdQfiHxinMUfSElrZHFOEd_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LPxDLELdQfiHxinMUfSElrZHFOEd_40), (void*)value);
	}

	inline static int32_t get_offset_of_CDsiOyqanEANRJmTqOQLnofCbVXm_41() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___CDsiOyqanEANRJmTqOQLnofCbVXm_41)); }
	inline RuntimeObject* get_CDsiOyqanEANRJmTqOQLnofCbVXm_41() const { return ___CDsiOyqanEANRJmTqOQLnofCbVXm_41; }
	inline RuntimeObject** get_address_of_CDsiOyqanEANRJmTqOQLnofCbVXm_41() { return &___CDsiOyqanEANRJmTqOQLnofCbVXm_41; }
	inline void set_CDsiOyqanEANRJmTqOQLnofCbVXm_41(RuntimeObject* value)
	{
		___CDsiOyqanEANRJmTqOQLnofCbVXm_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CDsiOyqanEANRJmTqOQLnofCbVXm_41), (void*)value);
	}

	inline static int32_t get_offset_of_KCnPsFgFLyiYyEYWEjTridcaKheJA_42() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___KCnPsFgFLyiYyEYWEjTridcaKheJA_42)); }
	inline MqUEZjlwiIeKTuXxUzFWBUliKyLL_t7507B4BBB0A38E3CD76BECBAAFE6BD5447B784BC * get_KCnPsFgFLyiYyEYWEjTridcaKheJA_42() const { return ___KCnPsFgFLyiYyEYWEjTridcaKheJA_42; }
	inline MqUEZjlwiIeKTuXxUzFWBUliKyLL_t7507B4BBB0A38E3CD76BECBAAFE6BD5447B784BC ** get_address_of_KCnPsFgFLyiYyEYWEjTridcaKheJA_42() { return &___KCnPsFgFLyiYyEYWEjTridcaKheJA_42; }
	inline void set_KCnPsFgFLyiYyEYWEjTridcaKheJA_42(MqUEZjlwiIeKTuXxUzFWBUliKyLL_t7507B4BBB0A38E3CD76BECBAAFE6BD5447B784BC * value)
	{
		___KCnPsFgFLyiYyEYWEjTridcaKheJA_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KCnPsFgFLyiYyEYWEjTridcaKheJA_42), (void*)value);
	}

	inline static int32_t get_offset_of_uFMSNayMaqnyuBvdoywREwUAsimj_43() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___uFMSNayMaqnyuBvdoywREwUAsimj_43)); }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * get_uFMSNayMaqnyuBvdoywREwUAsimj_43() const { return ___uFMSNayMaqnyuBvdoywREwUAsimj_43; }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F ** get_address_of_uFMSNayMaqnyuBvdoywREwUAsimj_43() { return &___uFMSNayMaqnyuBvdoywREwUAsimj_43; }
	inline void set_uFMSNayMaqnyuBvdoywREwUAsimj_43(SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * value)
	{
		___uFMSNayMaqnyuBvdoywREwUAsimj_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uFMSNayMaqnyuBvdoywREwUAsimj_43), (void*)value);
	}

	inline static int32_t get_offset_of_RSMIOQyasZdEIGhSzpIEFbajfJYPc_44() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44)); }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * get_RSMIOQyasZdEIGhSzpIEFbajfJYPc_44() const { return ___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44; }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F ** get_address_of_RSMIOQyasZdEIGhSzpIEFbajfJYPc_44() { return &___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44; }
	inline void set_RSMIOQyasZdEIGhSzpIEFbajfJYPc_44(SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * value)
	{
		___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RSMIOQyasZdEIGhSzpIEFbajfJYPc_44), (void*)value);
	}

	inline static int32_t get_offset_of_JYXlYmJfMTgurfCCixbvqZlIozKP_45() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___JYXlYmJfMTgurfCCixbvqZlIozKP_45)); }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * get_JYXlYmJfMTgurfCCixbvqZlIozKP_45() const { return ___JYXlYmJfMTgurfCCixbvqZlIozKP_45; }
	inline SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F ** get_address_of_JYXlYmJfMTgurfCCixbvqZlIozKP_45() { return &___JYXlYmJfMTgurfCCixbvqZlIozKP_45; }
	inline void set_JYXlYmJfMTgurfCCixbvqZlIozKP_45(SafeAction_1_t6252C5E0FF0AF9EB74EC49E21091D5E31F0D359F * value)
	{
		___JYXlYmJfMTgurfCCixbvqZlIozKP_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JYXlYmJfMTgurfCCixbvqZlIozKP_45), (void*)value);
	}

	inline static int32_t get_offset_of_BbIMbQeLvHjivRxkUFEuuHyecJUe_46() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___BbIMbQeLvHjivRxkUFEuuHyecJUe_46)); }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * get_BbIMbQeLvHjivRxkUFEuuHyecJUe_46() const { return ___BbIMbQeLvHjivRxkUFEuuHyecJUe_46; }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B ** get_address_of_BbIMbQeLvHjivRxkUFEuuHyecJUe_46() { return &___BbIMbQeLvHjivRxkUFEuuHyecJUe_46; }
	inline void set_BbIMbQeLvHjivRxkUFEuuHyecJUe_46(SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * value)
	{
		___BbIMbQeLvHjivRxkUFEuuHyecJUe_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BbIMbQeLvHjivRxkUFEuuHyecJUe_46), (void*)value);
	}

	inline static int32_t get_offset_of_DoMcMTFZOcROcVWyENyvXEFgDWYm_47() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___DoMcMTFZOcROcVWyENyvXEFgDWYm_47)); }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * get_DoMcMTFZOcROcVWyENyvXEFgDWYm_47() const { return ___DoMcMTFZOcROcVWyENyvXEFgDWYm_47; }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B ** get_address_of_DoMcMTFZOcROcVWyENyvXEFgDWYm_47() { return &___DoMcMTFZOcROcVWyENyvXEFgDWYm_47; }
	inline void set_DoMcMTFZOcROcVWyENyvXEFgDWYm_47(SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * value)
	{
		___DoMcMTFZOcROcVWyENyvXEFgDWYm_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DoMcMTFZOcROcVWyENyvXEFgDWYm_47), (void*)value);
	}

	inline static int32_t get_offset_of_DxDDJgdGopEpAltRNiEBalwJEIfob_48() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___DxDDJgdGopEpAltRNiEBalwJEIfob_48)); }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * get_DxDDJgdGopEpAltRNiEBalwJEIfob_48() const { return ___DxDDJgdGopEpAltRNiEBalwJEIfob_48; }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B ** get_address_of_DxDDJgdGopEpAltRNiEBalwJEIfob_48() { return &___DxDDJgdGopEpAltRNiEBalwJEIfob_48; }
	inline void set_DxDDJgdGopEpAltRNiEBalwJEIfob_48(SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * value)
	{
		___DxDDJgdGopEpAltRNiEBalwJEIfob_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DxDDJgdGopEpAltRNiEBalwJEIfob_48), (void*)value);
	}

	inline static int32_t get_offset_of_BDmisuCgVCeghMSBpbXRvlOriVYBb_49() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___BDmisuCgVCeghMSBpbXRvlOriVYBb_49)); }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * get_BDmisuCgVCeghMSBpbXRvlOriVYBb_49() const { return ___BDmisuCgVCeghMSBpbXRvlOriVYBb_49; }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B ** get_address_of_BDmisuCgVCeghMSBpbXRvlOriVYBb_49() { return &___BDmisuCgVCeghMSBpbXRvlOriVYBb_49; }
	inline void set_BDmisuCgVCeghMSBpbXRvlOriVYBb_49(SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * value)
	{
		___BDmisuCgVCeghMSBpbXRvlOriVYBb_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BDmisuCgVCeghMSBpbXRvlOriVYBb_49), (void*)value);
	}

	inline static int32_t get_offset_of_vMWkXfFtLyWssWlmvPyaljgWTHhk_50() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___vMWkXfFtLyWssWlmvPyaljgWTHhk_50)); }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * get_vMWkXfFtLyWssWlmvPyaljgWTHhk_50() const { return ___vMWkXfFtLyWssWlmvPyaljgWTHhk_50; }
	inline SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B ** get_address_of_vMWkXfFtLyWssWlmvPyaljgWTHhk_50() { return &___vMWkXfFtLyWssWlmvPyaljgWTHhk_50; }
	inline void set_vMWkXfFtLyWssWlmvPyaljgWTHhk_50(SafeAction_tEDF0C08DC7B8605F48A149A8BCDAAC58A530ED3B * value)
	{
		___vMWkXfFtLyWssWlmvPyaljgWTHhk_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vMWkXfFtLyWssWlmvPyaljgWTHhk_50), (void*)value);
	}

	inline static int32_t get_offset_of__ApplicationFocusChangedEvent_51() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ____ApplicationFocusChangedEvent_51)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get__ApplicationFocusChangedEvent_51() const { return ____ApplicationFocusChangedEvent_51; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of__ApplicationFocusChangedEvent_51() { return &____ApplicationFocusChangedEvent_51; }
	inline void set__ApplicationFocusChangedEvent_51(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		____ApplicationFocusChangedEvent_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ApplicationFocusChangedEvent_51), (void*)value);
	}

	inline static int32_t get_offset_of_IzBYZMAEXTGrtOeLAlYNcYpctpQK_52() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_IzBYZMAEXTGrtOeLAlYNcYpctpQK_52() const { return ___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_IzBYZMAEXTGrtOeLAlYNcYpctpQK_52() { return &___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52; }
	inline void set_IzBYZMAEXTGrtOeLAlYNcYpctpQK_52(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IzBYZMAEXTGrtOeLAlYNcYpctpQK_52), (void*)value);
	}

	inline static int32_t get_offset_of_TrQuHFJWSbBEQkUuadDRDhOfcwRn_53() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53)); }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * get_TrQuHFJWSbBEQkUuadDRDhOfcwRn_53() const { return ___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53; }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 ** get_address_of_TrQuHFJWSbBEQkUuadDRDhOfcwRn_53() { return &___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53; }
	inline void set_TrQuHFJWSbBEQkUuadDRDhOfcwRn_53(Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * value)
	{
		___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrQuHFJWSbBEQkUuadDRDhOfcwRn_53), (void*)value);
	}

	inline static int32_t get_offset_of_DIGTJvqzbyagBhANOgLCGihAWkgZ_54() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___DIGTJvqzbyagBhANOgLCGihAWkgZ_54)); }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * get_DIGTJvqzbyagBhANOgLCGihAWkgZ_54() const { return ___DIGTJvqzbyagBhANOgLCGihAWkgZ_54; }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 ** get_address_of_DIGTJvqzbyagBhANOgLCGihAWkgZ_54() { return &___DIGTJvqzbyagBhANOgLCGihAWkgZ_54; }
	inline void set_DIGTJvqzbyagBhANOgLCGihAWkgZ_54(Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * value)
	{
		___DIGTJvqzbyagBhANOgLCGihAWkgZ_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DIGTJvqzbyagBhANOgLCGihAWkgZ_54), (void*)value);
	}

	inline static int32_t get_offset_of_RwMSqmrPEIcUWPMqqCGgofpACAIz_55() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___RwMSqmrPEIcUWPMqqCGgofpACAIz_55)); }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * get_RwMSqmrPEIcUWPMqqCGgofpACAIz_55() const { return ___RwMSqmrPEIcUWPMqqCGgofpACAIz_55; }
	inline Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 ** get_address_of_RwMSqmrPEIcUWPMqqCGgofpACAIz_55() { return &___RwMSqmrPEIcUWPMqqCGgofpACAIz_55; }
	inline void set_RwMSqmrPEIcUWPMqqCGgofpACAIz_55(Action_1_t2097B4D66D5249FE8AC602F9F5E017CED9AE30B3 * value)
	{
		___RwMSqmrPEIcUWPMqqCGgofpACAIz_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RwMSqmrPEIcUWPMqqCGgofpACAIz_55), (void*)value);
	}

	inline static int32_t get_offset_of_nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56() const { return ___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56() { return &___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56; }
	inline void set_nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nEoJdFSxGZTTQgqVzwyiDJlZpkoT_56), (void*)value);
	}

	inline static int32_t get_offset_of_yNbnOmzfriGRWQMmXbBnZbjOIcYA_57() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_yNbnOmzfriGRWQMmXbBnZbjOIcYA_57() const { return ___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_yNbnOmzfriGRWQMmXbBnZbjOIcYA_57() { return &___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57; }
	inline void set_yNbnOmzfriGRWQMmXbBnZbjOIcYA_57(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yNbnOmzfriGRWQMmXbBnZbjOIcYA_57), (void*)value);
	}

	inline static int32_t get_offset_of_TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58() const { return ___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58() { return &___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58; }
	inline void set_TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TcVDZtTBkbCPvFcbwUNzUxWXdNzKA_58), (void*)value);
	}

	inline static int32_t get_offset_of_EPCOWdjrRVZgEJREalGNkcBsOdV_59() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___EPCOWdjrRVZgEJREalGNkcBsOdV_59)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_EPCOWdjrRVZgEJREalGNkcBsOdV_59() const { return ___EPCOWdjrRVZgEJREalGNkcBsOdV_59; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_EPCOWdjrRVZgEJREalGNkcBsOdV_59() { return &___EPCOWdjrRVZgEJREalGNkcBsOdV_59; }
	inline void set_EPCOWdjrRVZgEJREalGNkcBsOdV_59(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___EPCOWdjrRVZgEJREalGNkcBsOdV_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EPCOWdjrRVZgEJREalGNkcBsOdV_59), (void*)value);
	}

	inline static int32_t get_offset_of_IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60)); }
	inline Action_1_tAD2B31A3F05D0E166AA6ADF95BC1A866EC04D5F2 * get_IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60() const { return ___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60; }
	inline Action_1_tAD2B31A3F05D0E166AA6ADF95BC1A866EC04D5F2 ** get_address_of_IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60() { return &___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60; }
	inline void set_IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60(Action_1_tAD2B31A3F05D0E166AA6ADF95BC1A866EC04D5F2 * value)
	{
		___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IQDcUMOkJbbJpvsxoxIaATuqmVFJ_60), (void*)value);
	}

	inline static int32_t get_offset_of_atJFAUEGsWvXzxPSVIFgFPyLZccI_61() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___atJFAUEGsWvXzxPSVIFgFPyLZccI_61)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_atJFAUEGsWvXzxPSVIFgFPyLZccI_61() const { return ___atJFAUEGsWvXzxPSVIFgFPyLZccI_61; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_atJFAUEGsWvXzxPSVIFgFPyLZccI_61() { return &___atJFAUEGsWvXzxPSVIFgFPyLZccI_61; }
	inline void set_atJFAUEGsWvXzxPSVIFgFPyLZccI_61(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___atJFAUEGsWvXzxPSVIFgFPyLZccI_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atJFAUEGsWvXzxPSVIFgFPyLZccI_61), (void*)value);
	}

	inline static int32_t get_offset_of_BHfOhXExzTwULJhJBFXiuCiXbVPK_62() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___BHfOhXExzTwULJhJBFXiuCiXbVPK_62)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_BHfOhXExzTwULJhJBFXiuCiXbVPK_62() const { return ___BHfOhXExzTwULJhJBFXiuCiXbVPK_62; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_BHfOhXExzTwULJhJBFXiuCiXbVPK_62() { return &___BHfOhXExzTwULJhJBFXiuCiXbVPK_62; }
	inline void set_BHfOhXExzTwULJhJBFXiuCiXbVPK_62(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___BHfOhXExzTwULJhJBFXiuCiXbVPK_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BHfOhXExzTwULJhJBFXiuCiXbVPK_62), (void*)value);
	}

	inline static int32_t get_offset_of_unscaledDeltaTime_63() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___unscaledDeltaTime_63)); }
	inline double get_unscaledDeltaTime_63() const { return ___unscaledDeltaTime_63; }
	inline double* get_address_of_unscaledDeltaTime_63() { return &___unscaledDeltaTime_63; }
	inline void set_unscaledDeltaTime_63(double value)
	{
		___unscaledDeltaTime_63 = value;
	}

	inline static int32_t get_offset_of_unscaledTime_64() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___unscaledTime_64)); }
	inline double get_unscaledTime_64() const { return ___unscaledTime_64; }
	inline double* get_address_of_unscaledTime_64() { return &___unscaledTime_64; }
	inline void set_unscaledTime_64(double value)
	{
		___unscaledTime_64 = value;
	}

	inline static int32_t get_offset_of_unscaledTimePrev_65() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___unscaledTimePrev_65)); }
	inline double get_unscaledTimePrev_65() const { return ___unscaledTimePrev_65; }
	inline double* get_address_of_unscaledTimePrev_65() { return &___unscaledTimePrev_65; }
	inline void set_unscaledTimePrev_65(double value)
	{
		___unscaledTimePrev_65 = value;
	}

	inline static int32_t get_offset_of_currentFrame_66() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___currentFrame_66)); }
	inline uint32_t get_currentFrame_66() const { return ___currentFrame_66; }
	inline uint32_t* get_address_of_currentFrame_66() { return &___currentFrame_66; }
	inline void set_currentFrame_66(uint32_t value)
	{
		___currentFrame_66 = value;
	}

	inline static int32_t get_offset_of_previousFrame_67() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___previousFrame_67)); }
	inline uint32_t get_previousFrame_67() const { return ___previousFrame_67; }
	inline uint32_t* get_address_of_previousFrame_67() { return &___previousFrame_67; }
	inline void set_previousFrame_67(uint32_t value)
	{
		___previousFrame_67 = value;
	}

	inline static int32_t get_offset_of_absFrame_68() { return static_cast<int32_t>(offsetof(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields, ___absFrame_68)); }
	inline uint32_t get_absFrame_68() const { return ___absFrame_68; }
	inline uint32_t* get_address_of_absFrame_68() { return &___absFrame_68; }
	inline void set_absFrame_68(uint32_t value)
	{
		___absFrame_68 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Rewired.Controller
struct Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33  : public RuntimeObject
{
public:
	// System.Int32 Rewired.Controller::id
	int32_t ___id_0;
	// System.String Rewired.Controller::_tag
	String_t* ____tag_1;
	// System.String Rewired.Controller::_name
	String_t* ____name_2;
	// System.String Rewired.Controller::_hardwareName
	String_t* ____hardwareName_3;
	// Rewired.ControllerType Rewired.Controller::_type
	int32_t ____type_4;
	// System.Guid Rewired.Controller::fMxZVPLmyEupjctdQIaGgbDJdlvHA
	Guid_t  ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_5;
	// System.String Rewired.Controller::_hardwareIdentifier
	String_t* ____hardwareIdentifier_6;
	// System.Boolean Rewired.Controller::_isConnected
	bool ____isConnected_7;
	// Rewired.Controller/Extension Rewired.Controller::ieNssgrFeJiIpjsZwbsJdGwhvyJU
	Extension_t76FEF4536CCC26B1CE19F86D50624757119FA1F7 * ___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8;
	// System.Boolean Rewired.Controller::kKFZZElqKQSUFMZnWdEudRvTJGpo
	bool ___kKFZZElqKQSUFMZnWdEudRvTJGpo_9;
	// Rewired.ControllerIdentifier Rewired.Controller::ZWKAKEiIYJobIYFMTEwXbqzBPyJCA
	ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C  ___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10;
	// System.Int32 Rewired.Controller::QajDFFaomlkLHzaostfWYpGUioys
	int32_t ___QajDFFaomlkLHzaostfWYpGUioys_11;
	// System.Int32 Rewired.Controller::_buttonCount
	int32_t ____buttonCount_12;
	// Rewired.Controller/Button[] Rewired.Controller::buttons
	ButtonU5BU5D_t447D890CB7AB686BF4C5321FA3ECA01D1B36D38F* ___buttons_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Button> Rewired.Controller::buttons_readOnly
	ReadOnlyCollection_1_tA9233C4BFF3FE1F9F86624120F0AA0D6A779E21D * ___buttons_readOnly_14;
	// System.Collections.Generic.IList`1<Rewired.Controller/Element> Rewired.Controller::hObmyuQkxgNXDiBtSEwFNgLuBsoZ
	RuntimeObject* ___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Element> Rewired.Controller::VewvmtxDhBKjfOztXaGoFFLyxNDV
	ReadOnlyCollection_1_t8ECE77472397A3167B3A93EC0B5A7C3560C97448 * ___VewvmtxDhBKjfOztXaGoFFLyxNDV_16;
	// System.Collections.Generic.IList`1<Rewired.Controller/CompoundElement> Rewired.Controller::WmzLsZTiHtXhWsarHfHNeIilmoMX
	RuntimeObject* ___WmzLsZTiHtXhWsarHfHNeIilmoMX_17;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/CompoundElement> Rewired.Controller::czCmTURWGYOxRAbxeoxWOJwgMnPs
	ReadOnlyCollection_1_tF7D4DDAC6D5AF902F3A330CD2267A89817D880F2 * ___czCmTURWGYOxRAbxeoxWOJwgMnPs_18;
	// Rewired.InputSource Rewired.Controller::inputSource
	int32_t ___inputSource_19;
	// Rewired.ControllerDataUpdater Rewired.Controller::BkAqQtJmzNvLobJflzLPUhNYRphu
	ControllerDataUpdater_t3CD74FE6329BC8F9910EA24ADAED51CD6F6AD6E7 * ___BkAqQtJmzNvLobJflzLPUhNYRphu_20;
	// Rewired.HardwareControllerMap_Game Rewired.Controller::yPbTGFEOQNqKOEHVnHaIUhnHjgYD
	HardwareControllerMap_Game_tB4334BF87AC425C3C9CB4C6895FFFB76204A20E7 * ___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21;
	// System.UInt32 Rewired.Controller::uypLrHiCVLoiDTqTLBgqBIQjfPUGb
	uint32_t ___uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22;
	// System.UInt32 Rewired.Controller::uDpZemkhMQIbgEfUgDitvsITBpOg
	uint32_t ___uDpZemkhMQIbgEfUgDitvsITBpOg_23;
	// System.UInt32 Rewired.Controller::xszhRiGkPkqOHSiZVbURULfUhzIdA
	uint32_t ___xszhRiGkPkqOHSiZVbURULfUhzIdA_24;
	// System.Action`1<System.Boolean> Rewired.Controller::eneVgSlIatJCOIDcAjGhRLwviGQy
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___eneVgSlIatJCOIDcAjGhRLwviGQy_25;
	// Rewired.IControllerTemplate[] Rewired.Controller::VQZKpibEZbbTYjeSLBjyauxAsrVEA
	IControllerTemplateU5BU5D_tAB2CE74F6B138AF26BD21E5ECF585199E8A41DFE* ___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate> Rewired.Controller::TkPCsfblXRmCKiRlSYUmJkYsPUwdb
	ReadOnlyCollection_1_tBE93B3A9A6765DFB527D9D1326BDC68318E55CFB * ___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of__tag_1() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____tag_1)); }
	inline String_t* get__tag_1() const { return ____tag_1; }
	inline String_t** get_address_of__tag_1() { return &____tag_1; }
	inline void set__tag_1(String_t* value)
	{
		____tag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tag_1), (void*)value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_2), (void*)value);
	}

	inline static int32_t get_offset_of__hardwareName_3() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____hardwareName_3)); }
	inline String_t* get__hardwareName_3() const { return ____hardwareName_3; }
	inline String_t** get_address_of__hardwareName_3() { return &____hardwareName_3; }
	inline void set__hardwareName_3(String_t* value)
	{
		____hardwareName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hardwareName_3), (void*)value);
	}

	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____type_4)); }
	inline int32_t get__type_4() const { return ____type_4; }
	inline int32_t* get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(int32_t value)
	{
		____type_4 = value;
	}

	inline static int32_t get_offset_of_fMxZVPLmyEupjctdQIaGgbDJdlvHA_5() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_5)); }
	inline Guid_t  get_fMxZVPLmyEupjctdQIaGgbDJdlvHA_5() const { return ___fMxZVPLmyEupjctdQIaGgbDJdlvHA_5; }
	inline Guid_t * get_address_of_fMxZVPLmyEupjctdQIaGgbDJdlvHA_5() { return &___fMxZVPLmyEupjctdQIaGgbDJdlvHA_5; }
	inline void set_fMxZVPLmyEupjctdQIaGgbDJdlvHA_5(Guid_t  value)
	{
		___fMxZVPLmyEupjctdQIaGgbDJdlvHA_5 = value;
	}

	inline static int32_t get_offset_of__hardwareIdentifier_6() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____hardwareIdentifier_6)); }
	inline String_t* get__hardwareIdentifier_6() const { return ____hardwareIdentifier_6; }
	inline String_t** get_address_of__hardwareIdentifier_6() { return &____hardwareIdentifier_6; }
	inline void set__hardwareIdentifier_6(String_t* value)
	{
		____hardwareIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hardwareIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of__isConnected_7() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____isConnected_7)); }
	inline bool get__isConnected_7() const { return ____isConnected_7; }
	inline bool* get_address_of__isConnected_7() { return &____isConnected_7; }
	inline void set__isConnected_7(bool value)
	{
		____isConnected_7 = value;
	}

	inline static int32_t get_offset_of_ieNssgrFeJiIpjsZwbsJdGwhvyJU_8() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8)); }
	inline Extension_t76FEF4536CCC26B1CE19F86D50624757119FA1F7 * get_ieNssgrFeJiIpjsZwbsJdGwhvyJU_8() const { return ___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8; }
	inline Extension_t76FEF4536CCC26B1CE19F86D50624757119FA1F7 ** get_address_of_ieNssgrFeJiIpjsZwbsJdGwhvyJU_8() { return &___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8; }
	inline void set_ieNssgrFeJiIpjsZwbsJdGwhvyJU_8(Extension_t76FEF4536CCC26B1CE19F86D50624757119FA1F7 * value)
	{
		___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ieNssgrFeJiIpjsZwbsJdGwhvyJU_8), (void*)value);
	}

	inline static int32_t get_offset_of_kKFZZElqKQSUFMZnWdEudRvTJGpo_9() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___kKFZZElqKQSUFMZnWdEudRvTJGpo_9)); }
	inline bool get_kKFZZElqKQSUFMZnWdEudRvTJGpo_9() const { return ___kKFZZElqKQSUFMZnWdEudRvTJGpo_9; }
	inline bool* get_address_of_kKFZZElqKQSUFMZnWdEudRvTJGpo_9() { return &___kKFZZElqKQSUFMZnWdEudRvTJGpo_9; }
	inline void set_kKFZZElqKQSUFMZnWdEudRvTJGpo_9(bool value)
	{
		___kKFZZElqKQSUFMZnWdEudRvTJGpo_9 = value;
	}

	inline static int32_t get_offset_of_ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10)); }
	inline ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C  get_ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10() const { return ___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10; }
	inline ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C * get_address_of_ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10() { return &___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10; }
	inline void set_ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10(ControllerIdentifier_tAAFC8288692EED3A4D1D7F1E305DCD7CBFFA9C3C  value)
	{
		___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ZWKAKEiIYJobIYFMTEwXbqzBPyJCA_10))->___xBrcfixGFlRWLdALITGLqMbVvAXW_3), (void*)NULL);
	}

	inline static int32_t get_offset_of_QajDFFaomlkLHzaostfWYpGUioys_11() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___QajDFFaomlkLHzaostfWYpGUioys_11)); }
	inline int32_t get_QajDFFaomlkLHzaostfWYpGUioys_11() const { return ___QajDFFaomlkLHzaostfWYpGUioys_11; }
	inline int32_t* get_address_of_QajDFFaomlkLHzaostfWYpGUioys_11() { return &___QajDFFaomlkLHzaostfWYpGUioys_11; }
	inline void set_QajDFFaomlkLHzaostfWYpGUioys_11(int32_t value)
	{
		___QajDFFaomlkLHzaostfWYpGUioys_11 = value;
	}

	inline static int32_t get_offset_of__buttonCount_12() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ____buttonCount_12)); }
	inline int32_t get__buttonCount_12() const { return ____buttonCount_12; }
	inline int32_t* get_address_of__buttonCount_12() { return &____buttonCount_12; }
	inline void set__buttonCount_12(int32_t value)
	{
		____buttonCount_12 = value;
	}

	inline static int32_t get_offset_of_buttons_13() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___buttons_13)); }
	inline ButtonU5BU5D_t447D890CB7AB686BF4C5321FA3ECA01D1B36D38F* get_buttons_13() const { return ___buttons_13; }
	inline ButtonU5BU5D_t447D890CB7AB686BF4C5321FA3ECA01D1B36D38F** get_address_of_buttons_13() { return &___buttons_13; }
	inline void set_buttons_13(ButtonU5BU5D_t447D890CB7AB686BF4C5321FA3ECA01D1B36D38F* value)
	{
		___buttons_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_13), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_readOnly_14() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___buttons_readOnly_14)); }
	inline ReadOnlyCollection_1_tA9233C4BFF3FE1F9F86624120F0AA0D6A779E21D * get_buttons_readOnly_14() const { return ___buttons_readOnly_14; }
	inline ReadOnlyCollection_1_tA9233C4BFF3FE1F9F86624120F0AA0D6A779E21D ** get_address_of_buttons_readOnly_14() { return &___buttons_readOnly_14; }
	inline void set_buttons_readOnly_14(ReadOnlyCollection_1_tA9233C4BFF3FE1F9F86624120F0AA0D6A779E21D * value)
	{
		___buttons_readOnly_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_readOnly_14), (void*)value);
	}

	inline static int32_t get_offset_of_hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15)); }
	inline RuntimeObject* get_hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15() const { return ___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15; }
	inline RuntimeObject** get_address_of_hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15() { return &___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15; }
	inline void set_hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15(RuntimeObject* value)
	{
		___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hObmyuQkxgNXDiBtSEwFNgLuBsoZ_15), (void*)value);
	}

	inline static int32_t get_offset_of_VewvmtxDhBKjfOztXaGoFFLyxNDV_16() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___VewvmtxDhBKjfOztXaGoFFLyxNDV_16)); }
	inline ReadOnlyCollection_1_t8ECE77472397A3167B3A93EC0B5A7C3560C97448 * get_VewvmtxDhBKjfOztXaGoFFLyxNDV_16() const { return ___VewvmtxDhBKjfOztXaGoFFLyxNDV_16; }
	inline ReadOnlyCollection_1_t8ECE77472397A3167B3A93EC0B5A7C3560C97448 ** get_address_of_VewvmtxDhBKjfOztXaGoFFLyxNDV_16() { return &___VewvmtxDhBKjfOztXaGoFFLyxNDV_16; }
	inline void set_VewvmtxDhBKjfOztXaGoFFLyxNDV_16(ReadOnlyCollection_1_t8ECE77472397A3167B3A93EC0B5A7C3560C97448 * value)
	{
		___VewvmtxDhBKjfOztXaGoFFLyxNDV_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VewvmtxDhBKjfOztXaGoFFLyxNDV_16), (void*)value);
	}

	inline static int32_t get_offset_of_WmzLsZTiHtXhWsarHfHNeIilmoMX_17() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___WmzLsZTiHtXhWsarHfHNeIilmoMX_17)); }
	inline RuntimeObject* get_WmzLsZTiHtXhWsarHfHNeIilmoMX_17() const { return ___WmzLsZTiHtXhWsarHfHNeIilmoMX_17; }
	inline RuntimeObject** get_address_of_WmzLsZTiHtXhWsarHfHNeIilmoMX_17() { return &___WmzLsZTiHtXhWsarHfHNeIilmoMX_17; }
	inline void set_WmzLsZTiHtXhWsarHfHNeIilmoMX_17(RuntimeObject* value)
	{
		___WmzLsZTiHtXhWsarHfHNeIilmoMX_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WmzLsZTiHtXhWsarHfHNeIilmoMX_17), (void*)value);
	}

	inline static int32_t get_offset_of_czCmTURWGYOxRAbxeoxWOJwgMnPs_18() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___czCmTURWGYOxRAbxeoxWOJwgMnPs_18)); }
	inline ReadOnlyCollection_1_tF7D4DDAC6D5AF902F3A330CD2267A89817D880F2 * get_czCmTURWGYOxRAbxeoxWOJwgMnPs_18() const { return ___czCmTURWGYOxRAbxeoxWOJwgMnPs_18; }
	inline ReadOnlyCollection_1_tF7D4DDAC6D5AF902F3A330CD2267A89817D880F2 ** get_address_of_czCmTURWGYOxRAbxeoxWOJwgMnPs_18() { return &___czCmTURWGYOxRAbxeoxWOJwgMnPs_18; }
	inline void set_czCmTURWGYOxRAbxeoxWOJwgMnPs_18(ReadOnlyCollection_1_tF7D4DDAC6D5AF902F3A330CD2267A89817D880F2 * value)
	{
		___czCmTURWGYOxRAbxeoxWOJwgMnPs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___czCmTURWGYOxRAbxeoxWOJwgMnPs_18), (void*)value);
	}

	inline static int32_t get_offset_of_inputSource_19() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___inputSource_19)); }
	inline int32_t get_inputSource_19() const { return ___inputSource_19; }
	inline int32_t* get_address_of_inputSource_19() { return &___inputSource_19; }
	inline void set_inputSource_19(int32_t value)
	{
		___inputSource_19 = value;
	}

	inline static int32_t get_offset_of_BkAqQtJmzNvLobJflzLPUhNYRphu_20() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___BkAqQtJmzNvLobJflzLPUhNYRphu_20)); }
	inline ControllerDataUpdater_t3CD74FE6329BC8F9910EA24ADAED51CD6F6AD6E7 * get_BkAqQtJmzNvLobJflzLPUhNYRphu_20() const { return ___BkAqQtJmzNvLobJflzLPUhNYRphu_20; }
	inline ControllerDataUpdater_t3CD74FE6329BC8F9910EA24ADAED51CD6F6AD6E7 ** get_address_of_BkAqQtJmzNvLobJflzLPUhNYRphu_20() { return &___BkAqQtJmzNvLobJflzLPUhNYRphu_20; }
	inline void set_BkAqQtJmzNvLobJflzLPUhNYRphu_20(ControllerDataUpdater_t3CD74FE6329BC8F9910EA24ADAED51CD6F6AD6E7 * value)
	{
		___BkAqQtJmzNvLobJflzLPUhNYRphu_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BkAqQtJmzNvLobJflzLPUhNYRphu_20), (void*)value);
	}

	inline static int32_t get_offset_of_yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21)); }
	inline HardwareControllerMap_Game_tB4334BF87AC425C3C9CB4C6895FFFB76204A20E7 * get_yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21() const { return ___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21; }
	inline HardwareControllerMap_Game_tB4334BF87AC425C3C9CB4C6895FFFB76204A20E7 ** get_address_of_yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21() { return &___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21; }
	inline void set_yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21(HardwareControllerMap_Game_tB4334BF87AC425C3C9CB4C6895FFFB76204A20E7 * value)
	{
		___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yPbTGFEOQNqKOEHVnHaIUhnHjgYD_21), (void*)value);
	}

	inline static int32_t get_offset_of_uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22)); }
	inline uint32_t get_uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22() const { return ___uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22; }
	inline uint32_t* get_address_of_uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22() { return &___uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22; }
	inline void set_uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22(uint32_t value)
	{
		___uypLrHiCVLoiDTqTLBgqBIQjfPUGb_22 = value;
	}

	inline static int32_t get_offset_of_uDpZemkhMQIbgEfUgDitvsITBpOg_23() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___uDpZemkhMQIbgEfUgDitvsITBpOg_23)); }
	inline uint32_t get_uDpZemkhMQIbgEfUgDitvsITBpOg_23() const { return ___uDpZemkhMQIbgEfUgDitvsITBpOg_23; }
	inline uint32_t* get_address_of_uDpZemkhMQIbgEfUgDitvsITBpOg_23() { return &___uDpZemkhMQIbgEfUgDitvsITBpOg_23; }
	inline void set_uDpZemkhMQIbgEfUgDitvsITBpOg_23(uint32_t value)
	{
		___uDpZemkhMQIbgEfUgDitvsITBpOg_23 = value;
	}

	inline static int32_t get_offset_of_xszhRiGkPkqOHSiZVbURULfUhzIdA_24() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___xszhRiGkPkqOHSiZVbURULfUhzIdA_24)); }
	inline uint32_t get_xszhRiGkPkqOHSiZVbURULfUhzIdA_24() const { return ___xszhRiGkPkqOHSiZVbURULfUhzIdA_24; }
	inline uint32_t* get_address_of_xszhRiGkPkqOHSiZVbURULfUhzIdA_24() { return &___xszhRiGkPkqOHSiZVbURULfUhzIdA_24; }
	inline void set_xszhRiGkPkqOHSiZVbURULfUhzIdA_24(uint32_t value)
	{
		___xszhRiGkPkqOHSiZVbURULfUhzIdA_24 = value;
	}

	inline static int32_t get_offset_of_eneVgSlIatJCOIDcAjGhRLwviGQy_25() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___eneVgSlIatJCOIDcAjGhRLwviGQy_25)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_eneVgSlIatJCOIDcAjGhRLwviGQy_25() const { return ___eneVgSlIatJCOIDcAjGhRLwviGQy_25; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_eneVgSlIatJCOIDcAjGhRLwviGQy_25() { return &___eneVgSlIatJCOIDcAjGhRLwviGQy_25; }
	inline void set_eneVgSlIatJCOIDcAjGhRLwviGQy_25(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___eneVgSlIatJCOIDcAjGhRLwviGQy_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eneVgSlIatJCOIDcAjGhRLwviGQy_25), (void*)value);
	}

	inline static int32_t get_offset_of_VQZKpibEZbbTYjeSLBjyauxAsrVEA_26() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26)); }
	inline IControllerTemplateU5BU5D_tAB2CE74F6B138AF26BD21E5ECF585199E8A41DFE* get_VQZKpibEZbbTYjeSLBjyauxAsrVEA_26() const { return ___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26; }
	inline IControllerTemplateU5BU5D_tAB2CE74F6B138AF26BD21E5ECF585199E8A41DFE** get_address_of_VQZKpibEZbbTYjeSLBjyauxAsrVEA_26() { return &___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26; }
	inline void set_VQZKpibEZbbTYjeSLBjyauxAsrVEA_26(IControllerTemplateU5BU5D_tAB2CE74F6B138AF26BD21E5ECF585199E8A41DFE* value)
	{
		___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VQZKpibEZbbTYjeSLBjyauxAsrVEA_26), (void*)value);
	}

	inline static int32_t get_offset_of_TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33, ___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27)); }
	inline ReadOnlyCollection_1_tBE93B3A9A6765DFB527D9D1326BDC68318E55CFB * get_TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27() const { return ___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27; }
	inline ReadOnlyCollection_1_tBE93B3A9A6765DFB527D9D1326BDC68318E55CFB ** get_address_of_TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27() { return &___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27; }
	inline void set_TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27(ReadOnlyCollection_1_tBE93B3A9A6765DFB527D9D1326BDC68318E55CFB * value)
	{
		___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TkPCsfblXRmCKiRlSYUmJkYsPUwdb_27), (void*)value);
	}
};

struct Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33_StaticFields
{
public:
	// System.Func`3<Rewired.Controller,System.Guid,System.Boolean> Rewired.Controller::wPglPbhGEOjaMfdmeDZejLVLluDDA
	Func_3_tC7CDCED8125464716673C1EE28F3A931BC20762C * ___wPglPbhGEOjaMfdmeDZejLVLluDDA_28;
	// System.Func`3<Rewired.Controller,System.Type,System.Boolean> Rewired.Controller::dsGeHCsUXpayaLxcIaOoEOhDEDkJ
	Func_3_t450ACC03ADE64895DE2392904F328C647165F55C * ___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29;

public:
	inline static int32_t get_offset_of_wPglPbhGEOjaMfdmeDZejLVLluDDA_28() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33_StaticFields, ___wPglPbhGEOjaMfdmeDZejLVLluDDA_28)); }
	inline Func_3_tC7CDCED8125464716673C1EE28F3A931BC20762C * get_wPglPbhGEOjaMfdmeDZejLVLluDDA_28() const { return ___wPglPbhGEOjaMfdmeDZejLVLluDDA_28; }
	inline Func_3_tC7CDCED8125464716673C1EE28F3A931BC20762C ** get_address_of_wPglPbhGEOjaMfdmeDZejLVLluDDA_28() { return &___wPglPbhGEOjaMfdmeDZejLVLluDDA_28; }
	inline void set_wPglPbhGEOjaMfdmeDZejLVLluDDA_28(Func_3_tC7CDCED8125464716673C1EE28F3A931BC20762C * value)
	{
		___wPglPbhGEOjaMfdmeDZejLVLluDDA_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wPglPbhGEOjaMfdmeDZejLVLluDDA_28), (void*)value);
	}

	inline static int32_t get_offset_of_dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29() { return static_cast<int32_t>(offsetof(Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33_StaticFields, ___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29)); }
	inline Func_3_t450ACC03ADE64895DE2392904F328C647165F55C * get_dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29() const { return ___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29; }
	inline Func_3_t450ACC03ADE64895DE2392904F328C647165F55C ** get_address_of_dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29() { return &___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29; }
	inline void set_dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29(Func_3_t450ACC03ADE64895DE2392904F328C647165F55C * value)
	{
		___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dsGeHCsUXpayaLxcIaOoEOhDEDkJ_29), (void*)value);
	}
};


// Rewired.ControllerMapWithAxes
struct ControllerMapWithAxes_t7D0273C5C84D2F9DAB373AF59560CCB21096B1F2  : public ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D
{
public:
	// System.Collections.Generic.IList`1<Rewired.ActionElementMap> Rewired.ControllerMapWithAxes::JfTobMsTRweaeWanKTfLHPJFqbSS
	RuntimeObject* ___JfTobMsTRweaeWanKTfLHPJFqbSS_16;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMapWithAxes::cpElFHCburCDNacUoAckPJphhLxBA
	ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * ___cpElFHCburCDNacUoAckPJphhLxBA_17;

public:
	inline static int32_t get_offset_of_JfTobMsTRweaeWanKTfLHPJFqbSS_16() { return static_cast<int32_t>(offsetof(ControllerMapWithAxes_t7D0273C5C84D2F9DAB373AF59560CCB21096B1F2, ___JfTobMsTRweaeWanKTfLHPJFqbSS_16)); }
	inline RuntimeObject* get_JfTobMsTRweaeWanKTfLHPJFqbSS_16() const { return ___JfTobMsTRweaeWanKTfLHPJFqbSS_16; }
	inline RuntimeObject** get_address_of_JfTobMsTRweaeWanKTfLHPJFqbSS_16() { return &___JfTobMsTRweaeWanKTfLHPJFqbSS_16; }
	inline void set_JfTobMsTRweaeWanKTfLHPJFqbSS_16(RuntimeObject* value)
	{
		___JfTobMsTRweaeWanKTfLHPJFqbSS_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JfTobMsTRweaeWanKTfLHPJFqbSS_16), (void*)value);
	}

	inline static int32_t get_offset_of_cpElFHCburCDNacUoAckPJphhLxBA_17() { return static_cast<int32_t>(offsetof(ControllerMapWithAxes_t7D0273C5C84D2F9DAB373AF59560CCB21096B1F2, ___cpElFHCburCDNacUoAckPJphhLxBA_17)); }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * get_cpElFHCburCDNacUoAckPJphhLxBA_17() const { return ___cpElFHCburCDNacUoAckPJphhLxBA_17; }
	inline ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 ** get_address_of_cpElFHCburCDNacUoAckPJphhLxBA_17() { return &___cpElFHCburCDNacUoAckPJphhLxBA_17; }
	inline void set_cpElFHCburCDNacUoAckPJphhLxBA_17(ReadOnlyCollection_1_t9C574C9366EC0646D07E042C41A518E7DEE080D5 * value)
	{
		___cpElFHCburCDNacUoAckPJphhLxBA_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpElFHCburCDNacUoAckPJphhLxBA_17), (void*)value);
	}
};


// Rewired.KeyboardMap
struct KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95  : public ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC
struct TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::DljjufeDxHKtQhGDvoMcJRNEJSNE
	int32_t ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::LPJODyrZpNxPzXAMrfCKobQaJWhD
	int32_t ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::IZGLeBjXaoohNXDnyqGgBnrFgcfw
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::ElKoGEhTJYZThMFOOdRumLXCMPDE
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::dxNWoKAWRnEjMzagpBqSNtmzbbJFA
	int32_t ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::wYvEyNiUnzAaMlalJwSaPpoqwWXHA
	int32_t ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10;
	// Rewired.JoystickMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::QNctLPxloztIePsRkfyJcgjGIKffA
	JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * ___QNctLPxloztIePsRkfyJcgjGIKffA_11;
	// Rewired.JoystickMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::FUzhWsmbUqzGnKLlnGCfVluuTcJU
	JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * ___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_13;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_17;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3)); }
	inline int32_t get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() const { return ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline int32_t* get_address_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return &___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline void set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(int32_t value)
	{
		___DljjufeDxHKtQhGDvoMcJRNEJSNE_3 = value;
	}

	inline static int32_t get_offset_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4)); }
	inline int32_t get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() const { return ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline int32_t* get_address_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return &___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline void set_LPJODyrZpNxPzXAMrfCKobQaJWhD_4(int32_t value)
	{
		___LPJODyrZpNxPzXAMrfCKobQaJWhD_4 = value;
	}

	inline static int32_t get_offset_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() const { return ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return &___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline void set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5), (void*)value);
	}

	inline static int32_t get_offset_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() const { return ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return &___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline void set_ElKoGEhTJYZThMFOOdRumLXCMPDE_6(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___ElKoGEhTJYZThMFOOdRumLXCMPDE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ElKoGEhTJYZThMFOOdRumLXCMPDE_6), (void*)value);
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___LsArpUAaycAWpQMssIwwpGxYhCYd_7)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_7() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_7 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_8(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_8 = value;
	}

	inline static int32_t get_offset_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9)); }
	inline int32_t get_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() const { return ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9; }
	inline int32_t* get_address_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() { return &___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9; }
	inline void set_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9(int32_t value)
	{
		___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9 = value;
	}

	inline static int32_t get_offset_of_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10)); }
	inline int32_t get_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() const { return ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10; }
	inline int32_t* get_address_of_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() { return &___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10; }
	inline void set_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10(int32_t value)
	{
		___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10 = value;
	}

	inline static int32_t get_offset_of_QNctLPxloztIePsRkfyJcgjGIKffA_11() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___QNctLPxloztIePsRkfyJcgjGIKffA_11)); }
	inline JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * get_QNctLPxloztIePsRkfyJcgjGIKffA_11() const { return ___QNctLPxloztIePsRkfyJcgjGIKffA_11; }
	inline JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 ** get_address_of_QNctLPxloztIePsRkfyJcgjGIKffA_11() { return &___QNctLPxloztIePsRkfyJcgjGIKffA_11; }
	inline void set_QNctLPxloztIePsRkfyJcgjGIKffA_11(JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * value)
	{
		___QNctLPxloztIePsRkfyJcgjGIKffA_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QNctLPxloztIePsRkfyJcgjGIKffA_11), (void*)value);
	}

	inline static int32_t get_offset_of_FUzhWsmbUqzGnKLlnGCfVluuTcJU_12() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12)); }
	inline JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * get_FUzhWsmbUqzGnKLlnGCfVluuTcJU_12() const { return ___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12; }
	inline JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 ** get_address_of_FUzhWsmbUqzGnKLlnGCfVluuTcJU_12() { return &___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12; }
	inline void set_FUzhWsmbUqzGnKLlnGCfVluuTcJU_12(JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * value)
	{
		___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FUzhWsmbUqzGnKLlnGCfVluuTcJU_12), (void*)value);
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_13() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___HIuFjgoQMMeZHtUafJbERKutTjQt_13)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_13() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_13; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_13() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_13; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_13(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_13 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_14; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_14(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_14 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_17() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___BKKFaUdfuegBblGWCXFcTsceicYAb_17)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_17() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_17; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_17() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_17; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_17(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_17), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_18; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_18 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() { return static_cast<int32_t>(offsetof(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_19; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_19), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb
struct WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::DljjufeDxHKtQhGDvoMcJRNEJSNE
	int32_t ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::LPJODyrZpNxPzXAMrfCKobQaJWhD
	int32_t ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::IZGLeBjXaoohNXDnyqGgBnrFgcfw
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::ElKoGEhTJYZThMFOOdRumLXCMPDE
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::dxNWoKAWRnEjMzagpBqSNtmzbbJFA
	int32_t ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::wYvEyNiUnzAaMlalJwSaPpoqwWXHA
	int32_t ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10;
	// Rewired.CustomControllerMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::OZiEbTfyFdeNlbEgiDNQmLdZJIxpA
	CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * ___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11;
	// Rewired.CustomControllerMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::fsLFWnOwyMFecKtbquAxUpiyvKDPA
	CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * ___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_13;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_17;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3)); }
	inline int32_t get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() const { return ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline int32_t* get_address_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return &___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline void set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(int32_t value)
	{
		___DljjufeDxHKtQhGDvoMcJRNEJSNE_3 = value;
	}

	inline static int32_t get_offset_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4)); }
	inline int32_t get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() const { return ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline int32_t* get_address_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return &___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline void set_LPJODyrZpNxPzXAMrfCKobQaJWhD_4(int32_t value)
	{
		___LPJODyrZpNxPzXAMrfCKobQaJWhD_4 = value;
	}

	inline static int32_t get_offset_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() const { return ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return &___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline void set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5), (void*)value);
	}

	inline static int32_t get_offset_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() const { return ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return &___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline void set_ElKoGEhTJYZThMFOOdRumLXCMPDE_6(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___ElKoGEhTJYZThMFOOdRumLXCMPDE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ElKoGEhTJYZThMFOOdRumLXCMPDE_6), (void*)value);
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___LsArpUAaycAWpQMssIwwpGxYhCYd_7)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_7() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_7 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_8(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_8 = value;
	}

	inline static int32_t get_offset_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9)); }
	inline int32_t get_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() const { return ___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9; }
	inline int32_t* get_address_of_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9() { return &___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9; }
	inline void set_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9(int32_t value)
	{
		___dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9 = value;
	}

	inline static int32_t get_offset_of_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10)); }
	inline int32_t get_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() const { return ___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10; }
	inline int32_t* get_address_of_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10() { return &___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10; }
	inline void set_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10(int32_t value)
	{
		___wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10 = value;
	}

	inline static int32_t get_offset_of_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11)); }
	inline CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * get_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11() const { return ___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11; }
	inline CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 ** get_address_of_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11() { return &___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11; }
	inline void set_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11(CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * value)
	{
		___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11), (void*)value);
	}

	inline static int32_t get_offset_of_fsLFWnOwyMFecKtbquAxUpiyvKDPA_12() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12)); }
	inline CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * get_fsLFWnOwyMFecKtbquAxUpiyvKDPA_12() const { return ___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12; }
	inline CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 ** get_address_of_fsLFWnOwyMFecKtbquAxUpiyvKDPA_12() { return &___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12; }
	inline void set_fsLFWnOwyMFecKtbquAxUpiyvKDPA_12(CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * value)
	{
		___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsLFWnOwyMFecKtbquAxUpiyvKDPA_12), (void*)value);
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_13() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___HIuFjgoQMMeZHtUafJbERKutTjQt_13)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_13() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_13; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_13() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_13; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_13(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_13 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_14; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_14() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_14; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_14(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_14 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_15 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_17() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___BKKFaUdfuegBblGWCXFcTsceicYAb_17)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_17() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_17; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_17() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_17; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_17(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_17), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_18; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_18() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_18; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_18 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() { return static_cast<int32_t>(offsetof(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_19; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_19() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_19; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_19), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv
struct mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::HHyftJlGnirHuGQIQnIQkaXvgYegA
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::MelcAnrraPFJzeIaADSAOKRmqdwDb
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_5;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_11;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() const { return ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return &___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline void set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___HHyftJlGnirHuGQIQnIQkaXvgYegA_3 = value;
	}

	inline static int32_t get_offset_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() const { return ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return &___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline void set_MelcAnrraPFJzeIaADSAOKRmqdwDb_4(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___MelcAnrraPFJzeIaADSAOKRmqdwDb_4 = value;
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___LsArpUAaycAWpQMssIwwpGxYhCYd_5)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_5() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_5 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_6(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_6 = value;
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___HIuFjgoQMMeZHtUafJbERKutTjQt_7)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_7() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_7 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_8(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_8 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___BKKFaUdfuegBblGWCXFcTsceicYAb_11)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_11() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_11), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_12 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return static_cast<int32_t>(offsetof(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_13), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA
struct nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::DljjufeDxHKtQhGDvoMcJRNEJSNE
	int32_t ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::LPJODyrZpNxPzXAMrfCKobQaJWhD
	int32_t ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::IZGLeBjXaoohNXDnyqGgBnrFgcfw
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5;
	// Rewired.ActionElementMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::ElKoGEhTJYZThMFOOdRumLXCMPDE
	ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8;
	// Rewired.KeyboardMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::kGvpgbedpfSteCoDmBIhADOcBQyHA
	KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * ___kGvpgbedpfSteCoDmBIhADOcBQyHA_9;
	// Rewired.KeyboardMap Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::pRKRGLTTzhAvrzgKqdgcDhrkAYOX
	KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * ___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_11;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_12;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_13;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_15;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_16;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_17;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3)); }
	inline int32_t get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() const { return ___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline int32_t* get_address_of_DljjufeDxHKtQhGDvoMcJRNEJSNE_3() { return &___DljjufeDxHKtQhGDvoMcJRNEJSNE_3; }
	inline void set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(int32_t value)
	{
		___DljjufeDxHKtQhGDvoMcJRNEJSNE_3 = value;
	}

	inline static int32_t get_offset_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4)); }
	inline int32_t get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() const { return ___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline int32_t* get_address_of_LPJODyrZpNxPzXAMrfCKobQaJWhD_4() { return &___LPJODyrZpNxPzXAMrfCKobQaJWhD_4; }
	inline void set_LPJODyrZpNxPzXAMrfCKobQaJWhD_4(int32_t value)
	{
		___LPJODyrZpNxPzXAMrfCKobQaJWhD_4 = value;
	}

	inline static int32_t get_offset_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() const { return ___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5() { return &___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5; }
	inline void set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IZGLeBjXaoohNXDnyqGgBnrFgcfw_5), (void*)value);
	}

	inline static int32_t get_offset_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6)); }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() const { return ___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 ** get_address_of_ElKoGEhTJYZThMFOOdRumLXCMPDE_6() { return &___ElKoGEhTJYZThMFOOdRumLXCMPDE_6; }
	inline void set_ElKoGEhTJYZThMFOOdRumLXCMPDE_6(ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * value)
	{
		___ElKoGEhTJYZThMFOOdRumLXCMPDE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ElKoGEhTJYZThMFOOdRumLXCMPDE_6), (void*)value);
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___LsArpUAaycAWpQMssIwwpGxYhCYd_7)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_7() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_7() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_7; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_7 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_8() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_8; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_8(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_8 = value;
	}

	inline static int32_t get_offset_of_kGvpgbedpfSteCoDmBIhADOcBQyHA_9() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___kGvpgbedpfSteCoDmBIhADOcBQyHA_9)); }
	inline KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * get_kGvpgbedpfSteCoDmBIhADOcBQyHA_9() const { return ___kGvpgbedpfSteCoDmBIhADOcBQyHA_9; }
	inline KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 ** get_address_of_kGvpgbedpfSteCoDmBIhADOcBQyHA_9() { return &___kGvpgbedpfSteCoDmBIhADOcBQyHA_9; }
	inline void set_kGvpgbedpfSteCoDmBIhADOcBQyHA_9(KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * value)
	{
		___kGvpgbedpfSteCoDmBIhADOcBQyHA_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kGvpgbedpfSteCoDmBIhADOcBQyHA_9), (void*)value);
	}

	inline static int32_t get_offset_of_pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10)); }
	inline KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * get_pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10() const { return ___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10; }
	inline KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 ** get_address_of_pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10() { return &___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10; }
	inline void set_pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10(KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * value)
	{
		___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10), (void*)value);
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_11() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___HIuFjgoQMMeZHtUafJbERKutTjQt_11)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_11() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_11; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_11() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_11; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_11(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_11 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_12() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_12)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_12() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_12; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_12() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_12; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_12(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_12 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_13)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_13; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_13; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_13 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_15() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___BKKFaUdfuegBblGWCXFcTsceicYAb_15)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_15() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_15; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_15() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_15; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_15(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_15), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_16() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_16)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_16() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_16; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_16() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_16; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_16(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_16 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_17() { return static_cast<int32_t>(offsetof(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_17)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_17() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_17; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_17() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_17; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_17(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_17), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB
struct vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::HHyftJlGnirHuGQIQnIQkaXvgYegA
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::MelcAnrraPFJzeIaADSAOKRmqdwDb
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_5;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_11;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() const { return ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return &___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline void set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___HHyftJlGnirHuGQIQnIQkaXvgYegA_3 = value;
	}

	inline static int32_t get_offset_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() const { return ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return &___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline void set_MelcAnrraPFJzeIaADSAOKRmqdwDb_4(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___MelcAnrraPFJzeIaADSAOKRmqdwDb_4 = value;
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___LsArpUAaycAWpQMssIwwpGxYhCYd_5)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_5() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_5 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_6(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_6 = value;
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___HIuFjgoQMMeZHtUafJbERKutTjQt_7)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_7() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_7 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_8(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_8 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___BKKFaUdfuegBblGWCXFcTsceicYAb_11)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_11() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_11), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_12 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return static_cast<int32_t>(offsetof(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_13), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC
struct ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::HHyftJlGnirHuGQIQnIQkaXvgYegA
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3;
	// Rewired.ElementAssignmentConflictCheck Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::MelcAnrraPFJzeIaADSAOKRmqdwDb
	ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::LsArpUAaycAWpQMssIwwpGxYhCYd
	bool ___LsArpUAaycAWpQMssIwwpGxYhCYd_5;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::EqRTwgfjsYypsrTblHXtvnwSZMnf
	bool ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::HIuFjgoQMMeZHtUafJbERKutTjQt
	bool ___HIuFjgoQMMeZHtUafJbERKutTjQt_7;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::MlWZQPQtLyJnETcXcYBEkbNZbonN
	bool ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::fxcwWCJuWyMdSnVzKKdavSrfSkCc
	bool ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9;
	// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::AIUEvmkpzzZEGHiPnuHpyDYEjNVE
	bool ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10;
	// System.Collections.Generic.IList`1<Rewired.Player> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::BKKFaUdfuegBblGWCXFcTsceicYAb
	RuntimeObject* ___BKKFaUdfuegBblGWCXFcTsceicYAb_11;
	// System.Int32 Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() const { return ___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3() { return &___HHyftJlGnirHuGQIQnIQkaXvgYegA_3; }
	inline void set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___HHyftJlGnirHuGQIQnIQkaXvgYegA_3 = value;
	}

	inline static int32_t get_offset_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4)); }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() const { return ___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * get_address_of_MelcAnrraPFJzeIaADSAOKRmqdwDb_4() { return &___MelcAnrraPFJzeIaADSAOKRmqdwDb_4; }
	inline void set_MelcAnrraPFJzeIaADSAOKRmqdwDb_4(ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  value)
	{
		___MelcAnrraPFJzeIaADSAOKRmqdwDb_4 = value;
	}

	inline static int32_t get_offset_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___LsArpUAaycAWpQMssIwwpGxYhCYd_5)); }
	inline bool get_LsArpUAaycAWpQMssIwwpGxYhCYd_5() const { return ___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline bool* get_address_of_LsArpUAaycAWpQMssIwwpGxYhCYd_5() { return &___LsArpUAaycAWpQMssIwwpGxYhCYd_5; }
	inline void set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(bool value)
	{
		___LsArpUAaycAWpQMssIwwpGxYhCYd_5 = value;
	}

	inline static int32_t get_offset_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6)); }
	inline bool get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() const { return ___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline bool* get_address_of_EqRTwgfjsYypsrTblHXtvnwSZMnf_6() { return &___EqRTwgfjsYypsrTblHXtvnwSZMnf_6; }
	inline void set_EqRTwgfjsYypsrTblHXtvnwSZMnf_6(bool value)
	{
		___EqRTwgfjsYypsrTblHXtvnwSZMnf_6 = value;
	}

	inline static int32_t get_offset_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___HIuFjgoQMMeZHtUafJbERKutTjQt_7)); }
	inline bool get_HIuFjgoQMMeZHtUafJbERKutTjQt_7() const { return ___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline bool* get_address_of_HIuFjgoQMMeZHtUafJbERKutTjQt_7() { return &___HIuFjgoQMMeZHtUafJbERKutTjQt_7; }
	inline void set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(bool value)
	{
		___HIuFjgoQMMeZHtUafJbERKutTjQt_7 = value;
	}

	inline static int32_t get_offset_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8)); }
	inline bool get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() const { return ___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline bool* get_address_of_MlWZQPQtLyJnETcXcYBEkbNZbonN_8() { return &___MlWZQPQtLyJnETcXcYBEkbNZbonN_8; }
	inline void set_MlWZQPQtLyJnETcXcYBEkbNZbonN_8(bool value)
	{
		___MlWZQPQtLyJnETcXcYBEkbNZbonN_8 = value;
	}

	inline static int32_t get_offset_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9)); }
	inline bool get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() const { return ___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline bool* get_address_of_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9() { return &___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9; }
	inline void set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(bool value)
	{
		___fxcwWCJuWyMdSnVzKKdavSrfSkCc_9 = value;
	}

	inline static int32_t get_offset_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10)); }
	inline bool get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() const { return ___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline bool* get_address_of_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10() { return &___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10; }
	inline void set_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10(bool value)
	{
		___AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10 = value;
	}

	inline static int32_t get_offset_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___BKKFaUdfuegBblGWCXFcTsceicYAb_11)); }
	inline RuntimeObject* get_BKKFaUdfuegBblGWCXFcTsceicYAb_11() const { return ___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline RuntimeObject** get_address_of_BKKFaUdfuegBblGWCXFcTsceicYAb_11() { return &___BKKFaUdfuegBblGWCXFcTsceicYAb_11; }
	inline void set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(RuntimeObject* value)
	{
		___BKKFaUdfuegBblGWCXFcTsceicYAb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BKKFaUdfuegBblGWCXFcTsceicYAb_11), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_12() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_12; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_12 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return static_cast<int32_t>(offsetof(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_13() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_13; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_13), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ
struct CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.CustomController> Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::rSWjbVXZAEjqBDDAVYoCDnxtWdpE
	RuntimeObject* ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3)); }
	inline RuntimeObject* get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() const { return ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline RuntimeObject** get_address_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return &___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline void set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(RuntimeObject* value)
	{
		___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg
struct DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::TtytLoUfsgUyhsklaKccrnoMiiek
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___TtytLoUfsgUyhsklaKccrnoMiiek_3;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::hSeONskmQJhVsjVUHGUASYbDGJrU
	RuntimeObject* ___hSeONskmQJhVsjVUHGUASYbDGJrU_4;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return static_cast<int32_t>(offsetof(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1, ___TtytLoUfsgUyhsklaKccrnoMiiek_3)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_TtytLoUfsgUyhsklaKccrnoMiiek_3() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_3(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_3), (void*)value);
	}

	inline static int32_t get_offset_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return static_cast<int32_t>(offsetof(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1, ___hSeONskmQJhVsjVUHGUASYbDGJrU_4)); }
	inline RuntimeObject* get_hSeONskmQJhVsjVUHGUASYbDGJrU_4() const { return ___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline RuntimeObject** get_address_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return &___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline void set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(RuntimeObject* value)
	{
		___hSeONskmQJhVsjVUHGUASYbDGJrU_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hSeONskmQJhVsjVUHGUASYbDGJrU_4), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl
struct LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.Joystick> Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::DCHsYsHgaGZanwaPfowyYcSnBov
	RuntimeObject* ___DCHsYsHgaGZanwaPfowyYcSnBov_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___DCHsYsHgaGZanwaPfowyYcSnBov_3)); }
	inline RuntimeObject* get_DCHsYsHgaGZanwaPfowyYcSnBov_3() const { return ___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline RuntimeObject** get_address_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return &___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline void set_DCHsYsHgaGZanwaPfowyYcSnBov_3(RuntimeObject* value)
	{
		___DCHsYsHgaGZanwaPfowyYcSnBov_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DCHsYsHgaGZanwaPfowyYcSnBov_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi
struct MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.CustomController> Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::rSWjbVXZAEjqBDDAVYoCDnxtWdpE
	RuntimeObject* ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3)); }
	inline RuntimeObject* get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() const { return ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline RuntimeObject** get_address_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return &___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline void set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(RuntimeObject* value)
	{
		___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD
struct MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.Joystick> Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::DCHsYsHgaGZanwaPfowyYcSnBov
	RuntimeObject* ___DCHsYsHgaGZanwaPfowyYcSnBov_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___DCHsYsHgaGZanwaPfowyYcSnBov_3)); }
	inline RuntimeObject* get_DCHsYsHgaGZanwaPfowyYcSnBov_3() const { return ___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline RuntimeObject** get_address_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return &___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline void set_DCHsYsHgaGZanwaPfowyYcSnBov_3(RuntimeObject* value)
	{
		___DCHsYsHgaGZanwaPfowyYcSnBov_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DCHsYsHgaGZanwaPfowyYcSnBov_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg
struct QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::TtytLoUfsgUyhsklaKccrnoMiiek
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___TtytLoUfsgUyhsklaKccrnoMiiek_3;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::hSeONskmQJhVsjVUHGUASYbDGJrU
	RuntimeObject* ___hSeONskmQJhVsjVUHGUASYbDGJrU_4;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return static_cast<int32_t>(offsetof(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF, ___TtytLoUfsgUyhsklaKccrnoMiiek_3)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_TtytLoUfsgUyhsklaKccrnoMiiek_3() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_3(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_3), (void*)value);
	}

	inline static int32_t get_offset_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return static_cast<int32_t>(offsetof(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF, ___hSeONskmQJhVsjVUHGUASYbDGJrU_4)); }
	inline RuntimeObject* get_hSeONskmQJhVsjVUHGUASYbDGJrU_4() const { return ___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline RuntimeObject** get_address_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return &___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline void set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(RuntimeObject* value)
	{
		___hSeONskmQJhVsjVUHGUASYbDGJrU_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hSeONskmQJhVsjVUHGUASYbDGJrU_4), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM
struct VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.CustomController> Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::rSWjbVXZAEjqBDDAVYoCDnxtWdpE
	RuntimeObject* ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3)); }
	inline RuntimeObject* get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() const { return ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline RuntimeObject** get_address_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return &___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline void set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(RuntimeObject* value)
	{
		___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv
struct VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::TtytLoUfsgUyhsklaKccrnoMiiek
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___TtytLoUfsgUyhsklaKccrnoMiiek_3;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::hSeONskmQJhVsjVUHGUASYbDGJrU
	RuntimeObject* ___hSeONskmQJhVsjVUHGUASYbDGJrU_4;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return static_cast<int32_t>(offsetof(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A, ___TtytLoUfsgUyhsklaKccrnoMiiek_3)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_TtytLoUfsgUyhsklaKccrnoMiiek_3() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_3(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_3), (void*)value);
	}

	inline static int32_t get_offset_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return static_cast<int32_t>(offsetof(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A, ___hSeONskmQJhVsjVUHGUASYbDGJrU_4)); }
	inline RuntimeObject* get_hSeONskmQJhVsjVUHGUASYbDGJrU_4() const { return ___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline RuntimeObject** get_address_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return &___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline void set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(RuntimeObject* value)
	{
		___hSeONskmQJhVsjVUHGUASYbDGJrU_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hSeONskmQJhVsjVUHGUASYbDGJrU_4), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv
struct aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.CustomController> Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::rSWjbVXZAEjqBDDAVYoCDnxtWdpE
	RuntimeObject* ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3)); }
	inline RuntimeObject* get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() const { return ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline RuntimeObject** get_address_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return &___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline void set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(RuntimeObject* value)
	{
		___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA
struct bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.Joystick> Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::DCHsYsHgaGZanwaPfowyYcSnBov
	RuntimeObject* ___DCHsYsHgaGZanwaPfowyYcSnBov_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___DCHsYsHgaGZanwaPfowyYcSnBov_3)); }
	inline RuntimeObject* get_DCHsYsHgaGZanwaPfowyYcSnBov_3() const { return ___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline RuntimeObject** get_address_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return &___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline void set_DCHsYsHgaGZanwaPfowyYcSnBov_3(RuntimeObject* value)
	{
		___DCHsYsHgaGZanwaPfowyYcSnBov_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DCHsYsHgaGZanwaPfowyYcSnBov_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG
struct lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.Joystick> Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::DCHsYsHgaGZanwaPfowyYcSnBov
	RuntimeObject* ___DCHsYsHgaGZanwaPfowyYcSnBov_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___DCHsYsHgaGZanwaPfowyYcSnBov_3)); }
	inline RuntimeObject* get_DCHsYsHgaGZanwaPfowyYcSnBov_3() const { return ___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline RuntimeObject** get_address_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return &___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline void set_DCHsYsHgaGZanwaPfowyYcSnBov_3(RuntimeObject* value)
	{
		___DCHsYsHgaGZanwaPfowyYcSnBov_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DCHsYsHgaGZanwaPfowyYcSnBov_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL
struct sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::TtytLoUfsgUyhsklaKccrnoMiiek
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___TtytLoUfsgUyhsklaKccrnoMiiek_3;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::hSeONskmQJhVsjVUHGUASYbDGJrU
	RuntimeObject* ___hSeONskmQJhVsjVUHGUASYbDGJrU_4;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return static_cast<int32_t>(offsetof(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705, ___TtytLoUfsgUyhsklaKccrnoMiiek_3)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_TtytLoUfsgUyhsklaKccrnoMiiek_3() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_3(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_3), (void*)value);
	}

	inline static int32_t get_offset_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return static_cast<int32_t>(offsetof(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705, ___hSeONskmQJhVsjVUHGUASYbDGJrU_4)); }
	inline RuntimeObject* get_hSeONskmQJhVsjVUHGUASYbDGJrU_4() const { return ___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline RuntimeObject** get_address_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return &___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline void set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(RuntimeObject* value)
	{
		___hSeONskmQJhVsjVUHGUASYbDGJrU_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hSeONskmQJhVsjVUHGUASYbDGJrU_4), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA
struct tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::TtytLoUfsgUyhsklaKccrnoMiiek
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * ___TtytLoUfsgUyhsklaKccrnoMiiek_3;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::hSeONskmQJhVsjVUHGUASYbDGJrU
	RuntimeObject* ___hSeONskmQJhVsjVUHGUASYbDGJrU_4;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return static_cast<int32_t>(offsetof(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937, ___TtytLoUfsgUyhsklaKccrnoMiiek_3)); }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * get_TtytLoUfsgUyhsklaKccrnoMiiek_3() const { return ___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A ** get_address_of_TtytLoUfsgUyhsklaKccrnoMiiek_3() { return &___TtytLoUfsgUyhsklaKccrnoMiiek_3; }
	inline void set_TtytLoUfsgUyhsklaKccrnoMiiek_3(PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * value)
	{
		___TtytLoUfsgUyhsklaKccrnoMiiek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TtytLoUfsgUyhsklaKccrnoMiiek_3), (void*)value);
	}

	inline static int32_t get_offset_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return static_cast<int32_t>(offsetof(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937, ___hSeONskmQJhVsjVUHGUASYbDGJrU_4)); }
	inline RuntimeObject* get_hSeONskmQJhVsjVUHGUASYbDGJrU_4() const { return ___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline RuntimeObject** get_address_of_hSeONskmQJhVsjVUHGUASYbDGJrU_4() { return &___hSeONskmQJhVsjVUHGUASYbDGJrU_4; }
	inline void set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(RuntimeObject* value)
	{
		___hSeONskmQJhVsjVUHGUASYbDGJrU_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hSeONskmQJhVsjVUHGUASYbDGJrU_4), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA
struct ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.Joystick> Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::DCHsYsHgaGZanwaPfowyYcSnBov
	RuntimeObject* ___DCHsYsHgaGZanwaPfowyYcSnBov_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___DCHsYsHgaGZanwaPfowyYcSnBov_3)); }
	inline RuntimeObject* get_DCHsYsHgaGZanwaPfowyYcSnBov_3() const { return ___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline RuntimeObject** get_address_of_DCHsYsHgaGZanwaPfowyYcSnBov_3() { return &___DCHsYsHgaGZanwaPfowyYcSnBov_3; }
	inline void set_DCHsYsHgaGZanwaPfowyYcSnBov_3(RuntimeObject* value)
	{
		___DCHsYsHgaGZanwaPfowyYcSnBov_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DCHsYsHgaGZanwaPfowyYcSnBov_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup
struct ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7  : public RuntimeObject
{
public:
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::RxAoyfYzYDsYonLGXsvUgwChukLk
	int32_t ___RxAoyfYzYDsYonLGXsvUgwChukLk_0;
	// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::VqEePGSMyrGKIqkWibsjeHcWPSIx
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::wLBvvzlDcbAEPyDfgnprolEZBsgN
	int32_t ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2;
	// System.Collections.Generic.IList`1<Rewired.CustomController> Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::rSWjbVXZAEjqBDDAVYoCDnxtWdpE
	RuntimeObject* ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3;
	// System.Int32 Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::fIMVaffCgsuIJcnrkMmGGKfPwwel
	int32_t ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4;
	// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::ffMVLALuuURkVdxHSgrNcNQkUFZS
	RuntimeObject* ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5;

public:
	inline static int32_t get_offset_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___RxAoyfYzYDsYonLGXsvUgwChukLk_0)); }
	inline int32_t get_RxAoyfYzYDsYonLGXsvUgwChukLk_0() const { return ___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline int32_t* get_address_of_RxAoyfYzYDsYonLGXsvUgwChukLk_0() { return &___RxAoyfYzYDsYonLGXsvUgwChukLk_0; }
	inline void set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(int32_t value)
	{
		___RxAoyfYzYDsYonLGXsvUgwChukLk_0 = value;
	}

	inline static int32_t get_offset_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1)); }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() const { return ___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 * get_address_of_VqEePGSMyrGKIqkWibsjeHcWPSIx_1() { return &___VqEePGSMyrGKIqkWibsjeHcWPSIx_1; }
	inline void set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  value)
	{
		___VqEePGSMyrGKIqkWibsjeHcWPSIx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___tnqDtnjrRmrTJiUPBcWlFVtippWic_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___VqEePGSMyrGKIqkWibsjeHcWPSIx_1))->___PslWOFZWArVhPwzuPAbExXVaDTAn_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2)); }
	inline int32_t get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() const { return ___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline int32_t* get_address_of_wLBvvzlDcbAEPyDfgnprolEZBsgN_2() { return &___wLBvvzlDcbAEPyDfgnprolEZBsgN_2; }
	inline void set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(int32_t value)
	{
		___wLBvvzlDcbAEPyDfgnprolEZBsgN_2 = value;
	}

	inline static int32_t get_offset_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3)); }
	inline RuntimeObject* get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() const { return ___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline RuntimeObject** get_address_of_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3() { return &___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3; }
	inline void set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(RuntimeObject* value)
	{
		___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3), (void*)value);
	}

	inline static int32_t get_offset_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4)); }
	inline int32_t get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() const { return ___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline int32_t* get_address_of_fIMVaffCgsuIJcnrkMmGGKfPwwel_4() { return &___fIMVaffCgsuIJcnrkMmGGKfPwwel_4; }
	inline void set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(int32_t value)
	{
		___fIMVaffCgsuIJcnrkMmGGKfPwwel_4 = value;
	}

	inline static int32_t get_offset_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return static_cast<int32_t>(offsetof(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7, ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5)); }
	inline RuntimeObject* get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() const { return ___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline RuntimeObject** get_address_of_ffMVLALuuURkVdxHSgrNcNQkUFZS_5() { return &___ffMVLALuuURkVdxHSgrNcNQkUFZS_5; }
	inline void set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(RuntimeObject* value)
	{
		___ffMVLALuuURkVdxHSgrNcNQkUFZS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ffMVLALuuURkVdxHSgrNcNQkUFZS_5), (void*)value);
	}
};


// Rewired.ControllerWithMap
struct ControllerWithMap_t12069848350008706EF355D952FF4F0FC97FBA6F  : public Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33
{
public:

public:
};


// Rewired.CustomControllerMap
struct CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9  : public ControllerMapWithAxes_t7D0273C5C84D2F9DAB373AF59560CCB21096B1F2
{
public:
	// System.Int32 Rewired.CustomControllerMap::iaffKOkGQHfQnQXgmjxXCjrvpuxu
	int32_t ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_18;

public:
	inline static int32_t get_offset_of_iaffKOkGQHfQnQXgmjxXCjrvpuxu_18() { return static_cast<int32_t>(offsetof(CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9, ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_18)); }
	inline int32_t get_iaffKOkGQHfQnQXgmjxXCjrvpuxu_18() const { return ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_18; }
	inline int32_t* get_address_of_iaffKOkGQHfQnQXgmjxXCjrvpuxu_18() { return &___iaffKOkGQHfQnQXgmjxXCjrvpuxu_18; }
	inline void set_iaffKOkGQHfQnQXgmjxXCjrvpuxu_18(int32_t value)
	{
		___iaffKOkGQHfQnQXgmjxXCjrvpuxu_18 = value;
	}
};


// Rewired.JoystickMap
struct JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951  : public ControllerMapWithAxes_t7D0273C5C84D2F9DAB373AF59560CCB21096B1F2
{
public:

public:
};


// Rewired.ControllerWithAxes
struct ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F  : public ControllerWithMap_t12069848350008706EF355D952FF4F0FC97FBA6F
{
public:
	// System.Int32 Rewired.ControllerWithAxes::_axisCount
	int32_t ____axisCount_30;
	// System.Int32 Rewired.ControllerWithAxes::_axis2DCount
	int32_t ____axis2DCount_31;
	// Rewired.Controller/Axis[] Rewired.ControllerWithAxes::axes
	AxisU5BU5D_tF4D89F7138259317CAEDB9CCDE0F5038A9F6BCA9* ___axes_32;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis> Rewired.ControllerWithAxes::axes_readOnly
	ReadOnlyCollection_1_t87D02809CCBCDB8140E346DDA3F0843F50F7871F * ___axes_readOnly_33;
	// Rewired.Controller/Axis2D[] Rewired.ControllerWithAxes::axes2D
	Axis2DU5BU5D_t8B30D85A4FDFB9B315ECE51A3AA27C4ABE980715* ___axes2D_34;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Axis2D> Rewired.ControllerWithAxes::axes2D_readOnly
	ReadOnlyCollection_1_t4D2DA1D1F2AFAE868B9CC79BFFD445B34D4C42DB * ___axes2D_readOnly_35;
	// Rewired.CalibrationMap Rewired.ControllerWithAxes::_calibrationMap
	CalibrationMap_t956E6C639DCA61300AFE35D2C65226183DFFCBDE * ____calibrationMap_36;
	// System.Single[] Rewired.ControllerWithAxes::BijdrwGaINHJxnPnVjrnZCtkCPVCb
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37;
	// System.UInt32 Rewired.ControllerWithAxes::etHUIhDEqrnLEiPJGCMbqVceKELW
	uint32_t ___etHUIhDEqrnLEiPJGCMbqVceKELW_38;
	// System.Func`2<System.Int32,System.Int32> Rewired.ControllerWithAxes::zSSDgSGEFuoVXbqlGAfVNVsHjHaRA
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39;

public:
	inline static int32_t get_offset_of__axisCount_30() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ____axisCount_30)); }
	inline int32_t get__axisCount_30() const { return ____axisCount_30; }
	inline int32_t* get_address_of__axisCount_30() { return &____axisCount_30; }
	inline void set__axisCount_30(int32_t value)
	{
		____axisCount_30 = value;
	}

	inline static int32_t get_offset_of__axis2DCount_31() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ____axis2DCount_31)); }
	inline int32_t get__axis2DCount_31() const { return ____axis2DCount_31; }
	inline int32_t* get_address_of__axis2DCount_31() { return &____axis2DCount_31; }
	inline void set__axis2DCount_31(int32_t value)
	{
		____axis2DCount_31 = value;
	}

	inline static int32_t get_offset_of_axes_32() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___axes_32)); }
	inline AxisU5BU5D_tF4D89F7138259317CAEDB9CCDE0F5038A9F6BCA9* get_axes_32() const { return ___axes_32; }
	inline AxisU5BU5D_tF4D89F7138259317CAEDB9CCDE0F5038A9F6BCA9** get_address_of_axes_32() { return &___axes_32; }
	inline void set_axes_32(AxisU5BU5D_tF4D89F7138259317CAEDB9CCDE0F5038A9F6BCA9* value)
	{
		___axes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_32), (void*)value);
	}

	inline static int32_t get_offset_of_axes_readOnly_33() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___axes_readOnly_33)); }
	inline ReadOnlyCollection_1_t87D02809CCBCDB8140E346DDA3F0843F50F7871F * get_axes_readOnly_33() const { return ___axes_readOnly_33; }
	inline ReadOnlyCollection_1_t87D02809CCBCDB8140E346DDA3F0843F50F7871F ** get_address_of_axes_readOnly_33() { return &___axes_readOnly_33; }
	inline void set_axes_readOnly_33(ReadOnlyCollection_1_t87D02809CCBCDB8140E346DDA3F0843F50F7871F * value)
	{
		___axes_readOnly_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_readOnly_33), (void*)value);
	}

	inline static int32_t get_offset_of_axes2D_34() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___axes2D_34)); }
	inline Axis2DU5BU5D_t8B30D85A4FDFB9B315ECE51A3AA27C4ABE980715* get_axes2D_34() const { return ___axes2D_34; }
	inline Axis2DU5BU5D_t8B30D85A4FDFB9B315ECE51A3AA27C4ABE980715** get_address_of_axes2D_34() { return &___axes2D_34; }
	inline void set_axes2D_34(Axis2DU5BU5D_t8B30D85A4FDFB9B315ECE51A3AA27C4ABE980715* value)
	{
		___axes2D_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes2D_34), (void*)value);
	}

	inline static int32_t get_offset_of_axes2D_readOnly_35() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___axes2D_readOnly_35)); }
	inline ReadOnlyCollection_1_t4D2DA1D1F2AFAE868B9CC79BFFD445B34D4C42DB * get_axes2D_readOnly_35() const { return ___axes2D_readOnly_35; }
	inline ReadOnlyCollection_1_t4D2DA1D1F2AFAE868B9CC79BFFD445B34D4C42DB ** get_address_of_axes2D_readOnly_35() { return &___axes2D_readOnly_35; }
	inline void set_axes2D_readOnly_35(ReadOnlyCollection_1_t4D2DA1D1F2AFAE868B9CC79BFFD445B34D4C42DB * value)
	{
		___axes2D_readOnly_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes2D_readOnly_35), (void*)value);
	}

	inline static int32_t get_offset_of__calibrationMap_36() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ____calibrationMap_36)); }
	inline CalibrationMap_t956E6C639DCA61300AFE35D2C65226183DFFCBDE * get__calibrationMap_36() const { return ____calibrationMap_36; }
	inline CalibrationMap_t956E6C639DCA61300AFE35D2C65226183DFFCBDE ** get_address_of__calibrationMap_36() { return &____calibrationMap_36; }
	inline void set__calibrationMap_36(CalibrationMap_t956E6C639DCA61300AFE35D2C65226183DFFCBDE * value)
	{
		____calibrationMap_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____calibrationMap_36), (void*)value);
	}

	inline static int32_t get_offset_of_BijdrwGaINHJxnPnVjrnZCtkCPVCb_37() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_BijdrwGaINHJxnPnVjrnZCtkCPVCb_37() const { return ___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_BijdrwGaINHJxnPnVjrnZCtkCPVCb_37() { return &___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37; }
	inline void set_BijdrwGaINHJxnPnVjrnZCtkCPVCb_37(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BijdrwGaINHJxnPnVjrnZCtkCPVCb_37), (void*)value);
	}

	inline static int32_t get_offset_of_etHUIhDEqrnLEiPJGCMbqVceKELW_38() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___etHUIhDEqrnLEiPJGCMbqVceKELW_38)); }
	inline uint32_t get_etHUIhDEqrnLEiPJGCMbqVceKELW_38() const { return ___etHUIhDEqrnLEiPJGCMbqVceKELW_38; }
	inline uint32_t* get_address_of_etHUIhDEqrnLEiPJGCMbqVceKELW_38() { return &___etHUIhDEqrnLEiPJGCMbqVceKELW_38; }
	inline void set_etHUIhDEqrnLEiPJGCMbqVceKELW_38(uint32_t value)
	{
		___etHUIhDEqrnLEiPJGCMbqVceKELW_38 = value;
	}

	inline static int32_t get_offset_of_zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39() { return static_cast<int32_t>(offsetof(ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F, ___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39() const { return ___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39() { return &___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39; }
	inline void set_zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zSSDgSGEFuoVXbqlGAfVNVsHjHaRA_39), (void*)value);
	}
};


// Rewired.CustomController
struct CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63  : public ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F
{
public:
	// System.Int32 Rewired.CustomController::iaffKOkGQHfQnQXgmjxXCjrvpuxu
	int32_t ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_40;
	// System.Func`2<System.Int32,System.Single> Rewired.CustomController::LPxLRwuenJKjnaUGDRRTfKoDurIn
	Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * ___LPxLRwuenJKjnaUGDRRTfKoDurIn_41;
	// System.Func`2<System.Int32,System.Boolean> Rewired.CustomController::rnFmbfHEOUgFMmBQOWoxCxIWMJZD
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42;
	// System.Boolean Rewired.CustomController::yzcKsJMDeIRHgPciVraqzlyRLviv
	bool ___yzcKsJMDeIRHgPciVraqzlyRLviv_43;
	// System.Guid Rewired.CustomController::guGxXkQdSCnhDedSVaPzhraGphmHA
	Guid_t  ___guGxXkQdSCnhDedSVaPzhraGphmHA_44;

public:
	inline static int32_t get_offset_of_iaffKOkGQHfQnQXgmjxXCjrvpuxu_40() { return static_cast<int32_t>(offsetof(CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63, ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_40)); }
	inline int32_t get_iaffKOkGQHfQnQXgmjxXCjrvpuxu_40() const { return ___iaffKOkGQHfQnQXgmjxXCjrvpuxu_40; }
	inline int32_t* get_address_of_iaffKOkGQHfQnQXgmjxXCjrvpuxu_40() { return &___iaffKOkGQHfQnQXgmjxXCjrvpuxu_40; }
	inline void set_iaffKOkGQHfQnQXgmjxXCjrvpuxu_40(int32_t value)
	{
		___iaffKOkGQHfQnQXgmjxXCjrvpuxu_40 = value;
	}

	inline static int32_t get_offset_of_LPxLRwuenJKjnaUGDRRTfKoDurIn_41() { return static_cast<int32_t>(offsetof(CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63, ___LPxLRwuenJKjnaUGDRRTfKoDurIn_41)); }
	inline Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * get_LPxLRwuenJKjnaUGDRRTfKoDurIn_41() const { return ___LPxLRwuenJKjnaUGDRRTfKoDurIn_41; }
	inline Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 ** get_address_of_LPxLRwuenJKjnaUGDRRTfKoDurIn_41() { return &___LPxLRwuenJKjnaUGDRRTfKoDurIn_41; }
	inline void set_LPxLRwuenJKjnaUGDRRTfKoDurIn_41(Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * value)
	{
		___LPxLRwuenJKjnaUGDRRTfKoDurIn_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LPxLRwuenJKjnaUGDRRTfKoDurIn_41), (void*)value);
	}

	inline static int32_t get_offset_of_rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42() { return static_cast<int32_t>(offsetof(CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63, ___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42() const { return ___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42() { return &___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42; }
	inline void set_rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnFmbfHEOUgFMmBQOWoxCxIWMJZD_42), (void*)value);
	}

	inline static int32_t get_offset_of_yzcKsJMDeIRHgPciVraqzlyRLviv_43() { return static_cast<int32_t>(offsetof(CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63, ___yzcKsJMDeIRHgPciVraqzlyRLviv_43)); }
	inline bool get_yzcKsJMDeIRHgPciVraqzlyRLviv_43() const { return ___yzcKsJMDeIRHgPciVraqzlyRLviv_43; }
	inline bool* get_address_of_yzcKsJMDeIRHgPciVraqzlyRLviv_43() { return &___yzcKsJMDeIRHgPciVraqzlyRLviv_43; }
	inline void set_yzcKsJMDeIRHgPciVraqzlyRLviv_43(bool value)
	{
		___yzcKsJMDeIRHgPciVraqzlyRLviv_43 = value;
	}

	inline static int32_t get_offset_of_guGxXkQdSCnhDedSVaPzhraGphmHA_44() { return static_cast<int32_t>(offsetof(CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63, ___guGxXkQdSCnhDedSVaPzhraGphmHA_44)); }
	inline Guid_t  get_guGxXkQdSCnhDedSVaPzhraGphmHA_44() const { return ___guGxXkQdSCnhDedSVaPzhraGphmHA_44; }
	inline Guid_t * get_address_of_guGxXkQdSCnhDedSVaPzhraGphmHA_44() { return &___guGxXkQdSCnhDedSVaPzhraGphmHA_44; }
	inline void set_guGxXkQdSCnhDedSVaPzhraGphmHA_44(Guid_t  value)
	{
		___guGxXkQdSCnhDedSVaPzhraGphmHA_44 = value;
	}
};


// Rewired.Joystick
struct Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47  : public ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F
{
public:
	// Rewired.Interfaces.IInputManagerJoystickPublic Rewired.Joystick::EatmzbjgpSKzrpMZwcWwOZUZiihP
	RuntimeObject* ___EatmzbjgpSKzrpMZwcWwOZUZiihP_42;
	// Rewired.JoystickType[] Rewired.Joystick::HMZZjJkCjEaHRLhyIqzCkjuwNAwd
	JoystickTypeU5BU5D_tBF881107A1B4DA23E3FB7734196B866E0EF65540* ___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.JoystickType> Rewired.Joystick::eXSMJXNrBEOMtsJspAcSHHvOvIdi
	ReadOnlyCollection_1_t245A5F483FC86FCE8F523B5685CCC251B8346714 * ___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44;
	// System.Boolean Rewired.Joystick::OlbVRqsSBEtRqSittUWERZaqzxXk
	bool ___OlbVRqsSBEtRqSittUWERZaqzxXk_45;
	// System.Boolean Rewired.Joystick::sWgekvUoGxEjnAXOtkFlKFVqFVAl
	bool ___sWgekvUoGxEjnAXOtkFlKFVqFVAl_46;
	// System.Boolean Rewired.Joystick::riIYUkZICekLoeJBrMrGBAvCabsX
	bool ___riIYUkZICekLoeJBrMrGBAvCabsX_47;
	// System.Int32 Rewired.Joystick::RQswxjUgvoJzPcaSYFLfcfxGvkxsA
	int32_t ___RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48;
	// System.Single[] Rewired.Joystick::cHApXOnOYvppOsbuqcPjWIcGOsIi
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cHApXOnOYvppOsbuqcPjWIcGOsIi_49;
	// Rewired.Utils.Classes.Utility.TimerAbs[] Rewired.Joystick::ifDixddKyelvbcKEcCwEkmKwiwjLb
	TimerAbsU5BU5D_t5110F2E50A329FE8F8B9E9924EC847080FAC1AF5* ___ifDixddKyelvbcKEcCwEkmKwiwjLb_50;
	// System.Int32 Rewired.Joystick::nGzbpVDglcowGGmUjmoNUvXQietbA
	int32_t ___nGzbpVDglcowGGmUjmoNUvXQietbA_51;
	// Rewired.Controller/Hat[] Rewired.Joystick::lQCkuukVwwDBOwsdnsTAxXUgANcx
	HatU5BU5D_t47549FEE2F3BE2F181A4F7F36EA71FD47DE6C319* ___lQCkuukVwwDBOwsdnsTAxXUgANcx_52;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Hat> Rewired.Joystick::JaHbtlSQSGxZzASGripXpCSsrmkd
	ReadOnlyCollection_1_tE80AF83113933EEC5AA20C3DF69343C44834ED47 * ___JaHbtlSQSGxZzASGripXpCSsrmkd_53;

public:
	inline static int32_t get_offset_of_EatmzbjgpSKzrpMZwcWwOZUZiihP_42() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___EatmzbjgpSKzrpMZwcWwOZUZiihP_42)); }
	inline RuntimeObject* get_EatmzbjgpSKzrpMZwcWwOZUZiihP_42() const { return ___EatmzbjgpSKzrpMZwcWwOZUZiihP_42; }
	inline RuntimeObject** get_address_of_EatmzbjgpSKzrpMZwcWwOZUZiihP_42() { return &___EatmzbjgpSKzrpMZwcWwOZUZiihP_42; }
	inline void set_EatmzbjgpSKzrpMZwcWwOZUZiihP_42(RuntimeObject* value)
	{
		___EatmzbjgpSKzrpMZwcWwOZUZiihP_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EatmzbjgpSKzrpMZwcWwOZUZiihP_42), (void*)value);
	}

	inline static int32_t get_offset_of_HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43)); }
	inline JoystickTypeU5BU5D_tBF881107A1B4DA23E3FB7734196B866E0EF65540* get_HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43() const { return ___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43; }
	inline JoystickTypeU5BU5D_tBF881107A1B4DA23E3FB7734196B866E0EF65540** get_address_of_HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43() { return &___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43; }
	inline void set_HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43(JoystickTypeU5BU5D_tBF881107A1B4DA23E3FB7734196B866E0EF65540* value)
	{
		___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HMZZjJkCjEaHRLhyIqzCkjuwNAwd_43), (void*)value);
	}

	inline static int32_t get_offset_of_eXSMJXNrBEOMtsJspAcSHHvOvIdi_44() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44)); }
	inline ReadOnlyCollection_1_t245A5F483FC86FCE8F523B5685CCC251B8346714 * get_eXSMJXNrBEOMtsJspAcSHHvOvIdi_44() const { return ___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44; }
	inline ReadOnlyCollection_1_t245A5F483FC86FCE8F523B5685CCC251B8346714 ** get_address_of_eXSMJXNrBEOMtsJspAcSHHvOvIdi_44() { return &___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44; }
	inline void set_eXSMJXNrBEOMtsJspAcSHHvOvIdi_44(ReadOnlyCollection_1_t245A5F483FC86FCE8F523B5685CCC251B8346714 * value)
	{
		___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eXSMJXNrBEOMtsJspAcSHHvOvIdi_44), (void*)value);
	}

	inline static int32_t get_offset_of_OlbVRqsSBEtRqSittUWERZaqzxXk_45() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___OlbVRqsSBEtRqSittUWERZaqzxXk_45)); }
	inline bool get_OlbVRqsSBEtRqSittUWERZaqzxXk_45() const { return ___OlbVRqsSBEtRqSittUWERZaqzxXk_45; }
	inline bool* get_address_of_OlbVRqsSBEtRqSittUWERZaqzxXk_45() { return &___OlbVRqsSBEtRqSittUWERZaqzxXk_45; }
	inline void set_OlbVRqsSBEtRqSittUWERZaqzxXk_45(bool value)
	{
		___OlbVRqsSBEtRqSittUWERZaqzxXk_45 = value;
	}

	inline static int32_t get_offset_of_sWgekvUoGxEjnAXOtkFlKFVqFVAl_46() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___sWgekvUoGxEjnAXOtkFlKFVqFVAl_46)); }
	inline bool get_sWgekvUoGxEjnAXOtkFlKFVqFVAl_46() const { return ___sWgekvUoGxEjnAXOtkFlKFVqFVAl_46; }
	inline bool* get_address_of_sWgekvUoGxEjnAXOtkFlKFVqFVAl_46() { return &___sWgekvUoGxEjnAXOtkFlKFVqFVAl_46; }
	inline void set_sWgekvUoGxEjnAXOtkFlKFVqFVAl_46(bool value)
	{
		___sWgekvUoGxEjnAXOtkFlKFVqFVAl_46 = value;
	}

	inline static int32_t get_offset_of_riIYUkZICekLoeJBrMrGBAvCabsX_47() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___riIYUkZICekLoeJBrMrGBAvCabsX_47)); }
	inline bool get_riIYUkZICekLoeJBrMrGBAvCabsX_47() const { return ___riIYUkZICekLoeJBrMrGBAvCabsX_47; }
	inline bool* get_address_of_riIYUkZICekLoeJBrMrGBAvCabsX_47() { return &___riIYUkZICekLoeJBrMrGBAvCabsX_47; }
	inline void set_riIYUkZICekLoeJBrMrGBAvCabsX_47(bool value)
	{
		___riIYUkZICekLoeJBrMrGBAvCabsX_47 = value;
	}

	inline static int32_t get_offset_of_RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48)); }
	inline int32_t get_RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48() const { return ___RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48; }
	inline int32_t* get_address_of_RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48() { return &___RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48; }
	inline void set_RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48(int32_t value)
	{
		___RQswxjUgvoJzPcaSYFLfcfxGvkxsA_48 = value;
	}

	inline static int32_t get_offset_of_cHApXOnOYvppOsbuqcPjWIcGOsIi_49() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___cHApXOnOYvppOsbuqcPjWIcGOsIi_49)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cHApXOnOYvppOsbuqcPjWIcGOsIi_49() const { return ___cHApXOnOYvppOsbuqcPjWIcGOsIi_49; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cHApXOnOYvppOsbuqcPjWIcGOsIi_49() { return &___cHApXOnOYvppOsbuqcPjWIcGOsIi_49; }
	inline void set_cHApXOnOYvppOsbuqcPjWIcGOsIi_49(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cHApXOnOYvppOsbuqcPjWIcGOsIi_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cHApXOnOYvppOsbuqcPjWIcGOsIi_49), (void*)value);
	}

	inline static int32_t get_offset_of_ifDixddKyelvbcKEcCwEkmKwiwjLb_50() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___ifDixddKyelvbcKEcCwEkmKwiwjLb_50)); }
	inline TimerAbsU5BU5D_t5110F2E50A329FE8F8B9E9924EC847080FAC1AF5* get_ifDixddKyelvbcKEcCwEkmKwiwjLb_50() const { return ___ifDixddKyelvbcKEcCwEkmKwiwjLb_50; }
	inline TimerAbsU5BU5D_t5110F2E50A329FE8F8B9E9924EC847080FAC1AF5** get_address_of_ifDixddKyelvbcKEcCwEkmKwiwjLb_50() { return &___ifDixddKyelvbcKEcCwEkmKwiwjLb_50; }
	inline void set_ifDixddKyelvbcKEcCwEkmKwiwjLb_50(TimerAbsU5BU5D_t5110F2E50A329FE8F8B9E9924EC847080FAC1AF5* value)
	{
		___ifDixddKyelvbcKEcCwEkmKwiwjLb_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ifDixddKyelvbcKEcCwEkmKwiwjLb_50), (void*)value);
	}

	inline static int32_t get_offset_of_nGzbpVDglcowGGmUjmoNUvXQietbA_51() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___nGzbpVDglcowGGmUjmoNUvXQietbA_51)); }
	inline int32_t get_nGzbpVDglcowGGmUjmoNUvXQietbA_51() const { return ___nGzbpVDglcowGGmUjmoNUvXQietbA_51; }
	inline int32_t* get_address_of_nGzbpVDglcowGGmUjmoNUvXQietbA_51() { return &___nGzbpVDglcowGGmUjmoNUvXQietbA_51; }
	inline void set_nGzbpVDglcowGGmUjmoNUvXQietbA_51(int32_t value)
	{
		___nGzbpVDglcowGGmUjmoNUvXQietbA_51 = value;
	}

	inline static int32_t get_offset_of_lQCkuukVwwDBOwsdnsTAxXUgANcx_52() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___lQCkuukVwwDBOwsdnsTAxXUgANcx_52)); }
	inline HatU5BU5D_t47549FEE2F3BE2F181A4F7F36EA71FD47DE6C319* get_lQCkuukVwwDBOwsdnsTAxXUgANcx_52() const { return ___lQCkuukVwwDBOwsdnsTAxXUgANcx_52; }
	inline HatU5BU5D_t47549FEE2F3BE2F181A4F7F36EA71FD47DE6C319** get_address_of_lQCkuukVwwDBOwsdnsTAxXUgANcx_52() { return &___lQCkuukVwwDBOwsdnsTAxXUgANcx_52; }
	inline void set_lQCkuukVwwDBOwsdnsTAxXUgANcx_52(HatU5BU5D_t47549FEE2F3BE2F181A4F7F36EA71FD47DE6C319* value)
	{
		___lQCkuukVwwDBOwsdnsTAxXUgANcx_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lQCkuukVwwDBOwsdnsTAxXUgANcx_52), (void*)value);
	}

	inline static int32_t get_offset_of_JaHbtlSQSGxZzASGripXpCSsrmkd_53() { return static_cast<int32_t>(offsetof(Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47, ___JaHbtlSQSGxZzASGripXpCSsrmkd_53)); }
	inline ReadOnlyCollection_1_tE80AF83113933EEC5AA20C3DF69343C44834ED47 * get_JaHbtlSQSGxZzASGripXpCSsrmkd_53() const { return ___JaHbtlSQSGxZzASGripXpCSsrmkd_53; }
	inline ReadOnlyCollection_1_tE80AF83113933EEC5AA20C3DF69343C44834ED47 ** get_address_of_JaHbtlSQSGxZzASGripXpCSsrmkd_53() { return &___JaHbtlSQSGxZzASGripXpCSsrmkd_53; }
	inline void set_JaHbtlSQSGxZzASGripXpCSsrmkd_53(ReadOnlyCollection_1_tE80AF83113933EEC5AA20C3DF69343C44834ED47 * value)
	{
		___JaHbtlSQSGxZzASGripXpCSsrmkd_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JaHbtlSQSGxZzASGripXpCSsrmkd_53), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA0BD46B27DD04F0AD588DBCE551EAD4D35C7702F (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Rewired.Player> BBctKivJxEjGKRzyEkHSRjJoJqnW::vWImeTRBgLuJHCkrenRmwXGLjOXl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline (BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Rewired.Player> BBctKivJxEjGKRzyEkHSRjJoJqnW::FnhCiefZeFmBxyEOoYPyOsnZbtmX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline (BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper::ElementAssignmentConflicts(Rewired.ControllerType,System.Int32,Rewired.ControllerMap,Rewired.ActionElementMap,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCheckingHelper_ElementAssignmentConflicts_m1776B9F7298D05AE499E9C7A7C11C71F4ED62E80 (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * __this, int32_t ___controllerType0, int32_t ___controllerId1, ControllerMap_t840E4A4BAB81ECA540A6D251DF61CC71F20F604D * ___controllerMap2, ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * ___elementMap3, bool ___skipDisabledMaps4, bool ___forceCheckAllCategories5, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC_System_IDisposable_Dispose_m5A8A66C06E9BFA2AB4194C30FAA58BAD0D033A12 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC__ctor_m280E0D64AD0C6043DC6128B54DF73F0CCA48E283 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m03F5E5F49BE76097CF8EA9FE992D68F118912903 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA141D2CFA440F11CAFACEF56F309636664342708 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_IDisposable_Dispose_mA9064CFD73017CBBA7450DECAA9A27528257C0C0 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb__ctor_mE95E8F65703CD5257E73C7CAF47EFAC43771EC58 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m20168522ED100285EFFFDC2D149490B4100B4965 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m2FFC5D2FC03C6EF15552811B22913220E8B56071 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method);
// System.Int32 Rewired.ElementAssignmentConflictCheck::get_playerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_playerId_m8A2EFE460F804476B0E84548E4AF666CCABF3E9C_inline (ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * __this, const RuntimeMethod* method);
// Rewired.ElementAssignmentType Rewired.ElementAssignmentConflictCheck::get_elementAssignmentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_elementAssignmentType_m570A4A3856092ED3F37797CC6A8D11693608FF72_inline (ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper::ElementAssignmentConflicts(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCheckingHelper_ElementAssignmentConflicts_m8829B8F67AA81802F208311694324A0F12B5640C (ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * __this, ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  ___conflictCheck0, bool ___skipDisabledMaps1, bool ___forceCheckAllCategories2, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv_System_IDisposable_Dispose_m9ED843FBF576F98A0ED952E0A7A738EF7BD612BC (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv__ctor_mFAA9076DEE7D99E958723206DCF99440EEA711E6 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_mDCFA75B2404BE5AB25D9D7DDDEBA3408255D0941 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1834D134E087A3E047D9DB8368559BD0BA03BA88 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA_System_IDisposable_Dispose_m27DE4774DE8D54B2EC26345EE30CAF7F5AA64EE7 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA__ctor_mAD45DA0FBA4B1178260D4173B397EE09B83B56CE (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m391533944CB3F2FD27B9049A15ABAF712DD9928D (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC8E03723F4B95DE380E64FF3F57208CCDDBD327D (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB_System_IDisposable_Dispose_m1A3E19A506CCF06B3197FF8DFD0D1B49952DE88B (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB__ctor_m75F3431DD098A2D5BEDF7006BD4A3CFE3628135C (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m75156E35196334D02FE61087A493F05AD9A8BB9C (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC358617509336AE9DB2D33E6E9DE0A27B8420B99 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_IDisposable_Dispose_mE8672A958DB2ED89EBA8FA899FF7D768D5A13489 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC__ctor_mA410375FD033EAB13C53A84CC0D43D364269616B (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m3A83EBC0C0392D83E503A36C33E372E1F837D9F4 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m64EFA81EB66C9D4DB375B5FFB88608AC3B187A05 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Rewired.CustomController> pmhdIRhCoLlQZffSYgOmsLkpxsjN::ArNYtExzEOqJVrkLnFbqAtXXtlII()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline (pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_IDisposable_Dispose_mCFCF97247544CA27EA7B204EAA9EDFA3BEB278FE (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ__ctor_m83886C24ADC7C726233C8827494320597ED75EF6 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m1E08005992C6540401E72C339943F443690B5941 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mB99A63E48AA2B780343A52DC43C98064173BE775 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_tMeeFNDmLhzrFkrObkICOsBGeJux_mD37BA033B0F3A858A21F9ACDF05A7539906B41DA (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_bKYtFpdOyyopwWDgXevZsgrxWQOs_m82873EC71C94AAB049ADFC35749F31007D3EC93B (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mCC7AEDDFEF024666BEF2367CFFCA227A535FEF59 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Boolean Rewired.ReInput::CheckInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0 (const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::ZqxTJDIDYhzvQgREIWmdhRCmoMej()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_ZqxTJDIDYhzvQgREIWmdhRCmoMej_m397E6E048B9C8150025A70A500118A063D729DE1 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::nTOaOzAizIVxHePeOnxkRHlAxAWS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_nTOaOzAizIVxHePeOnxkRHlAxAWS_m3263DAC768D8264368D71133E340B40FEB2919C8 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::vjoctRbePlNRDLebnEgMQAlXsvCEA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_vjoctRbePlNRDLebnEgMQAlXsvCEA_mFCBD4E338305A58C2A0CDC45A2316B035DD22673 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::DvrOAgWzTHcCWGLyldMWiMsAROaM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_DvrOAgWzTHcCWGLyldMWiMsAROaM_mBBBE19B6D68B706160999E1EA736324322B740C1 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_IDisposable_Dispose_mE7AE8E0624E107136C6DCAC9752841FED4DEFBF2 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg__ctor_mCEB45F32E9A9848ED85B7B8275BB99694C61C646 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m384B20BFD57701483D3282A28AE4A6C4DA775812 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mF253624670AA89BBCC81427D6F769CEE5C5D292A (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Rewired.Joystick> pmhdIRhCoLlQZffSYgOmsLkpxsjN::KBNkExNQfrGjirYyRgxpRcOlIrXiA()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline (pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_IDisposable_Dispose_m70A2A65CE3C27F9927CEA129844CAFFB99820F61 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl__ctor_m699D8248B1A3B2BF35CA769DA5A3DF0DAF0828B4 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mEFF3CBA8D22E02C9FB6435001DBD460F1EA2CF09 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m0D63D904EB9DBA2356A794971C20CA24B0C1FE26 (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_IDisposable_Dispose_m367305B3475E8565959D2F98586753FE083B57DE (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi__ctor_m9A530DDB7749FEC1F71AE493AE0A36CEB05EDC8E (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m80EBEDC5765610876A5A06EF551EC620029AA75B (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEC3308D20B06E62B4C70A8C88D5CBC878531D89A (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ControllerWithAxes::PollForAllAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerWithAxes_PollForAllAxes_m99FC3798966B3ECCA7CA12CDA004B1C053677034 (ControllerWithAxes_t164B33E4223EEE8A3D485285B4AA5BFA1B0F780F * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD_System_IDisposable_Dispose_mB00769D56CC8CF6E9C4A1FB01F2E6F2CBB73D035 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD__ctor_mA0B1C6B49D2AD09D5DDC32D221EF4B748A0B36D8 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB3D537BA06623C92A1C17FD62B0C6133EF0B6599 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m675A883300FA4538B9278B4118AD209B59BA0C7E (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_tMeeFNDmLhzrFkrObkICOsBGeJux_m463B51254FD72BBB210A716018AFE2E693A2DB7B (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_bKYtFpdOyyopwWDgXevZsgrxWQOs_mA87D97A4693963CB5CC175917DA726DDE6669F5B (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mEBEB71C18CEC5ABA020CCE3752CEFDF4EC97C106 (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::dYUufOAgiYxVCulHuDweDbmlvBuAA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_dYUufOAgiYxVCulHuDweDbmlvBuAA_mCB72D5E19DE827C0328897FEEEF2A8269871FF82 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::HOEJAMRWlNjoQHyywIgOAMoSqKTE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_HOEJAMRWlNjoQHyywIgOAMoSqKTE_mEADA8CA5EF89AF49C16A2C63E73E32B3687063F0 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::yaXGMnGRHzLAsdmWClzYAeCKjTIlb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_yaXGMnGRHzLAsdmWClzYAeCKjTIlb_mA0A377EA61CCAE5D5B08716BD248581A4FE6CC66 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::YreEBReqxCdIJgxQdzUpAFWJOKmwA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_YreEBReqxCdIJgxQdzUpAFWJOKmwA_mD70C8A7359CF734896F38C1C3D5109FB018BC5BE (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_System_IDisposable_Dispose_m8F4759A7C23DD6BC62EA7674D9BF622A13F4E9DF (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg__ctor_mE86814B2A29581374C45506F045EA8CCD55AD80E (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m2C346F2D589EBA9286A7E50D9AD2A750BB1DC926 (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m18EBD679E24933C99EC70F72B9C3594B77BBD5CF (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_IDisposable_Dispose_m628BEF83A0BAB642D045183E72BA1DAF1E1B37A2 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM__ctor_m6BBCE77CC3196FA50A2634AE4F55E18AA06DCC68 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m27CF99C3C5C9A4FAB98E936A722B18B7120BC6FF (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1B4C6007A3284D4DAE31CC2871DC1479670336E5 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_tMeeFNDmLhzrFkrObkICOsBGeJux_m82E13A9078A9259C077F64F765BA74496F4E1E58 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_bKYtFpdOyyopwWDgXevZsgrxWQOs_m71C8265651A8F56E6EA2B2DAA56E342BE2152770 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_voQyPKUnPshXZdFCyWVzLjeZHBAs_m7C2B10C5DC74D733F14EC650FB9ACA488C385EDA (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::sszMazZiRlLXifusuhSvrXruVsvS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_sszMazZiRlLXifusuhSvrXruVsvS_m5571A02BD918CBC7ED56802A5E11E290865134FF (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::HKfvIjVyGzhVyNzzmHuXrPXdNtwB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_HKfvIjVyGzhVyNzzmHuXrPXdNtwB_m565FE0E638D846B7B535DD5B897166F78E1E8EC2 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::hTjfFKtRwBiwDyrjjHQnZaVkwhIc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_hTjfFKtRwBiwDyrjjHQnZaVkwhIc_mF3576AFD5FC936EFD3385A5DDB4DA88322D94690 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_System_IDisposable_Dispose_m3A9694CA1C43DC16967D763B92C8A32496B80FEB (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv__ctor_mB536FC2FF7038114A6CC67E34477A99292A9246A (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m25D7CA47BFDD851CC4BAA11BF2A2986A314E329D (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m65CEC3AE863E018989B64C7EA03BCF03B7F53C6C (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv_System_IDisposable_Dispose_m363A4A2038E89C555A6319D8F05F197EF0312794 (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv__ctor_mF18095D926D2F9DBA3427DEDEE312DA4B4BA1D2F (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m0E053D4D98A57FF96642BC38DBE19524B2F7468D (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m7B9E425492C3D054CEF32BF36DDE548AAFFF3130 (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_IDisposable_Dispose_m3BC8DDB4585BE79835C33CFD786CFCA0A0FF66AC (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA__ctor_mAC8D80FA18A0E6DA8BDDFBF07C75C771B3CCF42D (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m683A43912400EA34D007E9CFBE228B3294CA55F7 (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA15CEC50245A0760B6C050FEE8B437765DC16011 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_IDisposable_Dispose_m8D7E0731A23A931FBF5EDC16F4EE4E8FC972D962 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG__ctor_m6DC92D4951BE7FC5EFAEDBEC5A24960AB3D58CB6 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m466BEB3318C1EA9FD8074A99A50DE4D4255E0434 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEAF5E47FEF332311C6A4825DF6870DB49B3DCE64 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_tMeeFNDmLhzrFkrObkICOsBGeJux_m1530D1A7039C7BF9D7BA4419AE1AF26010E8A541 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_bKYtFpdOyyopwWDgXevZsgrxWQOs_mD53DA0C0C5ED879D1811A88D8E197DC082427D26 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_voQyPKUnPshXZdFCyWVzLjeZHBAs_mB49E179567FCB140CE1C6940855AE24D72C25F22 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::SktOozRnmJREqRNSUWbYArRRBgoK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_SktOozRnmJREqRNSUWbYArRRBgoK_m0B3FD09ABE00BB36AD114EAB949A3D1A5C034896 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::cLPDCRhyqgMmkTmpLiLNnnreryrD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_cLPDCRhyqgMmkTmpLiLNnnreryrD_m12CBDC006269FE4B30FD0E8810696F95E53C627E (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::gwHUtKVRaufrytBZKyNeqEdqvaFV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_gwHUtKVRaufrytBZKyNeqEdqvaFV_m1564B84FE2AAF4CC4F0AF4677BB05A3B0AF6B0B6 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_IDisposable_Dispose_m8A24C94C3DF2813E9AE045FB84B685519EB832F0 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL__ctor_mFEB5BD3A4E8A5C3CC6B85C3A0E61BF4F68B128FF (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mCDC50597D88C1DAFD6AEC4270B7B510489A9F179 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mE6963738FDCA1F0AA6A5AD72852DC8991CD6C7D8 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tMeeFNDmLhzrFkrObkICOsBGeJux_m8FDE230EF0747E8B1487268451FB3A53E46018CC (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_bKYtFpdOyyopwWDgXevZsgrxWQOs_mE105A876B87521C1A0E773543CB4B9E8F3BA6308 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::zwNhHIcIgtilZkHFNoLdYkBpudmR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_zwNhHIcIgtilZkHFNoLdYkBpudmR_mA2829AF15F2315E293AED400379B69CB88A5B171 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::xLpJNhMMqKQpDjLnVPCaMhTCFhvDA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_xLpJNhMMqKQpDjLnVPCaMhTCFhvDA_m2DA3378012D0D3993B361A529055EB28578408B4 (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper::VJeweIaiXWbvCcIFICQocFzFqnbpB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PollingHelper_VJeweIaiXWbvCcIFICQocFzFqnbpB_mFF5FE442BB05EE76F005FBDC7035A964FFFDA3BE (PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_IDisposable_Dispose_mB89C5887DFE1162DDC977B0E4D9F01713DF38E58 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA__ctor_mAD86350DADFB4CC48EEAAEBF6372053456D27699 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB9A06A622007565945BCD87406E1FEA2863BFEC5 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m29E0C6543E16C79EFBCBFF1D67B825BCEA1F72C0 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_IDisposable_Dispose_mA8B1BB655ED3679A289FCDBB017DA67C60B07AAD (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA__ctor_m77AF29D317C2ABA8AE42E797CC56831379C35659 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mE01A355A76526076AEFD26FD3BCBD72500CFD41D (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m95C175F4ED62DAED6FF51ED426EA071BCB1FE675 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup_System_IDisposable_Dispose_m053FBE40114104FB789A75C71ED260A4CB4F90B4 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method);
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup__ctor_mE5EEF3D4F9377880EEED39DF47CCBD8DD5E602B4 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m450BAB691AD2881DDCC1D2402B9F20EBB30494C2 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC__ctor_m280E0D64AD0C6043DC6128B54DF73F0CCA48E283 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC_System_IDisposable_Dispose_m5A8A66C06E9BFA2AB4194C30FAA58BAD0D033A12 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		TDAlrBUSJPvPNosCaDVkScZBJRXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA0BD46B27DD04F0AD588DBCE551EAD4D35C7702F(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TDAlrBUSJPvPNosCaDVkScZBJRXC_MoveNext_m66E01296FF0FA6E1ADD1EA1AF5BCCB25493F09C7 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * G_B8_0 = NULL;
	TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00d9;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_012c;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			int32_t L_3 = __this->get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3();
			if ((((int32_t)L_3) < ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_4 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			if (L_4)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			V_0 = (bool)0;
			goto IL_012c;
		}

IL_0037:
		{
			bool L_5 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_7();
			G_B7_0 = __this;
			if (L_5)
			{
				G_B8_0 = __this;
				goto IL_004c;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_6 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_6, /*hidden argument*/NULL);
			G_B9_0 = L_7;
			G_B9_1 = G_B7_0;
			goto IL_0056;
		}

IL_004c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B8_0;
		}

IL_0056:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_17(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(0);
			goto IL_010b;
		}

IL_0067:
		{
			RuntimeObject* L_10 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_17();
			int32_t L_11 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			NullCheck(L_10);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_12;
			L_12 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_10, L_11);
			NullCheck(L_12);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_13 = L_12->get_controllers_7();
			NullCheck(L_13);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_14 = L_13->get_conflictChecking_13();
			int32_t L_15 = __this->get_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9();
			JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * L_16 = __this->get_QNctLPxloztIePsRkfyJcgjGIKffA_11();
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_17 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			bool L_18 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_13();
			bool L_19 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15();
			NullCheck(L_14);
			RuntimeObject* L_20;
			L_20 = ConflictCheckingHelper_ElementAssignmentConflicts_m1776B9F7298D05AE499E9C7A7C11C71F4ED62E80(L_14, 2, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_20);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19(L_21);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00e1;
		}

IL_00bb:
		{
			RuntimeObject* L_22 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
			NullCheck(L_22);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23;
			L_23 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_22);
			V_2 = L_23;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_24 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_24);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_012c;
		}

IL_00d9:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00e1:
		{
			RuntimeObject* L_25 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00bb;
			}
		}

IL_00ee:
		{
			TDAlrBUSJPvPNosCaDVkScZBJRXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA0BD46B27DD04F0AD588DBCE551EAD4D35C7702F(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19((RuntimeObject*)NULL);
			int32_t L_27 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			V_3 = L_27;
			int32_t L_28 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_010b:
		{
			int32_t L_29 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			RuntimeObject* L_30 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_17();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_30);
			if ((((int32_t)L_29) < ((int32_t)L_31)))
			{
				goto IL_0067;
			}
		}

IL_0121:
		{
			V_0 = (bool)0;
			goto IL_012c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0125;
	}

FAULT_0125:
	{ // begin fault (depth: 1)
		TDAlrBUSJPvPNosCaDVkScZBJRXC_System_IDisposable_Dispose_m5A8A66C06E9BFA2AB4194C30FAA58BAD0D033A12(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(293)
	} // end fault
	IL2CPP_CLEANUP(293)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012c:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA0BD46B27DD04F0AD588DBCE551EAD4D35C7702F (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_mECEF639F27F08321851DE37786500209DF7335A0 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_IEnumerator_Reset_m97F753F7BE2A06E9FF6CDAFE28E8EBB934B9CA1A (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_IEnumerator_Reset_m97F753F7BE2A06E9FF6CDAFE28E8EBB934B9CA1A_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_IEnumerator_get_Current_m0E7A693757AEE56E734A80F59F566AE8EFA34383 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m03F5E5F49BE76097CF8EA9FE992D68F118912903 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_4 = (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 *)il2cpp_codegen_object_new(TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033_il2cpp_TypeInfo_var);
		TDAlrBUSJPvPNosCaDVkScZBJRXC__ctor_m280E0D64AD0C6043DC6128B54DF73F0CCA48E283(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_5 = V_0;
		int32_t L_6 = __this->get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4();
		NullCheck(L_5);
		L_5->set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(L_6);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_7 = V_0;
		int32_t L_8 = __this->get_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10();
		NullCheck(L_7);
		L_7->set_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9(L_8);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_9 = V_0;
		JoystickMap_t735DED64944DDA3EAB7DCC079C731DFA1472E951 * L_10 = __this->get_FUzhWsmbUqzGnKLlnGCfVluuTcJU_12();
		NullCheck(L_9);
		L_9->set_QNctLPxloztIePsRkfyJcgjGIKffA_11(L_10);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_11 = V_0;
		ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_12 = __this->get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6();
		NullCheck(L_11);
		L_11->set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(L_12);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_13 = V_0;
		bool L_14 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_14();
		NullCheck(L_13);
		L_13->set_HIuFjgoQMMeZHtUafJbERKutTjQt_13(L_14);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_15 = V_0;
		bool L_16 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16();
		NullCheck(L_15);
		L_15->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15(L_16);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_17 = V_0;
		bool L_18 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8();
		NullCheck(L_17);
		L_17->set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(L_18);
		TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * L_19 = V_0;
		return L_19;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TDAlrBUSJPvPNosCaDVkScZBJRXC::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_IEnumerable_GetEnumerator_m0938E9499C6892FB48543B934258A3BF3E0CC4D5 (TDAlrBUSJPvPNosCaDVkScZBJRXC_t0B30A1119CE4DCD0142087646102E43240647033 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = TDAlrBUSJPvPNosCaDVkScZBJRXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m03F5E5F49BE76097CF8EA9FE992D68F118912903(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb__ctor_mE95E8F65703CD5257E73C7CAF47EFAC43771EC58 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_IDisposable_Dispose_mA9064CFD73017CBBA7450DECAA9A27528257C0C0 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA141D2CFA440F11CAFACEF56F309636664342708(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WNGBiFaXYHJWEqVXHglvFOFXoBWEb_MoveNext_mFB4B44C63422A759122B2D2591FEF0AA6AD55750 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * G_B8_0 = NULL;
	WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00da;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_012d;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			int32_t L_3 = __this->get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3();
			if ((((int32_t)L_3) < ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_4 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			if (L_4)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			V_0 = (bool)0;
			goto IL_012d;
		}

IL_0037:
		{
			bool L_5 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_7();
			G_B7_0 = __this;
			if (L_5)
			{
				G_B8_0 = __this;
				goto IL_004c;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_6 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_6, /*hidden argument*/NULL);
			G_B9_0 = L_7;
			G_B9_1 = G_B7_0;
			goto IL_0056;
		}

IL_004c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B8_0;
		}

IL_0056:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_17(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(0);
			goto IL_010c;
		}

IL_0067:
		{
			RuntimeObject* L_10 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_17();
			int32_t L_11 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			NullCheck(L_10);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_12;
			L_12 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_10, L_11);
			NullCheck(L_12);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_13 = L_12->get_controllers_7();
			NullCheck(L_13);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_14 = L_13->get_conflictChecking_13();
			int32_t L_15 = __this->get_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9();
			CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * L_16 = __this->get_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11();
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_17 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			bool L_18 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_13();
			bool L_19 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15();
			NullCheck(L_14);
			RuntimeObject* L_20;
			L_20 = ConflictCheckingHelper_ElementAssignmentConflicts_m1776B9F7298D05AE499E9C7A7C11C71F4ED62E80(L_14, ((int32_t)20), L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_20);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19(L_21);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00e2;
		}

IL_00bc:
		{
			RuntimeObject* L_22 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
			NullCheck(L_22);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23;
			L_23 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_22);
			V_2 = L_23;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_24 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_24);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_012d;
		}

IL_00da:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00e2:
		{
			RuntimeObject* L_25 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00bc;
			}
		}

IL_00ef:
		{
			WNGBiFaXYHJWEqVXHglvFOFXoBWEb_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA141D2CFA440F11CAFACEF56F309636664342708(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_19((RuntimeObject*)NULL);
			int32_t L_27 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			V_3 = L_27;
			int32_t L_28 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_18(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_010c:
		{
			int32_t L_29 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_18();
			RuntimeObject* L_30 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_17();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_30);
			if ((((int32_t)L_29) < ((int32_t)L_31)))
			{
				goto IL_0067;
			}
		}

IL_0122:
		{
			V_0 = (bool)0;
			goto IL_012d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0126;
	}

FAULT_0126:
	{ // begin fault (depth: 1)
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_IDisposable_Dispose_mA9064CFD73017CBBA7450DECAA9A27528257C0C0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(294)
	} // end fault
	IL2CPP_CLEANUP(294)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012d:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA141D2CFA440F11CAFACEF56F309636664342708 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_19();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_mD72974DD90DDD6E8A4BDB61BD8D06EFDEEE87488 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_IEnumerator_Reset_mB759896C8975D53A05DF55D5FC7E5CDEEE1A0EB8 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_IEnumerator_Reset_mB759896C8975D53A05DF55D5FC7E5CDEEE1A0EB8_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_IEnumerator_get_Current_m1D67A7BE00BF9EC11E75520D08AD0BDA653630A0 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m20168522ED100285EFFFDC2D149490B4100B4965 (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_4 = (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 *)il2cpp_codegen_object_new(WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163_il2cpp_TypeInfo_var);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb__ctor_mE95E8F65703CD5257E73C7CAF47EFAC43771EC58(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_5 = V_0;
		int32_t L_6 = __this->get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4();
		NullCheck(L_5);
		L_5->set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(L_6);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_7 = V_0;
		int32_t L_8 = __this->get_wYvEyNiUnzAaMlalJwSaPpoqwWXHA_10();
		NullCheck(L_7);
		L_7->set_dxNWoKAWRnEjMzagpBqSNtmzbbJFA_9(L_8);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_9 = V_0;
		CustomControllerMap_tAF0069DE937FB1F2157ADAD91CD016C110015CE9 * L_10 = __this->get_fsLFWnOwyMFecKtbquAxUpiyvKDPA_12();
		NullCheck(L_9);
		L_9->set_OZiEbTfyFdeNlbEgiDNQmLdZJIxpA_11(L_10);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_11 = V_0;
		ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_12 = __this->get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6();
		NullCheck(L_11);
		L_11->set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(L_12);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_13 = V_0;
		bool L_14 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_14();
		NullCheck(L_13);
		L_13->set_HIuFjgoQMMeZHtUafJbERKutTjQt_13(L_14);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_15 = V_0;
		bool L_16 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_16();
		NullCheck(L_15);
		L_15->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_15(L_16);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_17 = V_0;
		bool L_18 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8();
		NullCheck(L_17);
		L_17->set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(L_18);
		WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * L_19 = V_0;
		return L_19;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/WNGBiFaXYHJWEqVXHglvFOFXoBWEb::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_IEnumerable_GetEnumerator_mF4A74BC8212FF36D691F215096986A448C28C2DA (WNGBiFaXYHJWEqVXHglvFOFXoBWEb_t1A8882BBE690ABF9198885D687B33E9A5CEC1163 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = WNGBiFaXYHJWEqVXHglvFOFXoBWEb_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m20168522ED100285EFFFDC2D149490B4100B4965(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv__ctor_mFAA9076DEE7D99E958723206DCF99440EEA711E6 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv_System_IDisposable_Dispose_m9ED843FBF576F98A0ED952E0A7A738EF7BD612BC (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		mxceWoHUIqeUxieeTTfBQoojYKHv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m2FFC5D2FC03C6EF15552811B22913220E8B56071(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool mxceWoHUIqeUxieeTTfBQoojYKHv_MoveNext_m50F6AA03ACD165E4384202E36688A0E4AF453F16 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * G_B8_0 = NULL;
	mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00d7;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_3 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_4;
			L_4 = ElementAssignmentConflictCheck_get_playerId_m8A2EFE460F804476B0E84548E4AF666CCABF3E9C_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) < ((int32_t)0)))
			{
				goto IL_003b;
			}
		}

IL_002d:
		{
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_5 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_6;
			L_6 = ElementAssignmentConflictCheck_get_elementAssignmentType_m570A4A3856092ED3F37797CC6A8D11693608FF72_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_6) == ((uint32_t)3))))
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0042:
		{
			bool L_7 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_5();
			G_B7_0 = __this;
			if (L_7)
			{
				G_B8_0 = __this;
				goto IL_0057;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B7_0;
			goto IL_0061;
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_10 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_10, /*hidden argument*/NULL);
			G_B9_0 = L_11;
			G_B9_1 = G_B8_0;
		}

IL_0061:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(0);
			goto IL_0109;
		}

IL_0072:
		{
			RuntimeObject* L_12 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			int32_t L_13 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			NullCheck(L_12);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_14;
			L_14 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_12, L_13);
			NullCheck(L_14);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_15 = L_14->get_controllers_7();
			NullCheck(L_15);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_16 = L_15->get_conflictChecking_13();
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_17 = __this->get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			bool L_18 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_7();
			bool L_19 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9();
			NullCheck(L_16);
			RuntimeObject* L_20;
			L_20 = ConflictCheckingHelper_ElementAssignmentConflicts_m8829B8F67AA81802F208311694324A0F12B5640C(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_20);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(L_21);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00df;
		}

IL_00b9:
		{
			RuntimeObject* L_22 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_22);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23;
			L_23 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_22);
			V_2 = L_23;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_24 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_24);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_012a;
		}

IL_00d7:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00df:
		{
			RuntimeObject* L_25 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00b9;
			}
		}

IL_00ec:
		{
			mxceWoHUIqeUxieeTTfBQoojYKHv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m2FFC5D2FC03C6EF15552811B22913220E8B56071(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13((RuntimeObject*)NULL);
			int32_t L_27 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			V_3 = L_27;
			int32_t L_28 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_0109:
		{
			int32_t L_29 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			RuntimeObject* L_30 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_30);
			if ((((int32_t)L_29) < ((int32_t)L_31)))
			{
				goto IL_0072;
			}
		}

IL_011f:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0123;
	}

FAULT_0123:
	{ // begin fault (depth: 1)
		mxceWoHUIqeUxieeTTfBQoojYKHv_System_IDisposable_Dispose_m9ED843FBF576F98A0ED952E0A7A738EF7BD612BC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(291)
	} // end fault
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012a:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m2FFC5D2FC03C6EF15552811B22913220E8B56071 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_m82FF005BB5CB8A497658FE51DF96000F860B0487 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_IEnumerator_Reset_m3DAD000CD0566A235099E0DE4338A2158DE24971 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_IEnumerator_Reset_m3DAD000CD0566A235099E0DE4338A2158DE24971_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_IEnumerator_get_Current_m4A7B7D96963168817692F1AED06C66B3E1CA4787 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_mDCFA75B2404BE5AB25D9D7DDDEBA3408255D0941 (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_4 = (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E *)il2cpp_codegen_object_new(mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E_il2cpp_TypeInfo_var);
		mxceWoHUIqeUxieeTTfBQoojYKHv__ctor_mFAA9076DEE7D99E958723206DCF99440EEA711E6(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_5 = V_0;
		ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_6 = __this->get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4();
		NullCheck(L_5);
		L_5->set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(L_6);
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_7 = V_0;
		bool L_8 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8();
		NullCheck(L_7);
		L_7->set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(L_8);
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_9 = V_0;
		bool L_10 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10();
		NullCheck(L_9);
		L_9->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(L_10);
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_11 = V_0;
		bool L_12 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6();
		NullCheck(L_11);
		L_11->set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(L_12);
		mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * L_13 = V_0;
		return L_13;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/mxceWoHUIqeUxieeTTfBQoojYKHv::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_IEnumerable_GetEnumerator_m68F25FBD3AA24DCCEC3FC657155B69B0693871CD (mxceWoHUIqeUxieeTTfBQoojYKHv_tDB79DCF829F7100BFE49A53E3B36C5EAD6BEC09E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = mxceWoHUIqeUxieeTTfBQoojYKHv_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_mDCFA75B2404BE5AB25D9D7DDDEBA3408255D0941(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA__ctor_mAD45DA0FBA4B1178260D4173B397EE09B83B56CE (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA_System_IDisposable_Dispose_m27DE4774DE8D54B2EC26345EE30CAF7F5AA64EE7 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		nVoULXghumEcyfAHUNBSCfsXKdArA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1834D134E087A3E047D9DB8368559BD0BA03BA88(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool nVoULXghumEcyfAHUNBSCfsXKdArA_MoveNext_m0410C24BD523CF28B0A7D1CB1673EC351427B792 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * G_B8_0 = NULL;
	nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00d4;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_0127;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			int32_t L_3 = __this->get_DljjufeDxHKtQhGDvoMcJRNEJSNE_3();
			if ((((int32_t)L_3) < ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_4 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			if (L_4)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			V_0 = (bool)0;
			goto IL_0127;
		}

IL_0037:
		{
			bool L_5 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_7();
			G_B7_0 = __this;
			if (L_5)
			{
				G_B8_0 = __this;
				goto IL_004c;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_6 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_6, /*hidden argument*/NULL);
			G_B9_0 = L_7;
			G_B9_1 = G_B7_0;
			goto IL_0056;
		}

IL_004c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B8_0;
		}

IL_0056:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_15(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_16(0);
			goto IL_0106;
		}

IL_0067:
		{
			RuntimeObject* L_10 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_15();
			int32_t L_11 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_16();
			NullCheck(L_10);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_12;
			L_12 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_10, L_11);
			NullCheck(L_12);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_13 = L_12->get_controllers_7();
			NullCheck(L_13);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_14 = L_13->get_conflictChecking_13();
			KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * L_15 = __this->get_kGvpgbedpfSteCoDmBIhADOcBQyHA_9();
			ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_16 = __this->get_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5();
			bool L_17 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_11();
			bool L_18 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13();
			NullCheck(L_14);
			RuntimeObject* L_19;
			L_19 = ConflictCheckingHelper_ElementAssignmentConflicts_m1776B9F7298D05AE499E9C7A7C11C71F4ED62E80(L_14, 0, 0, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			RuntimeObject* L_20;
			L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_19);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_17(L_20);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00dc;
		}

IL_00b6:
		{
			RuntimeObject* L_21 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_17();
			NullCheck(L_21);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_22;
			L_22 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_21);
			V_2 = L_22;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_23);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_0127;
		}

IL_00d4:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00dc:
		{
			RuntimeObject* L_24 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_17();
			NullCheck(L_24);
			bool L_25;
			L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_00b6;
			}
		}

IL_00e9:
		{
			nVoULXghumEcyfAHUNBSCfsXKdArA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1834D134E087A3E047D9DB8368559BD0BA03BA88(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_17((RuntimeObject*)NULL);
			int32_t L_26 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_16();
			V_3 = L_26;
			int32_t L_27 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_16(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		}

IL_0106:
		{
			int32_t L_28 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_16();
			RuntimeObject* L_29 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_15();
			NullCheck(L_29);
			int32_t L_30;
			L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_29);
			if ((((int32_t)L_28) < ((int32_t)L_30)))
			{
				goto IL_0067;
			}
		}

IL_011c:
		{
			V_0 = (bool)0;
			goto IL_0127;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0120;
	}

FAULT_0120:
	{ // begin fault (depth: 1)
		nVoULXghumEcyfAHUNBSCfsXKdArA_System_IDisposable_Dispose_m27DE4774DE8D54B2EC26345EE30CAF7F5AA64EE7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(288)
	} // end fault
	IL2CPP_CLEANUP(288)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0127:
	{
		bool L_31 = V_0;
		return L_31;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1834D134E087A3E047D9DB8368559BD0BA03BA88 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_17();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_17();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_m13E6A299D14C13FD10C8A74EB5FDF3512B8AF72C (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_IEnumerator_Reset_mA18B78EFB449A9A62CB0BEF4FBB486F730F9E000 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_IEnumerator_Reset_mA18B78EFB449A9A62CB0BEF4FBB486F730F9E000_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_IEnumerator_get_Current_m31885DC69D71C27BA87236586688C9FABF70DB94 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m391533944CB3F2FD27B9049A15ABAF712DD9928D (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_4 = (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 *)il2cpp_codegen_object_new(nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89_il2cpp_TypeInfo_var);
		nVoULXghumEcyfAHUNBSCfsXKdArA__ctor_mAD45DA0FBA4B1178260D4173B397EE09B83B56CE(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_5 = V_0;
		int32_t L_6 = __this->get_LPJODyrZpNxPzXAMrfCKobQaJWhD_4();
		NullCheck(L_5);
		L_5->set_DljjufeDxHKtQhGDvoMcJRNEJSNE_3(L_6);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_7 = V_0;
		KeyboardMap_tE0F1AE779389279C75806E4E44050C18955E5C95 * L_8 = __this->get_pRKRGLTTzhAvrzgKqdgcDhrkAYOX_10();
		NullCheck(L_7);
		L_7->set_kGvpgbedpfSteCoDmBIhADOcBQyHA_9(L_8);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_9 = V_0;
		ActionElementMap_t028B1851A43E163C6CD5D57B37A6449791F1C537 * L_10 = __this->get_ElKoGEhTJYZThMFOOdRumLXCMPDE_6();
		NullCheck(L_9);
		L_9->set_IZGLeBjXaoohNXDnyqGgBnrFgcfw_5(L_10);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_11 = V_0;
		bool L_12 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_12();
		NullCheck(L_11);
		L_11->set_HIuFjgoQMMeZHtUafJbERKutTjQt_11(L_12);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_13 = V_0;
		bool L_14 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_14();
		NullCheck(L_13);
		L_13->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_13(L_14);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_15 = V_0;
		bool L_16 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_8();
		NullCheck(L_15);
		L_15->set_LsArpUAaycAWpQMssIwwpGxYhCYd_7(L_16);
		nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * L_17 = V_0;
		return L_17;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/nVoULXghumEcyfAHUNBSCfsXKdArA::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_IEnumerable_GetEnumerator_mDE146B8297F1EDC420E7A8DDBEE0D8317655D128 (nVoULXghumEcyfAHUNBSCfsXKdArA_t56A4A9CFADF8ECD5C8AE78C8F66F5AF0DCCE5E89 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = nVoULXghumEcyfAHUNBSCfsXKdArA_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m391533944CB3F2FD27B9049A15ABAF712DD9928D(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB__ctor_m75F3431DD098A2D5BEDF7006BD4A3CFE3628135C (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB_System_IDisposable_Dispose_m1A3E19A506CCF06B3197FF8DFD0D1B49952DE88B (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		vasCQHBiPilUGNJZhGPwjCjftBeIB_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC8E03723F4B95DE380E64FF3F57208CCDDBD327D(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool vasCQHBiPilUGNJZhGPwjCjftBeIB_MoveNext_m70202C73BAC868B2301E1E3C33EBC2E4684686CC (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * G_B8_0 = NULL;
	vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00d7;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_3 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_4;
			L_4 = ElementAssignmentConflictCheck_get_playerId_m8A2EFE460F804476B0E84548E4AF666CCABF3E9C_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) < ((int32_t)0)))
			{
				goto IL_003b;
			}
		}

IL_002d:
		{
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_5 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_6;
			L_6 = ElementAssignmentConflictCheck_get_elementAssignmentType_m570A4A3856092ED3F37797CC6A8D11693608FF72_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_6) == ((uint32_t)3))))
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0042:
		{
			bool L_7 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_5();
			G_B7_0 = __this;
			if (L_7)
			{
				G_B8_0 = __this;
				goto IL_0057;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B7_0;
			goto IL_0061;
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_10 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_10, /*hidden argument*/NULL);
			G_B9_0 = L_11;
			G_B9_1 = G_B8_0;
		}

IL_0061:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(0);
			goto IL_0109;
		}

IL_0072:
		{
			RuntimeObject* L_12 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			int32_t L_13 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			NullCheck(L_12);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_14;
			L_14 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_12, L_13);
			NullCheck(L_14);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_15 = L_14->get_controllers_7();
			NullCheck(L_15);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_16 = L_15->get_conflictChecking_13();
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_17 = __this->get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			bool L_18 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_7();
			bool L_19 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9();
			NullCheck(L_16);
			RuntimeObject* L_20;
			L_20 = ConflictCheckingHelper_ElementAssignmentConflicts_m8829B8F67AA81802F208311694324A0F12B5640C(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_20);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(L_21);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00df;
		}

IL_00b9:
		{
			RuntimeObject* L_22 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_22);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23;
			L_23 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_22);
			V_2 = L_23;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_24 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_24);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_012a;
		}

IL_00d7:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00df:
		{
			RuntimeObject* L_25 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00b9;
			}
		}

IL_00ec:
		{
			vasCQHBiPilUGNJZhGPwjCjftBeIB_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC8E03723F4B95DE380E64FF3F57208CCDDBD327D(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13((RuntimeObject*)NULL);
			int32_t L_27 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			V_3 = L_27;
			int32_t L_28 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_0109:
		{
			int32_t L_29 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			RuntimeObject* L_30 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_30);
			if ((((int32_t)L_29) < ((int32_t)L_31)))
			{
				goto IL_0072;
			}
		}

IL_011f:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0123;
	}

FAULT_0123:
	{ // begin fault (depth: 1)
		vasCQHBiPilUGNJZhGPwjCjftBeIB_System_IDisposable_Dispose_m1A3E19A506CCF06B3197FF8DFD0D1B49952DE88B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(291)
	} // end fault
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012a:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC8E03723F4B95DE380E64FF3F57208CCDDBD327D (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_m8DE7FD0C145448740801E3D760A9DF414417C650 (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_IEnumerator_Reset_mA2AA917692C2B6BC2694968836C5145C9F857BE1 (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_IEnumerator_Reset_mA2AA917692C2B6BC2694968836C5145C9F857BE1_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_IEnumerator_get_Current_m91B704A7C2A1F180599967726FBFF56FB4AE39AE (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m75156E35196334D02FE61087A493F05AD9A8BB9C (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_4 = (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 *)il2cpp_codegen_object_new(vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997_il2cpp_TypeInfo_var);
		vasCQHBiPilUGNJZhGPwjCjftBeIB__ctor_m75F3431DD098A2D5BEDF7006BD4A3CFE3628135C(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_5 = V_0;
		ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_6 = __this->get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4();
		NullCheck(L_5);
		L_5->set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(L_6);
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_7 = V_0;
		bool L_8 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8();
		NullCheck(L_7);
		L_7->set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(L_8);
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_9 = V_0;
		bool L_10 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10();
		NullCheck(L_9);
		L_9->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(L_10);
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_11 = V_0;
		bool L_12 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6();
		NullCheck(L_11);
		L_11->set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(L_12);
		vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * L_13 = V_0;
		return L_13;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/vasCQHBiPilUGNJZhGPwjCjftBeIB::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_IEnumerable_GetEnumerator_m533A38863AF76CEE37686436543009EB5469A58C (vasCQHBiPilUGNJZhGPwjCjftBeIB_tFD9495F7A881F73E5F7F1D12136EF2E636216997 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = vasCQHBiPilUGNJZhGPwjCjftBeIB_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m75156E35196334D02FE61087A493F05AD9A8BB9C(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC__ctor_mA410375FD033EAB13C53A84CC0D43D364269616B (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_IDisposable_Dispose_mE8672A958DB2ED89EBA8FA899FF7D768D5A13489 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC358617509336AE9DB2D33E6E9DE0A27B8420B99(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ytjiGsKxOQtVUZYCNKiVfAhUxIXC_MoveNext_m4E20E0FE0C82E4A1764035DA084170F930F22A3D (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * G_B8_0 = NULL;
	ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * G_B9_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00d7;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0018:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_3 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_4;
			L_4 = ElementAssignmentConflictCheck_get_playerId_m8A2EFE460F804476B0E84548E4AF666CCABF3E9C_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_3, /*hidden argument*/NULL);
			if ((((int32_t)L_4) < ((int32_t)0)))
			{
				goto IL_003b;
			}
		}

IL_002d:
		{
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * L_5 = __this->get_address_of_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			int32_t L_6;
			L_6 = ElementAssignmentConflictCheck_get_elementAssignmentType_m570A4A3856092ED3F37797CC6A8D11693608FF72_inline((ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 *)L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_6) == ((uint32_t)3))))
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}

IL_0042:
		{
			bool L_7 = __this->get_LsArpUAaycAWpQMssIwwpGxYhCYd_5();
			G_B7_0 = __this;
			if (L_7)
			{
				G_B8_0 = __this;
				goto IL_0057;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_8 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline(L_8, /*hidden argument*/NULL);
			G_B9_0 = L_9;
			G_B9_1 = G_B7_0;
			goto IL_0061;
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * L_10 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_hqGXmYxZUrSrCxDobJTGEPCWvHAsA_11();
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline(L_10, /*hidden argument*/NULL);
			G_B9_0 = L_11;
			G_B9_1 = G_B8_0;
		}

IL_0061:
		{
			NullCheck(G_B9_1);
			G_B9_1->set_BKKFaUdfuegBblGWCXFcTsceicYAb_11(G_B9_0);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(0);
			goto IL_0109;
		}

IL_0072:
		{
			RuntimeObject* L_12 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			int32_t L_13 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			NullCheck(L_12);
			Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E * L_14;
			L_14 = InterfaceFuncInvoker1< Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Player>::get_Item(System.Int32) */, IList_1_t1C54FF9E6FA9AB60BE7A817F05B4475731C0CB0C_il2cpp_TypeInfo_var, L_12, L_13);
			NullCheck(L_14);
			ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 * L_15 = L_14->get_controllers_7();
			NullCheck(L_15);
			ConflictCheckingHelper_tD758A9D2EEEC4164E4EF613968F0FF9F8EE82610 * L_16 = L_15->get_conflictChecking_13();
			ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_17 = __this->get_HHyftJlGnirHuGQIQnIQkaXvgYegA_3();
			bool L_18 = __this->get_HIuFjgoQMMeZHtUafJbERKutTjQt_7();
			bool L_19 = __this->get_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9();
			NullCheck(L_16);
			RuntimeObject* L_20;
			L_20 = ConflictCheckingHelper_ElementAssignmentConflicts_m8829B8F67AA81802F208311694324A0F12B5640C(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>::GetEnumerator() */, IEnumerable_1_t1EB398D26D5923539248455273B995E73D0BCF97_il2cpp_TypeInfo_var, L_20);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13(L_21);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_00df;
		}

IL_00b9:
		{
			RuntimeObject* L_22 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_22);
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_23;
			L_23 = InterfaceFuncInvoker0< ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>::get_Current() */, IEnumerator_1_t31261E2B0D6C0F0682B9FD03E25B05071A09716B_il2cpp_TypeInfo_var, L_22);
			V_2 = L_23;
			ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_24 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_24);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_012a;
		}

IL_00d7:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_00df:
		{
			RuntimeObject* L_25 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00b9;
			}
		}

IL_00ec:
		{
			ytjiGsKxOQtVUZYCNKiVfAhUxIXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC358617509336AE9DB2D33E6E9DE0A27B8420B99(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_13((RuntimeObject*)NULL);
			int32_t L_27 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			V_3 = L_27;
			int32_t L_28 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_12(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_0109:
		{
			int32_t L_29 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_12();
			RuntimeObject* L_30 = __this->get_BKKFaUdfuegBblGWCXFcTsceicYAb_11();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Player>::get_Count() */, ICollection_1_t6392140DD8AB42AA8BC923EB078C9269B22F1558_il2cpp_TypeInfo_var, L_30);
			if ((((int32_t)L_29) < ((int32_t)L_31)))
			{
				goto IL_0072;
			}
		}

IL_011f:
		{
			V_0 = (bool)0;
			goto IL_012a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0123;
	}

FAULT_0123:
	{ // begin fault (depth: 1)
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_IDisposable_Dispose_mE8672A958DB2ED89EBA8FA899FF7D768D5A13489(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(291)
	} // end fault
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012a:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mC358617509336AE9DB2D33E6E9DE0A27B8420B99 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_13();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ElementAssignmentConflictInfo Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_Generic_IEnumeratorU3CRewired_ElementAssignmentConflictInfoU3E_get_Current_m5745152FE4544DAF2C73DB404B9E5351030912C2 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_IEnumerator_Reset_m4188CDD06F88BE62D4E7F15500F59BCEFFF3C21F (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_IEnumerator_Reset_m4188CDD06F88BE62D4E7F15500F59BCEFFF3C21F_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_IEnumerator_get_Current_m5B719CCD4878A8D2FBBFBD8B637999BA2FC547E8 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721  L_1 = L_0;
		RuntimeObject * L_2 = Box(ElementAssignmentConflictInfo_tFE0E338F3647591E318F5E3A09B6B54E3987B721_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m3A83EBC0C0392D83E503A36C33E372E1F837D9F4 (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_4 = (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 *)il2cpp_codegen_object_new(ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8_il2cpp_TypeInfo_var);
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC__ctor_mA410375FD033EAB13C53A84CC0D43D364269616B(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_5 = V_0;
		ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123  L_6 = __this->get_MelcAnrraPFJzeIaADSAOKRmqdwDb_4();
		NullCheck(L_5);
		L_5->set_HHyftJlGnirHuGQIQnIQkaXvgYegA_3(L_6);
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_7 = V_0;
		bool L_8 = __this->get_MlWZQPQtLyJnETcXcYBEkbNZbonN_8();
		NullCheck(L_7);
		L_7->set_HIuFjgoQMMeZHtUafJbERKutTjQt_7(L_8);
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_9 = V_0;
		bool L_10 = __this->get_AIUEvmkpzzZEGHiPnuHpyDYEjNVE_10();
		NullCheck(L_9);
		L_9->set_fxcwWCJuWyMdSnVzKKdavSrfSkCc_9(L_10);
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_11 = V_0;
		bool L_12 = __this->get_EqRTwgfjsYypsrTblHXtvnwSZMnf_6();
		NullCheck(L_11);
		L_11->set_LsArpUAaycAWpQMssIwwpGxYhCYd_5(L_12);
		ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * L_13 = V_0;
		return L_13;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/ytjiGsKxOQtVUZYCNKiVfAhUxIXC::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_IEnumerable_GetEnumerator_mEEACA167AF152CC6EA08880D32DCA178625F530A (ytjiGsKxOQtVUZYCNKiVfAhUxIXC_tE9D9AF802BC5B0B44308F59992BDF6E3D4A0A6F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = ytjiGsKxOQtVUZYCNKiVfAhUxIXC_System_Collections_Generic_IEnumerableU3CRewired_ElementAssignmentConflictInfoU3E_GetEnumerator_m3A83EBC0C0392D83E503A36C33E372E1F837D9F4(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ__ctor_m83886C24ADC7C726233C8827494320597ED75EF6 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_IDisposable_Dispose_mCFCF97247544CA27EA7B204EAA9EDFA3BEB278FE (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		CpraxQOhkTAwVPrcBInKZBtqfgmZ_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m64EFA81EB66C9D4DB375B5FFB88608AC3B187A05(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CpraxQOhkTAwVPrcBInKZBtqfgmZ_MoveNext_m5B01871935F4DD9DE5F43ED211385D37D97F97B4 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline(L_3, /*hidden argument*/NULL);
			__this->set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 * L_7;
			L_7 = InterfaceFuncInvoker1< CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.CustomController>::get_Item(System.Int32) */, IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllElementsDown() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			CpraxQOhkTAwVPrcBInKZBtqfgmZ_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m64EFA81EB66C9D4DB375B5FFB88608AC3B187A05(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.CustomController>::get_Count() */, ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_IDisposable_Dispose_mCFCF97247544CA27EA7B204EAA9EDFA3BEB278FE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m64EFA81EB66C9D4DB375B5FFB88608AC3B187A05 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mA4A3E4B9A18A53888E532BF38D5270490F5E0776 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_IEnumerator_Reset_mED6971B80F6EC1BBC4719F2DC3786F5D42D8B4C7 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_IEnumerator_Reset_mED6971B80F6EC1BBC4719F2DC3786F5D42D8B4C7_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_IEnumerator_get_Current_m1D467849E96C3B7F3BED637FD832990F227D8A80 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m1E08005992C6540401E72C339943F443690B5941 (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * L_4 = (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD *)il2cpp_codegen_object_new(CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD_il2cpp_TypeInfo_var);
		CpraxQOhkTAwVPrcBInKZBtqfgmZ__ctor_m83886C24ADC7C726233C8827494320597ED75EF6(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/CpraxQOhkTAwVPrcBInKZBtqfgmZ::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_IEnumerable_GetEnumerator_m5548CA197D1178A91A1572BA266338865496A88A (CpraxQOhkTAwVPrcBInKZBtqfgmZ_t02C739653DD49B6CF4CBFE20B685BAA23FE313FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = CpraxQOhkTAwVPrcBInKZBtqfgmZ_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m1E08005992C6540401E72C339943F443690B5941(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg__ctor_mCEB45F32E9A9848ED85B7B8275BB99694C61C646 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_IDisposable_Dispose_mE7AE8E0624E107136C6DCAC9752841FED4DEFBF2 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-6))))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0065;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_005b;
			}
		}
	}
	{
		return;
	}

IL_003d:
	{
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mB99A63E48AA2B780343A52DC43C98064173BE775(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0047:
	{
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_tMeeFNDmLhzrFkrObkICOsBGeJux_mD37BA033B0F3A858A21F9ACDF05A7539906B41DA(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_bKYtFpdOyyopwWDgXevZsgrxWQOs_m82873EC71C94AAB049ADFC35749F31007D3EC93B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_005b:
	{
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mCC7AEDDFEF024666BEF2367CFFCA227A535FEF59(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DHJqrAIJpUnVHhVnHAUqkBCLrIqg_MoveNext_m47E93C3823432319762B05D716CBC54BD447E2AA (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * V_2 = NULL;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_1 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002f;
				}
				case 1:
				{
					goto IL_0080;
				}
				case 2:
				{
					goto IL_00e0;
				}
				case 3:
				{
					goto IL_0140;
				}
				case 4:
				{
					goto IL_019d;
				}
			}
		}

IL_0028:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_002f:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0(/*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_0044:
		{
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = PollingHelper_ZqxTJDIDYhzvQgREIWmdhRCmoMej_m397E6E048B9C8150025A70A500118A063D729DE1(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_5);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_6);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0088;
		}

IL_005f:
		{
			RuntimeObject* L_7 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_7);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_8;
			L_8 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_9 = V_3;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0080:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0088:
		{
			RuntimeObject* L_10 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_005f;
			}
		}

IL_0095:
		{
			DHJqrAIJpUnVHhVnHAUqkBCLrIqg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mB99A63E48AA2B780343A52DC43C98064173BE775(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_12 = V_2;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = PollingHelper_nTOaOzAizIVxHePeOnxkRHlAxAWS_m3263DAC768D8264368D71133E340B40FEB2919C8(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_13);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_14);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
			goto IL_00e8;
		}

IL_00bd:
		{
			RuntimeObject* L_15 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_15);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_16;
			L_16 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_17 = V_4;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_17);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(2);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_00e0:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
		}

IL_00e8:
		{
			RuntimeObject* L_18 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_00bd;
			}
		}

IL_00f5:
		{
			DHJqrAIJpUnVHhVnHAUqkBCLrIqg_tMeeFNDmLhzrFkrObkICOsBGeJux_mD37BA033B0F3A858A21F9ACDF05A7539906B41DA(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_20 = V_2;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = PollingHelper_vjoctRbePlNRDLebnEgMQAlXsvCEA_mFCBD4E338305A58C2A0CDC45A2316B035DD22673(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_21);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_22);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
			goto IL_0148;
		}

IL_011d:
		{
			RuntimeObject* L_23 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_23);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_24;
			L_24 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_23);
			V_5 = L_24;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_25 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_25);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(3);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0140:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
		}

IL_0148:
		{
			RuntimeObject* L_26 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_26);
			bool L_27;
			L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_011d;
			}
		}

IL_0155:
		{
			DHJqrAIJpUnVHhVnHAUqkBCLrIqg_bKYtFpdOyyopwWDgXevZsgrxWQOs_m82873EC71C94AAB049ADFC35749F31007D3EC93B(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_28 = V_2;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = PollingHelper_DvrOAgWzTHcCWGLyldMWiMsAROaM_mBBBE19B6D68B706160999E1EA736324322B740C1(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_29);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_30);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
			goto IL_01a5;
		}

IL_017d:
		{
			RuntimeObject* L_31 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_31);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_32;
			L_32 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_31);
			V_6 = L_32;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_33 = V_6;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_33);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(4);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_019d:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
		}

IL_01a5:
		{
			RuntimeObject* L_34 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_017d;
			}
		}

IL_01b2:
		{
			DHJqrAIJpUnVHhVnHAUqkBCLrIqg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mCC7AEDDFEF024666BEF2367CFFCA227A535FEF59(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_01ca;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01c3;
	}

FAULT_01c3:
	{ // begin fault (depth: 1)
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_IDisposable_Dispose_mE7AE8E0624E107136C6DCAC9752841FED4DEFBF2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(451)
	} // end fault
	IL2CPP_CLEANUP(451)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ca:
	{
		bool L_36 = V_0;
		return L_36;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mB99A63E48AA2B780343A52DC43C98064173BE775 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_tMeeFNDmLhzrFkrObkICOsBGeJux_mD37BA033B0F3A858A21F9ACDF05A7539906B41DA (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_bKYtFpdOyyopwWDgXevZsgrxWQOs_m82873EC71C94AAB049ADFC35749F31007D3EC93B (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mCC7AEDDFEF024666BEF2367CFFCA227A535FEF59 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mC8408FE4B6371CEE930A6289154E4A20C0D8F3BE (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_IEnumerator_Reset_m5725B69358C3A951232A9085264E5786D4EC46E8 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_IEnumerator_Reset_m5725B69358C3A951232A9085264E5786D4EC46E8_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_IEnumerator_get_Current_m1D2FA51814C57DFB8E0C4DDE48631B97131B2549 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m384B20BFD57701483D3282A28AE4A6C4DA775812 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * L_4 = (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 *)il2cpp_codegen_object_new(DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1_il2cpp_TypeInfo_var);
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg__ctor_mCEB45F32E9A9848ED85B7B8275BB99694C61C646(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * L_5 = V_0;
		PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_6 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_3(L_6);
	}

IL_003a:
	{
		DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/DHJqrAIJpUnVHhVnHAUqkBCLrIqg::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_IEnumerable_GetEnumerator_mA7F2BB7FFE5A0EF18ACC1FD2C9E502EBB836BFD0 (DHJqrAIJpUnVHhVnHAUqkBCLrIqg_t2FAE0CA4E7AF1747CF3222B323481AADFA646ED1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = DHJqrAIJpUnVHhVnHAUqkBCLrIqg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m384B20BFD57701483D3282A28AE4A6C4DA775812(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl__ctor_m699D8248B1A3B2BF35CA769DA5A3DF0DAF0828B4 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_IDisposable_Dispose_m70A2A65CE3C27F9927CEA129844CAFFB99820F61 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		LMHOYxqZNZkTXmOSyOpwlBDngIkl_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mF253624670AA89BBCC81427D6F769CEE5C5D292A(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LMHOYxqZNZkTXmOSyOpwlBDngIkl_MoveNext_mD13C3043D2E04E1758ABF0FAB8559FE459AEE917 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline(L_3, /*hidden argument*/NULL);
			__this->set_DCHsYsHgaGZanwaPfowyYcSnBov_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 * L_7;
			L_7 = InterfaceFuncInvoker1< Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Joystick>::get_Item(System.Int32) */, IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllButtonsDown() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			LMHOYxqZNZkTXmOSyOpwlBDngIkl_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mF253624670AA89BBCC81427D6F769CEE5C5D292A(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Joystick>::get_Count() */, ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_IDisposable_Dispose_m70A2A65CE3C27F9927CEA129844CAFFB99820F61(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mF253624670AA89BBCC81427D6F769CEE5C5D292A (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mEA0A6EF0184424D4B1CFFA67350A8EF264E79DFA (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_IEnumerator_Reset_m71ADB60C8FAA1C62ABCDFE950B44CED8F267E3FC (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_IEnumerator_Reset_m71ADB60C8FAA1C62ABCDFE950B44CED8F267E3FC_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_IEnumerator_get_Current_m24EF8314C3C9E721E3EE02CC456AA2C264D5DA3A (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mEFF3CBA8D22E02C9FB6435001DBD460F1EA2CF09 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * L_4 = (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 *)il2cpp_codegen_object_new(LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4_il2cpp_TypeInfo_var);
		LMHOYxqZNZkTXmOSyOpwlBDngIkl__ctor_m699D8248B1A3B2BF35CA769DA5A3DF0DAF0828B4(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/LMHOYxqZNZkTXmOSyOpwlBDngIkl::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_IEnumerable_GetEnumerator_mD823345DAF618A448350CBF86D474DB6013FCDC2 (LMHOYxqZNZkTXmOSyOpwlBDngIkl_t4DA044EA289BBD61851C3422437EB8ADC66C52A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = LMHOYxqZNZkTXmOSyOpwlBDngIkl_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mEFF3CBA8D22E02C9FB6435001DBD460F1EA2CF09(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi__ctor_m9A530DDB7749FEC1F71AE493AE0A36CEB05EDC8E (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_IDisposable_Dispose_m367305B3475E8565959D2F98586753FE083B57DE (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		MgVUQNxiuTMlhVigUdHTvZAvSYEi_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m0D63D904EB9DBA2356A794971C20CA24B0C1FE26(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MgVUQNxiuTMlhVigUdHTvZAvSYEi_MoveNext_m9D689810C663FFA47572404100F5189A6A544422 (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline(L_3, /*hidden argument*/NULL);
			__this->set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 * L_7;
			L_7 = InterfaceFuncInvoker1< CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.CustomController>::get_Item(System.Int32) */, IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllButtons() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			MgVUQNxiuTMlhVigUdHTvZAvSYEi_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m0D63D904EB9DBA2356A794971C20CA24B0C1FE26(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.CustomController>::get_Count() */, ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_IDisposable_Dispose_m367305B3475E8565959D2F98586753FE083B57DE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m0D63D904EB9DBA2356A794971C20CA24B0C1FE26 (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m1448907E4F6A704EC00183D69BAEC2659166832D (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_IEnumerator_Reset_m34B1B4E22EEE20E90BA42DE2323D59A41B62940C (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_IEnumerator_Reset_m34B1B4E22EEE20E90BA42DE2323D59A41B62940C_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_IEnumerator_get_Current_m8240B5A7B6C1BCFD587DA585B865FDF36BC14D26 (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m80EBEDC5765610876A5A06EF551EC620029AA75B (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * L_4 = (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F *)il2cpp_codegen_object_new(MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F_il2cpp_TypeInfo_var);
		MgVUQNxiuTMlhVigUdHTvZAvSYEi__ctor_m9A530DDB7749FEC1F71AE493AE0A36CEB05EDC8E(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/MgVUQNxiuTMlhVigUdHTvZAvSYEi::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_IEnumerable_GetEnumerator_m4FF917053C60BDAEFB7E5C4B11A97B190AA44446 (MgVUQNxiuTMlhVigUdHTvZAvSYEi_t5592F6538B96C8179E45B87C7043CDA15CD3D68F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MgVUQNxiuTMlhVigUdHTvZAvSYEi_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m80EBEDC5765610876A5A06EF551EC620029AA75B(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD__ctor_mA0B1C6B49D2AD09D5DDC32D221EF4B748A0B36D8 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD_System_IDisposable_Dispose_mB00769D56CC8CF6E9C4A1FB01F2E6F2CBB73D035 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		MulfOamGrrYNgwuunFFmlDKPfKcD_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEC3308D20B06E62B4C70A8C88D5CBC878531D89A(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MulfOamGrrYNgwuunFFmlDKPfKcD_MoveNext_mDB59EBEA1C978466DB479AE7C9ADE0936C10AA4C (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline(L_3, /*hidden argument*/NULL);
			__this->set_DCHsYsHgaGZanwaPfowyYcSnBov_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 * L_7;
			L_7 = InterfaceFuncInvoker1< Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Joystick>::get_Item(System.Int32) */, IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = ControllerWithAxes_PollForAllAxes_m99FC3798966B3ECCA7CA12CDA004B1C053677034(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			MulfOamGrrYNgwuunFFmlDKPfKcD_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEC3308D20B06E62B4C70A8C88D5CBC878531D89A(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Joystick>::get_Count() */, ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		MulfOamGrrYNgwuunFFmlDKPfKcD_System_IDisposable_Dispose_mB00769D56CC8CF6E9C4A1FB01F2E6F2CBB73D035(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEC3308D20B06E62B4C70A8C88D5CBC878531D89A (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mB512C5C882D0E7CAFB1F40548CD486DE20353165 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_IEnumerator_Reset_mAB92E0BA13F5EE3FFF4BECEAF06400FEBDF8452C (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_IEnumerator_Reset_mAB92E0BA13F5EE3FFF4BECEAF06400FEBDF8452C_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_IEnumerator_get_Current_m38AFE36F00AF286CB3A40209B0607974D2FE97C9 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB3D537BA06623C92A1C17FD62B0C6133EF0B6599 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * L_4 = (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 *)il2cpp_codegen_object_new(MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15_il2cpp_TypeInfo_var);
		MulfOamGrrYNgwuunFFmlDKPfKcD__ctor_mA0B1C6B49D2AD09D5DDC32D221EF4B748A0B36D8(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/MulfOamGrrYNgwuunFFmlDKPfKcD::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_IEnumerable_GetEnumerator_m983C9C59753AAC584F2F9D4640FE2E9E0F706BC1 (MulfOamGrrYNgwuunFFmlDKPfKcD_t0ECB80CF5E9857C3D5E891B51DD6FA269F574A15 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MulfOamGrrYNgwuunFFmlDKPfKcD_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB3D537BA06623C92A1C17FD62B0C6133EF0B6599(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg__ctor_mE86814B2A29581374C45506F045EA8CCD55AD80E (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_System_IDisposable_Dispose_m8F4759A7C23DD6BC62EA7674D9BF622A13F4E9DF (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-6))))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0065;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_005b;
			}
		}
	}
	{
		return;
	}

IL_003d:
	{
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		QAMubuZiiPudSCqhOPyFeyHLNNhg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m675A883300FA4538B9278B4118AD209B59BA0C7E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0047:
	{
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		QAMubuZiiPudSCqhOPyFeyHLNNhg_tMeeFNDmLhzrFkrObkICOsBGeJux_m463B51254FD72BBB210A716018AFE2E693A2DB7B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		QAMubuZiiPudSCqhOPyFeyHLNNhg_bKYtFpdOyyopwWDgXevZsgrxWQOs_mA87D97A4693963CB5CC175917DA726DDE6669F5B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_005b:
	{
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		QAMubuZiiPudSCqhOPyFeyHLNNhg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mEBEB71C18CEC5ABA020CCE3752CEFDF4EC97C106(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QAMubuZiiPudSCqhOPyFeyHLNNhg_MoveNext_mE770797963666E99E74303DE7D4736831C73A05C (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * V_2 = NULL;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_1 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002f;
				}
				case 1:
				{
					goto IL_0080;
				}
				case 2:
				{
					goto IL_00e0;
				}
				case 3:
				{
					goto IL_0140;
				}
				case 4:
				{
					goto IL_019d;
				}
			}
		}

IL_0028:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_002f:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0(/*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_0044:
		{
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = PollingHelper_dYUufOAgiYxVCulHuDweDbmlvBuAA_mCB72D5E19DE827C0328897FEEEF2A8269871FF82(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_5);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_6);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0088;
		}

IL_005f:
		{
			RuntimeObject* L_7 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_7);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_8;
			L_8 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_9 = V_3;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0080:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0088:
		{
			RuntimeObject* L_10 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_005f;
			}
		}

IL_0095:
		{
			QAMubuZiiPudSCqhOPyFeyHLNNhg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m675A883300FA4538B9278B4118AD209B59BA0C7E(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_12 = V_2;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = PollingHelper_HOEJAMRWlNjoQHyywIgOAMoSqKTE_mEADA8CA5EF89AF49C16A2C63E73E32B3687063F0(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_13);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_14);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
			goto IL_00e8;
		}

IL_00bd:
		{
			RuntimeObject* L_15 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_15);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_16;
			L_16 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_17 = V_4;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_17);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(2);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_00e0:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
		}

IL_00e8:
		{
			RuntimeObject* L_18 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_00bd;
			}
		}

IL_00f5:
		{
			QAMubuZiiPudSCqhOPyFeyHLNNhg_tMeeFNDmLhzrFkrObkICOsBGeJux_m463B51254FD72BBB210A716018AFE2E693A2DB7B(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_20 = V_2;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = PollingHelper_yaXGMnGRHzLAsdmWClzYAeCKjTIlb_mA0A377EA61CCAE5D5B08716BD248581A4FE6CC66(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_21);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_22);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
			goto IL_0148;
		}

IL_011d:
		{
			RuntimeObject* L_23 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_23);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_24;
			L_24 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_23);
			V_5 = L_24;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_25 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_25);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(3);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0140:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
		}

IL_0148:
		{
			RuntimeObject* L_26 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_26);
			bool L_27;
			L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_011d;
			}
		}

IL_0155:
		{
			QAMubuZiiPudSCqhOPyFeyHLNNhg_bKYtFpdOyyopwWDgXevZsgrxWQOs_mA87D97A4693963CB5CC175917DA726DDE6669F5B(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_28 = V_2;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = PollingHelper_YreEBReqxCdIJgxQdzUpAFWJOKmwA_mD70C8A7359CF734896F38C1C3D5109FB018BC5BE(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_29);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_30);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
			goto IL_01a5;
		}

IL_017d:
		{
			RuntimeObject* L_31 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_31);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_32;
			L_32 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_31);
			V_6 = L_32;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_33 = V_6;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_33);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(4);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_019d:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
		}

IL_01a5:
		{
			RuntimeObject* L_34 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_017d;
			}
		}

IL_01b2:
		{
			QAMubuZiiPudSCqhOPyFeyHLNNhg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mEBEB71C18CEC5ABA020CCE3752CEFDF4EC97C106(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_01ca;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01c3;
	}

FAULT_01c3:
	{ // begin fault (depth: 1)
		QAMubuZiiPudSCqhOPyFeyHLNNhg_System_IDisposable_Dispose_m8F4759A7C23DD6BC62EA7674D9BF622A13F4E9DF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(451)
	} // end fault
	IL2CPP_CLEANUP(451)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ca:
	{
		bool L_36 = V_0;
		return L_36;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m675A883300FA4538B9278B4118AD209B59BA0C7E (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_tMeeFNDmLhzrFkrObkICOsBGeJux_m463B51254FD72BBB210A716018AFE2E693A2DB7B (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_bKYtFpdOyyopwWDgXevZsgrxWQOs_mA87D97A4693963CB5CC175917DA726DDE6669F5B (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_voQyPKUnPshXZdFCyWVzLjeZHBAs_mEBEB71C18CEC5ABA020CCE3752CEFDF4EC97C106 (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m65108E0B22EDEAFBEF063DEE505D562B9B3ADF88 (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_IEnumerator_Reset_mF2E57BFE669450EBFFF4D2594929E324ED92996D (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_IEnumerator_Reset_mF2E57BFE669450EBFFF4D2594929E324ED92996D_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_IEnumerator_get_Current_m56F305B92084B90B56D1E8E6981C8F8FD749792F (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m2C346F2D589EBA9286A7E50D9AD2A750BB1DC926 (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * L_4 = (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF *)il2cpp_codegen_object_new(QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF_il2cpp_TypeInfo_var);
		QAMubuZiiPudSCqhOPyFeyHLNNhg__ctor_mE86814B2A29581374C45506F045EA8CCD55AD80E(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * L_5 = V_0;
		PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_6 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_3(L_6);
	}

IL_003a:
	{
		QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/QAMubuZiiPudSCqhOPyFeyHLNNhg::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_IEnumerable_GetEnumerator_mDDBC94C4C0E0A1F6FA60AA547EE9DB092246AD2F (QAMubuZiiPudSCqhOPyFeyHLNNhg_tD1B67528FBD11597C6D1BFDE1E86239F463FE1DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = QAMubuZiiPudSCqhOPyFeyHLNNhg_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m2C346F2D589EBA9286A7E50D9AD2A750BB1DC926(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM__ctor_m6BBCE77CC3196FA50A2634AE4F55E18AA06DCC68 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_IDisposable_Dispose_m628BEF83A0BAB642D045183E72BA1DAF1E1B37A2 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		VAwDyFDQrkXRrHxdEwzRDaRvetEM_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m18EBD679E24933C99EC70F72B9C3594B77BBD5CF(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VAwDyFDQrkXRrHxdEwzRDaRvetEM_MoveNext_m2E2556996883ED202A936910924B7D9FE1C16837 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline(L_3, /*hidden argument*/NULL);
			__this->set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 * L_7;
			L_7 = InterfaceFuncInvoker1< CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.CustomController>::get_Item(System.Int32) */, IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllButtonsDown() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			VAwDyFDQrkXRrHxdEwzRDaRvetEM_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m18EBD679E24933C99EC70F72B9C3594B77BBD5CF(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.CustomController>::get_Count() */, ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_IDisposable_Dispose_m628BEF83A0BAB642D045183E72BA1DAF1E1B37A2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m18EBD679E24933C99EC70F72B9C3594B77BBD5CF (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m55096E04C66433130420AEB7DEA73BE4E140283B (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_IEnumerator_Reset_m8282E0A7ABA851227EAA3EE631C0404433C1B0B2 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_IEnumerator_Reset_m8282E0A7ABA851227EAA3EE631C0404433C1B0B2_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_IEnumerator_get_Current_m323412B27D296DF286E1B63D018A6B1E6C7031A2 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m27CF99C3C5C9A4FAB98E936A722B18B7120BC6FF (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * L_4 = (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E *)il2cpp_codegen_object_new(VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E_il2cpp_TypeInfo_var);
		VAwDyFDQrkXRrHxdEwzRDaRvetEM__ctor_m6BBCE77CC3196FA50A2634AE4F55E18AA06DCC68(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/VAwDyFDQrkXRrHxdEwzRDaRvetEM::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_IEnumerable_GetEnumerator_m90CBC02529ED2EE71C2389F4FF96919F585E9714 (VAwDyFDQrkXRrHxdEwzRDaRvetEM_t6DA04A254D4337ECB3C3617FE88A0CB959AB1F5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = VAwDyFDQrkXRrHxdEwzRDaRvetEM_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m27CF99C3C5C9A4FAB98E936A722B18B7120BC6FF(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv__ctor_mB536FC2FF7038114A6CC67E34477A99292A9246A (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_System_IDisposable_Dispose_m3A9694CA1C43DC16967D763B92C8A32496B80FEB (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-6))))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0065;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_005b;
			}
		}
	}
	{
		return;
	}

IL_003d:
	{
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		VTmCTECfrLOpWyDjTbthIzGUmvdv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1B4C6007A3284D4DAE31CC2871DC1479670336E5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0047:
	{
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		VTmCTECfrLOpWyDjTbthIzGUmvdv_tMeeFNDmLhzrFkrObkICOsBGeJux_m82E13A9078A9259C077F64F765BA74496F4E1E58(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		VTmCTECfrLOpWyDjTbthIzGUmvdv_bKYtFpdOyyopwWDgXevZsgrxWQOs_m71C8265651A8F56E6EA2B2DAA56E342BE2152770(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_005b:
	{
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		VTmCTECfrLOpWyDjTbthIzGUmvdv_voQyPKUnPshXZdFCyWVzLjeZHBAs_m7C2B10C5DC74D733F14EC650FB9ACA488C385EDA(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VTmCTECfrLOpWyDjTbthIzGUmvdv_MoveNext_mC48DAD5A0EAD1387CA83C00E1DCECAF767771C6C (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * V_2 = NULL;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_1 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002f;
				}
				case 1:
				{
					goto IL_0080;
				}
				case 2:
				{
					goto IL_00e0;
				}
				case 3:
				{
					goto IL_0140;
				}
				case 4:
				{
					goto IL_019d;
				}
			}
		}

IL_0028:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_002f:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0(/*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_0044:
		{
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = PollingHelper_sszMazZiRlLXifusuhSvrXruVsvS_m5571A02BD918CBC7ED56802A5E11E290865134FF(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_5);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_6);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0088;
		}

IL_005f:
		{
			RuntimeObject* L_7 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_7);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_8;
			L_8 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_9 = V_3;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0080:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0088:
		{
			RuntimeObject* L_10 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_005f;
			}
		}

IL_0095:
		{
			VTmCTECfrLOpWyDjTbthIzGUmvdv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1B4C6007A3284D4DAE31CC2871DC1479670336E5(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_12 = V_2;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = PollingHelper_HOEJAMRWlNjoQHyywIgOAMoSqKTE_mEADA8CA5EF89AF49C16A2C63E73E32B3687063F0(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_13);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_14);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
			goto IL_00e8;
		}

IL_00bd:
		{
			RuntimeObject* L_15 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_15);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_16;
			L_16 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_17 = V_4;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_17);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(2);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_00e0:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
		}

IL_00e8:
		{
			RuntimeObject* L_18 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_00bd;
			}
		}

IL_00f5:
		{
			VTmCTECfrLOpWyDjTbthIzGUmvdv_tMeeFNDmLhzrFkrObkICOsBGeJux_m82E13A9078A9259C077F64F765BA74496F4E1E58(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_20 = V_2;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = PollingHelper_HKfvIjVyGzhVyNzzmHuXrPXdNtwB_m565FE0E638D846B7B535DD5B897166F78E1E8EC2(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_21);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_22);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
			goto IL_0148;
		}

IL_011d:
		{
			RuntimeObject* L_23 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_23);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_24;
			L_24 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_23);
			V_5 = L_24;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_25 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_25);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(3);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0140:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
		}

IL_0148:
		{
			RuntimeObject* L_26 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_26);
			bool L_27;
			L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_011d;
			}
		}

IL_0155:
		{
			VTmCTECfrLOpWyDjTbthIzGUmvdv_bKYtFpdOyyopwWDgXevZsgrxWQOs_m71C8265651A8F56E6EA2B2DAA56E342BE2152770(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_28 = V_2;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = PollingHelper_hTjfFKtRwBiwDyrjjHQnZaVkwhIc_mF3576AFD5FC936EFD3385A5DDB4DA88322D94690(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_29);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_30);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
			goto IL_01a5;
		}

IL_017d:
		{
			RuntimeObject* L_31 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_31);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_32;
			L_32 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_31);
			V_6 = L_32;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_33 = V_6;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_33);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(4);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_019d:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
		}

IL_01a5:
		{
			RuntimeObject* L_34 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_017d;
			}
		}

IL_01b2:
		{
			VTmCTECfrLOpWyDjTbthIzGUmvdv_voQyPKUnPshXZdFCyWVzLjeZHBAs_m7C2B10C5DC74D733F14EC650FB9ACA488C385EDA(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_01ca;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01c3;
	}

FAULT_01c3:
	{ // begin fault (depth: 1)
		VTmCTECfrLOpWyDjTbthIzGUmvdv_System_IDisposable_Dispose_m3A9694CA1C43DC16967D763B92C8A32496B80FEB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(451)
	} // end fault
	IL2CPP_CLEANUP(451)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ca:
	{
		bool L_36 = V_0;
		return L_36;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m1B4C6007A3284D4DAE31CC2871DC1479670336E5 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_tMeeFNDmLhzrFkrObkICOsBGeJux_m82E13A9078A9259C077F64F765BA74496F4E1E58 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_bKYtFpdOyyopwWDgXevZsgrxWQOs_m71C8265651A8F56E6EA2B2DAA56E342BE2152770 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_voQyPKUnPshXZdFCyWVzLjeZHBAs_m7C2B10C5DC74D733F14EC650FB9ACA488C385EDA (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mED1490EC7648585C8F256A273A29E9E5924B19C7 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_IEnumerator_Reset_mF1070F491637D10CFE5D3B0311D38DD8E40894D0 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_IEnumerator_Reset_mF1070F491637D10CFE5D3B0311D38DD8E40894D0_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_IEnumerator_get_Current_mF5AB63EE323490A3719FDA8A1BDD99EE7B025B67 (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m25D7CA47BFDD851CC4BAA11BF2A2986A314E329D (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * L_4 = (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A *)il2cpp_codegen_object_new(VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A_il2cpp_TypeInfo_var);
		VTmCTECfrLOpWyDjTbthIzGUmvdv__ctor_mB536FC2FF7038114A6CC67E34477A99292A9246A(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * L_5 = V_0;
		PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_6 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_3(L_6);
	}

IL_003a:
	{
		VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/VTmCTECfrLOpWyDjTbthIzGUmvdv::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_IEnumerable_GetEnumerator_mA0AF891A63C099C08EFDA728AE3DB48A731152BF (VTmCTECfrLOpWyDjTbthIzGUmvdv_t88045731D77E4FA7EF47D615F5031DF4CC111E6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = VTmCTECfrLOpWyDjTbthIzGUmvdv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m25D7CA47BFDD851CC4BAA11BF2A2986A314E329D(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv__ctor_mF18095D926D2F9DBA3427DEDEE312DA4B4BA1D2F (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv_System_IDisposable_Dispose_m363A4A2038E89C555A6319D8F05F197EF0312794 (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		aIEOUAdnYePshwGHiyHoEEGBUoBv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m65CEC3AE863E018989B64C7EA03BCF03B7F53C6C(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool aIEOUAdnYePshwGHiyHoEEGBUoBv_MoveNext_m703C94C1A51425DAD26284C8346E01ED64C3EB68 (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline(L_3, /*hidden argument*/NULL);
			__this->set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 * L_7;
			L_7 = InterfaceFuncInvoker1< CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.CustomController>::get_Item(System.Int32) */, IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = ControllerWithAxes_PollForAllAxes_m99FC3798966B3ECCA7CA12CDA004B1C053677034(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			aIEOUAdnYePshwGHiyHoEEGBUoBv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m65CEC3AE863E018989B64C7EA03BCF03B7F53C6C(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.CustomController>::get_Count() */, ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		aIEOUAdnYePshwGHiyHoEEGBUoBv_System_IDisposable_Dispose_m363A4A2038E89C555A6319D8F05F197EF0312794(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m65CEC3AE863E018989B64C7EA03BCF03B7F53C6C (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mBE6B36193C673EE7A4F38E1AEC6A706E951FB08B (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_IEnumerator_Reset_m74D22329749B7F9654D2C22A73DA3C1F6F290539 (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_IEnumerator_Reset_m74D22329749B7F9654D2C22A73DA3C1F6F290539_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_IEnumerator_get_Current_m09E9BE7D5F9BF4C2342B27B4F4A043060D5A321A (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m0E053D4D98A57FF96642BC38DBE19524B2F7468D (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * L_4 = (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC *)il2cpp_codegen_object_new(aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC_il2cpp_TypeInfo_var);
		aIEOUAdnYePshwGHiyHoEEGBUoBv__ctor_mF18095D926D2F9DBA3427DEDEE312DA4B4BA1D2F(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/aIEOUAdnYePshwGHiyHoEEGBUoBv::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_IEnumerable_GetEnumerator_m617C2653D9146F86D3B8AB18FC088522237AFEFD (aIEOUAdnYePshwGHiyHoEEGBUoBv_t10771E55219BCE3154C2ED7131EDDB4F65CDE3DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = aIEOUAdnYePshwGHiyHoEEGBUoBv_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m0E053D4D98A57FF96642BC38DBE19524B2F7468D(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA__ctor_mAC8D80FA18A0E6DA8BDDFBF07C75C771B3CCF42D (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_IDisposable_Dispose_m3BC8DDB4585BE79835C33CFD786CFCA0A0FF66AC (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		bWUVgMzqQNbYjirwSwYDGRzHUYFdA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m7B9E425492C3D054CEF32BF36DDE548AAFFF3130(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bWUVgMzqQNbYjirwSwYDGRzHUYFdA_MoveNext_m61C31C2BB057C8540FAF8208DA2157EC3D14357E (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline(L_3, /*hidden argument*/NULL);
			__this->set_DCHsYsHgaGZanwaPfowyYcSnBov_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 * L_7;
			L_7 = InterfaceFuncInvoker1< Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Joystick>::get_Item(System.Int32) */, IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllElementsDown() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			bWUVgMzqQNbYjirwSwYDGRzHUYFdA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m7B9E425492C3D054CEF32BF36DDE548AAFFF3130(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Joystick>::get_Count() */, ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_IDisposable_Dispose_m3BC8DDB4585BE79835C33CFD786CFCA0A0FF66AC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m7B9E425492C3D054CEF32BF36DDE548AAFFF3130 (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m74DF533B8B214F7720AA0E7EA59BDC458C5C9892 (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_IEnumerator_Reset_m25F3AC22395FFFA9F1E6D8724E20E933237A93AA (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_IEnumerator_Reset_m25F3AC22395FFFA9F1E6D8724E20E933237A93AA_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_IEnumerator_get_Current_m391E08D366D630A79113A75841F304234DBD312B (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m683A43912400EA34D007E9CFBE228B3294CA55F7 (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * L_4 = (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 *)il2cpp_codegen_object_new(bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428_il2cpp_TypeInfo_var);
		bWUVgMzqQNbYjirwSwYDGRzHUYFdA__ctor_mAC8D80FA18A0E6DA8BDDFBF07C75C771B3CCF42D(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/bWUVgMzqQNbYjirwSwYDGRzHUYFdA::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_IEnumerable_GetEnumerator_mED07C37A50CAA988931AC5A658844F660CA2117F (bWUVgMzqQNbYjirwSwYDGRzHUYFdA_tA56314B1A847DF21F2A6A5724A432F266BADC428 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = bWUVgMzqQNbYjirwSwYDGRzHUYFdA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m683A43912400EA34D007E9CFBE228B3294CA55F7(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG__ctor_m6DC92D4951BE7FC5EFAEDBEC5A24960AB3D58CB6 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_IDisposable_Dispose_m8D7E0731A23A931FBF5EDC16F4EE4E8FC972D962 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		lYPJKDFXDlOcBmKKrQJiJMmKvgUG_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA15CEC50245A0760B6C050FEE8B437765DC16011(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool lYPJKDFXDlOcBmKKrQJiJMmKvgUG_MoveNext_m510DF4F98CF93A9F9A3B86D66340B410AD04C679 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline(L_3, /*hidden argument*/NULL);
			__this->set_DCHsYsHgaGZanwaPfowyYcSnBov_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 * L_7;
			L_7 = InterfaceFuncInvoker1< Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Joystick>::get_Item(System.Int32) */, IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(42 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllElements() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			lYPJKDFXDlOcBmKKrQJiJMmKvgUG_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA15CEC50245A0760B6C050FEE8B437765DC16011(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Joystick>::get_Count() */, ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_IDisposable_Dispose_m8D7E0731A23A931FBF5EDC16F4EE4E8FC972D962(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mA15CEC50245A0760B6C050FEE8B437765DC16011 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m8DCCA7428B2762F23E9F6F1465D98722E12DDFD8 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_IEnumerator_Reset_m77A9FB5DE81DF21B37C7AEC77CC43C0CEEF17205 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_IEnumerator_Reset_m77A9FB5DE81DF21B37C7AEC77CC43C0CEEF17205_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_IEnumerator_get_Current_m0F2BDFF78695BF63B13ED07F6BE3CBCFCFED3EEE (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m466BEB3318C1EA9FD8074A99A50DE4D4255E0434 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * L_4 = (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD *)il2cpp_codegen_object_new(lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD_il2cpp_TypeInfo_var);
		lYPJKDFXDlOcBmKKrQJiJMmKvgUG__ctor_m6DC92D4951BE7FC5EFAEDBEC5A24960AB3D58CB6(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/lYPJKDFXDlOcBmKKrQJiJMmKvgUG::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_IEnumerable_GetEnumerator_m3A3CCC18E3E9F20C43E8E42F03184E2C7AE1E314 (lYPJKDFXDlOcBmKKrQJiJMmKvgUG_tB6A9B32D9B6A11863B19A3828AC70E3794BFC4CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = lYPJKDFXDlOcBmKKrQJiJMmKvgUG_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m466BEB3318C1EA9FD8074A99A50DE4D4255E0434(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL__ctor_mFEB5BD3A4E8A5C3CC6B85C3A0E61BF4F68B128FF (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_IDisposable_Dispose_m8A24C94C3DF2813E9AE045FB84B685519EB832F0 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-6))))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0065;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0051;
			}
			case 10:
			{
				goto IL_005b;
			}
		}
	}
	{
		return;
	}

IL_003d:
	{
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEAF5E47FEF332311C6A4825DF6870DB49B3DCE64(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0047:
	{
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_tMeeFNDmLhzrFkrObkICOsBGeJux_m1530D1A7039C7BF9D7BA4419AE1AF26010E8A541(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_bKYtFpdOyyopwWDgXevZsgrxWQOs_mD53DA0C0C5ED879D1811A88D8E197DC082427D26(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_005b:
	{
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x65, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_voQyPKUnPshXZdFCyWVzLjeZHBAs_mB49E179567FCB140CE1C6940855AE24D72C25F22(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sFJFwaZdTkBclwhRyQeZXBYRFsqL_MoveNext_mD18F3E453FB1CC222B306562BE292DEB4D3CFA99 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * V_2 = NULL;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_1 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002f;
				}
				case 1:
				{
					goto IL_0080;
				}
				case 2:
				{
					goto IL_00e0;
				}
				case 3:
				{
					goto IL_0140;
				}
				case 4:
				{
					goto IL_019d;
				}
			}
		}

IL_0028:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_002f:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0(/*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			V_0 = (bool)0;
			goto IL_01ca;
		}

IL_0044:
		{
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = PollingHelper_SktOozRnmJREqRNSUWbYArRRBgoK_m0B3FD09ABE00BB36AD114EAB949A3D1A5C034896(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_5);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_6);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0088;
		}

IL_005f:
		{
			RuntimeObject* L_7 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_7);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_8;
			L_8 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_9 = V_3;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0080:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0088:
		{
			RuntimeObject* L_10 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_005f;
			}
		}

IL_0095:
		{
			sFJFwaZdTkBclwhRyQeZXBYRFsqL_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEAF5E47FEF332311C6A4825DF6870DB49B3DCE64(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_12 = V_2;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = PollingHelper_nTOaOzAizIVxHePeOnxkRHlAxAWS_m3263DAC768D8264368D71133E340B40FEB2919C8(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_13);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_14);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
			goto IL_00e8;
		}

IL_00bd:
		{
			RuntimeObject* L_15 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_15);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_16;
			L_16 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_17 = V_4;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_17);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(2);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_00e0:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
		}

IL_00e8:
		{
			RuntimeObject* L_18 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_00bd;
			}
		}

IL_00f5:
		{
			sFJFwaZdTkBclwhRyQeZXBYRFsqL_tMeeFNDmLhzrFkrObkICOsBGeJux_m1530D1A7039C7BF9D7BA4419AE1AF26010E8A541(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_20 = V_2;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = PollingHelper_cLPDCRhyqgMmkTmpLiLNnnreryrD_m12CBDC006269FE4B30FD0E8810696F95E53C627E(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_21);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_22);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
			goto IL_0148;
		}

IL_011d:
		{
			RuntimeObject* L_23 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_23);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_24;
			L_24 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_23);
			V_5 = L_24;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_25 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_25);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(3);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_0140:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
		}

IL_0148:
		{
			RuntimeObject* L_26 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_26);
			bool L_27;
			L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_011d;
			}
		}

IL_0155:
		{
			sFJFwaZdTkBclwhRyQeZXBYRFsqL_bKYtFpdOyyopwWDgXevZsgrxWQOs_mD53DA0C0C5ED879D1811A88D8E197DC082427D26(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_28 = V_2;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = PollingHelper_gwHUtKVRaufrytBZKyNeqEdqvaFV_m1564B84FE2AAF4CC4F0AF4677BB05A3B0AF6B0B6(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_29);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_30);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
			goto IL_01a5;
		}

IL_017d:
		{
			RuntimeObject* L_31 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_31);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_32;
			L_32 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_31);
			V_6 = L_32;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_33 = V_6;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_33);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(4);
			V_0 = (bool)1;
			goto IL_01ca;
		}

IL_019d:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-6));
		}

IL_01a5:
		{
			RuntimeObject* L_34 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_017d;
			}
		}

IL_01b2:
		{
			sFJFwaZdTkBclwhRyQeZXBYRFsqL_voQyPKUnPshXZdFCyWVzLjeZHBAs_mB49E179567FCB140CE1C6940855AE24D72C25F22(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_01ca;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01c3;
	}

FAULT_01c3:
	{ // begin fault (depth: 1)
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_IDisposable_Dispose_m8A24C94C3DF2813E9AE045FB84B685519EB832F0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(451)
	} // end fault
	IL2CPP_CLEANUP(451)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01ca:
	{
		bool L_36 = V_0;
		return L_36;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mEAF5E47FEF332311C6A4825DF6870DB49B3DCE64 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_tMeeFNDmLhzrFkrObkICOsBGeJux_m1530D1A7039C7BF9D7BA4419AE1AF26010E8A541 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_bKYtFpdOyyopwWDgXevZsgrxWQOs_mD53DA0C0C5ED879D1811A88D8E197DC082427D26 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::voQyPKUnPshXZdFCyWVzLjeZHBAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_voQyPKUnPshXZdFCyWVzLjeZHBAs_mB49E179567FCB140CE1C6940855AE24D72C25F22 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m7514AE4FDCE25A5F9F1163F4F59192E1E848E337 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_IEnumerator_Reset_m69F0F7692F6EF05D07545D2B53DB2590D5512954 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_IEnumerator_Reset_m69F0F7692F6EF05D07545D2B53DB2590D5512954_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_IEnumerator_get_Current_m571E3359EF65FB41CCCE6667EEA38B2200E3FFB5 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mCDC50597D88C1DAFD6AEC4270B7B510489A9F179 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * L_4 = (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 *)il2cpp_codegen_object_new(sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705_il2cpp_TypeInfo_var);
		sFJFwaZdTkBclwhRyQeZXBYRFsqL__ctor_mFEB5BD3A4E8A5C3CC6B85C3A0E61BF4F68B128FF(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * L_5 = V_0;
		PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_6 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_3(L_6);
	}

IL_003a:
	{
		sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/sFJFwaZdTkBclwhRyQeZXBYRFsqL::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_IEnumerable_GetEnumerator_m0E276D8C640BA732F41B10C7FB3ECF2149120CB7 (sFJFwaZdTkBclwhRyQeZXBYRFsqL_tE7918FA98F08846765513A77D5D7BA8512121705 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = sFJFwaZdTkBclwhRyQeZXBYRFsqL_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mCDC50597D88C1DAFD6AEC4270B7B510489A9F179(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA__ctor_mAD86350DADFB4CC48EEAAEBF6372053456D27699 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_IDisposable_Dispose_mB89C5887DFE1162DDC977B0E4D9F01713DF38E58 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-5))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_0035;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_0049;
			}
		}
	}
	{
		return;
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mE6963738FDCA1F0AA6A5AD72852DC8991CD6C7D8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_003f:
	{
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0042);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tMeeFNDmLhzrFkrObkICOsBGeJux_m8FDE230EF0747E8B1487268451FB3A53E46018CC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0049:
	{
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_004c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_bKYtFpdOyyopwWDgXevZsgrxWQOs_mE105A876B87521C1A0E773543CB4B9E8F3BA6308(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		return;
	}
}
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_MoveNext_m13BD68B6F5E1DB28C88DB8127496107F3A617F3E (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * V_2 = NULL;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_1 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_007c;
				}
				case 2:
				{
					goto IL_00dc;
				}
				case 3:
				{
					goto IL_0139;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0166;
		}

IL_002b:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = ReInput_CheckInitialized_mDD32BB284786A2F19182A2EFDDA0702467D8F8F0(/*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			V_0 = (bool)0;
			goto IL_0166;
		}

IL_0040:
		{
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = PollingHelper_zwNhHIcIgtilZkHFNoLdYkBpudmR_mA2829AF15F2315E293AED400379B69CB88A5B171(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_5);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_6);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0084;
		}

IL_005b:
		{
			RuntimeObject* L_7 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_7);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_8;
			L_8 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_9 = V_3;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_0166;
		}

IL_007c:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0084:
		{
			RuntimeObject* L_10 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_005b;
			}
		}

IL_0091:
		{
			tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mE6963738FDCA1F0AA6A5AD72852DC8991CD6C7D8(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_12 = V_2;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = PollingHelper_xLpJNhMMqKQpDjLnVPCaMhTCFhvDA_m2DA3378012D0D3993B361A529055EB28578408B4(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_13);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_14);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
			goto IL_00e4;
		}

IL_00b9:
		{
			RuntimeObject* L_15 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_15);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_16;
			L_16 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_15);
			V_4 = L_16;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_17 = V_4;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_17);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(2);
			V_0 = (bool)1;
			goto IL_0166;
		}

IL_00dc:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-4));
		}

IL_00e4:
		{
			RuntimeObject* L_18 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00f1:
		{
			tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tMeeFNDmLhzrFkrObkICOsBGeJux_m8FDE230EF0747E8B1487268451FB3A53E46018CC(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_20 = V_2;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = PollingHelper_VJeweIaiXWbvCcIFICQocFzFqnbpB_mFF5FE442BB05EE76F005FBDC7035A964FFFDA3BE(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			RuntimeObject* L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_21);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4(L_22);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
			goto IL_0141;
		}

IL_0119:
		{
			RuntimeObject* L_23 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_23);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_24;
			L_24 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_23);
			V_5 = L_24;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_25 = V_5;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_25);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(3);
			V_0 = (bool)1;
			goto IL_0166;
		}

IL_0139:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-5));
		}

IL_0141:
		{
			RuntimeObject* L_26 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
			NullCheck(L_26);
			bool L_27;
			L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_0119;
			}
		}

IL_014e:
		{
			tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_bKYtFpdOyyopwWDgXevZsgrxWQOs_mE105A876B87521C1A0E773543CB4B9E8F3BA6308(__this, /*hidden argument*/NULL);
			__this->set_hSeONskmQJhVsjVUHGUASYbDGJrU_4((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0166;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_015f;
	}

FAULT_015f:
	{ // begin fault (depth: 1)
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_IDisposable_Dispose_mB89C5887DFE1162DDC977B0E4D9F01713DF38E58(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(351)
	} // end fault
	IL2CPP_CLEANUP(351)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0166:
	{
		bool L_28 = V_0;
		return L_28;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_mE6963738FDCA1F0AA6A5AD72852DC8991CD6C7D8 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::tMeeFNDmLhzrFkrObkICOsBGeJux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tMeeFNDmLhzrFkrObkICOsBGeJux_m8FDE230EF0747E8B1487268451FB3A53E46018CC (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::bKYtFpdOyyopwWDgXevZsgrxWQOs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_bKYtFpdOyyopwWDgXevZsgrxWQOs_mE105A876B87521C1A0E773543CB4B9E8F3BA6308 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_hSeONskmQJhVsjVUHGUASYbDGJrU_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m8E8AD51FD0960F18B312D5A127C109E3DF8217F1 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_IEnumerator_Reset_m45CEDAC313362E20507A56590B3EAEE46B7DD5E2 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_IEnumerator_Reset_m45CEDAC313362E20507A56590B3EAEE46B7DD5E2_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_IEnumerator_get_Current_m03DC0CC8B1D969A9A4557B0AA71F0918AD69D14E (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB9A06A622007565945BCD87406E1FEA2863BFEC5 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * L_4 = (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 *)il2cpp_codegen_object_new(tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937_il2cpp_TypeInfo_var);
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA__ctor_mAD86350DADFB4CC48EEAAEBF6372053456D27699(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * L_5 = V_0;
		PollingHelper_t8FBFEB4B0E9DF422A5241006D756BA799FA8C31A * L_6 = __this->get_TtytLoUfsgUyhsklaKccrnoMiiek_3();
		NullCheck(L_5);
		L_5->set_TtytLoUfsgUyhsklaKccrnoMiiek_3(L_6);
	}

IL_003a:
	{
		tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/tDTFBDdEcQFfhUOSSEGcGWgTBMKNA::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_IEnumerable_GetEnumerator_m50B65E48ACB67CFB4E2300D0069814C3D3AFADF3 (tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_tCFF5E47C2B3A68241EEE12380D28620133596937 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = tDTFBDdEcQFfhUOSSEGcGWgTBMKNA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mB9A06A622007565945BCD87406E1FEA2863BFEC5(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA__ctor_m77AF29D317C2ABA8AE42E797CC56831379C35659 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_IDisposable_Dispose_mA8B1BB655ED3679A289FCDBB017DA67C60B07AAD (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		ueTpyPCBSBBBmDjixqnMAYJfkUpBA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m29E0C6543E16C79EFBCBFF1D67B825BCEA1F72C0(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ueTpyPCBSBBBmDjixqnMAYJfkUpBA_MoveNext_m254008F1B265B7FEBE38D8048CA52BEDAB213203 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline(L_3, /*hidden argument*/NULL);
			__this->set_DCHsYsHgaGZanwaPfowyYcSnBov_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 * L_7;
			L_7 = InterfaceFuncInvoker1< Joystick_t419E6DAEB6AE924D36E2F7602FD845201EC9CE47 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.Joystick>::get_Item(System.Int32) */, IList_1_t4C256DCB6292E6FC4CF9A153C6B659F8126048FB_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllButtons() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			ueTpyPCBSBBBmDjixqnMAYJfkUpBA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m29E0C6543E16C79EFBCBFF1D67B825BCEA1F72C0(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_DCHsYsHgaGZanwaPfowyYcSnBov_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.Joystick>::get_Count() */, ICollection_1_t84E8AB8517E141C403B773FBAC7A7107225B4ADB_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_IDisposable_Dispose_mA8B1BB655ED3679A289FCDBB017DA67C60B07AAD(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m29E0C6543E16C79EFBCBFF1D67B825BCEA1F72C0 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_mE04D401AB421F40F9218FCD87E46C603B68226D9 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_IEnumerator_Reset_m5EC5B78CA97CEA88F97E6C40904703EB17953920 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_IEnumerator_Reset_m5EC5B78CA97CEA88F97E6C40904703EB17953920_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_IEnumerator_get_Current_mFCA50C1868C7380B2EAEA75B48C6949EF0FF050C (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mE01A355A76526076AEFD26FD3BCBD72500CFD41D (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * L_4 = (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C *)il2cpp_codegen_object_new(ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C_il2cpp_TypeInfo_var);
		ueTpyPCBSBBBmDjixqnMAYJfkUpBA__ctor_m77AF29D317C2ABA8AE42E797CC56831379C35659(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/ueTpyPCBSBBBmDjixqnMAYJfkUpBA::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_IEnumerable_GetEnumerator_m4BF77B876ACCA2EE7CFD164A8A74D15C1E84A4E2 (ueTpyPCBSBBBmDjixqnMAYJfkUpBA_t2E776885CBA58066E9B28D18280F8D65A5C5919C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = ueTpyPCBSBBBmDjixqnMAYJfkUpBA_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_mE01A355A76526076AEFD26FD3BCBD72500CFD41D(__this, /*hidden argument*/NULL);
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
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup__ctor_mE5EEF3D4F9377880EEED39DF47CCBD8DD5E602B4 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = p0;
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_wLBvvzlDcbAEPyDfgnprolEZBsgN_2(L_2);
		return;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup_System_IDisposable_Dispose_m053FBE40114104FB789A75C71ED260A4CB4F90B4 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		V_0 = L_0;
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
		ycbUWOVarDEjyaGrPbtDIduGrXup_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m95C175F4ED62DAED6FF51ED426EA071BCB1FE675(__this, /*hidden argument*/NULL);
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
// System.Boolean Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ycbUWOVarDEjyaGrPbtDIduGrXup_MoveNext_m4255DC4385A72BC5739E327F7CFB610B3A4A99A3 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007e;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}

IL_0015:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
			IL2CPP_RUNTIME_CLASS_INIT(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
			pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * L_3 = ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var))->get_VmqcbbbvPImXBEBcMHWjUAXVfrUSA_10();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline(L_3, /*hidden argument*/NULL);
			__this->set_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3(L_4);
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(0);
			goto IL_00b0;
		}

IL_0035:
		{
			RuntimeObject* L_5 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			int32_t L_6 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			NullCheck(L_5);
			CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 * L_7;
			L_7 = InterfaceFuncInvoker1< CustomController_t1CC1E768EE963F687CCC0610034B404BDBF7CF63 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Rewired.CustomController>::get_Item(System.Int32) */, IList_1_tB41CFF10B5D3CB93DE5B76DA19D67BA9C12132E9_il2cpp_TypeInfo_var, L_5, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(42 /* System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo> Rewired.Controller::PollForAllElements() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Rewired.ControllerPollingInfo>::GetEnumerator() */, IEnumerable_1_t53AA254E2FFFDF9BC2565D0BD949E890DADCC0B3_il2cpp_TypeInfo_var, L_8);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5(L_9);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
			goto IL_0086;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_10);
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_11;
			L_11 = InterfaceFuncInvoker0< ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo>::get_Current() */, IEnumerator_1_tBAD7956466C9CB20C457850A2F23E084964D7987_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_12 = V_2;
			__this->set_VqEePGSMyrGKIqkWibsjeHcWPSIx_1(L_12);
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(1);
			V_0 = (bool)1;
			goto IL_00d1;
		}

IL_007e:
		{
			__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(((int32_t)-3));
		}

IL_0086:
		{
			RuntimeObject* L_13 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0060;
			}
		}

IL_0093:
		{
			ycbUWOVarDEjyaGrPbtDIduGrXup_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m95C175F4ED62DAED6FF51ED426EA071BCB1FE675(__this, /*hidden argument*/NULL);
			__this->set_ffMVLALuuURkVdxHSgrNcNQkUFZS_5((RuntimeObject*)NULL);
			int32_t L_15 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			V_3 = L_15;
			int32_t L_16 = V_3;
			__this->set_fIMVaffCgsuIJcnrkMmGGKfPwwel_4(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_00b0:
		{
			int32_t L_17 = __this->get_fIMVaffCgsuIJcnrkMmGGKfPwwel_4();
			RuntimeObject* L_18 = __this->get_rSWjbVXZAEjqBDDAVYoCDnxtWdpE_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Rewired.CustomController>::get_Count() */, ICollection_1_tCCB789562D89F97F161E3635DF308EA36AA6FC28_il2cpp_TypeInfo_var, L_18);
			if ((((int32_t)L_17) < ((int32_t)L_19)))
			{
				goto IL_0035;
			}
		}

IL_00c6:
		{
			V_0 = (bool)0;
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ca;
	}

FAULT_00ca:
	{ // begin fault (depth: 1)
		ycbUWOVarDEjyaGrPbtDIduGrXup_System_IDisposable_Dispose_m053FBE40114104FB789A75C71ED260A4CB4F90B4(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(202)
	} // end fault
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d1:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::uvbwjgAeXsWySvtbvsLpuFVuAgJB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup_uvbwjgAeXsWySvtbvsLpuFVuAgJB_m95C175F4ED62DAED6FF51ED426EA071BCB1FE675 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0((-1));
		RuntimeObject* L_0 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_ffMVLALuuURkVdxHSgrNcNQkUFZS_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Rewired.ControllerPollingInfo Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_Generic_IEnumeratorU3CRewired_ControllerPollingInfoU3E_get_Current_m45A0AEFD8D92E6052EAD0F904676201862A97881 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		return L_0;
	}
}
// System.Void Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_IEnumerator_Reset_m18ED040546255EE2510F7C6754573A11C9E7CE57 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_IEnumerator_Reset_m18ED040546255EE2510F7C6754573A11C9E7CE57_RuntimeMethod_var)));
	}
}
// System.Object Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_IEnumerator_get_Current_mA1C43D02F745FECFEA04C12BA025F650B8137D1B (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_0 = __this->get_VqEePGSMyrGKIqkWibsjeHcWPSIx_1();
		ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0  L_1 = L_0;
		RuntimeObject * L_2 = Box(ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Rewired.ControllerPollingInfo> Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m450BAB691AD2881DDCC1D2402B9F20EBB30494C2 (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_RxAoyfYzYDsYonLGXsvUgwChukLk_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_wLBvvzlDcbAEPyDfgnprolEZBsgN_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m613D5CA0E8B7EC8002AD7F9B4B112289C88635DD(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_RxAoyfYzYDsYonLGXsvUgwChukLk_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * L_4 = (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 *)il2cpp_codegen_object_new(ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7_il2cpp_TypeInfo_var);
		ycbUWOVarDEjyaGrPbtDIduGrXup__ctor_mE5EEF3D4F9377880EEED39DF47CCBD8DD5E602B4(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Rewired.ReInput/ControllerHelper/PollingHelper/ycbUWOVarDEjyaGrPbtDIduGrXup::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_IEnumerable_GetEnumerator_m14189CB9501AB530A93309EA47EAF3935ED5C33D (ycbUWOVarDEjyaGrPbtDIduGrXup_t6A61AFA00152348F106597E213AF71CE96210CD7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = ycbUWOVarDEjyaGrPbtDIduGrXup_System_Collections_Generic_IEnumerableU3CRewired_ControllerPollingInfoU3E_GetEnumerator_m450BAB691AD2881DDCC1D2402B9F20EBB30494C2(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BBctKivJxEjGKRzyEkHSRjJoJqnW_vWImeTRBgLuJHCkrenRmwXGLjOXl_m0647867DBD02C5405C5A79F11A27EDF4BD3F159C_inline (BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_QBTmfnuLmkWqGrYTHtzcouycAfBw_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BBctKivJxEjGKRzyEkHSRjJoJqnW_FnhCiefZeFmBxyEOoYPyOsnZbtmX_mC3FB575CCEF64F624403AED340CF61EF2DF8D29F_inline (BBctKivJxEjGKRzyEkHSRjJoJqnW_t7E8B32476FAB4200FFB8E40246F6D0A354C1DE10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_XiZDdKkKiqMSUOtqNKwptXZMJABe_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_playerId_m8A2EFE460F804476B0E84548E4AF666CCABF3E9C_inline (ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_DCGJXzigEdTcwzFynDKUcORiHGSOA_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_elementAssignmentType_m570A4A3856092ED3F37797CC6A8D11693608FF72_inline (ElementAssignmentConflictCheck_t70118D486ABDBB1AFB1DA156B4F8CA89FB315123 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_TnqkoEbLYCoEpWLJmIGjaPeGnGXs_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* pmhdIRhCoLlQZffSYgOmsLkpxsjN_ArNYtExzEOqJVrkLnFbqAtXXtlII_mA4D8FBD20062490C3B7A922C4D861A5518E40DBA_inline (pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_YhufnUJBrjmuLslaygcAwWOOSGscA_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* pmhdIRhCoLlQZffSYgOmsLkpxsjN_KBNkExNQfrGjirYyRgxpRcOlIrXiA_m365795E3EBAEF645C14BADDD717F4FEECB04DE33_inline (pmhdIRhCoLlQZffSYgOmsLkpxsjN_t2AE9F2B8F58DD90FAF2E6207D7886671379BA2CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_EZkeaGNjmfUUVrykZmLhuXIZgwOf_19();
		return L_0;
	}
}
