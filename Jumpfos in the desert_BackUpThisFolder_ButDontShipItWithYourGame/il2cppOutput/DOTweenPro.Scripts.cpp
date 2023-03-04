#include "pch-cpp.hpp"

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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_tACAA0DE54A0FE8DEF7F6A70B39DD83161D49D65A;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD;
// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t4EF54A0D620DB58586CC048F3290190E1E66339E;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t799A371617C251DD098A7348B29EA83630A4C691;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// DG.Tweening.Tween[]
struct TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_tA2F349FE839781469A0344CF6039B51512394275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87;
IL2CPP_EXTERN_C String_t* _stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D;
IL2CPP_EXTERN_C String_t* _stringLiteral852803C0E0511404910B712837FFA455156FC4CE;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32;
IL2CPP_EXTERN_C String_t* _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFBF948A98AC682381D0BF1F9986717F09A15F1A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m2130CFA41530B17308434DC9734CE06B1F405566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m4E77DF8AB6CF3089AB9FF2485BFE2D95068E8B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m782F802BE39FD4D3D5758579703B971BC396ABB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8875C86FFAC30CA85251C1B54879C9A33F4DF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE4F6594A9F21C88ACFBABF3AB75EDD4DEA5D757E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_From_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m5E90E0EBA89A3B6C32AE2DA3DC80DA9787B19004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mC01BCD93035483DC08F6681BA6DDF1F3E14E145E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mDF9C7342F90D9A63AE27F5BC563D84C571CB3C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnPlay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m0DC91313C890F409D36F845B7C857AFF9F7B6E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnRewind_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m01C02DBB682666A70A5284E256E3E22D60D23973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStart_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m25C3BD07778EB864EB3928A569C436F09906C9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStepComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m1570D8636477730B63FC0605B1CF99EA43CBF437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE408931F33F48975F7555A1D6848797324869781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAutoKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7890FD2C39FB39C7CC96711D5E38C2D55632C237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetDelay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7469B5D0A9A9FB2EDD20B377B2B22A0AAB6901E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m3C986AED97042831514805B8EB75AA4D60A81EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mFAC5ED7B5B01F035A4A89BEE83EA27FA3342C57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetId_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2FB462996C3D775E67093DD0FDFD0EDAC7F3B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m36D9CB6713F63E6A50ADBD328E5A453B64299FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetRelative_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mED411B457C01E8CA7D8ED9212226874DC396B979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetSpeedBased_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2181BB00E8C28C74BE24ACBB77354BD2E20F2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA7113D105824D18724C892CB64602B14FF951216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m715CAA583D6F9AAC7B2D50D684B99F3DC6D8B941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mD6C68057C5904C9922FB332E9E52FA3961F894D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m05A6171BC23AB72C2E9CC83D3D041007341970CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mD23E6625D8D9DCADA9C4829EAD581D815D224FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5FFBFC4D347038397AD938D80080EE6E9AE628F1 
{
public:

public:
};


// System.Object


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1, ____items_1)); }
	inline TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* get__items_1() const { return ____items_1; }
	inline TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// DG.Tweening.DOTweenAnimationExtensions
struct DOTweenAnimationExtensions_t5DBEC95AC7157995F3EDF1C2D771F57A04A684EE  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.DOTweenProShortcuts
struct DOTweenProShortcuts_tFA0814439ED1FF7615E19E88136CE1F6851A81CA  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Core.Debugger
struct Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF, ___target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_0() const { return ___target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
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


// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_com
{
	int32_t ___alphaOnly_0;
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

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_com
{
	int32_t ___snapping_0;
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
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


// DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.RectOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshaled_com
{
	int32_t ___snapping_0;
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
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


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
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

// DG.Tweening.RotateMode
struct RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C 
{
public:
	// System.Int32 DG.Tweening.RotateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// DG.Tweening.ScrambleMode
struct ScrambleMode_tEE3686B6B55694EA9621FDD3679FAE06FF42F866 
{
public:
	// System.Int32 DG.Tweening.ScrambleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrambleMode_tEE3686B6B55694EA9621FDD3679FAE06FF42F866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.SpiralMode
struct SpiralMode_t6EE75EECC9ED1DB7B07DA17EEFAB5BA48B96CF8B 
{
public:
	// System.Int32 DG.Tweening.SpiralMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpiralMode_t6EE75EECC9ED1DB7B07DA17EEFAB5BA48B96CF8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC  : public ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15
{
public:

public:
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.DOTweenAnimation/AnimationType
struct AnimationType_t0FC189A4F96F682D220B8C1B51DD2EBBCD9B817F 
{
public:
	// System.Int32 DG.Tweening.DOTweenAnimation/AnimationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationType_t0FC189A4F96F682D220B8C1B51DD2EBBCD9B817F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.DOTweenAnimation/TargetType
struct TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C 
{
public:
	// System.Int32 DG.Tweening.DOTweenAnimation/TargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA 
{
public:
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;

public:
	inline static int32_t get_offset_of_rotateMode_0() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___rotateMode_0)); }
	inline int32_t get_rotateMode_0() const { return ___rotateMode_0; }
	inline int32_t* get_address_of_rotateMode_0() { return &___rotateMode_0; }
	inline void set_rotateMode_0(int32_t value)
	{
		___rotateMode_0 = value;
	}

	inline static int32_t get_offset_of_axisConstraint_1() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___axisConstraint_1)); }
	inline int32_t get_axisConstraint_1() const { return ___axisConstraint_1; }
	inline int32_t* get_address_of_axisConstraint_1() { return &___axisConstraint_1; }
	inline void set_axisConstraint_1(int32_t value)
	{
		___axisConstraint_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___up_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_2() const { return ___up_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAt_3() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAt_3)); }
	inline bool get_dynamicLookAt_3() const { return ___dynamicLookAt_3; }
	inline bool* get_address_of_dynamicLookAt_3() { return &___dynamicLookAt_3; }
	inline void set_dynamicLookAt_3(bool value)
	{
		___dynamicLookAt_3 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAtWorldPosition_4() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAtWorldPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dynamicLookAtWorldPosition_4() const { return ___dynamicLookAtWorldPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dynamicLookAtWorldPosition_4() { return &___dynamicLookAtWorldPosition_4; }
	inline void set_dynamicLookAtWorldPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dynamicLookAtWorldPosition_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};

// DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A 
{
public:
	// System.Single DG.Tweening.Plugins.SpiralOptions::depth
	float ___depth_0;
	// System.Single DG.Tweening.Plugins.SpiralOptions::frequency
	float ___frequency_1;
	// System.Single DG.Tweening.Plugins.SpiralOptions::speed
	float ___speed_2;
	// DG.Tweening.SpiralMode DG.Tweening.Plugins.SpiralOptions::mode
	int32_t ___mode_3;
	// System.Boolean DG.Tweening.Plugins.SpiralOptions::snapping
	bool ___snapping_4;
	// System.Single DG.Tweening.Plugins.SpiralOptions::unit
	float ___unit_5;
	// UnityEngine.Quaternion DG.Tweening.Plugins.SpiralOptions::axisQ
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___axisQ_6;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___depth_0)); }
	inline float get_depth_0() const { return ___depth_0; }
	inline float* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(float value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_frequency_1() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___frequency_1)); }
	inline float get_frequency_1() const { return ___frequency_1; }
	inline float* get_address_of_frequency_1() { return &___frequency_1; }
	inline void set_frequency_1(float value)
	{
		___frequency_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___mode_3)); }
	inline int32_t get_mode_3() const { return ___mode_3; }
	inline int32_t* get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(int32_t value)
	{
		___mode_3 = value;
	}

	inline static int32_t get_offset_of_snapping_4() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___snapping_4)); }
	inline bool get_snapping_4() const { return ___snapping_4; }
	inline bool* get_address_of_snapping_4() { return &___snapping_4; }
	inline void set_snapping_4(bool value)
	{
		___snapping_4 = value;
	}

	inline static int32_t get_offset_of_unit_5() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___unit_5)); }
	inline float get_unit_5() const { return ___unit_5; }
	inline float* get_address_of_unit_5() { return &___unit_5; }
	inline void set_unit_5(float value)
	{
		___unit_5 = value;
	}

	inline static int32_t get_offset_of_axisQ_6() { return static_cast<int32_t>(offsetof(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A, ___axisQ_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_axisQ_6() const { return ___axisQ_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_axisQ_6() { return &___axisQ_6; }
	inline void set_axisQ_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___axisQ_6 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_marshaled_pinvoke
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___axisQ_6;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_marshaled_com
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___axisQ_6;
};

// DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;

public:
	inline static int32_t get_offset_of_richTextEnabled_0() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___richTextEnabled_0)); }
	inline bool get_richTextEnabled_0() const { return ___richTextEnabled_0; }
	inline bool* get_address_of_richTextEnabled_0() { return &___richTextEnabled_0; }
	inline void set_richTextEnabled_0(bool value)
	{
		___richTextEnabled_0 = value;
	}

	inline static int32_t get_offset_of_scrambleMode_1() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___scrambleMode_1)); }
	inline int32_t get_scrambleMode_1() const { return ___scrambleMode_1; }
	inline int32_t* get_address_of_scrambleMode_1() { return &___scrambleMode_1; }
	inline void set_scrambleMode_1(int32_t value)
	{
		___scrambleMode_1 = value;
	}

	inline static int32_t get_offset_of_scrambledChars_2() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___scrambledChars_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_scrambledChars_2() const { return ___scrambledChars_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_scrambledChars_2() { return &___scrambledChars_2; }
	inline void set_scrambledChars_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___scrambledChars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrambledChars_2), (void*)value);
	}

	inline static int32_t get_offset_of_startValueStrippedLength_3() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___startValueStrippedLength_3)); }
	inline int32_t get_startValueStrippedLength_3() const { return ___startValueStrippedLength_3; }
	inline int32_t* get_address_of_startValueStrippedLength_3() { return &___startValueStrippedLength_3; }
	inline void set_startValueStrippedLength_3(int32_t value)
	{
		___startValueStrippedLength_3 = value;
	}

	inline static int32_t get_offset_of_changeValueStrippedLength_4() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___changeValueStrippedLength_4)); }
	inline int32_t get_changeValueStrippedLength_4() const { return ___changeValueStrippedLength_4; }
	inline int32_t* get_address_of_changeValueStrippedLength_4() { return &___changeValueStrippedLength_4; }
	inline void set_changeValueStrippedLength_4(int32_t value)
	{
		___changeValueStrippedLength_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
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


// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___startValue_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startValue_57() const { return ___startValue_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___endValue_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValue_58() const { return ___endValue_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___changeValue_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___getter_61)); }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___setter_62)); }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___plugOptions_60)); }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  get_plugOptions_60() const { return ___plugOptions_60; }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___getter_61)); }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___setter_62)); }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___startValue_57)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_startValue_57() const { return ___startValue_57; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___endValue_58)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_endValue_58() const { return ___endValue_58; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___changeValue_59)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_changeValue_59() const { return ___changeValue_59; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___plugOptions_60)); }
	inline RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  get_plugOptions_60() const { return ___plugOptions_60; }
	inline RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___getter_61)); }
	inline DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___setter_62)); }
	inline DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___startValue_57)); }
	inline float get_startValue_57() const { return ___startValue_57; }
	inline float* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(float value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___endValue_58)); }
	inline float get_endValue_58() const { return ___endValue_58; }
	inline float* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(float value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___changeValue_59)); }
	inline float get_changeValue_59() const { return ___changeValue_59; }
	inline float* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(float value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___plugOptions_60)); }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  get_plugOptions_60() const { return ___plugOptions_60; }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___getter_61)); }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___setter_62)); }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	String_t* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	String_t* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	String_t* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4EF54A0D620DB58586CC048F3290190E1E66339E * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t799A371617C251DD098A7348B29EA83630A4C691 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tACAA0DE54A0FE8DEF7F6A70B39DD83161D49D65A * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___startValue_57)); }
	inline String_t* get_startValue_57() const { return ___startValue_57; }
	inline String_t** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(String_t* value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___endValue_58)); }
	inline String_t* get_endValue_58() const { return ___endValue_58; }
	inline String_t** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(String_t* value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___changeValue_59)); }
	inline String_t* get_changeValue_59() const { return ___changeValue_59; }
	inline String_t** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(String_t* value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___plugOptions_60)); }
	inline StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  get_plugOptions_60() const { return ___plugOptions_60; }
	inline StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___scrambledChars_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___getter_61)); }
	inline DOGetter_1_t4EF54A0D620DB58586CC048F3290190E1E66339E * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t4EF54A0D620DB58586CC048F3290190E1E66339E ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t4EF54A0D620DB58586CC048F3290190E1E66339E * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___setter_62)); }
	inline DOSetter_1_t799A371617C251DD098A7348B29EA83630A4C691 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t799A371617C251DD098A7348B29EA83630A4C691 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t799A371617C251DD098A7348B29EA83630A4C691 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tACAA0DE54A0FE8DEF7F6A70B39DD83161D49D65A * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tACAA0DE54A0FE8DEF7F6A70B39DD83161D49D65A ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tACAA0DE54A0FE8DEF7F6A70B39DD83161D49D65A * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___startValue_57)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startValue_57() const { return ___startValue_57; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___endValue_58)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValue_58() const { return ___endValue_58; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___changeValue_59)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___getter_61)); }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___setter_62)); }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___plugOptions_60)); }
	inline SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_9;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_10;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_11;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnRewind
	bool ___hasOnRewind_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onStart_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPlay_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onUpdate_15;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onStepComplete_16;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onComplete_17;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onTweenCreated_18;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onRewind
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onRewind_19;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween_20;

public:
	inline static int32_t get_offset_of_updateType_4() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___updateType_4)); }
	inline int32_t get_updateType_4() const { return ___updateType_4; }
	inline int32_t* get_address_of_updateType_4() { return &___updateType_4; }
	inline void set_updateType_4(int32_t value)
	{
		___updateType_4 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_5() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___isSpeedBased_5)); }
	inline bool get_isSpeedBased_5() const { return ___isSpeedBased_5; }
	inline bool* get_address_of_isSpeedBased_5() { return &___isSpeedBased_5; }
	inline void set_isSpeedBased_5(bool value)
	{
		___isSpeedBased_5 = value;
	}

	inline static int32_t get_offset_of_hasOnStart_6() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnStart_6)); }
	inline bool get_hasOnStart_6() const { return ___hasOnStart_6; }
	inline bool* get_address_of_hasOnStart_6() { return &___hasOnStart_6; }
	inline void set_hasOnStart_6(bool value)
	{
		___hasOnStart_6 = value;
	}

	inline static int32_t get_offset_of_hasOnPlay_7() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnPlay_7)); }
	inline bool get_hasOnPlay_7() const { return ___hasOnPlay_7; }
	inline bool* get_address_of_hasOnPlay_7() { return &___hasOnPlay_7; }
	inline void set_hasOnPlay_7(bool value)
	{
		___hasOnPlay_7 = value;
	}

	inline static int32_t get_offset_of_hasOnUpdate_8() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnUpdate_8)); }
	inline bool get_hasOnUpdate_8() const { return ___hasOnUpdate_8; }
	inline bool* get_address_of_hasOnUpdate_8() { return &___hasOnUpdate_8; }
	inline void set_hasOnUpdate_8(bool value)
	{
		___hasOnUpdate_8 = value;
	}

	inline static int32_t get_offset_of_hasOnStepComplete_9() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnStepComplete_9)); }
	inline bool get_hasOnStepComplete_9() const { return ___hasOnStepComplete_9; }
	inline bool* get_address_of_hasOnStepComplete_9() { return &___hasOnStepComplete_9; }
	inline void set_hasOnStepComplete_9(bool value)
	{
		___hasOnStepComplete_9 = value;
	}

	inline static int32_t get_offset_of_hasOnComplete_10() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnComplete_10)); }
	inline bool get_hasOnComplete_10() const { return ___hasOnComplete_10; }
	inline bool* get_address_of_hasOnComplete_10() { return &___hasOnComplete_10; }
	inline void set_hasOnComplete_10(bool value)
	{
		___hasOnComplete_10 = value;
	}

	inline static int32_t get_offset_of_hasOnTweenCreated_11() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnTweenCreated_11)); }
	inline bool get_hasOnTweenCreated_11() const { return ___hasOnTweenCreated_11; }
	inline bool* get_address_of_hasOnTweenCreated_11() { return &___hasOnTweenCreated_11; }
	inline void set_hasOnTweenCreated_11(bool value)
	{
		___hasOnTweenCreated_11 = value;
	}

	inline static int32_t get_offset_of_hasOnRewind_12() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___hasOnRewind_12)); }
	inline bool get_hasOnRewind_12() const { return ___hasOnRewind_12; }
	inline bool* get_address_of_hasOnRewind_12() { return &___hasOnRewind_12; }
	inline void set_hasOnRewind_12(bool value)
	{
		___hasOnRewind_12 = value;
	}

	inline static int32_t get_offset_of_onStart_13() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onStart_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onStart_13() const { return ___onStart_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onStart_13() { return &___onStart_13; }
	inline void set_onStart_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onStart_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPlay_14() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onPlay_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPlay_14() const { return ___onPlay_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPlay_14() { return &___onPlay_14; }
	inline void set_onPlay_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPlay_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_14), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_15() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onUpdate_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onUpdate_15() const { return ___onUpdate_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onUpdate_15() { return &___onUpdate_15; }
	inline void set_onUpdate_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_16() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onStepComplete_16)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onStepComplete_16() const { return ___onStepComplete_16; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onStepComplete_16() { return &___onStepComplete_16; }
	inline void set_onStepComplete_16(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onStepComplete_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_16), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_17() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onComplete_17)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onComplete_17() const { return ___onComplete_17; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onComplete_17() { return &___onComplete_17; }
	inline void set_onComplete_17(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onTweenCreated_18() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onTweenCreated_18)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onTweenCreated_18() const { return ___onTweenCreated_18; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onTweenCreated_18() { return &___onTweenCreated_18; }
	inline void set_onTweenCreated_18(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onTweenCreated_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTweenCreated_18), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_19() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___onRewind_19)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onRewind_19() const { return ___onRewind_19; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onRewind_19() { return &___onRewind_19; }
	inline void set_onRewind_19(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onRewind_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_19), (void*)value);
	}

	inline static int32_t get_offset_of_tween_20() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7, ___tween_20)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_tween_20() const { return ___tween_20; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_tween_20() { return &___tween_20; }
	inline void set_tween_20(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___tween_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tween_20), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490  : public ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7
{
public:
	// System.Boolean DG.Tweening.DOTweenAnimation::targetIsSelf
	bool ___targetIsSelf_22;
	// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::targetGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetGO_23;
	// System.Boolean DG.Tweening.DOTweenAnimation::tweenTargetIsTargetGO
	bool ___tweenTargetIsTargetGO_24;
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_25;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_26;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_27;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___easeCurve_28;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_29;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_30;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_31;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_32;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_33;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_34;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_35;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoGenerate
	bool ___autoGenerate_36;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_37;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_38;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___target_39;
	// DG.Tweening.DOTweenAnimation/AnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_40;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_41;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_42;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_43;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_44;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_45;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValueV3_46;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValueV2_47;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValueColor_48;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_49;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValueRect_50;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___endValueTransform_51;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_52;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool1
	bool ___optionalBool1_53;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_54;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_55;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_56;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_57;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_58;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenAutoGenerationCalled
	bool ____tweenAutoGenerationCalled_59;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_60;

public:
	inline static int32_t get_offset_of_targetIsSelf_22() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___targetIsSelf_22)); }
	inline bool get_targetIsSelf_22() const { return ___targetIsSelf_22; }
	inline bool* get_address_of_targetIsSelf_22() { return &___targetIsSelf_22; }
	inline void set_targetIsSelf_22(bool value)
	{
		___targetIsSelf_22 = value;
	}

	inline static int32_t get_offset_of_targetGO_23() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___targetGO_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_targetGO_23() const { return ___targetGO_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_targetGO_23() { return &___targetGO_23; }
	inline void set_targetGO_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___targetGO_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetGO_23), (void*)value);
	}

	inline static int32_t get_offset_of_tweenTargetIsTargetGO_24() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___tweenTargetIsTargetGO_24)); }
	inline bool get_tweenTargetIsTargetGO_24() const { return ___tweenTargetIsTargetGO_24; }
	inline bool* get_address_of_tweenTargetIsTargetGO_24() { return &___tweenTargetIsTargetGO_24; }
	inline void set_tweenTargetIsTargetGO_24(bool value)
	{
		___tweenTargetIsTargetGO_24 = value;
	}

	inline static int32_t get_offset_of_delay_25() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___delay_25)); }
	inline float get_delay_25() const { return ___delay_25; }
	inline float* get_address_of_delay_25() { return &___delay_25; }
	inline void set_delay_25(float value)
	{
		___delay_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_easeType_27() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___easeType_27)); }
	inline int32_t get_easeType_27() const { return ___easeType_27; }
	inline int32_t* get_address_of_easeType_27() { return &___easeType_27; }
	inline void set_easeType_27(int32_t value)
	{
		___easeType_27 = value;
	}

	inline static int32_t get_offset_of_easeCurve_28() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___easeCurve_28)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_easeCurve_28() const { return ___easeCurve_28; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_easeCurve_28() { return &___easeCurve_28; }
	inline void set_easeCurve_28(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___easeCurve_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___easeCurve_28), (void*)value);
	}

	inline static int32_t get_offset_of_loopType_29() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___loopType_29)); }
	inline int32_t get_loopType_29() const { return ___loopType_29; }
	inline int32_t* get_address_of_loopType_29() { return &___loopType_29; }
	inline void set_loopType_29(int32_t value)
	{
		___loopType_29 = value;
	}

	inline static int32_t get_offset_of_loops_30() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___loops_30)); }
	inline int32_t get_loops_30() const { return ___loops_30; }
	inline int32_t* get_address_of_loops_30() { return &___loops_30; }
	inline void set_loops_30(int32_t value)
	{
		___loops_30 = value;
	}

	inline static int32_t get_offset_of_id_31() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___id_31)); }
	inline String_t* get_id_31() const { return ___id_31; }
	inline String_t** get_address_of_id_31() { return &___id_31; }
	inline void set_id_31(String_t* value)
	{
		___id_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_31), (void*)value);
	}

	inline static int32_t get_offset_of_isRelative_32() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___isRelative_32)); }
	inline bool get_isRelative_32() const { return ___isRelative_32; }
	inline bool* get_address_of_isRelative_32() { return &___isRelative_32; }
	inline void set_isRelative_32(bool value)
	{
		___isRelative_32 = value;
	}

	inline static int32_t get_offset_of_isFrom_33() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___isFrom_33)); }
	inline bool get_isFrom_33() const { return ___isFrom_33; }
	inline bool* get_address_of_isFrom_33() { return &___isFrom_33; }
	inline void set_isFrom_33(bool value)
	{
		___isFrom_33 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_34() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___isIndependentUpdate_34)); }
	inline bool get_isIndependentUpdate_34() const { return ___isIndependentUpdate_34; }
	inline bool* get_address_of_isIndependentUpdate_34() { return &___isIndependentUpdate_34; }
	inline void set_isIndependentUpdate_34(bool value)
	{
		___isIndependentUpdate_34 = value;
	}

	inline static int32_t get_offset_of_autoKill_35() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___autoKill_35)); }
	inline bool get_autoKill_35() const { return ___autoKill_35; }
	inline bool* get_address_of_autoKill_35() { return &___autoKill_35; }
	inline void set_autoKill_35(bool value)
	{
		___autoKill_35 = value;
	}

	inline static int32_t get_offset_of_autoGenerate_36() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___autoGenerate_36)); }
	inline bool get_autoGenerate_36() const { return ___autoGenerate_36; }
	inline bool* get_address_of_autoGenerate_36() { return &___autoGenerate_36; }
	inline void set_autoGenerate_36(bool value)
	{
		___autoGenerate_36 = value;
	}

	inline static int32_t get_offset_of_isActive_37() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___isActive_37)); }
	inline bool get_isActive_37() const { return ___isActive_37; }
	inline bool* get_address_of_isActive_37() { return &___isActive_37; }
	inline void set_isActive_37(bool value)
	{
		___isActive_37 = value;
	}

	inline static int32_t get_offset_of_isValid_38() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___isValid_38)); }
	inline bool get_isValid_38() const { return ___isValid_38; }
	inline bool* get_address_of_isValid_38() { return &___isValid_38; }
	inline void set_isValid_38(bool value)
	{
		___isValid_38 = value;
	}

	inline static int32_t get_offset_of_target_39() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___target_39)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_target_39() const { return ___target_39; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_target_39() { return &___target_39; }
	inline void set_target_39(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___target_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_39), (void*)value);
	}

	inline static int32_t get_offset_of_animationType_40() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___animationType_40)); }
	inline int32_t get_animationType_40() const { return ___animationType_40; }
	inline int32_t* get_address_of_animationType_40() { return &___animationType_40; }
	inline void set_animationType_40(int32_t value)
	{
		___animationType_40 = value;
	}

	inline static int32_t get_offset_of_targetType_41() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___targetType_41)); }
	inline int32_t get_targetType_41() const { return ___targetType_41; }
	inline int32_t* get_address_of_targetType_41() { return &___targetType_41; }
	inline void set_targetType_41(int32_t value)
	{
		___targetType_41 = value;
	}

	inline static int32_t get_offset_of_forcedTargetType_42() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___forcedTargetType_42)); }
	inline int32_t get_forcedTargetType_42() const { return ___forcedTargetType_42; }
	inline int32_t* get_address_of_forcedTargetType_42() { return &___forcedTargetType_42; }
	inline void set_forcedTargetType_42(int32_t value)
	{
		___forcedTargetType_42 = value;
	}

	inline static int32_t get_offset_of_autoPlay_43() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___autoPlay_43)); }
	inline bool get_autoPlay_43() const { return ___autoPlay_43; }
	inline bool* get_address_of_autoPlay_43() { return &___autoPlay_43; }
	inline void set_autoPlay_43(bool value)
	{
		___autoPlay_43 = value;
	}

	inline static int32_t get_offset_of_useTargetAsV3_44() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___useTargetAsV3_44)); }
	inline bool get_useTargetAsV3_44() const { return ___useTargetAsV3_44; }
	inline bool* get_address_of_useTargetAsV3_44() { return &___useTargetAsV3_44; }
	inline void set_useTargetAsV3_44(bool value)
	{
		___useTargetAsV3_44 = value;
	}

	inline static int32_t get_offset_of_endValueFloat_45() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueFloat_45)); }
	inline float get_endValueFloat_45() const { return ___endValueFloat_45; }
	inline float* get_address_of_endValueFloat_45() { return &___endValueFloat_45; }
	inline void set_endValueFloat_45(float value)
	{
		___endValueFloat_45 = value;
	}

	inline static int32_t get_offset_of_endValueV3_46() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueV3_46)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValueV3_46() const { return ___endValueV3_46; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValueV3_46() { return &___endValueV3_46; }
	inline void set_endValueV3_46(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValueV3_46 = value;
	}

	inline static int32_t get_offset_of_endValueV2_47() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueV2_47)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValueV2_47() const { return ___endValueV2_47; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValueV2_47() { return &___endValueV2_47; }
	inline void set_endValueV2_47(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValueV2_47 = value;
	}

	inline static int32_t get_offset_of_endValueColor_48() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueColor_48)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValueColor_48() const { return ___endValueColor_48; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValueColor_48() { return &___endValueColor_48; }
	inline void set_endValueColor_48(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValueColor_48 = value;
	}

	inline static int32_t get_offset_of_endValueString_49() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueString_49)); }
	inline String_t* get_endValueString_49() const { return ___endValueString_49; }
	inline String_t** get_address_of_endValueString_49() { return &___endValueString_49; }
	inline void set_endValueString_49(String_t* value)
	{
		___endValueString_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValueString_49), (void*)value);
	}

	inline static int32_t get_offset_of_endValueRect_50() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueRect_50)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_endValueRect_50() const { return ___endValueRect_50; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_endValueRect_50() { return &___endValueRect_50; }
	inline void set_endValueRect_50(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___endValueRect_50 = value;
	}

	inline static int32_t get_offset_of_endValueTransform_51() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___endValueTransform_51)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_endValueTransform_51() const { return ___endValueTransform_51; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_endValueTransform_51() { return &___endValueTransform_51; }
	inline void set_endValueTransform_51(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___endValueTransform_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValueTransform_51), (void*)value);
	}

	inline static int32_t get_offset_of_optionalBool0_52() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalBool0_52)); }
	inline bool get_optionalBool0_52() const { return ___optionalBool0_52; }
	inline bool* get_address_of_optionalBool0_52() { return &___optionalBool0_52; }
	inline void set_optionalBool0_52(bool value)
	{
		___optionalBool0_52 = value;
	}

	inline static int32_t get_offset_of_optionalBool1_53() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalBool1_53)); }
	inline bool get_optionalBool1_53() const { return ___optionalBool1_53; }
	inline bool* get_address_of_optionalBool1_53() { return &___optionalBool1_53; }
	inline void set_optionalBool1_53(bool value)
	{
		___optionalBool1_53 = value;
	}

	inline static int32_t get_offset_of_optionalFloat0_54() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalFloat0_54)); }
	inline float get_optionalFloat0_54() const { return ___optionalFloat0_54; }
	inline float* get_address_of_optionalFloat0_54() { return &___optionalFloat0_54; }
	inline void set_optionalFloat0_54(float value)
	{
		___optionalFloat0_54 = value;
	}

	inline static int32_t get_offset_of_optionalInt0_55() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalInt0_55)); }
	inline int32_t get_optionalInt0_55() const { return ___optionalInt0_55; }
	inline int32_t* get_address_of_optionalInt0_55() { return &___optionalInt0_55; }
	inline void set_optionalInt0_55(int32_t value)
	{
		___optionalInt0_55 = value;
	}

	inline static int32_t get_offset_of_optionalRotationMode_56() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalRotationMode_56)); }
	inline int32_t get_optionalRotationMode_56() const { return ___optionalRotationMode_56; }
	inline int32_t* get_address_of_optionalRotationMode_56() { return &___optionalRotationMode_56; }
	inline void set_optionalRotationMode_56(int32_t value)
	{
		___optionalRotationMode_56 = value;
	}

	inline static int32_t get_offset_of_optionalScrambleMode_57() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalScrambleMode_57)); }
	inline int32_t get_optionalScrambleMode_57() const { return ___optionalScrambleMode_57; }
	inline int32_t* get_address_of_optionalScrambleMode_57() { return &___optionalScrambleMode_57; }
	inline void set_optionalScrambleMode_57(int32_t value)
	{
		___optionalScrambleMode_57 = value;
	}

	inline static int32_t get_offset_of_optionalString_58() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ___optionalString_58)); }
	inline String_t* get_optionalString_58() const { return ___optionalString_58; }
	inline String_t** get_address_of_optionalString_58() { return &___optionalString_58; }
	inline void set_optionalString_58(String_t* value)
	{
		___optionalString_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalString_58), (void*)value);
	}

	inline static int32_t get_offset_of__tweenAutoGenerationCalled_59() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ____tweenAutoGenerationCalled_59)); }
	inline bool get__tweenAutoGenerationCalled_59() const { return ____tweenAutoGenerationCalled_59; }
	inline bool* get_address_of__tweenAutoGenerationCalled_59() { return &____tweenAutoGenerationCalled_59; }
	inline void set__tweenAutoGenerationCalled_59(bool value)
	{
		____tweenAutoGenerationCalled_59 = value;
	}

	inline static int32_t get_offset_of__playCount_60() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490, ____playCount_60)); }
	inline int32_t get__playCount_60() const { return ____playCount_60; }
	inline int32_t* get_address_of__playCount_60() { return &____playCount_60; }
	inline void set__playCount_60(int32_t value)
	{
		____playCount_60 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>


// System.Collections.Generic.List`1<DG.Tweening.Tween>

struct List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1_StaticFields, ____emptyArray_5)); }
	inline TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TweenU5BU5D_tFDCF76461360E13F2EF21FD2FB026AB12B4A3847* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<DG.Tweening.Tween>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// DG.Tweening.DOTweenAnimationExtensions


// DG.Tweening.DOTweenAnimationExtensions


// DG.Tweening.DOTweenProShortcuts


// DG.Tweening.DOTweenProShortcuts


// DG.Tweening.Core.Debugger

struct Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_StaticFields
{
public:
	// System.Int32 DG.Tweening.Core.Debugger::_logPriority
	int32_t ____logPriority_0;

public:
	inline static int32_t get_offset_of__logPriority_0() { return static_cast<int32_t>(offsetof(Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_StaticFields, ____logPriority_0)); }
	inline int32_t get__logPriority_0() const { return ____logPriority_0; }
	inline int32_t* get_address_of__logPriority_0() { return &____logPriority_0; }
	inline void set__logPriority_0(int32_t value)
	{
		____logPriority_0 = value;
	}
};


// DG.Tweening.Core.Debugger


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


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.ValueType


// System.ValueType


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0


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


// DG.Tweening.Plugins.Options.ColorOptions


// DG.Tweening.Plugins.Options.ColorOptions


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


// DG.Tweening.Plugins.Options.FloatOptions


// DG.Tweening.Plugins.Options.FloatOptions


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


// UnityEngine.Keyframe


// UnityEngine.Keyframe


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// UnityEngine.Rect


// UnityEngine.Rect


// DG.Tweening.Plugins.Options.RectOptions


// DG.Tweening.Plugins.Options.RectOptions


// System.Single


// System.Single


// UnityEngine.Events.UnityEvent


// UnityEngine.Events.UnityEvent


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


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// System.Nullable`1<UnityEngine.Vector3>


// System.Nullable`1<UnityEngine.Vector3>


// UnityEngine.AnimationCurve


// UnityEngine.AnimationCurve


// DG.Tweening.AxisConstraint


// DG.Tweening.AxisConstraint


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// System.Delegate


// System.Delegate


// DG.Tweening.Ease


// DG.Tweening.Ease


// DG.Tweening.LoopType


// DG.Tweening.LoopType


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


// DG.Tweening.RotateMode


// DG.Tweening.RotateMode


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// DG.Tweening.ScrambleMode


// DG.Tweening.ScrambleMode


// DG.Tweening.Core.Enums.SpecialStartupMode


// DG.Tweening.Core.Enums.SpecialStartupMode


// DG.Tweening.SpiralMode


// DG.Tweening.SpiralMode


// DG.Tweening.Plugins.SpiralPlugin

struct SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_StaticFields
{
public:
	// UnityEngine.Vector3 DG.Tweening.Plugins.SpiralPlugin::DefaultDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DefaultDirection_0;

public:
	inline static int32_t get_offset_of_DefaultDirection_0() { return static_cast<int32_t>(offsetof(SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_StaticFields, ___DefaultDirection_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DefaultDirection_0() const { return ___DefaultDirection_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DefaultDirection_0() { return &___DefaultDirection_0; }
	inline void set_DefaultDirection_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DefaultDirection_0 = value;
	}
};


// DG.Tweening.Plugins.SpiralPlugin


// DG.Tweening.TweenType


// DG.Tweening.TweenType


// DG.Tweening.UpdateType


// DG.Tweening.UpdateType


// DG.Tweening.DOTweenAnimation/AnimationType


// DG.Tweening.DOTweenAnimation/AnimationType


// DG.Tweening.DOTweenAnimation/TargetType


// DG.Tweening.DOTweenAnimation/TargetType


// DG.Tweening.Core.ABSSequentiable


// DG.Tweening.Core.ABSSequentiable


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// UnityEngine.Material


// UnityEngine.Material


// System.MulticastDelegate


// System.MulticastDelegate


// DG.Tweening.Plugins.Options.QuaternionOptions


// DG.Tweening.Plugins.Options.QuaternionOptions


// DG.Tweening.Plugins.SpiralOptions


// DG.Tweening.Plugins.SpiralOptions


// DG.Tweening.Plugins.Options.StringOptions


// DG.Tweening.Plugins.Options.StringOptions


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


// DG.Tweening.Plugins.Options.VectorOptions


// DG.Tweening.Plugins.Options.VectorOptions


// System.Action`1<DG.Tweening.DOTweenAnimation>


// System.Action`1<DG.Tweening.DOTweenAnimation>


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.Renderer


// UnityEngine.Renderer


// UnityEngine.Rigidbody


// UnityEngine.Rigidbody


// UnityEngine.Rigidbody2D


// UnityEngine.Rigidbody2D


// UnityEngine.Transform


// UnityEngine.Transform


// DG.Tweening.Tween


// DG.Tweening.Tween


// DG.Tweening.TweenCallback


// DG.Tweening.TweenCallback


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


// UnityEngine.CanvasGroup


// UnityEngine.CanvasGroup


// UnityEngine.Light


// UnityEngine.Light


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.RectTransform

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.RectTransform


// UnityEngine.SpriteRenderer


// UnityEngine.SpriteRenderer


// DG.Tweening.Tweener


// DG.Tweening.Tweener


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>


// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>


// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>


// DG.Tweening.Core.ABSAnimationComponent


// DG.Tweening.Core.ABSAnimationComponent


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// DG.Tweening.DOTweenAnimation

struct DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields
{
public:
	// System.Action`1<DG.Tweening.DOTweenAnimation> DG.Tweening.DOTweenAnimation::OnReset
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * ___OnReset_21;

public:
	inline static int32_t get_offset_of_OnReset_21() { return static_cast<int32_t>(offsetof(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields, ___OnReset_21)); }
	inline Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * get_OnReset_21() const { return ___OnReset_21; }
	inline Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 ** get_address_of_OnReset_21() { return &___OnReset_21; }
	inline void set_OnReset_21(Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * value)
	{
		___OnReset_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReset_21), (void*)value);
	}
};


// DG.Tweening.DOTweenAnimation


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * m_Items[1];

public:
	inline DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::From<System.Object>(!!0,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_From_TisRuntimeObject_m31681D16357C18699C15CA513F5F4D5BED4A3064_gshared (RuntimeObject * ___t0, bool ___isRelative1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(!!0,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetRelative_TisRuntimeObject_m7E89DBB486AE4172BA743EDC4E254F5425226D9F_gshared (RuntimeObject * ___t0, bool ___isRelative1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(!!0,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetTarget_TisRuntimeObject_m348019776BB776AFAF066427DB6C8C503E19AA3C_gshared (RuntimeObject * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(!!0,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetDelay_TisRuntimeObject_mA0A57ACEFDB1C34B13CA947E8A9D1BCFEACA5FB9_gshared (RuntimeObject * ___t0, float ___delay1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(!!0,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetLoops_TisRuntimeObject_m8305C829571880EFD942075BE05E73584EE808B0_gshared (RuntimeObject * ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(!!0,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_mBC2BE661FF052ACB62B145ADB61B00D4EA7336F6_gshared (RuntimeObject * ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnKill_TisRuntimeObject_m92A44B4E30985534F681743E24BD20AD6B0FE1F9_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m94B3A1EF2372D0D567CB258FF7290A9F2F30A103_gshared (RuntimeObject * ___t0, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(!!0,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetEase_TisRuntimeObject_mB2C54F5DBA4926906BDB61B5F06C70C1221982EF_gshared (RuntimeObject * ___t0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animCurve1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(!!0,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetEase_TisRuntimeObject_m0CE01877286232337099A5984F4026ED9062C24E_gshared (RuntimeObject * ___t0, int32_t ___ease1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(!!0,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetId_TisRuntimeObject_mA3434AFF4E5193630C60DB083F16EE153795B01F_gshared (RuntimeObject * ___t0, String_t* ___stringId1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(!!0,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m3137DCB759932441E73AE03B043295E7E27BF1A9_gshared (RuntimeObject * ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnStart_TisRuntimeObject_m9B26CF2D643A78C5B808A523C552AAAE79627F74_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnPlay_TisRuntimeObject_mD7D9BA96D2CEC6A63617026986ABB09ECE41FC9D_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m636012BA6763EA9FC4F77CBA113A704FB532F686_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_m4C6EF762CAFB51E8B7C746F0C33F9CAADC442D6E_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnComplete_TisRuntimeObject_mD4AEFCA1399D021AEA45EC24901F039F24F30FC4_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnRewind<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnRewind_TisRuntimeObject_m3665AAFEF4284B57E15BB86A41847A6F94229EFF_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenExtensions::Play<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenExtensions_Play_TisRuntimeObject_mC45720BF53588DCBDA0197ABDA462A431B9E6243_gshared (RuntimeObject * ___t0, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenExtensions::Pause<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenExtensions_Pause_TisRuntimeObject_mDEA230E87F79E355096D588635D0B355C3E417FA_gshared (RuntimeObject * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponents_TisRuntimeObject_mAB26971A1F37F81EEEF20F7897AA6FAE3B33779E_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_gshared (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_gshared (DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<!!0,!!1,!!2> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<!!0,!!1,!!2>,DG.Tweening.Core.DOGetter`1<!!0>,DG.Tweening.Core.DOSetter`1<!!0>,!!1,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_gshared (ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * ___plugin0, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter1, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue3, float ___duration4, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<DG.Tweening.DOTweenAnimation>::Invoke(!0)
inline void Action_1_Invoke_mFBF948A98AC682381D0BF1F9986717F09A15F1A7 (Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * __this, DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *, DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, bool ___regenerateIfExists0, bool ___andPlay1, const RuntimeMethod* method);
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m0C756D50A5D163CF79ED0E2FD772A000D0E7013B (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * ___anim0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mEB8256975EAC7387BA47E6A7B01F3DFC0C597B2A (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___complete1, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_m6EDBC3C768C109A2DE9B550B419EBA9BF41695C8 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___includeDelay1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * DOTweenAnimation_GetTweenGO_m7AD749AB5948BDD90B4ABC3B2F09603025D618D7 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mD220C04BEFF3124DCBEC5A74E175A83D9669CCDE (Type_t * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Utils_SwitchToRectTransform_m1C1AD12937B880AD34E72E82CA857CEB0063D733 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___from0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___to1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOMove_mB2D750908EA648BD0A77E2432C96B734809205FD (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * DOTweenModuleUI_DOAnchorPos3D_mF3833C1E03F161F1A1A2344FB7CE44DBA87F906F (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * DOTweenModulePhysics_DOMove_mB956D3BE2D7F510490AEF526DBE2E439799D1836 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * DOTweenModulePhysics2D_DOMove_m90123D8EB1B3A9C61E6DA7FA246C776F6564C3D9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOLocalMove_mE5AB4B1AE17C290B9A75C46C4B3F84D380DCEF0C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ShortcutExtensions_DORotate_m0363103FEFCCEC3A787934CB58107D88AAF796A9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTweenModulePhysics::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * DOTweenModulePhysics_DORotate_m54D763132B07B93470BA09D29BB858F153FB8BB8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModulePhysics2D::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * DOTweenModulePhysics2D_DORotate_m6A0FAD2C7C1CA64ECDEC4D4242590FB1FC9194D8 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DOLocalRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ShortcutExtensions_DOLocalRotate_m25FF7B73D48722D4EBBBDA1A8CA3B8D0354BD662 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOScale_m5A95C0F6E6F60A04BCC319FBF25133C678E30CD1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * DOTweenModuleUI_DOSizeDelta_m4EE4D96928CB13EB60B573EFCB44841231A1B270 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ShortcutExtensions_DOColor_m9F7CF07F0B26868323BC372D354328CB51441F43 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Light,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ShortcutExtensions_DOColor_mC26F89F30CD3132F7A595C0FAB24379D95B63F9E (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleSprite_DOColor_m415F039AE21D7D99B9CA797F7B3B76EA95C02F6F (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOColor_m8D89302DC2412EF0316046C1C3D710DA01A1122A (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOColor_m5CE73555425690E9D26030987FA0460B03945D04 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOFade(UnityEngine.Material,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ShortcutExtensions_DOFade_m4C094B8C2404B1D5CB50A4DF89881F9ADD75E4BD (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOIntensity(UnityEngine.Light,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ShortcutExtensions_DOIntensity_m9DB6DAE279916A1571C8361CB512069CC0C5A701 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleSprite_DOFade_m7162BAD06F2803989192A61B56E07330D370DB5E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOFade_m8F85FBBB1968155095CF5225C30B28D05B182470 (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOFade_m349FBF51EB83C59F1C7547FE4FF5C3AED41CC9B2 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * DOTweenModuleUI_DOFade_m1F136A23B10904B51D6805B2A7E6ED0D50745825 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions> DG.Tweening.DOTweenModuleUI::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D * DOTweenModuleUI_DOText_mD0CB18346B87B72055EA8C856267744988AE4473 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOPunchPosition_m88D4316335B70E0401AEF53BA68EBC67390A2FCE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * DOTweenModuleUI_DOPunchAnchorPos_mAD4C7DCC902E038D006C3B36E740215B1961A165 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOPunchScale_mC0D526D2C10C817F0086895997FB64F440AD3337 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchRotation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOPunchRotation_m5D192078F6D4A8D6E5A37002FE22AACB5A80732F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOShakePosition_mE12C9B10830A20B6A192F34CABC86AC1434CD691 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___duration1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * DOTweenModuleUI_DOShakeAnchorPos_m9DFB15B287C12A99D0BC1D17871302F1B3ED489A (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target0, float ___duration1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeScale(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOShakeScale_mCE9923EC587995D9C6E66F4D2C0F38A2295037CA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___duration1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeRotation(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOShakeRotation_mF836DCE57021DAC13E983374704E0D23EA002E64 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___duration1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOAspect(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ShortcutExtensions_DOAspect_m1561764D9AC57E0828E42742D3747FE4B4824CB1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Camera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ShortcutExtensions_DOColor_mAA8796F1C9C1442EA0C10A3345FD85F7A4485168 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOFieldOfView(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ShortcutExtensions_DOFieldOfView_mA5FCCD9C8E916CF38952D43B299A79A8AF9FE38A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOOrthoSize(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ShortcutExtensions_DOOrthoSize_m8E1D1839DBA66037FCC46CD2C106B52B559AE93D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DOPixelRect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ShortcutExtensions_DOPixelRect_m60D8C519216E51B4C1E87AB5F4DBF49D06BC8924 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DORect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ShortcutExtensions_DORect_mF36B96DAEDE4D5AE852EBA425CE3FE49B57A1F07 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___target0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValue1, float ___duration2, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::From<DG.Tweening.Tweener>(!!0,System.Boolean)
inline Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenSettingsExtensions_From_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m5E90E0EBA89A3B6C32AE2DA3DC80DA9787B19004 (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * (*) (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool, const RuntimeMethod*))TweenSettingsExtensions_From_TisRuntimeObject_m31681D16357C18699C15CA513F5F4D5BED4A3064_gshared)(___t0, ___isRelative1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetRelative<DG.Tweening.Tween>(!!0,System.Boolean)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetRelative_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mED411B457C01E8CA7D8ED9212226874DC396B979 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, bool, const RuntimeMethod*))TweenSettingsExtensions_SetRelative_TisRuntimeObject_m7E89DBB486AE4172BA743EDC4E254F5425226D9F_gshared)(___t0, ___isRelative1, method);
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tween>(!!0,System.Object)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetTarget_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA7113D105824D18724C892CB64602B14FF951216 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, RuntimeObject *, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m348019776BB776AFAF066427DB6C8C503E19AA3C_gshared)(___t0, ___target1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetDelay<DG.Tweening.Tween>(!!0,System.Single)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetDelay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7469B5D0A9A9FB2EDD20B377B2B22A0AAB6901E9 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, float ___delay1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, float, const RuntimeMethod*))TweenSettingsExtensions_SetDelay_TisRuntimeObject_mA0A57ACEFDB1C34B13CA947E8A9D1BCFEACA5FB9_gshared)(___t0, ___delay1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Tween>(!!0,System.Int32,DG.Tweening.LoopType)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetLoops_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m36D9CB6713F63E6A50ADBD328E5A453B64299FD1 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m8305C829571880EFD942075BE05E73584EE808B0_gshared)(___t0, ___loops1, ___loopType2, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetAutoKill<DG.Tweening.Tween>(!!0,System.Boolean)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetAutoKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7890FD2C39FB39C7CC96711D5E38C2D55632C237 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, bool, const RuntimeMethod*))TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_mBC2BE661FF052ACB62B145ADB61B00D4EA7336F6_gshared)(___t0, ___autoKillOnCompletion1, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662 (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnKill<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mDF9C7342F90D9A63AE27F5BC563D84C571CB3C09 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnKill_TisRuntimeObject_m92A44B4E30985534F681743E24BD20AD6B0FE1F9_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetSpeedBased<DG.Tweening.Tween>(!!0)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetSpeedBased_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2181BB00E8C28C74BE24ACBB77354BD2E20F2E7 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, const RuntimeMethod*))TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m94B3A1EF2372D0D567CB258FF7290A9F2F30A103_gshared)(___t0, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(!!0,UnityEngine.AnimationCurve)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m3C986AED97042831514805B8EB75AA4D60A81EF0 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animCurve1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_mB2C54F5DBA4926906BDB61B5F06C70C1221982EF_gshared)(___t0, ___animCurve1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(!!0,DG.Tweening.Ease)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mFAC5ED7B5B01F035A4A89BEE83EA27FA3342C57A (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m0CE01877286232337099A5984F4026ED9062C24E_gshared)(___t0, ___ease1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetId<DG.Tweening.Tween>(!!0,System.String)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetId_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2FB462996C3D775E67093DD0FDFD0EDAC7F3B51 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, String_t* ___stringId1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, String_t*, const RuntimeMethod*))TweenSettingsExtensions_SetId_TisRuntimeObject_mA3434AFF4E5193630C60DB083F16EE153795B01F_gshared)(___t0, ___stringId1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetUpdate<DG.Tweening.Tween>(!!0,System.Boolean)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_SetUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m715CAA583D6F9AAC7B2D50D684B99F3DC6D8B941 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, bool, const RuntimeMethod*))TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m3137DCB759932441E73AE03B043295E7E27BF1A9_gshared)(___t0, ___isIndependentUpdate1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnStart<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnStart_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m25C3BD07778EB864EB3928A569C436F09906C9E5 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnStart_TisRuntimeObject_m9B26CF2D643A78C5B808A523C552AAAE79627F74_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnPlay<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnPlay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m0DC91313C890F409D36F845B7C857AFF9F7B6E49 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnPlay_TisRuntimeObject_mD7D9BA96D2CEC6A63617026986ABB09ECE41FC9D_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnUpdate<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE408931F33F48975F7555A1D6848797324869781 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m636012BA6763EA9FC4F77CBA113A704FB532F686_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnStepComplete<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnStepComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m1570D8636477730B63FC0605B1CF99EA43CBF437 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_m4C6EF762CAFB51E8B7C746F0C33F9CAADC442D6E_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mC01BCD93035483DC08F6681BA6DDF1F3E14E145E (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mD4AEFCA1399D021AEA45EC24901F039F24F30FC4_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::OnRewind<DG.Tweening.Tween>(!!0,DG.Tweening.TweenCallback)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenSettingsExtensions_OnRewind_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m01C02DBB682666A70A5284E256E3E22D60D23973 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnRewind_TisRuntimeObject_m3665AAFEF4284B57E15BB86A41847A6F94229EFF_gshared)(___t0, ___action1, method);
}
// !!0 DG.Tweening.TweenExtensions::Play<DG.Tweening.Tween>(!!0)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_mC45720BF53588DCBDA0197ABDA462A431B9E6243_gshared)(___t0, method);
}
// !!0 DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tween>(!!0)
inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * TweenExtensions_Pause_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE4F6594A9F21C88ACFBABF3AB75EDD4DEA5D757E (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method)
{
	return ((  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * (*) (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_mDEA230E87F79E355096D588635D0B355C3E417FA_gshared)(___t0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::.ctor()
inline void List_1__ctor_mF8875C86FFAC30CA85251C1B54879C9A33F4DF3F (List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::Add(!0)
inline void List_1_Add_m782F802BE39FD4D3D5758579703B971BC396ABB8 (List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 *, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Play(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m53FD8534D75DC36CE10ED32BB8740E5D5F8BB137 (RuntimeObject * ___targetOrId0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m74201E3BA7B961E1DAF58295EEC8262380A04915 (RuntimeObject * ___targetOrId0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_mBB200A77ED42C89F1FD83D9976313689677DE854 (RuntimeObject * ___targetOrId0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Pause_mC68F8854575C2310E18C7BC60FAD4A537E48CB4A (RuntimeObject * ___targetOrId0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::TogglePause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_TogglePause_m83353399A7FB82BAAA1A627B2C8575D50C93DBD7 (RuntimeObject * ___targetOrId0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* GameObject_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m4E77DF8AB6CF3089AB9FF2485BFE2D95068E8B39 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_mAB26971A1F37F81EEEF20F7897AA6FAE3B33779E_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m08102B99DF2C56DD69B5BC0A13E7BE2AF2771DCC (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m5215567ADC50AD7C86D992C1478FC46A52FEB26A_inline (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m9C8CD05BB0C4CEAE763C055B679695F8C9B63F81 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_m7B6F83011898AF2F763992474766A32CC525F572 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_mFB599A1231787EC78DFEF054A5E359D096D101B9 (RuntimeObject * ___targetOrId0, bool ___includeDelay1, float ___changeDelayTo2, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Complete(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Complete_m664BAC9F3C01F3759A689AC1304A108411D77B92 (RuntimeObject * ___targetOrId0, bool ___withCallbacks1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_mBC8A0B11DE32BF51D5D55454EC69180FAA32D04E (RuntimeObject * ___targetOrId0, bool ___complete1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Play(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m6458946093538C0826479CC75752DFE2385894C2 (RuntimeObject * ___target0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m62B52CB26A39E260720CE4D363C2C47F72377DEF (RuntimeObject * ___target0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_m33A9006CA4214C6695680115EF3E8D1E02DB48FD (RuntimeObject * ___target0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m039B04BF955F0D68CA49C78BE582D3A6FAF6FD18 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_m4BDA44917C59C9819C490A45DE18775A83E3B5EA (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Rewind(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Rewind_m1125E74D1DAEDE564B63FBF7C58AF270DE34A46E (RuntimeObject * ___targetOrId0, bool ___includeDelay1, const RuntimeMethod* method);
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_m4AC569563CB7222351C9073445DB0C3C2CF8FE13 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_mD934EB8B81BB8EC3D9EFED527B25031513F2BC30 (RuntimeObject * ___target0, RuntimeObject * ___id1, bool ___includeDelay2, float ___changeDelayTo3, const RuntimeMethod* method);
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_m19CBA40D2CE17306588760B26C895D3DBBFECF0C (RuntimeObject * ___target0, RuntimeObject * ___id1, bool ___complete2, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m80AFBEF2F3857F9D6A67126F4C4D9A9B9CEC5902 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m128197F25A38D7D23802A9DFC66B80E351BB76D1 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.ABSAnimationComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSAnimationComponent__ctor_mF453633C79A30A108832D3F331DAB5E4CA24B272 (ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Plugins.SpiralPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiralPlugin__ctor_m467878873C3500DB44218752941B4125FD763275 (SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m212C5524D1DCEBF6A62197AABBC9E206709600BB (U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mFEB0CB3531393F6CBE07C6E0FCB473B3311F799A (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50 (const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
inline void Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830 (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_gshared)(__this, ___value0, method);
}
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions> DG.Tweening.Plugins.SpiralPlugin::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * SpiralPlugin_Get_mD5EFBC6B6514CB9A948E879BC7805772E66E6EA3 (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081 (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733 (DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<!!0,!!1,!!2> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<!!0,!!1,!!2>,DG.Tweening.Core.DOGetter`1<!!0>,DG.Tweening.Core.DOSetter`1<!!0>,!!1,System.Single)
inline TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6 (ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * ___plugin0, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter1, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue3, float ___duration4, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * (*) (ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 *, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float, const RuntimeMethod*))DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_gshared)(___plugin0, ___getter1, ___setter2, ___endValue3, ___duration4, method);
}
// !!0 DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>>(!!0,System.Object)
inline TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A (TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * ___t0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * (*) (TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF *, RuntimeObject *, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m348019776BB776AFAF066427DB6C8C503E19AA3C_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6449FDA961297AA8A61A5BD8EE4BA3C3F4AA6096 (U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
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
// System.Void DG.Tweening.DOTweenAnimation::add_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_add_OnReset_m74F9ACE9A418FCDB4D0A365D853C11DB189F7A7A (Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_0 = NULL;
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_1 = NULL;
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_2 = NULL;
	{
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_0 = ((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_OnReset_21();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_2 = V_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19_il2cpp_TypeInfo_var));
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_5 = V_2;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_6 = V_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *>((Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 **)(((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_address_of_OnReset_21()), L_5, L_6);
		V_0 = L_7;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_8 = V_0;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)L_8) == ((RuntimeObject*)(Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::remove_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_remove_OnReset_m532FBF1E8BCA5CF9560E71F250CCEC6C96B0EBCD (Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_0 = NULL;
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_1 = NULL;
	Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * V_2 = NULL;
	{
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_0 = ((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_OnReset_21();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_2 = V_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19_il2cpp_TypeInfo_var));
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_5 = V_2;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_6 = V_1;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *>((Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 **)(((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_address_of_OnReset_21()), L_5, L_6);
		V_0 = L_7;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_8 = V_0;
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)L_8) == ((RuntimeObject*)(Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m0C756D50A5D163CF79ED0E2FD772A000D0E7013B (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * ___anim0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFBF948A98AC682381D0BF1F9986717F09A15F1A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_0 = ((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_OnReset_21();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t5A1D3CC86DD8149B27618392CCEA7461A2EB2C19 * L_1 = ((DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_il2cpp_TypeInfo_var))->get_OnReset_21();
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_2 = ___anim0;
		NullCheck(L_1);
		Action_1_Invoke_mFBF948A98AC682381D0BF1F9986717F09A15F1A7(L_1, L_2, /*hidden argument*/Action_1_Invoke_mFBF948A98AC682381D0BF1F9986717F09A15F1A7_RuntimeMethod_var);
	}

IL_0012:
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Awake_m2EF77B93319FCC7F877ADEC9D8EF29D39FE7A3E4 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (!isActive || !autoGenerate) return;
		bool L_0 = __this->get_isActive_37();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_autoGenerate_36();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!isActive || !autoGenerate) return;
		return;
	}

IL_0011:
	{
		// if (animationType != AnimationType.Move || !useTargetAsV3) {
		int32_t L_2 = __this->get_animationType_40();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->get_useTargetAsV3_44();
		if (L_3)
		{
			goto IL_0036;
		}
	}

IL_0022:
	{
		// CreateTween(false, autoPlay);
		bool L_4 = __this->get_autoPlay_43();
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)0, L_4, /*hidden argument*/NULL);
		// _tweenAutoGenerationCalled = true;
		__this->set__tweenAutoGenerationCalled_59((bool)1);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Start_m72982CB11D600EF7961317C9ED3332B0F7A6A82E (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (_tweenAutoGenerationCalled || !isActive || !autoGenerate) return;
		bool L_0 = __this->get__tweenAutoGenerationCalled_59();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_isActive_37();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_autoGenerate_36();
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// if (_tweenAutoGenerationCalled || !isActive || !autoGenerate) return;
		return;
	}

IL_0019:
	{
		// CreateTween(false, autoPlay);
		bool L_3 = __this->get_autoPlay_43();
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)0, L_3, /*hidden argument*/NULL);
		// _tweenAutoGenerationCalled = true;
		__this->set__tweenAutoGenerationCalled_59((bool)1);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Reset_m48F4407045DB1C0B4D4F8F5D733DBADFA1EB8269 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// Dispatch_OnReset(this);
		DOTweenAnimation_Dispatch_OnReset_m0C756D50A5D163CF79ED0E2FD772A000D0E7013B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_OnDestroy_mA6226503FAE27EF10142E43642D3EC0C7C86F2E2 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (tween != null && tween.active) tween.Kill();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_1 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Kill();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_3 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		TweenExtensions_Kill_mEB8256975EAC7387BA47E6A7B01F3DFC0C597B2A(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// tween = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RewindThenRecreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RewindThenRecreateTween_m3D3966CB0EEF208A8B1FF927A6A6F67F52E5A00D (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_1 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_3 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		TweenExtensions_Rewind_m6EDBC3C768C109A2DE9B550B419EBA9BF41695C8(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// CreateTween(true, false);
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RewindThenRecreateTweenAndPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RewindThenRecreateTweenAndPlay_m644EC64F6C8599FE5F5A3E99B39B51D4D366EFDD (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_1 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_3 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		TweenExtensions_Rewind_m6EDBC3C768C109A2DE9B550B419EBA9BF41695C8(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// CreateTween(true, true);
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RecreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RecreateTween_mFEAD0C3E8F0A9059AEDBE057346D875A3D0AD110 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// { CreateTween(true, false); }
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)1, (bool)0, /*hidden argument*/NULL);
		// { CreateTween(true, false); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RecreateTweenAndPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RecreateTweenAndPlay_m9C858673E3610C1BFCA96D88BCF20394F91A9DF8 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// { CreateTween(true, true); }
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)1, (bool)1, /*hidden argument*/NULL);
		// { CreateTween(true, true); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, bool ___regenerateIfExists0, bool ___andPlay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m2130CFA41530B17308434DC9734CE06B1F405566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_tA2F349FE839781469A0344CF6039B51512394275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE4F6594A9F21C88ACFBABF3AB75EDD4DEA5D757E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_From_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m5E90E0EBA89A3B6C32AE2DA3DC80DA9787B19004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mC01BCD93035483DC08F6681BA6DDF1F3E14E145E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mDF9C7342F90D9A63AE27F5BC563D84C571CB3C09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnPlay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m0DC91313C890F409D36F845B7C857AFF9F7B6E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnRewind_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m01C02DBB682666A70A5284E256E3E22D60D23973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStart_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m25C3BD07778EB864EB3928A569C436F09906C9E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStepComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m1570D8636477730B63FC0605B1CF99EA43CBF437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE408931F33F48975F7555A1D6848797324869781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAutoKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7890FD2C39FB39C7CC96711D5E38C2D55632C237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetDelay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7469B5D0A9A9FB2EDD20B377B2B22A0AAB6901E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m3C986AED97042831514805B8EB75AA4D60A81EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mFAC5ED7B5B01F035A4A89BEE83EA27FA3342C57A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetId_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2FB462996C3D775E67093DD0FDFD0EDAC7F3B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m36D9CB6713F63E6A50ADBD328E5A453B64299FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetRelative_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mED411B457C01E8CA7D8ED9212226874DC396B979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetSpeedBased_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2181BB00E8C28C74BE24ACBB77354BD2E20F2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA7113D105824D18724C892CB64602B14FF951216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m715CAA583D6F9AAC7B2D50D684B99F3DC6D8B941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852803C0E0511404910B712837FFA455156FC4CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	int32_t V_2 = 0;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_3 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_4 = NULL;
	int32_t V_5 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B47_0 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B47_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B46_0 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B46_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B48_1 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B48_2 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B51_0 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B51_1 = NULL;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B50_0 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B50_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B52_0;
	memset((&G_B52_0), 0, sizeof(G_B52_0));
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * G_B52_1 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * G_B52_2 = NULL;
	{
		// if (!isValid) {
		bool L_0 = __this->get_isValid_38();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (regenerateIfExists) { // Called manually: warn users
		bool L_1 = ___regenerateIfExists0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation isn't valid and its tween won't be created", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D, L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (tween != null) {
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_6 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// if (tween.active) {
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_7 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		NullCheck(L_7);
		bool L_8;
		L_8 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// if (regenerateIfExists) tween.Kill();
		bool L_9 = ___regenerateIfExists0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// if (regenerateIfExists) tween.Kill();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_10 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		TweenExtensions_Kill_mEB8256975EAC7387BA47E6A7B01F3DFC0C597B2A(L_10, (bool)0, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0052:
	{
		// else return;
		return;
	}

IL_0053:
	{
		// tween = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL);
	}

IL_005a:
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = DOTweenAnimation_GetTweenGO_m7AD749AB5948BDD90B4ABC3B2F09603025D618D7(__this, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (target == null || tweenGO == null) {
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_12 = __this->get_target_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00d0;
		}
	}

IL_0078:
	{
		// if (targetIsSelf && target == null) {
		bool L_16 = __this->get_targetIsSelf_22();
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_17 = __this->get_target_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target is NULL, because the animation was created with a DOTween Pro version older than 0.9.255. To fix this, exit Play mode then simply select this object, and it will update automatically", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral852803C0E0511404910B712837FFA455156FC4CE, L_20, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_21, L_22, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00af:
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_24, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_25, L_26, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00d0:
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_27 = __this->get_forcedTargetType_42();
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_28 = __this->get_forcedTargetType_42();
		__this->set_targetType_41(L_28);
	}

IL_00e4:
	{
		// if (targetType == TargetType.Unset) {
		int32_t L_29 = __this->get_targetType_41();
		if (L_29)
		{
			goto IL_0102;
		}
	}
	{
		// targetType = TypeToDOTargetType(target.GetType());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_30 = __this->get_target_39();
		NullCheck(L_30);
		Type_t * L_31;
		L_31 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_30, /*hidden argument*/NULL);
		int32_t L_32;
		L_32 = DOTweenAnimation_TypeToDOTargetType_mD220C04BEFF3124DCBEC5A74E175A83D9669CCDE(L_31, /*hidden argument*/NULL);
		__this->set_targetType_41(L_32);
	}

IL_0102:
	{
		// switch (animationType) {
		int32_t L_33 = __this->get_animationType_40();
		V_2 = L_33;
		int32_t L_34 = V_2;
		switch (L_34)
		{
			case 0:
			{
				goto IL_0a19;
			}
			case 1:
			{
				goto IL_016c;
			}
			case 2:
			{
				goto IL_0354;
			}
			case 3:
			{
				goto IL_037c;
			}
			case 4:
			{
				goto IL_0423;
			}
			case 5:
			{
				goto IL_044b;
			}
			case 6:
			{
				goto IL_04d8;
			}
			case 7:
			{
				goto IL_05dd;
			}
			case 8:
			{
				goto IL_070d;
			}
			case 9:
			{
				goto IL_0753;
			}
			case 10:
			{
				goto IL_080e;
			}
			case 11:
			{
				goto IL_07e0;
			}
			case 12:
			{
				goto IL_083c;
			}
			case 13:
			{
				goto IL_0909;
			}
			case 14:
			{
				goto IL_08d5;
			}
			case 15:
			{
				goto IL_093d;
			}
			case 16:
			{
				goto IL_0964;
			}
			case 17:
			{
				goto IL_098b;
			}
			case 18:
			{
				goto IL_09af;
			}
			case 19:
			{
				goto IL_09d3;
			}
			case 20:
			{
				goto IL_09f7;
			}
			case 21:
			{
				goto IL_0495;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_016c:
	{
		// if (useTargetAsV3) {
		bool L_35 = __this->get_useTargetAsV3_44();
		if (!L_35)
		{
			goto IL_0269;
		}
	}
	{
		// isRelative = false;
		__this->set_isRelative_32((bool)0);
		// if (endValueTransform == null) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_endValueTransform_51();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01bc;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target is NULL, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_38, /*hidden argument*/NULL);
		String_t* L_40;
		L_40 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB, L_39, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_40, L_41, /*hidden argument*/NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_endValueV3_46(L_42);
		// } else {
		goto IL_0269;
	}

IL_01bc:
	{
		// if (targetType == TargetType.RectTransform) {
		int32_t L_43 = __this->get_targetType_41();
		if ((!(((uint32_t)L_43) == ((uint32_t)5))))
		{
			goto IL_0258;
		}
	}
	{
		// RectTransform endValueT = endValueTransform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_endValueTransform_51();
		V_3 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_44, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// if (endValueT == null) {
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_020a;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target should be a RectTransform, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_47, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75, L_48, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_49, L_50, /*hidden argument*/NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_endValueV3_46(L_51);
		// } else {
		goto IL_0269;
	}

IL_020a:
	{
		// RectTransform rTarget = target as RectTransform;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_52 = __this->get_target_39();
		V_4 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_52, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// if (rTarget == null) {
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_53, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0243;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target and TO target are not of the same type. Please reassign the values", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_55, /*hidden argument*/NULL);
		String_t* L_57;
		L_57 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F, L_56, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_57, L_58, /*hidden argument*/NULL);
		// } else {
		goto IL_0269;
	}

IL_0243:
	{
		// endValueV3 = DOTweenModuleUI.Utils.SwitchToRectTransform(endValueT, rTarget);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_59 = V_3;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_60 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		L_61 = Utils_SwitchToRectTransform_m1C1AD12937B880AD34E72E82CA857CEB0063D733(L_59, L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_61, /*hidden argument*/NULL);
		__this->set_endValueV3_46(L_62);
		// } else
		goto IL_0269;
	}

IL_0258:
	{
		// endValueV3 = endValueTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = __this->get_endValueTransform_51();
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		__this->set_endValueV3_46(L_64);
	}

IL_0269:
	{
		// switch (targetType) {
		int32_t L_65 = __this->get_targetType_41();
		V_5 = L_65;
		int32_t L_66 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)5)))
		{
			case 0:
			{
				goto IL_02c8;
			}
			case 1:
			{
				goto IL_0a19;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_02f5;
			}
			case 4:
			{
				goto IL_0322;
			}
			case 5:
			{
				goto IL_0a19;
			}
			case 6:
			{
				goto IL_029b;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_029b:
	{
		// tween = ((Transform)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_67 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = __this->get_endValueV3_46();
		float L_69 = __this->get_duration_26();
		bool L_70 = __this->get_optionalBool0_52();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_71;
		L_71 = ShortcutExtensions_DOMove_mB2D750908EA648BD0A77E2432C96B734809205FD(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_67, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), L_68, L_69, L_70, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_71);
		// break;
		goto IL_0a19;
	}

IL_02c8:
	{
		// tween = ((RectTransform)target).DOAnchorPos3D(endValueV3, duration, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_72 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = __this->get_endValueV3_46();
		float L_74 = __this->get_duration_26();
		bool L_75 = __this->get_optionalBool0_52();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_76;
		L_76 = DOTweenModuleUI_DOAnchorPos3D_mF3833C1E03F161F1A1A2344FB7CE44DBA87F906F(((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_72, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)), L_73, L_74, L_75, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_76);
		// break;
		goto IL_0a19;
	}

IL_02f5:
	{
		// tween = ((Rigidbody)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_77 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_endValueV3_46();
		float L_79 = __this->get_duration_26();
		bool L_80 = __this->get_optionalBool0_52();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_81;
		L_81 = DOTweenModulePhysics_DOMove_mB956D3BE2D7F510490AEF526DBE2E439799D1836(((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)CastclassClass((RuntimeObject*)L_77, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var)), L_78, L_79, L_80, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_81);
		// break;
		goto IL_0a19;
	}

IL_0322:
	{
		// tween = ((Rigidbody2D)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_82 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = __this->get_endValueV3_46();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84;
		L_84 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_83, /*hidden argument*/NULL);
		float L_85 = __this->get_duration_26();
		bool L_86 = __this->get_optionalBool0_52();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_87;
		L_87 = DOTweenModulePhysics2D_DOMove_m90123D8EB1B3A9C61E6DA7FA246C776F6564C3D9(((Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 *)CastclassSealed((RuntimeObject*)L_82, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_il2cpp_TypeInfo_var)), L_84, L_85, L_86, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_87);
		// break;
		goto IL_0a19;
	}

IL_0354:
	{
		// tween = tweenGO.transform.DOLocalMove(endValueV3, duration, optionalBool0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = V_0;
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = __this->get_endValueV3_46();
		float L_91 = __this->get_duration_26();
		bool L_92 = __this->get_optionalBool0_52();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_93;
		L_93 = ShortcutExtensions_DOLocalMove_mE5AB4B1AE17C290B9A75C46C4B3F84D380DCEF0C(L_89, L_90, L_91, L_92, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_93);
		// break;
		goto IL_0a19;
	}

IL_037c:
	{
		// switch (targetType) {
		int32_t L_94 = __this->get_targetType_41();
		V_5 = L_94;
		int32_t L_95 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)8)))
		{
			case 0:
			{
				goto IL_03cf;
			}
			case 1:
			{
				goto IL_03fc;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_03a2;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_03a2:
	{
		// tween = ((Transform)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_96 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = __this->get_endValueV3_46();
		float L_98 = __this->get_duration_26();
		int32_t L_99 = __this->get_optionalRotationMode_56();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_100;
		L_100 = ShortcutExtensions_DORotate_m0363103FEFCCEC3A787934CB58107D88AAF796A9(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_96, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), L_97, L_98, L_99, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_100);
		// break;
		goto IL_0a19;
	}

IL_03cf:
	{
		// tween = ((Rigidbody)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_101 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = __this->get_endValueV3_46();
		float L_103 = __this->get_duration_26();
		int32_t L_104 = __this->get_optionalRotationMode_56();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_105;
		L_105 = DOTweenModulePhysics_DORotate_m54D763132B07B93470BA09D29BB858F153FB8BB8(((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)CastclassClass((RuntimeObject*)L_101, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var)), L_102, L_103, L_104, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_105);
		// break;
		goto IL_0a19;
	}

IL_03fc:
	{
		// tween = ((Rigidbody2D)target).DORotate(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_106 = __this->get_target_39();
		float L_107 = __this->get_endValueFloat_45();
		float L_108 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_109;
		L_109 = DOTweenModulePhysics2D_DORotate_m6A0FAD2C7C1CA64ECDEC4D4242590FB1FC9194D8(((Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 *)CastclassSealed((RuntimeObject*)L_106, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_il2cpp_TypeInfo_var)), L_107, L_108, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_109);
		// break;
		goto IL_0a19;
	}

IL_0423:
	{
		// tween = tweenGO.transform.DOLocalRotate(endValueV3, duration, optionalRotationMode);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_110 = V_0;
		NullCheck(L_110);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_111;
		L_111 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_110, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = __this->get_endValueV3_46();
		float L_113 = __this->get_duration_26();
		int32_t L_114 = __this->get_optionalRotationMode_56();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_115;
		L_115 = ShortcutExtensions_DOLocalRotate_m25FF7B73D48722D4EBBBDA1A8CA3B8D0354BD662(L_111, L_112, L_113, L_114, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_115);
		// break;
		goto IL_0a19;
	}

IL_044b:
	{
		// switch (targetType) {
		int32_t L_116 = __this->get_targetType_41();
		// tween = tweenGO.transform.DOScale(optionalBool0 ? new Vector3(endValueFloat, endValueFloat, endValueFloat) : endValueV3, duration);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = V_0;
		NullCheck(L_117);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_117, /*hidden argument*/NULL);
		bool L_119 = __this->get_optionalBool0_52();
		G_B46_0 = L_118;
		G_B46_1 = __this;
		if (L_119)
		{
			G_B47_0 = L_118;
			G_B47_1 = __this;
			goto IL_0469;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120 = __this->get_endValueV3_46();
		G_B48_0 = L_120;
		G_B48_1 = G_B46_0;
		G_B48_2 = G_B46_1;
		goto IL_0480;
	}

IL_0469:
	{
		float L_121 = __this->get_endValueFloat_45();
		float L_122 = __this->get_endValueFloat_45();
		float L_123 = __this->get_endValueFloat_45();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_124), L_121, L_122, L_123, /*hidden argument*/NULL);
		G_B48_0 = L_124;
		G_B48_1 = G_B47_0;
		G_B48_2 = G_B47_1;
	}

IL_0480:
	{
		float L_125 = __this->get_duration_26();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_126;
		L_126 = ShortcutExtensions_DOScale_m5A95C0F6E6F60A04BCC319FBF25133C678E30CD1(G_B48_1, G_B48_0, L_125, /*hidden argument*/NULL);
		NullCheck(G_B48_2);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)G_B48_2)->set_tween_20(L_126);
		// break;
		goto IL_0a19;
	}

IL_0495:
	{
		// tween = ((RectTransform)target).DOSizeDelta(optionalBool0 ? new Vector2(endValueFloat, endValueFloat) : endValueV2, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_127 = __this->get_target_39();
		bool L_128 = __this->get_optionalBool0_52();
		G_B50_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_127, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		G_B50_1 = __this;
		if (L_128)
		{
			G_B51_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_127, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
			G_B51_1 = __this;
			goto IL_04b1;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_129 = __this->get_endValueV2_47();
		G_B52_0 = L_129;
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		goto IL_04c2;
	}

IL_04b1:
	{
		float L_130 = __this->get_endValueFloat_45();
		float L_131 = __this->get_endValueFloat_45();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_132), L_130, L_131, /*hidden argument*/NULL);
		G_B52_0 = L_132;
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
	}

IL_04c2:
	{
		float L_133 = __this->get_duration_26();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_134;
		L_134 = DOTweenModuleUI_DOSizeDelta_m4EE4D96928CB13EB60B573EFCB44841231A1B270(G_B52_1, G_B52_0, L_133, (bool)0, /*hidden argument*/NULL);
		NullCheck(G_B52_2);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)G_B52_2)->set_tween_20(L_134);
		// break;
		goto IL_0a19;
	}

IL_04d8:
	{
		// isRelative = false;
		__this->set_isRelative_32((bool)0);
		// switch (targetType) {
		int32_t L_135 = __this->get_targetType_41();
		V_5 = L_135;
		int32_t L_136 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)3)))
		{
			case 0:
			{
				goto IL_058f;
			}
			case 1:
			{
				goto IL_0541;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_0515;
			}
			case 4:
			{
				goto IL_0568;
			}
			case 5:
			{
				goto IL_0a19;
			}
			case 6:
			{
				goto IL_0a19;
			}
			case 7:
			{
				goto IL_05b6;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_0515:
	{
		// tween = ((Renderer)target).material.DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_137 = __this->get_target_39();
		NullCheck(((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)CastclassClass((RuntimeObject*)L_137, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var)));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_138;
		L_138 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)CastclassClass((RuntimeObject*)L_137, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_139 = __this->get_endValueColor_48();
		float L_140 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_141;
		L_141 = ShortcutExtensions_DOColor_m9F7CF07F0B26868323BC372D354328CB51441F43(L_138, L_139, L_140, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_141);
		// break;
		goto IL_0a19;
	}

IL_0541:
	{
		// tween = ((Light)target).DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_142 = __this->get_target_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_143 = __this->get_endValueColor_48();
		float L_144 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_145;
		L_145 = ShortcutExtensions_DOColor_mC26F89F30CD3132F7A595C0FAB24379D95B63F9E(((Light_tA2F349FE839781469A0344CF6039B51512394275 *)CastclassSealed((RuntimeObject*)L_142, Light_tA2F349FE839781469A0344CF6039B51512394275_il2cpp_TypeInfo_var)), L_143, L_144, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_145);
		// break;
		goto IL_0a19;
	}

IL_0568:
	{
		// tween = ((SpriteRenderer)target).DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_146 = __this->get_target_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_147 = __this->get_endValueColor_48();
		float L_148 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_149;
		L_149 = DOTweenModuleSprite_DOColor_m415F039AE21D7D99B9CA797F7B3B76EA95C02F6F(((SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)CastclassSealed((RuntimeObject*)L_146, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var)), L_147, L_148, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_149);
		// break;
		goto IL_0a19;
	}

IL_058f:
	{
		// tween = ((Graphic)target).DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_150 = __this->get_target_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_151 = __this->get_endValueColor_48();
		float L_152 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_153;
		L_153 = DOTweenModuleUI_DOColor_m8D89302DC2412EF0316046C1C3D710DA01A1122A(((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)CastclassClass((RuntimeObject*)L_150, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var)), L_151, L_152, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_153);
		// break;
		goto IL_0a19;
	}

IL_05b6:
	{
		// tween = ((Text)target).DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_154 = __this->get_target_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_155 = __this->get_endValueColor_48();
		float L_156 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_157;
		L_157 = DOTweenModuleUI_DOColor_m5CE73555425690E9D26030987FA0460B03945D04(((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)CastclassClass((RuntimeObject*)L_154, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_il2cpp_TypeInfo_var)), L_155, L_156, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_157);
		// break;
		goto IL_0a19;
	}

IL_05dd:
	{
		// isRelative = false;
		__this->set_isRelative_32((bool)0);
		// switch (targetType) {
		int32_t L_158 = __this->get_targetType_41();
		V_5 = L_158;
		int32_t L_159 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_159, (int32_t)2)))
		{
			case 0:
			{
				goto IL_06e6;
			}
			case 1:
			{
				goto IL_0698;
			}
			case 2:
			{
				goto IL_064a;
			}
			case 3:
			{
				goto IL_0a19;
			}
			case 4:
			{
				goto IL_061e;
			}
			case 5:
			{
				goto IL_0671;
			}
			case 6:
			{
				goto IL_0a19;
			}
			case 7:
			{
				goto IL_0a19;
			}
			case 8:
			{
				goto IL_06bf;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_061e:
	{
		// tween = ((Renderer)target).material.DOFade(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_160 = __this->get_target_39();
		NullCheck(((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)CastclassClass((RuntimeObject*)L_160, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var)));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_161;
		L_161 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(((Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)CastclassClass((RuntimeObject*)L_160, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		float L_162 = __this->get_endValueFloat_45();
		float L_163 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_164;
		L_164 = ShortcutExtensions_DOFade_m4C094B8C2404B1D5CB50A4DF89881F9ADD75E4BD(L_161, L_162, L_163, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_164);
		// break;
		goto IL_0a19;
	}

IL_064a:
	{
		// tween = ((Light)target).DOIntensity(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_165 = __this->get_target_39();
		float L_166 = __this->get_endValueFloat_45();
		float L_167 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_168;
		L_168 = ShortcutExtensions_DOIntensity_m9DB6DAE279916A1571C8361CB512069CC0C5A701(((Light_tA2F349FE839781469A0344CF6039B51512394275 *)CastclassSealed((RuntimeObject*)L_165, Light_tA2F349FE839781469A0344CF6039B51512394275_il2cpp_TypeInfo_var)), L_166, L_167, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_168);
		// break;
		goto IL_0a19;
	}

IL_0671:
	{
		// tween = ((SpriteRenderer)target).DOFade(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_169 = __this->get_target_39();
		float L_170 = __this->get_endValueFloat_45();
		float L_171 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_172;
		L_172 = DOTweenModuleSprite_DOFade_m7162BAD06F2803989192A61B56E07330D370DB5E(((SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)CastclassSealed((RuntimeObject*)L_169, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var)), L_170, L_171, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_172);
		// break;
		goto IL_0a19;
	}

IL_0698:
	{
		// tween = ((Graphic)target).DOFade(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_173 = __this->get_target_39();
		float L_174 = __this->get_endValueFloat_45();
		float L_175 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_176;
		L_176 = DOTweenModuleUI_DOFade_m8F85FBBB1968155095CF5225C30B28D05B182470(((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)CastclassClass((RuntimeObject*)L_173, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var)), L_174, L_175, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_176);
		// break;
		goto IL_0a19;
	}

IL_06bf:
	{
		// tween = ((Text)target).DOFade(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_177 = __this->get_target_39();
		float L_178 = __this->get_endValueFloat_45();
		float L_179 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_180;
		L_180 = DOTweenModuleUI_DOFade_m349FBF51EB83C59F1C7547FE4FF5C3AED41CC9B2(((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)CastclassClass((RuntimeObject*)L_177, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_il2cpp_TypeInfo_var)), L_178, L_179, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_180);
		// break;
		goto IL_0a19;
	}

IL_06e6:
	{
		// tween = ((CanvasGroup)target).DOFade(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_181 = __this->get_target_39();
		float L_182 = __this->get_endValueFloat_45();
		float L_183 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_184;
		L_184 = DOTweenModuleUI_DOFade_m1F136A23B10904B51D6805B2A7E6ED0D50745825(((CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)CastclassSealed((RuntimeObject*)L_181, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_il2cpp_TypeInfo_var)), L_182, L_183, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_184);
		// break;
		goto IL_0a19;
	}

IL_070d:
	{
		// switch (targetType) {
		int32_t L_185 = __this->get_targetType_41();
		if ((!(((uint32_t)L_185) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Text)target).DOText(endValueString, duration, optionalBool0, optionalScrambleMode, optionalString);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_186 = __this->get_target_39();
		String_t* L_187 = __this->get_endValueString_49();
		float L_188 = __this->get_duration_26();
		bool L_189 = __this->get_optionalBool0_52();
		int32_t L_190 = __this->get_optionalScrambleMode_57();
		String_t* L_191 = __this->get_optionalString_58();
		TweenerCore_3_t7BF9D7B0102AFA4A5A3B42B7B5A051CE288C999D * L_192;
		L_192 = DOTweenModuleUI_DOText_mD0CB18346B87B72055EA8C856267744988AE4473(((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)CastclassClass((RuntimeObject*)L_186, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_il2cpp_TypeInfo_var)), L_187, L_188, L_189, L_190, L_191, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_192);
		// break;
		goto IL_0a19;
	}

IL_0753:
	{
		// switch (targetType) {
		int32_t L_193 = __this->get_targetType_41();
		V_5 = L_193;
		int32_t L_194 = V_5;
		if ((((int32_t)L_194) == ((int32_t)5)))
		{
			goto IL_07a2;
		}
	}
	{
		int32_t L_195 = V_5;
		if ((!(((uint32_t)L_195) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Transform)target).DOPunchPosition(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_196 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197 = __this->get_endValueV3_46();
		float L_198 = __this->get_duration_26();
		int32_t L_199 = __this->get_optionalInt0_55();
		float L_200 = __this->get_optionalFloat0_54();
		bool L_201 = __this->get_optionalBool0_52();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_202;
		L_202 = ShortcutExtensions_DOPunchPosition_m88D4316335B70E0401AEF53BA68EBC67390A2FCE(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_196, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), L_197, L_198, L_199, L_200, L_201, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_202);
		// break;
		goto IL_0a19;
	}

IL_07a2:
	{
		// tween = ((RectTransform)target).DOPunchAnchorPos(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_203 = __this->get_target_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204 = __this->get_endValueV3_46();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_205;
		L_205 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_204, /*hidden argument*/NULL);
		float L_206 = __this->get_duration_26();
		int32_t L_207 = __this->get_optionalInt0_55();
		float L_208 = __this->get_optionalFloat0_54();
		bool L_209 = __this->get_optionalBool0_52();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_210;
		L_210 = DOTweenModuleUI_DOPunchAnchorPos_mAD4C7DCC902E038D006C3B36E740215B1961A165(((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_203, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)), L_205, L_206, L_207, L_208, L_209, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_210);
		// break;
		goto IL_0a19;
	}

IL_07e0:
	{
		// tween = tweenGO.transform.DOPunchScale(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_211 = V_0;
		NullCheck(L_211);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_212;
		L_212 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_211, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_213 = __this->get_endValueV3_46();
		float L_214 = __this->get_duration_26();
		int32_t L_215 = __this->get_optionalInt0_55();
		float L_216 = __this->get_optionalFloat0_54();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_217;
		L_217 = ShortcutExtensions_DOPunchScale_mC0D526D2C10C817F0086895997FB64F440AD3337(L_212, L_213, L_214, L_215, L_216, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_217);
		// break;
		goto IL_0a19;
	}

IL_080e:
	{
		// tween = tweenGO.transform.DOPunchRotation(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_218 = V_0;
		NullCheck(L_218);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_219;
		L_219 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_218, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220 = __this->get_endValueV3_46();
		float L_221 = __this->get_duration_26();
		int32_t L_222 = __this->get_optionalInt0_55();
		float L_223 = __this->get_optionalFloat0_54();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_224;
		L_224 = ShortcutExtensions_DOPunchRotation_m5D192078F6D4A8D6E5A37002FE22AACB5A80732F(L_219, L_220, L_221, L_222, L_223, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_224);
		// break;
		goto IL_0a19;
	}

IL_083c:
	{
		// switch (targetType) {
		int32_t L_225 = __this->get_targetType_41();
		V_5 = L_225;
		int32_t L_226 = V_5;
		if ((((int32_t)L_226) == ((int32_t)5)))
		{
			goto IL_0891;
		}
	}
	{
		int32_t L_227 = V_5;
		if ((!(((uint32_t)L_227) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Transform)target).DOShakePosition(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0, optionalBool1);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_228 = __this->get_target_39();
		float L_229 = __this->get_duration_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230 = __this->get_endValueV3_46();
		int32_t L_231 = __this->get_optionalInt0_55();
		float L_232 = __this->get_optionalFloat0_54();
		bool L_233 = __this->get_optionalBool0_52();
		bool L_234 = __this->get_optionalBool1_53();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_235;
		L_235 = ShortcutExtensions_DOShakePosition_mE12C9B10830A20B6A192F34CABC86AC1434CD691(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_228, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), L_229, L_230, L_231, L_232, L_233, L_234, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_235);
		// break;
		goto IL_0a19;
	}

IL_0891:
	{
		// tween = ((RectTransform)target).DOShakeAnchorPos(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0, optionalBool1);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_236 = __this->get_target_39();
		float L_237 = __this->get_duration_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_238 = __this->get_endValueV3_46();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_239;
		L_239 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_238, /*hidden argument*/NULL);
		int32_t L_240 = __this->get_optionalInt0_55();
		float L_241 = __this->get_optionalFloat0_54();
		bool L_242 = __this->get_optionalBool0_52();
		bool L_243 = __this->get_optionalBool1_53();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_244;
		L_244 = DOTweenModuleUI_DOShakeAnchorPos_m9DFB15B287C12A99D0BC1D17871302F1B3ED489A(((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_236, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)), L_237, L_239, L_240, L_241, L_242, L_243, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_244);
		// break;
		goto IL_0a19;
	}

IL_08d5:
	{
		// tween = tweenGO.transform.DOShakeScale(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_245 = V_0;
		NullCheck(L_245);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_246;
		L_246 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_245, /*hidden argument*/NULL);
		float L_247 = __this->get_duration_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_248 = __this->get_endValueV3_46();
		int32_t L_249 = __this->get_optionalInt0_55();
		float L_250 = __this->get_optionalFloat0_54();
		bool L_251 = __this->get_optionalBool1_53();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_252;
		L_252 = ShortcutExtensions_DOShakeScale_mCE9923EC587995D9C6E66F4D2C0F38A2295037CA(L_246, L_247, L_248, L_249, L_250, L_251, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_252);
		// break;
		goto IL_0a19;
	}

IL_0909:
	{
		// tween = tweenGO.transform.DOShakeRotation(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_253 = V_0;
		NullCheck(L_253);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_254;
		L_254 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_253, /*hidden argument*/NULL);
		float L_255 = __this->get_duration_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_256 = __this->get_endValueV3_46();
		int32_t L_257 = __this->get_optionalInt0_55();
		float L_258 = __this->get_optionalFloat0_54();
		bool L_259 = __this->get_optionalBool1_53();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_260;
		L_260 = ShortcutExtensions_DOShakeRotation_mF836DCE57021DAC13E983374704E0D23EA002E64(L_254, L_255, L_256, L_257, L_258, L_259, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_260);
		// break;
		goto IL_0a19;
	}

IL_093d:
	{
		// tween = ((Camera)target).DOAspect(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_261 = __this->get_target_39();
		float L_262 = __this->get_endValueFloat_45();
		float L_263 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_264;
		L_264 = ShortcutExtensions_DOAspect_m1561764D9AC57E0828E42742D3747FE4B4824CB1(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_261, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_262, L_263, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_264);
		// break;
		goto IL_0a19;
	}

IL_0964:
	{
		// tween = ((Camera)target).DOColor(endValueColor, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_265 = __this->get_target_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_266 = __this->get_endValueColor_48();
		float L_267 = __this->get_duration_26();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_268;
		L_268 = ShortcutExtensions_DOColor_mAA8796F1C9C1442EA0C10A3345FD85F7A4485168(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_265, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_266, L_267, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_268);
		// break;
		goto IL_0a19;
	}

IL_098b:
	{
		// tween = ((Camera)target).DOFieldOfView(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_269 = __this->get_target_39();
		float L_270 = __this->get_endValueFloat_45();
		float L_271 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_272;
		L_272 = ShortcutExtensions_DOFieldOfView_mA5FCCD9C8E916CF38952D43B299A79A8AF9FE38A(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_269, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_270, L_271, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_272);
		// break;
		goto IL_0a19;
	}

IL_09af:
	{
		// tween = ((Camera)target).DOOrthoSize(endValueFloat, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_273 = __this->get_target_39();
		float L_274 = __this->get_endValueFloat_45();
		float L_275 = __this->get_duration_26();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_276;
		L_276 = ShortcutExtensions_DOOrthoSize_m8E1D1839DBA66037FCC46CD2C106B52B559AE93D(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_273, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_274, L_275, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_276);
		// break;
		goto IL_0a19;
	}

IL_09d3:
	{
		// tween = ((Camera)target).DOPixelRect(endValueRect, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_277 = __this->get_target_39();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_278 = __this->get_endValueRect_50();
		float L_279 = __this->get_duration_26();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_280;
		L_280 = ShortcutExtensions_DOPixelRect_m60D8C519216E51B4C1E87AB5F4DBF49D06BC8924(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_277, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_278, L_279, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_280);
		// break;
		goto IL_0a19;
	}

IL_09f7:
	{
		// tween = ((Camera)target).DORect(endValueRect, duration);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_281 = __this->get_target_39();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_282 = __this->get_endValueRect_50();
		float L_283 = __this->get_duration_26();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_284;
		L_284 = ShortcutExtensions_DORect_mF36B96DAEDE4D5AE852EBA425CE3FE49B57A1F07(((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)CastclassSealed((RuntimeObject*)L_281, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_il2cpp_TypeInfo_var)), L_282, L_283, /*hidden argument*/NULL);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20(L_284);
	}

IL_0a19:
	{
		// if (tween == null) return;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_285 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (L_285)
		{
			goto IL_0a22;
		}
	}
	{
		// if (tween == null) return;
		return;
	}

IL_0a22:
	{
		// if (isFrom) {
		bool L_286 = __this->get_isFrom_33();
		if (!L_286)
		{
			goto IL_0a43;
		}
	}
	{
		// ((Tweener)tween).From(isRelative);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_287 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		bool L_288 = __this->get_isRelative_32();
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_289;
		L_289 = TweenSettingsExtensions_From_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m5E90E0EBA89A3B6C32AE2DA3DC80DA9787B19004(((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)CastclassClass((RuntimeObject*)L_287, Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var)), L_288, /*hidden argument*/TweenSettingsExtensions_From_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m5E90E0EBA89A3B6C32AE2DA3DC80DA9787B19004_RuntimeMethod_var);
		// } else {
		goto IL_0a55;
	}

IL_0a43:
	{
		// tween.SetRelative(isRelative);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_290 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		bool L_291 = __this->get_isRelative_32();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_292;
		L_292 = TweenSettingsExtensions_SetRelative_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mED411B457C01E8CA7D8ED9212226874DC396B979(L_290, L_291, /*hidden argument*/TweenSettingsExtensions_SetRelative_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mED411B457C01E8CA7D8ED9212226874DC396B979_RuntimeMethod_var);
	}

IL_0a55:
	{
		// GameObject setTarget = GetTweenTarget();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_293;
		L_293 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		V_1 = L_293;
		// tween.SetTarget(setTarget).SetDelay(delay).SetLoops(loops, loopType).SetAutoKill(autoKill)
		//     .OnKill(()=> tween = null);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_294 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_295 = V_1;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_296;
		L_296 = TweenSettingsExtensions_SetTarget_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA7113D105824D18724C892CB64602B14FF951216(L_294, L_295, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA7113D105824D18724C892CB64602B14FF951216_RuntimeMethod_var);
		float L_297 = __this->get_delay_25();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_298;
		L_298 = TweenSettingsExtensions_SetDelay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7469B5D0A9A9FB2EDD20B377B2B22A0AAB6901E9(L_296, L_297, /*hidden argument*/TweenSettingsExtensions_SetDelay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7469B5D0A9A9FB2EDD20B377B2B22A0AAB6901E9_RuntimeMethod_var);
		int32_t L_299 = __this->get_loops_30();
		int32_t L_300 = __this->get_loopType_29();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_301;
		L_301 = TweenSettingsExtensions_SetLoops_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m36D9CB6713F63E6A50ADBD328E5A453B64299FD1(L_298, L_299, L_300, /*hidden argument*/TweenSettingsExtensions_SetLoops_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m36D9CB6713F63E6A50ADBD328E5A453B64299FD1_RuntimeMethod_var);
		bool L_302 = __this->get_autoKill_35();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_303;
		L_303 = TweenSettingsExtensions_SetAutoKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7890FD2C39FB39C7CC96711D5E38C2D55632C237(L_301, L_302, /*hidden argument*/TweenSettingsExtensions_SetAutoKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7890FD2C39FB39C7CC96711D5E38C2D55632C237_RuntimeMethod_var);
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_304 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_304, __this, (intptr_t)((intptr_t)DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m2130CFA41530B17308434DC9734CE06B1F405566_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_305;
		L_305 = TweenSettingsExtensions_OnKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mDF9C7342F90D9A63AE27F5BC563D84C571CB3C09(L_303, L_304, /*hidden argument*/TweenSettingsExtensions_OnKill_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mDF9C7342F90D9A63AE27F5BC563D84C571CB3C09_RuntimeMethod_var);
		// if (isSpeedBased) tween.SetSpeedBased();
		bool L_306 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_isSpeedBased_5();
		if (!L_306)
		{
			goto IL_0ab5;
		}
	}
	{
		// if (isSpeedBased) tween.SetSpeedBased();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_307 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_308;
		L_308 = TweenSettingsExtensions_SetSpeedBased_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2181BB00E8C28C74BE24ACBB77354BD2E20F2E7(L_307, /*hidden argument*/TweenSettingsExtensions_SetSpeedBased_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2181BB00E8C28C74BE24ACBB77354BD2E20F2E7_RuntimeMethod_var);
	}

IL_0ab5:
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		int32_t L_309 = __this->get_easeType_27();
		if ((!(((uint32_t)L_309) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0ad3;
		}
	}
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_310 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_311 = __this->get_easeCurve_28();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_312;
		L_312 = TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m3C986AED97042831514805B8EB75AA4D60A81EF0(L_310, L_311, /*hidden argument*/TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m3C986AED97042831514805B8EB75AA4D60A81EF0_RuntimeMethod_var);
		goto IL_0ae5;
	}

IL_0ad3:
	{
		// else tween.SetEase(easeType);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_313 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		int32_t L_314 = __this->get_easeType_27();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_315;
		L_315 = TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mFAC5ED7B5B01F035A4A89BEE83EA27FA3342C57A(L_313, L_314, /*hidden argument*/TweenSettingsExtensions_SetEase_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mFAC5ED7B5B01F035A4A89BEE83EA27FA3342C57A_RuntimeMethod_var);
	}

IL_0ae5:
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		String_t* L_316 = __this->get_id_31();
		bool L_317;
		L_317 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_316, /*hidden argument*/NULL);
		if (L_317)
		{
			goto IL_0b04;
		}
	}
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_318 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		String_t* L_319 = __this->get_id_31();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_320;
		L_320 = TweenSettingsExtensions_SetId_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2FB462996C3D775E67093DD0FDFD0EDAC7F3B51(L_318, L_319, /*hidden argument*/TweenSettingsExtensions_SetId_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mA2FB462996C3D775E67093DD0FDFD0EDAC7F3B51_RuntimeMethod_var);
	}

IL_0b04:
	{
		// tween.SetUpdate(isIndependentUpdate);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_321 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		bool L_322 = __this->get_isIndependentUpdate_34();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_323;
		L_323 = TweenSettingsExtensions_SetUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m715CAA583D6F9AAC7B2D50D684B99F3DC6D8B941(L_321, L_322, /*hidden argument*/TweenSettingsExtensions_SetUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m715CAA583D6F9AAC7B2D50D684B99F3DC6D8B941_RuntimeMethod_var);
		// if (hasOnStart) {
		bool L_324 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnStart_6();
		if (!L_324)
		{
			goto IL_0b45;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_325 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onStart_13();
		if (!L_325)
		{
			goto IL_0b4c;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_326 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_327 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onStart_13();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_328 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_328, L_327, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_329;
		L_329 = TweenSettingsExtensions_OnStart_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m25C3BD07778EB864EB3928A569C436F09906C9E5(L_326, L_328, /*hidden argument*/TweenSettingsExtensions_OnStart_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m25C3BD07778EB864EB3928A569C436F09906C9E5_RuntimeMethod_var);
		// } else onStart = null;
		goto IL_0b4c;
	}

IL_0b45:
	{
		// } else onStart = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onStart_13((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0b4c:
	{
		// if (hasOnPlay) {
		bool L_330 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnPlay_7();
		if (!L_330)
		{
			goto IL_0b7b;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_331 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onPlay_14();
		if (!L_331)
		{
			goto IL_0b82;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_332 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_333 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onPlay_14();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_334 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_334, L_333, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_335;
		L_335 = TweenSettingsExtensions_OnPlay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m0DC91313C890F409D36F845B7C857AFF9F7B6E49(L_332, L_334, /*hidden argument*/TweenSettingsExtensions_OnPlay_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m0DC91313C890F409D36F845B7C857AFF9F7B6E49_RuntimeMethod_var);
		// } else onPlay = null;
		goto IL_0b82;
	}

IL_0b7b:
	{
		// } else onPlay = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onPlay_14((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0b82:
	{
		// if (hasOnUpdate) {
		bool L_336 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnUpdate_8();
		if (!L_336)
		{
			goto IL_0bb1;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_337 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onUpdate_15();
		if (!L_337)
		{
			goto IL_0bb8;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_338 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_339 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onUpdate_15();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_340 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_340, L_339, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_341;
		L_341 = TweenSettingsExtensions_OnUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE408931F33F48975F7555A1D6848797324869781(L_338, L_340, /*hidden argument*/TweenSettingsExtensions_OnUpdate_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE408931F33F48975F7555A1D6848797324869781_RuntimeMethod_var);
		// } else onUpdate = null;
		goto IL_0bb8;
	}

IL_0bb1:
	{
		// } else onUpdate = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onUpdate_15((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0bb8:
	{
		// if (hasOnStepComplete) {
		bool L_342 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnStepComplete_9();
		if (!L_342)
		{
			goto IL_0be7;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_343 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onStepComplete_16();
		if (!L_343)
		{
			goto IL_0bee;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_344 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_345 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onStepComplete_16();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_346 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_346, L_345, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_347;
		L_347 = TweenSettingsExtensions_OnStepComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m1570D8636477730B63FC0605B1CF99EA43CBF437(L_344, L_346, /*hidden argument*/TweenSettingsExtensions_OnStepComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m1570D8636477730B63FC0605B1CF99EA43CBF437_RuntimeMethod_var);
		// } else onStepComplete = null;
		goto IL_0bee;
	}

IL_0be7:
	{
		// } else onStepComplete = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onStepComplete_16((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0bee:
	{
		// if (hasOnComplete) {
		bool L_348 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnComplete_10();
		if (!L_348)
		{
			goto IL_0c1d;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_349 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onComplete_17();
		if (!L_349)
		{
			goto IL_0c24;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_350 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_351 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onComplete_17();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_352 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_352, L_351, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_353;
		L_353 = TweenSettingsExtensions_OnComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mC01BCD93035483DC08F6681BA6DDF1F3E14E145E(L_350, L_352, /*hidden argument*/TweenSettingsExtensions_OnComplete_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mC01BCD93035483DC08F6681BA6DDF1F3E14E145E_RuntimeMethod_var);
		// } else onComplete = null;
		goto IL_0c24;
	}

IL_0c1d:
	{
		// } else onComplete = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onComplete_17((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0c24:
	{
		// if (hasOnRewind) {
		bool L_354 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnRewind_12();
		if (!L_354)
		{
			goto IL_0c53;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_355 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onRewind_19();
		if (!L_355)
		{
			goto IL_0c5a;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_356 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_357 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onRewind_19();
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_358 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_358, L_357, (intptr_t)((intptr_t)UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5_RuntimeMethod_var), /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_359;
		L_359 = TweenSettingsExtensions_OnRewind_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m01C02DBB682666A70A5284E256E3E22D60D23973(L_356, L_358, /*hidden argument*/TweenSettingsExtensions_OnRewind_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m01C02DBB682666A70A5284E256E3E22D60D23973_RuntimeMethod_var);
		// } else onRewind = null;
		goto IL_0c5a;
	}

IL_0c53:
	{
		// } else onRewind = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_onRewind_19((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)NULL);
	}

IL_0c5a:
	{
		// if (andPlay) tween.Play();
		bool L_360 = ___andPlay1;
		if (!L_360)
		{
			goto IL_0c6b;
		}
	}
	{
		// if (andPlay) tween.Play();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_361 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_362;
		L_362 = TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31(L_361, /*hidden argument*/TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31_RuntimeMethod_var);
		goto IL_0c77;
	}

IL_0c6b:
	{
		// else tween.Pause();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_363 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_364;
		L_364 = TweenExtensions_Pause_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE4F6594A9F21C88ACFBABF3AB75EDD4DEA5D757E(L_363, /*hidden argument*/TweenExtensions_Pause_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_mE4F6594A9F21C88ACFBABF3AB75EDD4DEA5D757E_RuntimeMethod_var);
	}

IL_0c77:
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		bool L_365 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_hasOnTweenCreated_11();
		if (!L_365)
		{
			goto IL_0c92;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_366 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onTweenCreated_18();
		if (!L_366)
		{
			goto IL_0c92;
		}
	}
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_367 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_onTweenCreated_18();
		NullCheck(L_367);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_367, /*hidden argument*/NULL);
	}

IL_0c92:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * DOTweenAnimation_GetTweens_m6CEFBD2424A1B36A35EFB2228F25EDD930E98225 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m782F802BE39FD4D3D5758579703B971BC396ABB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8875C86FFAC30CA85251C1B54879C9A33F4DF3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * V_0 = NULL;
	DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* V_1 = NULL;
	int32_t V_2 = 0;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * V_3 = NULL;
	{
		// List<Tween> result = new List<Tween>();
		List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * L_0 = (List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 *)il2cpp_codegen_object_new(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1_il2cpp_TypeInfo_var);
		List_1__ctor_mF8875C86FFAC30CA85251C1B54879C9A33F4DF3F(L_0, /*hidden argument*/List_1__ctor_mF8875C86FFAC30CA85251C1B54879C9A33F4DF3F_RuntimeMethod_var);
		V_0 = L_0;
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_1;
		L_1 = Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5(__this, /*hidden argument*/Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5_RuntimeMethod_var);
		// foreach (DOTweenAnimation anim in anims) {
		V_1 = L_1;
		V_2 = 0;
		goto IL_003a;
	}

IL_0011:
	{
		// foreach (DOTweenAnimation anim in anims) {
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (anim.tween != null && anim.tween.active) result.Add(anim.tween);
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_6 = V_3;
		NullCheck(L_6);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_7 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_6)->get_tween_20();
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_8 = V_3;
		NullCheck(L_8);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_9 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_8)->get_tween_20();
		NullCheck(L_9);
		bool L_10;
		L_10 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// if (anim.tween != null && anim.tween.active) result.Add(anim.tween);
		List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * L_11 = V_0;
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_12 = V_3;
		NullCheck(L_12);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_13 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_12)->get_tween_20();
		NullCheck(L_11);
		List_1_Add_m782F802BE39FD4D3D5758579703B971BC396ABB8(L_11, L_13, /*hidden argument*/List_1_Add_m782F802BE39FD4D3D5758579703B971BC396ABB8_RuntimeMethod_var);
	}

IL_0036:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003a:
	{
		// foreach (DOTweenAnimation anim in anims) {
		int32_t L_15 = V_2;
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * L_17 = V_0;
		return L_17;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::SetAnimationTarget(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_SetAnimationTarget_mC03AF8218A11EB3B9424395CD97413934BC74853 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___tweenTarget0, bool ___useTweenTargetGameObjectForGroupOperations1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetType newTargetType = TypeToDOTargetType(target.GetType());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = __this->get_target_39();
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = DOTweenAnimation_TypeToDOTargetType_mD220C04BEFF3124DCBEC5A74E175A83D9669CCDE(L_1, /*hidden argument*/NULL);
		// if (newTargetType != targetType) {
		int32_t L_3 = __this->get_targetType_41();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("DOTweenAnimation ► SetAnimationTarget: the new target is of a different type from the one set in the Inspector");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// target = tweenTarget;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_4 = ___tweenTarget0;
		__this->set_target_39(L_4);
		// targetGO = target.gameObject;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_5 = __this->get_target_39();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		__this->set_targetGO_23(L_6);
		// tweenTargetIsTargetGO = useTweenTargetGameObjectForGroupOperations;
		bool L_7 = ___useTweenTargetGameObjectForGroupOperations1;
		__this->set_tweenTargetIsTargetGO_24(L_7);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlay_m55EF2CCF936E6072533EC65D4E01EC0765776EBA (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m53FD8534D75DC36CE10ED32BB8740E5D5F8BB137(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwards_m529B86A67D0C508325B7EAA45E9F2FC33CD05F6C (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m74201E3BA7B961E1DAF58295EEC8262380A04915(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForward_m305B71268DD9576C0540CBA0977571062BEB37C3 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_mBB200A77ED42C89F1FD83D9976313689677DE854(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPause_m480B8EEA2029100FC105FFFC318AB6CE2693AD84 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_mC68F8854575C2310E18C7BC60FAD4A537E48CB4A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOTogglePause_m08093A047FC5F759027FC68447DDF1BD3F0E3D41 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.TogglePause(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_TogglePause_m83353399A7FB82BAAA1A627B2C8575D50C93DBD7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewind_mDE3EE0EB0D45E185729BCF9D1D96BA73D8DFEFD0 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m4E77DF8AB6CF3089AB9FF2485BFE2D95068E8B39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* V_0 = NULL;
	int32_t V_1 = 0;
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * V_2 = NULL;
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// DOTweenAnimation[] anims = this.gameObject.GetComponents<DOTweenAnimation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_1;
		L_1 = GameObject_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m4E77DF8AB6CF3089AB9FF2485BFE2D95068E8B39(L_0, /*hidden argument*/GameObject_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m4E77DF8AB6CF3089AB9FF2485BFE2D95068E8B39_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = anims.Length - 1; i > -1; --i) {
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1));
		goto IL_0041;
	}

IL_001b:
	{
		// Tween t = anims[i].tween;
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_7 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_6)->get_tween_20();
		V_2 = L_7;
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_9 = V_2;
		bool L_10;
		L_10 = TweenExtensions_IsInitialized_m08102B99DF2C56DD69B5BC0A13E7BE2AF2771DCC(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_15 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_14)->get_tween_20();
		TweenExtensions_Rewind_m6EDBC3C768C109A2DE9B550B419EBA9BF41695C8(L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_mF4E431258CD0D5ED1F69A4FEB5633F16D3CCAD40 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// { DORestart(false); }
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void DG.Tweening.Core.ABSAnimationComponent::DORestart(System.Boolean) */, __this, (bool)0);
		// { DORestart(false); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_mB8AC5C22A6E4F65D88261D0ED859E388E08C9C47 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, bool ___fromHere0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// if (tween == null) {
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		int32_t L_1;
		L_1 = Debugger_get_logPriority_m5215567ADC50AD7C86D992C1478FC46A52FEB26A_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		Debugger_LogNullTween_m9C8CD05BB0C4CEAE763C055B679695F8C9B63F81(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		return;
	}

IL_0023:
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		bool L_3 = ___fromHere0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->get_isRelative_32();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		DOTweenAnimation_ReEvaluateRelativeTween_m7B6F83011898AF2F763992474766A32CC525F572(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// DOTween.Restart(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = DOTween_Restart_mFB599A1231787EC78DFEF054A5E359D096D101B9(L_5, (bool)1, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOComplete_mDF962C3455944221E93A596FBB7550C8E86EAF14 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Complete(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Complete_m664BAC9F3C01F3759A689AC1304A108411D77B92(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKill_m499EA9909EAC7AC68AD37A35A3F2489BE769B1C9 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_mBC8A0B11DE32BF51D5D55454EC69180FAA32D04E(L_0, (bool)0, /*hidden argument*/NULL);
		// tween = null;
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayById_m7799D7544DCABCB48D0DB322FCA067DD61F444CE (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(GetTweenTarget(), id);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Play_m6458946093538C0826479CC75752DFE2385894C2(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayAllById_m99F814645D12FDB2484F836E7AF147AE60943E56 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m53FD8534D75DC36CE10ED32BB8740E5D5F8BB137(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPauseAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPauseAllById_m8E3CE08768794816304AC2DFA073EEEE59BF8EFC (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_mC68F8854575C2310E18C7BC60FAD4A537E48CB4A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsById_mD35AF87175A2B68E0AAE4C695AD09DFC78814BBC (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(GetTweenTarget(), id);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayBackwards_m62B52CB26A39E260720CE4D363C2C47F72377DEF(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsAllById_m44F743FA82D86F40915D2F0714C93CE9E880AEBF (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m74201E3BA7B961E1DAF58295EEC8262380A04915(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardById_m356FAD1D439681055D22BA50BD766950EE0466F3 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(GetTweenTarget(), id);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayForward_m33A9006CA4214C6695680115EF3E8D1E02DB48FD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardAllById_m0982889EF485A0CB1386144550608CADFC5D7670 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_mBB200A77ED42C89F1FD83D9976313689677DE854(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_m4AC569563CB7222351C9073445DB0C3C2CF8FE13 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* V_0 = NULL;
	DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * V_1 = NULL;
	{
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_0;
		L_0 = Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5(__this, /*hidden argument*/Component_GetComponents_TisDOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490_m72EC91600DA4109B149B72333D6CB15AF4F753B5_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0065;
	}

IL_0009:
	{
		// _playCount++;
		int32_t L_1 = __this->get__playCount_60();
		__this->set__playCount_60(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// DOTweenAnimation anim = anims[_playCount];
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_2 = V_0;
		int32_t L_3 = __this->get__playCount_60();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (anim != null && anim.tween != null && anim.tween.active && !anim.tween.IsPlaying() && !anim.tween.IsComplete()) {
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_8 = V_1;
		NullCheck(L_8);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_9 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_8)->get_tween_20();
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_10 = V_1;
		NullCheck(L_10);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_11 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_10)->get_tween_20();
		NullCheck(L_11);
		bool L_12;
		L_12 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_13 = V_1;
		NullCheck(L_13);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_14 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_13)->get_tween_20();
		bool L_15;
		L_15 = TweenExtensions_IsPlaying_m039B04BF955F0D68CA49C78BE582D3A6FAF6FD18(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_16 = V_1;
		NullCheck(L_16);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_17 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_16)->get_tween_20();
		bool L_18;
		L_18 = TweenExtensions_IsComplete_m4BDA44917C59C9819C490A45DE18775A83E3B5EA(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		// anim.tween.Play();
		DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * L_19 = V_1;
		NullCheck(L_19);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_20 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)L_19)->get_tween_20();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_21;
		L_21 = TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31(L_20, /*hidden argument*/TweenExtensions_Play_TisTween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941_m7D7FF6D85FE20C3BD22A96E98DDC4CAD5279DD31_RuntimeMethod_var);
		// break;
		return;
	}

IL_0065:
	{
		// while (_playCount < anims.Length - 1) {
		int32_t L_22 = __this->get__playCount_60();
		DOTweenAnimationU5BU5D_t39E75C178B491A7DB33EDBB37A318226BB058C91* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))), (int32_t)1)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAndPlayNext_m4D8D1BE58C95441DACC2242A23D291C484D22EE1 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// DOTween.Rewind(GetTweenTarget());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_m1125E74D1DAEDE564B63FBF7C58AF270DE34A46E(L_0, (bool)1, /*hidden argument*/NULL);
		// DOPlayNext();
		DOTweenAnimation_DOPlayNext_m4AC569563CB7222351C9073445DB0C3C2CF8FE13(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAllById_mB7F53CA76D1A3D17A4D671C3F74C45662305E589 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// DOTween.Rewind(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_m1125E74D1DAEDE564B63FBF7C58AF270DE34A46E(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartById_m8DB643BF75ED6C165570560EC81D741CBB63E18D (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// DOTween.Restart(GetTweenTarget(), id);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Restart_mD934EB8B81BB8EC3D9EFED527B25031513F2BC30(L_0, L_1, (bool)1, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartAllById_m26D051247B92CBC22959259C961700181E0101B2 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->set__playCount_60((-1));
		// DOTween.Restart(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Restart_mFB599A1231787EC78DFEF054A5E359D096D101B9(L_0, (bool)1, (-1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKillById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKillById_mA2886FD35D5EC5D57923AF951248CA6DE3024EF6 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(GetTweenTarget(), id);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Kill_m19CBA40D2CE17306588760B26C895D3DBBFECF0C(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKillAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKillAllById_mC8382DB9F8EAC97336E4B9916413FD305E0691CB (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(id);
		String_t* L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_mBC8A0B11DE32BF51D5D55454EC69180FAA32D04E(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mD220C04BEFF3124DCBEC5A74E175A83D9669CCDE (Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = t.ToString();
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// int dotIndex = str.LastIndexOf(".");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m80AFBEF2F3857F9D6A67126F4C4D9A9B9CEC5902(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_8, _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_10, _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		V_0 = _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
	}

IL_0042:
	{
		// if (str == "RawImage" || str == "Graphic") str = "Image"; // RawImages/Graphics are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_12, _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_14, _stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0062;
		}
	}

IL_005c:
	{
		// if (str == "RawImage" || str == "Graphic") str = "Image"; // RawImages/Graphics are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		V_0 = _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
	}

IL_0062:
	{
		// return (TargetType)Enum.Parse(typeof(TargetType), str);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_19;
		L_19 = Enum_Parse_m128197F25A38D7D23802A9DFC66B80E351BB76D1(L_17, L_18, /*hidden argument*/NULL);
		return ((*(int32_t*)((int32_t*)UnBox(L_19, TargetType_t85E231774F6A70E41146B8FAA9484D034851DD4C_il2cpp_TypeInfo_var))));
	}
}
// DG.Tweening.Tween DG.Tweening.DOTweenAnimation::CreateEditorPreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * DOTweenAnimation_CreateEditorPreview_mECBD24610EE45A6A91C81E4327B59ED6EF60B5DB (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.isPlaying) return null;
		bool L_0;
		L_0 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (Application.isPlaying) return null;
		return (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL;
	}

IL_0009:
	{
		// CreateTween(true, autoPlay);
		bool L_1 = __this->get_autoPlay_43();
		DOTweenAnimation_CreateTween_mDE89BD2F8C2CC46FB01A4F9D9410EC0BB681F491(__this, (bool)1, L_1, /*hidden argument*/NULL);
		// return tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		return L_2;
	}
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * DOTweenAnimation_GetTweenGO_m7AD749AB5948BDD90B4ABC3B2F09603025D618D7 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// return targetIsSelf ? this.gameObject : targetGO;
		bool L_0 = __this->get_targetIsSelf_22();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_targetGO_23();
		return L_1;
	}

IL_000f:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * DOTweenAnimation_GetTweenTarget_mBD37097CBFEDC4D0D65E88FBEEA25A93D68CEC33 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// return targetIsSelf || !tweenTargetIsTargetGO ? this.gameObject : targetGO;
		bool L_0 = __this->get_targetIsSelf_22();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_tweenTargetIsTargetGO_24();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_targetGO_23();
		return L_2;
	}

IL_0017:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_m7B6F83011898AF2F763992474766A32CC525F572 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = DOTweenAnimation_GetTweenGO_m7AD749AB5948BDD90B4ABC3B2F09603025D618D7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (tweenGO == null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_5, L_6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0031:
	{
		// if (animationType == AnimationType.Move) {
		int32_t L_7 = __this->get_animationType_40();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.position + endValueV3, true);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_8 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_endValueV3_46();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)CastclassClass((RuntimeObject*)L_8, Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var)));
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_16;
		L_16 = VirtFuncInvoker2< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, RuntimeObject *, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)CastclassClass((RuntimeObject*)L_8, Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var)), L_15, (bool)1);
		// } else if (animationType == AnimationType.LocalMove) {
		return;
	}

IL_0068:
	{
		// } else if (animationType == AnimationType.LocalMove) {
		int32_t L_17 = __this->get_animationType_40();
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_009e;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.localPosition + endValueV3, true);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_18 = ((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->get_tween_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_0;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_endValueV3_46();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = L_23;
		RuntimeObject * L_25 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_24);
		NullCheck(((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)CastclassClass((RuntimeObject*)L_18, Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var)));
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_26;
		L_26 = VirtFuncInvoker2< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, RuntimeObject *, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)CastclassClass((RuntimeObject*)L_18, Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_il2cpp_TypeInfo_var)), L_25, (bool)1);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation__ctor_m95DCD3E64FC5CC0B9329BC80EE93BBACF4E9CEC1 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool targetIsSelf = true; // If FALSE allows to set the target manually
		__this->set_targetIsSelf_22((bool)1);
		// public bool tweenTargetIsTargetGO = true;
		__this->set_tweenTargetIsTargetGO_24((bool)1);
		// public float duration = 1;
		__this->set_duration_26((1.0f));
		// public Ease easeType = Ease.OutQuad;
		__this->set_easeType_27(6);
		// public AnimationCurve easeCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		__this->set_easeCurve_28(L_5);
		// public int loops = 1;
		__this->set_loops_30(1);
		// public string id = "";
		__this->set_id_31(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool autoKill = true;
		__this->set_autoKill_35((bool)1);
		// public bool autoGenerate = true; // If TRUE automatically creates the tween at startup
		__this->set_autoGenerate_36((bool)1);
		// public bool isActive = true;
		__this->set_isActive_37((bool)1);
		// public bool autoPlay = true;
		__this->set_autoPlay_43((bool)1);
		// public Color endValueColor = new Color(1, 1, 1, 1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_endValueColor_48(L_6);
		// public string endValueString = "";
		__this->set_endValueString_49(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Rect endValueRect = new Rect(0, 0, 0, 0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_endValueRect_50(L_7);
		// int _playCount = -1; // Used when calling DOPlayNext
		__this->set__playCount_60((-1));
		ABSAnimationComponent__ctor_mF453633C79A30A108832D3F331DAB5E4CA24B272(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__53_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m2130CFA41530B17308434DC9734CE06B1F405566 (DOTweenAnimation_tD167605EBCFF0688B84528C71BE0DE1682E90490 * __this, const RuntimeMethod* method)
{
	{
		// .OnKill(()=> tween = null);
		((ABSAnimationComponent_tA96E6E40900885BB8CC7E8BDA290CE8533CCDFB7 *)__this)->set_tween_20((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL);
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
// System.Void DG.Tweening.DOTweenProShortcuts::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenProShortcuts__cctor_m45DE9ED6D6363596BD08E4A47F3E34C1C4B35015 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpiralPlugin stub = new SpiralPlugin();
		SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC * L_0 = (SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC *)il2cpp_codegen_object_new(SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		SpiralPlugin__ctor_m467878873C3500DB44218752941B4125FD763275(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * DOTweenProShortcuts_DOSpiral_m9FF2C611FF34E062E7290BDE1BF7CE91B50794FE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___duration1, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mD6C68057C5904C9922FB332E9E52FA3961F894D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m05A6171BC23AB72C2E9CC83D3D041007341970CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * V_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * L_0 = (U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m212C5524D1DCEBF6A62197AABBC9E206709600BB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * L_1 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_mFEB0CB3531393F6CBE07C6E0FCB473B3311F799A(L_3, (0.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_10, L_11, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50(/*hidden argument*/NULL);
		Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), L_13, /*hidden argument*/Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		//     .SetTarget(target);
		IL2CPP_RUNTIME_CLASS_INIT(SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * L_14;
		L_14 = SpiralPlugin_Get_mD5EFBC6B6514CB9A948E879BC7805772E66E6EA3(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * L_15 = V_0;
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_16 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)il2cpp_codegen_object_new(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mD6C68057C5904C9922FB332E9E52FA3961F894D2_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * L_17 = V_0;
		DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * L_18 = (DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 *)il2cpp_codegen_object_new(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m05A6171BC23AB72C2E9CC83D3D041007341970CC_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		float L_20 = ___duration1;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_21;
		L_21 = DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6(L_14, L_16, L_18, L_19, L_20, /*hidden argument*/DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * L_22 = V_0;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22->get_target_0();
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_24;
		L_24 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A(L_21, L_23, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_25 = L_24;
		NullCheck(L_25);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_26 = L_25->get_address_of_plugOptions_60();
		int32_t L_27 = ___mode3;
		L_26->set_mode_3(L_27);
		// t.plugOptions.speed = speed;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_28 = L_25;
		NullCheck(L_28);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_29 = L_28->get_address_of_plugOptions_60();
		float L_30 = ___speed4;
		L_29->set_speed_2(L_30);
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_31 = L_28;
		NullCheck(L_31);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_32 = L_31->get_address_of_plugOptions_60();
		float L_33 = ___frequency5;
		L_32->set_frequency_1(L_33);
		// t.plugOptions.depth = depth;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_34 = L_31;
		NullCheck(L_34);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_35 = L_34->get_address_of_plugOptions_60();
		float L_36 = ___depth6;
		L_35->set_depth_0(L_36);
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_37 = L_34;
		NullCheck(L_37);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_38 = L_37->get_address_of_plugOptions_60();
		bool L_39 = ___snapping7;
		L_38->set_snapping_4(L_39);
		// return t;
		return L_37;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Rigidbody,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * DOTweenProShortcuts_DOSpiral_m7B17122B7F2211B4A874BCFA95B5563C0E936654 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target0, float ___duration1, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mD23E6625D8D9DCADA9C4829EAD581D815D224FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * V_0 = NULL;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * L_0 = (U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m6449FDA961297AA8A61A5BD8EE4BA3C3F4AA6096(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * L_1 = V_0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = ___target0;
		NullCheck(L_1);
		L_1->set_target_0(L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_mFEB0CB3531393F6CBE07C6E0FCB473B3311F799A(L_3, (0.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_10, L_11, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50(/*hidden argument*/NULL);
		Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), L_13, /*hidden argument*/Nullable_1__ctor_m6F1238037ACD87D7DC2C911C35EEC7D1B73F5830_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		//     .SetTarget(target);
		IL2CPP_RUNTIME_CLASS_INIT(SpiralPlugin_t5EB8301AC3A14656C7807DDFA7DC526FB6D323AC_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tBCE51E6C282484A72E31C6EE98D971653D57CB15 * L_14;
		L_14 = SpiralPlugin_Get_mD5EFBC6B6514CB9A948E879BC7805772E66E6EA3(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * L_15 = V_0;
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_16 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)il2cpp_codegen_object_new(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mD23E6625D8D9DCADA9C4829EAD581D815D224FA9_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_m7537F12632FAD0C4475AC13323E07B2D2C6FF081_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * L_17 = V_0;
		NullCheck(L_17);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = L_17->get_target_0();
		DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * L_19 = (DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 *)il2cpp_codegen_object_new(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733(L_19, L_18, (intptr_t)((intptr_t)Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_m23DF8B62FE29CBDA90726662AEA2755DF765E733_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___axis2), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		float L_21 = ___duration1;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_22;
		L_22 = DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6(L_14, L_16, L_19, L_20, L_21, /*hidden argument*/DOTween_To_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisSpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A_mDABB642485FB792C0A78EA98FA721E99D51CF5D6_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * L_23 = V_0;
		NullCheck(L_23);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_24 = L_23->get_target_0();
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_25;
		L_25 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A(L_22, L_24, /*hidden argument*/TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF_mB341D2A7CB3CA8C75964AE46A0C59607AB40253A_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_26 = L_25;
		NullCheck(L_26);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_27 = L_26->get_address_of_plugOptions_60();
		int32_t L_28 = ___mode3;
		L_27->set_mode_3(L_28);
		// t.plugOptions.speed = speed;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_29 = L_26;
		NullCheck(L_29);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_30 = L_29->get_address_of_plugOptions_60();
		float L_31 = ___speed4;
		L_30->set_speed_2(L_31);
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_32 = L_29;
		NullCheck(L_32);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_33 = L_32->get_address_of_plugOptions_60();
		float L_34 = ___frequency5;
		L_33->set_frequency_1(L_34);
		// t.plugOptions.depth = depth;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_35 = L_32;
		NullCheck(L_35);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_36 = L_35->get_address_of_plugOptions_60();
		float L_37 = ___depth6;
		L_36->set_depth_0(L_37);
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_t5B9E6041E4B4A90F9E20CE568C9BC018F6A3A4CF * L_38 = L_35;
		NullCheck(L_38);
		SpiralOptions_t344822085AB8E37733A09108998672D323EBDC9A * L_39 = L_38->get_address_of_plugOptions_60();
		bool L_40 = ___snapping7;
		L_39->set_snapping_4(L_40);
		// return t;
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
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m212C5524D1DCEBF6A62197AABBC9E206709600BB (U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mD6C68057C5904C9922FB332E9E52FA3961F894D2 (U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m05A6171BC23AB72C2E9CC83D3D041007341970CC (U3CU3Ec__DisplayClass1_0_t127591486C04E3897118410BC6BB2E5C1D5E7ABF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6449FDA961297AA8A61A5BD8EE4BA3C3F4AA6096 (U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mD23E6625D8D9DCADA9C4829EAD581D815D224FA9 (U3CU3Ec__DisplayClass2_0_t2720BE36F573DF0A74D87C33EF3D423F7DD82FD1 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CactiveU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m5215567ADC50AD7C86D992C1478FC46A52FEB26A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_t2D5E755BBD72BE29AB5ECA77979DC4B945BD573F_il2cpp_TypeInfo_var))->get__logPriority_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_GetValueOrDefault_m22A9A70B032220FAB99C944188FE4D0259EC886A_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_value_0();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
