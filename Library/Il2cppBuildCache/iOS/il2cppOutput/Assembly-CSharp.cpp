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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshSurface>
struct List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499;
// System.Collections.Generic.Queue`1<System.Int32[]>
struct Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DragControlScript
struct DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// FoodManager
struct FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// MainController
struct MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE;
// MainMenuManager
struct MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE;
// MapGeneratorScript
struct MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// UnityEngine.AI.NavMeshData
struct NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6;
// UnityEngine.AI.NavMeshSurface
struct NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PauseControl
struct PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85;
// RatBaseState
struct RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1;
// RatContainer
struct RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11;
// RatController
struct RatController_tAD14641E93C5D6BC55EDC299ADFC7C3F48960DA1;
// RatDeathState
struct RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3;
// RatEatingState
struct RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2;
// RatIdleState
struct RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83;
// RatLookingForFoodState
struct RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4;
// RatManager
struct RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8;
// RatScript
struct RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF;
// RatSleepingState
struct RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544;
// RatSpawnState
struct RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// SettingMenuManager
struct SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0A45FC8203EA38F824604BE223774335C5F01A40;
IL2CPP_EXTERN_C String_t* _stringLiteral0D45F725B1A81BD9702CBCB1E7F8008CBCE4E9ED;
IL2CPP_EXTERN_C String_t* _stringLiteral112DE891A861FA63F392A21E5500DB2351F835B1;
IL2CPP_EXTERN_C String_t* _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26243C1EA0773F7D677E96AD5A25A15C90ABFA83;
IL2CPP_EXTERN_C String_t* _stringLiteral44F7A1BBDBC54F367FCC353FE64AB1EC5B640E17;
IL2CPP_EXTERN_C String_t* _stringLiteral4D38BB1F8E8EB191370FAE21E9402E86BD85B710;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral50CF19AC453632AAB00DF64B10E8D547D540E9B5;
IL2CPP_EXTERN_C String_t* _stringLiteral56F3560ADA10DBA9C322A6973D663CAAD2B0004D;
IL2CPP_EXTERN_C String_t* _stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3;
IL2CPP_EXTERN_C String_t* _stringLiteral5C3FF849AC561FC4A9583DE8096F925346B0D655;
IL2CPP_EXTERN_C String_t* _stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2;
IL2CPP_EXTERN_C String_t* _stringLiteral61C667B8AF1B61DA474DDF0E74692262538B2905;
IL2CPP_EXTERN_C String_t* _stringLiteral72A26EFBA99A894C7DDBA362C14DD2108E9D59D5;
IL2CPP_EXTERN_C String_t* _stringLiteral90F54B7BFEE63FC7CF1A6ECC3EBE9DEFA4807B5E;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E3B5D9F6D09A2672E908486041F3A6D0C474827;
IL2CPP_EXTERN_C String_t* _stringLiteralA29C1E216E6053582CF409232F29617A5729D2DB;
IL2CPP_EXTERN_C String_t* _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79;
IL2CPP_EXTERN_C String_t* _stringLiteralB0EA8C8A08A599A8528EB581F015EC475961F7FB;
IL2CPP_EXTERN_C String_t* _stringLiteralC00B97E8261E5F06B8F7A3FC9A6E016376DA60B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC2102B0860BFB656222741B782D56B5684F78CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF43CC53DEC9784A8930E483FF6BF2B85B3805EBF;
IL2CPP_EXTERN_C String_t* _stringLiteralF6894551D0A9AFA70901AA04BA1B590ADB732257;
IL2CPP_EXTERN_C String_t* _stringLiteralF92A19FFF30FF9FACC453DDDD7858F6891469B03;
IL2CPP_EXTERN_C String_t* _stringLiteralFF59752E8A72696F8B8E12BCBC2B7B6C33DF6EB6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8_m2AD53757DCA4E1E04EA8CD64CEB9CDC5CA6942B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF_m38139505971FC6FE828869D630987296CD704203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_0_0_0_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct  LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	int32_t ___item_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883, ___list_0)); }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883, ___next_1)); }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * get_next_1() const { return ___next_1; }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_prev_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883, ___prev_2)); }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * get_prev_2() const { return ___prev_2; }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 ** get_address_of_prev_2() { return &___prev_2; }
	inline void set_prev_2(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * value)
	{
		___prev_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_2), (void*)value);
	}

	inline static int32_t get_offset_of_item_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883, ___item_3)); }
	inline int32_t get_item_3() const { return ___item_3; }
	inline int32_t* get_address_of_item_3() { return &___item_3; }
	inline void set_item_3(int32_t value)
	{
		___item_3 = value;
	}
};


// System.Collections.Generic.LinkedList`1<System.Int32>
struct  LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject * ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43, ___head_0)); }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * get_head_0() const { return ___head_0; }
	inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_4() { return static_cast<int32_t>(offsetof(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43, ____siInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_4() const { return ____siInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_4() { return &____siInfo_4; }
	inline void set__siInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_4), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Int32[]>
struct  Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65, ____array_0)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__array_0() const { return ____array_0; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// GlobalScript
struct  GlobalScript_t4631B2DFFDA9B6CF4734555319773F659E289F93  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// RatBaseState
struct  RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
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


// UnityEngine.AI.NavMeshDataInstance
struct  NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// RatDeathState
struct  RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:

public:
};


// RatEatingState
struct  RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:

public:
};


// RatIdleState
struct  RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:
	// System.Int32[0...,0...] RatIdleState::codDirection
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___codDirection_0;

public:
	inline static int32_t get_offset_of_codDirection_0() { return static_cast<int32_t>(offsetof(RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83, ___codDirection_0)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_codDirection_0() const { return ___codDirection_0; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_codDirection_0() { return &___codDirection_0; }
	inline void set_codDirection_0(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___codDirection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codDirection_0), (void*)value);
	}
};


// RatLookingForFoodState
struct  RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:

public:
};


// RatSleepingState
struct  RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:

public:
};


// RatSpawnState
struct  RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9  : public RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1
{
public:

public:
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D256
struct  __StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D400
struct  __StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604__padding[400];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D64
struct  __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C__padding[64];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE
	__StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  ___182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D400 <PrivateImplementationDetails>::A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245
	__StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604  ___A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65
	__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  ___C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D256 <PrivateImplementationDetails>::C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683
	__StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449  ___C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967
	__StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  ___E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4;

public:
	inline static int32_t get_offset_of_U3182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0)); }
	inline __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  get_U3182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0() const { return ___182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0; }
	inline __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C * get_address_of_U3182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0() { return &___182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0; }
	inline void set_U3182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0(__StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  value)
	{
		___182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0 = value;
	}

	inline static int32_t get_offset_of_A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1)); }
	inline __StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604  get_A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1() const { return ___A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1; }
	inline __StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604 * get_address_of_A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1() { return &___A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1; }
	inline void set_A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1(__StaticArrayInitTypeSizeU3D400_t5351E3D9AB47CB6C90668B6ED47665C059E22604  value)
	{
		___A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1 = value;
	}

	inline static int32_t get_offset_of_C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2)); }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  get_C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2() const { return ___C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2; }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F * get_address_of_C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2() { return &___C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2; }
	inline void set_C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2(__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  value)
	{
		___C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2 = value;
	}

	inline static int32_t get_offset_of_C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3)); }
	inline __StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449  get_C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3() const { return ___C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3; }
	inline __StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449 * get_address_of_C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3() { return &___C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3; }
	inline void set_C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3(__StaticArrayInitTypeSizeU3D256_t54C7F26E5B56B7887AE4586ABF35C9B1633A3449  value)
	{
		___C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3 = value;
	}

	inline static int32_t get_offset_of_E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4)); }
	inline __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  get_E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4() const { return ___E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4; }
	inline __StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C * get_address_of_E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4() { return &___E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4; }
	inline void set_E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4(__StaticArrayInitTypeSizeU3D64_t793535D031B918C2C510207830D7BE6CAC6F369C  value)
	{
		___E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// UnityEngine.AI.CollectObjects
struct  CollectObjects_tAAF0B45BCD3A5C4ADCEB191AD1AB0157F1EBC24C 
{
public:
	// System.Int32 UnityEngine.AI.CollectObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollectObjects_tAAF0B45BCD3A5C4ADCEB191AD1AB0157F1EBC24C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AI.NavMeshCollectGeometry
struct  NavMeshCollectGeometry_t228065EE99BAA25413A8819074B0222CF4AECA27 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshCollectGeometry::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NavMeshCollectGeometry_t228065EE99BAA25413A8819074B0222CF4AECA27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/CharacterValidation
struct  CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3 
{
public:
	// System.Int32 TMPro.TMP_InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/ContentType
struct  ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D 
{
public:
	// System.Int32 TMPro.TMP_InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/InputType
struct  InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95 
{
public:
	// System.Int32 TMPro.TMP_InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/LineType
struct  LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC 
{
public:
	// System.Int32 TMPro.TMP_InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

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


// CameraController
struct  CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera CameraController::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_4;
	// UnityEngine.Vector3 CameraController::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_5;
	// System.Boolean CameraController::upPressed
	bool ___upPressed_6;
	// System.Boolean CameraController::downPressed
	bool ___downPressed_7;
	// System.Boolean CameraController::leftPressed
	bool ___leftPressed_8;
	// System.Boolean CameraController::rightPressed
	bool ___rightPressed_9;
	// MapGeneratorScript CameraController::mg
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * ___mg_10;
	// System.Int32[0...,0...] CameraController::map
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map_11;
	// System.Single CameraController::topBound
	float ___topBound_12;
	// System.Single CameraController::bottomBound
	float ___bottomBound_13;
	// System.Single CameraController::leftBound
	float ___leftBound_14;
	// System.Single CameraController::rightBound
	float ___rightBound_15;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cam_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_4() const { return ___cam_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___pos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_5() const { return ___pos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_upPressed_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___upPressed_6)); }
	inline bool get_upPressed_6() const { return ___upPressed_6; }
	inline bool* get_address_of_upPressed_6() { return &___upPressed_6; }
	inline void set_upPressed_6(bool value)
	{
		___upPressed_6 = value;
	}

	inline static int32_t get_offset_of_downPressed_7() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___downPressed_7)); }
	inline bool get_downPressed_7() const { return ___downPressed_7; }
	inline bool* get_address_of_downPressed_7() { return &___downPressed_7; }
	inline void set_downPressed_7(bool value)
	{
		___downPressed_7 = value;
	}

	inline static int32_t get_offset_of_leftPressed_8() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___leftPressed_8)); }
	inline bool get_leftPressed_8() const { return ___leftPressed_8; }
	inline bool* get_address_of_leftPressed_8() { return &___leftPressed_8; }
	inline void set_leftPressed_8(bool value)
	{
		___leftPressed_8 = value;
	}

	inline static int32_t get_offset_of_rightPressed_9() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___rightPressed_9)); }
	inline bool get_rightPressed_9() const { return ___rightPressed_9; }
	inline bool* get_address_of_rightPressed_9() { return &___rightPressed_9; }
	inline void set_rightPressed_9(bool value)
	{
		___rightPressed_9 = value;
	}

	inline static int32_t get_offset_of_mg_10() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___mg_10)); }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * get_mg_10() const { return ___mg_10; }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 ** get_address_of_mg_10() { return &___mg_10; }
	inline void set_mg_10(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * value)
	{
		___mg_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mg_10), (void*)value);
	}

	inline static int32_t get_offset_of_map_11() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___map_11)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_map_11() const { return ___map_11; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_map_11() { return &___map_11; }
	inline void set_map_11(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___map_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_11), (void*)value);
	}

	inline static int32_t get_offset_of_topBound_12() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___topBound_12)); }
	inline float get_topBound_12() const { return ___topBound_12; }
	inline float* get_address_of_topBound_12() { return &___topBound_12; }
	inline void set_topBound_12(float value)
	{
		___topBound_12 = value;
	}

	inline static int32_t get_offset_of_bottomBound_13() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___bottomBound_13)); }
	inline float get_bottomBound_13() const { return ___bottomBound_13; }
	inline float* get_address_of_bottomBound_13() { return &___bottomBound_13; }
	inline void set_bottomBound_13(float value)
	{
		___bottomBound_13 = value;
	}

	inline static int32_t get_offset_of_leftBound_14() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___leftBound_14)); }
	inline float get_leftBound_14() const { return ___leftBound_14; }
	inline float* get_address_of_leftBound_14() { return &___leftBound_14; }
	inline void set_leftBound_14(float value)
	{
		___leftBound_14 = value;
	}

	inline static int32_t get_offset_of_rightBound_15() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___rightBound_15)); }
	inline float get_rightBound_15() const { return ___rightBound_15; }
	inline float* get_address_of_rightBound_15() { return &___rightBound_15; }
	inline void set_rightBound_15(float value)
	{
		___rightBound_15 = value;
	}
};


// DragControlScript
struct  DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapGeneratorScript DragControlScript::mg
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * ___mg_4;
	// UnityEngine.GameObject DragControlScript::hitObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject_5;
	// System.Boolean DragControlScript::isDragging
	bool ___isDragging_6;
	// UnityEngine.Vector3 DragControlScript::screenPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenPosition_7;
	// UnityEngine.Plane DragControlScript::movePlane
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___movePlane_8;
	// System.Int32[0...,0...] DragControlScript::map
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map_9;

public:
	inline static int32_t get_offset_of_mg_4() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___mg_4)); }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * get_mg_4() const { return ___mg_4; }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 ** get_address_of_mg_4() { return &___mg_4; }
	inline void set_mg_4(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * value)
	{
		___mg_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mg_4), (void*)value);
	}

	inline static int32_t get_offset_of_hitObject_5() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___hitObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitObject_5() const { return ___hitObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitObject_5() { return &___hitObject_5; }
	inline void set_hitObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_isDragging_6() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___isDragging_6)); }
	inline bool get_isDragging_6() const { return ___isDragging_6; }
	inline bool* get_address_of_isDragging_6() { return &___isDragging_6; }
	inline void set_isDragging_6(bool value)
	{
		___isDragging_6 = value;
	}

	inline static int32_t get_offset_of_screenPosition_7() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___screenPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenPosition_7() const { return ___screenPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenPosition_7() { return &___screenPosition_7; }
	inline void set_screenPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenPosition_7 = value;
	}

	inline static int32_t get_offset_of_movePlane_8() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___movePlane_8)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_movePlane_8() const { return ___movePlane_8; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_movePlane_8() { return &___movePlane_8; }
	inline void set_movePlane_8(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___movePlane_8 = value;
	}

	inline static int32_t get_offset_of_map_9() { return static_cast<int32_t>(offsetof(DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF, ___map_9)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_map_9() const { return ___map_9; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_map_9() { return &___map_9; }
	inline void set_map_9(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___map_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_9), (void*)value);
	}
};


// FoodManager
struct  FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapGeneratorScript FoodManager::mg
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * ___mg_4;
	// System.Int32[0...,0...] FoodManager::foodMap
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___foodMap_5;

public:
	inline static int32_t get_offset_of_mg_4() { return static_cast<int32_t>(offsetof(FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424, ___mg_4)); }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * get_mg_4() const { return ___mg_4; }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 ** get_address_of_mg_4() { return &___mg_4; }
	inline void set_mg_4(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * value)
	{
		___mg_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mg_4), (void*)value);
	}

	inline static int32_t get_offset_of_foodMap_5() { return static_cast<int32_t>(offsetof(FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424, ___foodMap_5)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_foodMap_5() const { return ___foodMap_5; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_foodMap_5() { return &___foodMap_5; }
	inline void set_foodMap_5(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___foodMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodMap_5), (void*)value);
	}
};


// GameOverManager
struct  GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOverManager::GameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverPanel_4;
	// UnityEngine.GameObject GameOverManager::RatPopulationGraphContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RatPopulationGraphContainer_5;
	// UnityEngine.Sprite GameOverManager::circleSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___circleSprite_6;
	// PauseControl GameOverManager::pcs
	PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * ___pcs_7;
	// UnityEngine.RectTransform GameOverManager::RatPopulationGraphTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___RatPopulationGraphTransform_8;
	// System.Int32[] GameOverManager::totalRatData
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___totalRatData_9;
	// System.Int32[] GameOverManager::deadRatData
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___deadRatData_10;

public:
	inline static int32_t get_offset_of_GameOverPanel_4() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___GameOverPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverPanel_4() const { return ___GameOverPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverPanel_4() { return &___GameOverPanel_4; }
	inline void set_GameOverPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_RatPopulationGraphContainer_5() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___RatPopulationGraphContainer_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RatPopulationGraphContainer_5() const { return ___RatPopulationGraphContainer_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RatPopulationGraphContainer_5() { return &___RatPopulationGraphContainer_5; }
	inline void set_RatPopulationGraphContainer_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RatPopulationGraphContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatPopulationGraphContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_circleSprite_6() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___circleSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_circleSprite_6() const { return ___circleSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_circleSprite_6() { return &___circleSprite_6; }
	inline void set_circleSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___circleSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circleSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_pcs_7() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___pcs_7)); }
	inline PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * get_pcs_7() const { return ___pcs_7; }
	inline PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 ** get_address_of_pcs_7() { return &___pcs_7; }
	inline void set_pcs_7(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * value)
	{
		___pcs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcs_7), (void*)value);
	}

	inline static int32_t get_offset_of_RatPopulationGraphTransform_8() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___RatPopulationGraphTransform_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_RatPopulationGraphTransform_8() const { return ___RatPopulationGraphTransform_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_RatPopulationGraphTransform_8() { return &___RatPopulationGraphTransform_8; }
	inline void set_RatPopulationGraphTransform_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___RatPopulationGraphTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatPopulationGraphTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_totalRatData_9() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___totalRatData_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_totalRatData_9() const { return ___totalRatData_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_totalRatData_9() { return &___totalRatData_9; }
	inline void set_totalRatData_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___totalRatData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalRatData_9), (void*)value);
	}

	inline static int32_t get_offset_of_deadRatData_10() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___deadRatData_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_deadRatData_10() const { return ___deadRatData_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_deadRatData_10() { return &___deadRatData_10; }
	inline void set_deadRatData_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___deadRatData_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deadRatData_10), (void*)value);
	}
};


// MainController
struct  MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MainController::days
	int32_t ___days_4;
	// System.Int32 MainController::hours
	int32_t ___hours_5;

public:
	inline static int32_t get_offset_of_days_4() { return static_cast<int32_t>(offsetof(MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE, ___days_4)); }
	inline int32_t get_days_4() const { return ___days_4; }
	inline int32_t* get_address_of_days_4() { return &___days_4; }
	inline void set_days_4(int32_t value)
	{
		___days_4 = value;
	}

	inline static int32_t get_offset_of_hours_5() { return static_cast<int32_t>(offsetof(MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE, ___hours_5)); }
	inline int32_t get_hours_5() const { return ___hours_5; }
	inline int32_t* get_address_of_hours_5() { return &___hours_5; }
	inline void set_hours_5(int32_t value)
	{
		___hours_5 = value;
	}
};


// MainMenuManager
struct  MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TMP_InputField MainMenuManager::unitNumberInput
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___unitNumberInput_4;
	// TMPro.TMP_InputField MainMenuManager::ratNumberInput
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___ratNumberInput_5;

public:
	inline static int32_t get_offset_of_unitNumberInput_4() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___unitNumberInput_4)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_unitNumberInput_4() const { return ___unitNumberInput_4; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_unitNumberInput_4() { return &___unitNumberInput_4; }
	inline void set_unitNumberInput_4(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___unitNumberInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitNumberInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_ratNumberInput_5() { return static_cast<int32_t>(offsetof(MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE, ___ratNumberInput_5)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_ratNumberInput_5() const { return ___ratNumberInput_5; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_ratNumberInput_5() { return &___ratNumberInput_5; }
	inline void set_ratNumberInput_5(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___ratNumberInput_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ratNumberInput_5), (void*)value);
	}
};


// MapGeneratorScript
struct  MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] MapGeneratorScript::mazeWall
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___mazeWall_4;
	// UnityEngine.GameObject MapGeneratorScript::MainMaze
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MainMaze_5;
	// UnityEngine.GameObject MapGeneratorScript::floorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___floorObject_6;
	// UnityEngine.GameObject MapGeneratorScript::foodBowlModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foodBowlModel_7;
	// UnityEngine.GameObject MapGeneratorScript::waterBottleModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___waterBottleModel_8;
	// UnityEngine.AI.NavMeshSurface MapGeneratorScript::surface
	NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * ___surface_9;
	// System.Single MapGeneratorScript::xOS
	float ___xOS_10;
	// System.Single MapGeneratorScript::yOS
	float ___yOS_11;
	// System.Single MapGeneratorScript::zOS
	float ___zOS_12;
	// System.Int32 MapGeneratorScript::unitNumber
	int32_t ___unitNumber_13;
	// System.Int32 MapGeneratorScript::ratNumber
	int32_t ___ratNumber_14;
	// System.Int32[0...,0...] MapGeneratorScript::defaultmap
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___defaultmap_15;
	// System.Int32[0...,0...] MapGeneratorScript::map
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map_16;
	// System.Int32[0...,0...] MapGeneratorScript::bedroomUnit
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___bedroomUnit_17;
	// System.Int32[0...,0...] MapGeneratorScript::livingRoomUnit
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___livingRoomUnit_18;
	// System.Int32[0...,0...] MapGeneratorScript::unitPattern
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___unitPattern_22;

public:
	inline static int32_t get_offset_of_mazeWall_4() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___mazeWall_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_mazeWall_4() const { return ___mazeWall_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_mazeWall_4() { return &___mazeWall_4; }
	inline void set_mazeWall_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___mazeWall_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mazeWall_4), (void*)value);
	}

	inline static int32_t get_offset_of_MainMaze_5() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___MainMaze_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MainMaze_5() const { return ___MainMaze_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MainMaze_5() { return &___MainMaze_5; }
	inline void set_MainMaze_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MainMaze_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainMaze_5), (void*)value);
	}

	inline static int32_t get_offset_of_floorObject_6() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___floorObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_floorObject_6() const { return ___floorObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_floorObject_6() { return &___floorObject_6; }
	inline void set_floorObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___floorObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodBowlModel_7() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___foodBowlModel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foodBowlModel_7() const { return ___foodBowlModel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foodBowlModel_7() { return &___foodBowlModel_7; }
	inline void set_foodBowlModel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foodBowlModel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodBowlModel_7), (void*)value);
	}

	inline static int32_t get_offset_of_waterBottleModel_8() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___waterBottleModel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_waterBottleModel_8() const { return ___waterBottleModel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_waterBottleModel_8() { return &___waterBottleModel_8; }
	inline void set_waterBottleModel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___waterBottleModel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterBottleModel_8), (void*)value);
	}

	inline static int32_t get_offset_of_surface_9() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___surface_9)); }
	inline NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * get_surface_9() const { return ___surface_9; }
	inline NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A ** get_address_of_surface_9() { return &___surface_9; }
	inline void set_surface_9(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * value)
	{
		___surface_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surface_9), (void*)value);
	}

	inline static int32_t get_offset_of_xOS_10() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___xOS_10)); }
	inline float get_xOS_10() const { return ___xOS_10; }
	inline float* get_address_of_xOS_10() { return &___xOS_10; }
	inline void set_xOS_10(float value)
	{
		___xOS_10 = value;
	}

	inline static int32_t get_offset_of_yOS_11() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___yOS_11)); }
	inline float get_yOS_11() const { return ___yOS_11; }
	inline float* get_address_of_yOS_11() { return &___yOS_11; }
	inline void set_yOS_11(float value)
	{
		___yOS_11 = value;
	}

	inline static int32_t get_offset_of_zOS_12() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___zOS_12)); }
	inline float get_zOS_12() const { return ___zOS_12; }
	inline float* get_address_of_zOS_12() { return &___zOS_12; }
	inline void set_zOS_12(float value)
	{
		___zOS_12 = value;
	}

	inline static int32_t get_offset_of_unitNumber_13() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___unitNumber_13)); }
	inline int32_t get_unitNumber_13() const { return ___unitNumber_13; }
	inline int32_t* get_address_of_unitNumber_13() { return &___unitNumber_13; }
	inline void set_unitNumber_13(int32_t value)
	{
		___unitNumber_13 = value;
	}

	inline static int32_t get_offset_of_ratNumber_14() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___ratNumber_14)); }
	inline int32_t get_ratNumber_14() const { return ___ratNumber_14; }
	inline int32_t* get_address_of_ratNumber_14() { return &___ratNumber_14; }
	inline void set_ratNumber_14(int32_t value)
	{
		___ratNumber_14 = value;
	}

	inline static int32_t get_offset_of_defaultmap_15() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___defaultmap_15)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_defaultmap_15() const { return ___defaultmap_15; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_defaultmap_15() { return &___defaultmap_15; }
	inline void set_defaultmap_15(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___defaultmap_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultmap_15), (void*)value);
	}

	inline static int32_t get_offset_of_map_16() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___map_16)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_map_16() const { return ___map_16; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_map_16() { return &___map_16; }
	inline void set_map_16(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___map_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_16), (void*)value);
	}

	inline static int32_t get_offset_of_bedroomUnit_17() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___bedroomUnit_17)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_bedroomUnit_17() const { return ___bedroomUnit_17; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_bedroomUnit_17() { return &___bedroomUnit_17; }
	inline void set_bedroomUnit_17(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___bedroomUnit_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bedroomUnit_17), (void*)value);
	}

	inline static int32_t get_offset_of_livingRoomUnit_18() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___livingRoomUnit_18)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_livingRoomUnit_18() const { return ___livingRoomUnit_18; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_livingRoomUnit_18() { return &___livingRoomUnit_18; }
	inline void set_livingRoomUnit_18(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___livingRoomUnit_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livingRoomUnit_18), (void*)value);
	}

	inline static int32_t get_offset_of_unitPattern_22() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40, ___unitPattern_22)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_unitPattern_22() const { return ___unitPattern_22; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_unitPattern_22() { return &___unitPattern_22; }
	inline void set_unitPattern_22(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___unitPattern_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitPattern_22), (void*)value);
	}
};

struct MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields
{
public:
	// System.Int32 MapGeneratorScript::Wall_Code
	int32_t ___Wall_Code_19;
	// System.Int32 MapGeneratorScript::Food_Bowl_Code
	int32_t ___Food_Bowl_Code_20;
	// System.Int32 MapGeneratorScript::Water_Bottle_Code
	int32_t ___Water_Bottle_Code_21;

public:
	inline static int32_t get_offset_of_Wall_Code_19() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields, ___Wall_Code_19)); }
	inline int32_t get_Wall_Code_19() const { return ___Wall_Code_19; }
	inline int32_t* get_address_of_Wall_Code_19() { return &___Wall_Code_19; }
	inline void set_Wall_Code_19(int32_t value)
	{
		___Wall_Code_19 = value;
	}

	inline static int32_t get_offset_of_Food_Bowl_Code_20() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields, ___Food_Bowl_Code_20)); }
	inline int32_t get_Food_Bowl_Code_20() const { return ___Food_Bowl_Code_20; }
	inline int32_t* get_address_of_Food_Bowl_Code_20() { return &___Food_Bowl_Code_20; }
	inline void set_Food_Bowl_Code_20(int32_t value)
	{
		___Food_Bowl_Code_20 = value;
	}

	inline static int32_t get_offset_of_Water_Bottle_Code_21() { return static_cast<int32_t>(offsetof(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields, ___Water_Bottle_Code_21)); }
	inline int32_t get_Water_Bottle_Code_21() const { return ___Water_Bottle_Code_21; }
	inline int32_t* get_address_of_Water_Bottle_Code_21() { return &___Water_Bottle_Code_21; }
	inline void set_Water_Bottle_Code_21(int32_t value)
	{
		___Water_Bottle_Code_21 = value;
	}
};


// UnityEngine.AI.NavMeshSurface
struct  NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_AgentTypeID
	int32_t ___m_AgentTypeID_4;
	// UnityEngine.AI.CollectObjects UnityEngine.AI.NavMeshSurface::m_CollectObjects
	int32_t ___m_CollectObjects_5;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_6;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_7;
	// UnityEngine.LayerMask UnityEngine.AI.NavMeshSurface::m_LayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_LayerMask_8;
	// UnityEngine.AI.NavMeshCollectGeometry UnityEngine.AI.NavMeshSurface::m_UseGeometry
	int32_t ___m_UseGeometry_9;
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_DefaultArea
	int32_t ___m_DefaultArea_10;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_IgnoreNavMeshAgent
	bool ___m_IgnoreNavMeshAgent_11;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_IgnoreNavMeshObstacle
	bool ___m_IgnoreNavMeshObstacle_12;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_OverrideTileSize
	bool ___m_OverrideTileSize_13;
	// System.Int32 UnityEngine.AI.NavMeshSurface::m_TileSize
	int32_t ___m_TileSize_14;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_OverrideVoxelSize
	bool ___m_OverrideVoxelSize_15;
	// System.Single UnityEngine.AI.NavMeshSurface::m_VoxelSize
	float ___m_VoxelSize_16;
	// System.Boolean UnityEngine.AI.NavMeshSurface::m_BuildHeightMesh
	bool ___m_BuildHeightMesh_17;
	// UnityEngine.AI.NavMeshData UnityEngine.AI.NavMeshSurface::m_NavMeshData
	NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * ___m_NavMeshData_18;
	// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMeshSurface::m_NavMeshDataInstance
	NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  ___m_NavMeshDataInstance_19;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshSurface::m_LastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastPosition_20;
	// UnityEngine.Quaternion UnityEngine.AI.NavMeshSurface::m_LastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_LastRotation_21;

public:
	inline static int32_t get_offset_of_m_AgentTypeID_4() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_AgentTypeID_4)); }
	inline int32_t get_m_AgentTypeID_4() const { return ___m_AgentTypeID_4; }
	inline int32_t* get_address_of_m_AgentTypeID_4() { return &___m_AgentTypeID_4; }
	inline void set_m_AgentTypeID_4(int32_t value)
	{
		___m_AgentTypeID_4 = value;
	}

	inline static int32_t get_offset_of_m_CollectObjects_5() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_CollectObjects_5)); }
	inline int32_t get_m_CollectObjects_5() const { return ___m_CollectObjects_5; }
	inline int32_t* get_address_of_m_CollectObjects_5() { return &___m_CollectObjects_5; }
	inline void set_m_CollectObjects_5(int32_t value)
	{
		___m_CollectObjects_5 = value;
	}

	inline static int32_t get_offset_of_m_Size_6() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_Size_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_6() const { return ___m_Size_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_6() { return &___m_Size_6; }
	inline void set_m_Size_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_6 = value;
	}

	inline static int32_t get_offset_of_m_Center_7() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_Center_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_7() const { return ___m_Center_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_7() { return &___m_Center_7; }
	inline void set_m_Center_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_7 = value;
	}

	inline static int32_t get_offset_of_m_LayerMask_8() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LayerMask_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_LayerMask_8() const { return ___m_LayerMask_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_LayerMask_8() { return &___m_LayerMask_8; }
	inline void set_m_LayerMask_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_LayerMask_8 = value;
	}

	inline static int32_t get_offset_of_m_UseGeometry_9() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_UseGeometry_9)); }
	inline int32_t get_m_UseGeometry_9() const { return ___m_UseGeometry_9; }
	inline int32_t* get_address_of_m_UseGeometry_9() { return &___m_UseGeometry_9; }
	inline void set_m_UseGeometry_9(int32_t value)
	{
		___m_UseGeometry_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultArea_10() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_DefaultArea_10)); }
	inline int32_t get_m_DefaultArea_10() const { return ___m_DefaultArea_10; }
	inline int32_t* get_address_of_m_DefaultArea_10() { return &___m_DefaultArea_10; }
	inline void set_m_DefaultArea_10(int32_t value)
	{
		___m_DefaultArea_10 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreNavMeshAgent_11() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_IgnoreNavMeshAgent_11)); }
	inline bool get_m_IgnoreNavMeshAgent_11() const { return ___m_IgnoreNavMeshAgent_11; }
	inline bool* get_address_of_m_IgnoreNavMeshAgent_11() { return &___m_IgnoreNavMeshAgent_11; }
	inline void set_m_IgnoreNavMeshAgent_11(bool value)
	{
		___m_IgnoreNavMeshAgent_11 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreNavMeshObstacle_12() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_IgnoreNavMeshObstacle_12)); }
	inline bool get_m_IgnoreNavMeshObstacle_12() const { return ___m_IgnoreNavMeshObstacle_12; }
	inline bool* get_address_of_m_IgnoreNavMeshObstacle_12() { return &___m_IgnoreNavMeshObstacle_12; }
	inline void set_m_IgnoreNavMeshObstacle_12(bool value)
	{
		___m_IgnoreNavMeshObstacle_12 = value;
	}

	inline static int32_t get_offset_of_m_OverrideTileSize_13() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_OverrideTileSize_13)); }
	inline bool get_m_OverrideTileSize_13() const { return ___m_OverrideTileSize_13; }
	inline bool* get_address_of_m_OverrideTileSize_13() { return &___m_OverrideTileSize_13; }
	inline void set_m_OverrideTileSize_13(bool value)
	{
		___m_OverrideTileSize_13 = value;
	}

	inline static int32_t get_offset_of_m_TileSize_14() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_TileSize_14)); }
	inline int32_t get_m_TileSize_14() const { return ___m_TileSize_14; }
	inline int32_t* get_address_of_m_TileSize_14() { return &___m_TileSize_14; }
	inline void set_m_TileSize_14(int32_t value)
	{
		___m_TileSize_14 = value;
	}

	inline static int32_t get_offset_of_m_OverrideVoxelSize_15() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_OverrideVoxelSize_15)); }
	inline bool get_m_OverrideVoxelSize_15() const { return ___m_OverrideVoxelSize_15; }
	inline bool* get_address_of_m_OverrideVoxelSize_15() { return &___m_OverrideVoxelSize_15; }
	inline void set_m_OverrideVoxelSize_15(bool value)
	{
		___m_OverrideVoxelSize_15 = value;
	}

	inline static int32_t get_offset_of_m_VoxelSize_16() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_VoxelSize_16)); }
	inline float get_m_VoxelSize_16() const { return ___m_VoxelSize_16; }
	inline float* get_address_of_m_VoxelSize_16() { return &___m_VoxelSize_16; }
	inline void set_m_VoxelSize_16(float value)
	{
		___m_VoxelSize_16 = value;
	}

	inline static int32_t get_offset_of_m_BuildHeightMesh_17() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_BuildHeightMesh_17)); }
	inline bool get_m_BuildHeightMesh_17() const { return ___m_BuildHeightMesh_17; }
	inline bool* get_address_of_m_BuildHeightMesh_17() { return &___m_BuildHeightMesh_17; }
	inline void set_m_BuildHeightMesh_17(bool value)
	{
		___m_BuildHeightMesh_17 = value;
	}

	inline static int32_t get_offset_of_m_NavMeshData_18() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_NavMeshData_18)); }
	inline NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * get_m_NavMeshData_18() const { return ___m_NavMeshData_18; }
	inline NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 ** get_address_of_m_NavMeshData_18() { return &___m_NavMeshData_18; }
	inline void set_m_NavMeshData_18(NavMeshData_t4A718E7F2CF47C3E1190DCAADCA989CBA91BDDF6 * value)
	{
		___m_NavMeshData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NavMeshData_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_NavMeshDataInstance_19() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_NavMeshDataInstance_19)); }
	inline NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  get_m_NavMeshDataInstance_19() const { return ___m_NavMeshDataInstance_19; }
	inline NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78 * get_address_of_m_NavMeshDataInstance_19() { return &___m_NavMeshDataInstance_19; }
	inline void set_m_NavMeshDataInstance_19(NavMeshDataInstance_t52251080FADE7D8432D8DF780817EDFBF8F16E78  value)
	{
		___m_NavMeshDataInstance_19 = value;
	}

	inline static int32_t get_offset_of_m_LastPosition_20() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LastPosition_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastPosition_20() const { return ___m_LastPosition_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastPosition_20() { return &___m_LastPosition_20; }
	inline void set_m_LastPosition_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastPosition_20 = value;
	}

	inline static int32_t get_offset_of_m_LastRotation_21() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A, ___m_LastRotation_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_LastRotation_21() const { return ___m_LastRotation_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_LastRotation_21() { return &___m_LastRotation_21; }
	inline void set_m_LastRotation_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_LastRotation_21 = value;
	}
};

struct NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshSurface> UnityEngine.AI.NavMeshSurface::s_NavMeshSurfaces
	List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * ___s_NavMeshSurfaces_22;

public:
	inline static int32_t get_offset_of_s_NavMeshSurfaces_22() { return static_cast<int32_t>(offsetof(NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A_StaticFields, ___s_NavMeshSurfaces_22)); }
	inline List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * get_s_NavMeshSurfaces_22() const { return ___s_NavMeshSurfaces_22; }
	inline List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 ** get_address_of_s_NavMeshSurfaces_22() { return &___s_NavMeshSurfaces_22; }
	inline void set_s_NavMeshSurfaces_22(List_1_t46EE4F62A085C0E594ADF6EDB0141972F6A03499 * value)
	{
		___s_NavMeshSurfaces_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NavMeshSurfaces_22), (void*)value);
	}
};


// PauseControl
struct  PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields
{
public:
	// System.Boolean PauseControl::gameIsPaused
	bool ___gameIsPaused_4;

public:
	inline static int32_t get_offset_of_gameIsPaused_4() { return static_cast<int32_t>(offsetof(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields, ___gameIsPaused_4)); }
	inline bool get_gameIsPaused_4() const { return ___gameIsPaused_4; }
	inline bool* get_address_of_gameIsPaused_4() { return &___gameIsPaused_4; }
	inline void set_gameIsPaused_4(bool value)
	{
		___gameIsPaused_4 = value;
	}
};


// RatContainer
struct  RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody RatContainer::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_4;
	// System.Single RatContainer::thrust
	float ___thrust_5;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11, ___rb_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_thrust_5() { return static_cast<int32_t>(offsetof(RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11, ___thrust_5)); }
	inline float get_thrust_5() const { return ___thrust_5; }
	inline float* get_address_of_thrust_5() { return &___thrust_5; }
	inline void set_thrust_5(float value)
	{
		___thrust_5 = value;
	}
};


// RatController
struct  RatController_tAD14641E93C5D6BC55EDC299ADFC7C3F48960DA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RatManager
struct  RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 RatManager::RatAmount
	int32_t ___RatAmount_4;
	// UnityEngine.GameObject RatManager::RatObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RatObject_5;
	// UnityEngine.GameObject RatManager::RatContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RatContainer_6;
	// UnityEngine.GameObject RatManager::RatStopper
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RatStopper_7;
	// UnityEngine.GameObject[] RatManager::RatList
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___RatList_8;
	// UnityEngine.GameObject[] RatManager::RatSpawnTrain
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___RatSpawnTrain_9;
	// System.Int32 RatManager::xOS
	int32_t ___xOS_10;
	// System.Int32 RatManager::yOS
	int32_t ___yOS_11;
	// GameOverManager RatManager::goms
	GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * ___goms_12;
	// MapGeneratorScript RatManager::mg
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * ___mg_13;
	// PauseControl RatManager::pcs
	PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * ___pcs_14;
	// System.Int32[0...,0...] RatManager::foodMap
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___foodMap_15;
	// System.Int32[0...,0...] RatManager::mazeMap
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___mazeMap_16;
	// System.Int32 RatManager::totalRatNumber
	int32_t ___totalRatNumber_17;
	// System.Int32 RatManager::deadRatNumber
	int32_t ___deadRatNumber_18;
	// System.Single RatManager::SamplingRate
	float ___SamplingRate_19;
	// System.Single RatManager::timer
	float ___timer_20;
	// System.Collections.Generic.LinkedList`1<System.Int32> RatManager::totalRatStack
	LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * ___totalRatStack_21;
	// System.Collections.Generic.LinkedList`1<System.Int32> RatManager::deadRatStack
	LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * ___deadRatStack_22;
	// System.Boolean RatManager::isGameOver
	bool ___isGameOver_23;

public:
	inline static int32_t get_offset_of_RatAmount_4() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatAmount_4)); }
	inline int32_t get_RatAmount_4() const { return ___RatAmount_4; }
	inline int32_t* get_address_of_RatAmount_4() { return &___RatAmount_4; }
	inline void set_RatAmount_4(int32_t value)
	{
		___RatAmount_4 = value;
	}

	inline static int32_t get_offset_of_RatObject_5() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RatObject_5() const { return ___RatObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RatObject_5() { return &___RatObject_5; }
	inline void set_RatObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RatObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_RatContainer_6() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatContainer_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RatContainer_6() const { return ___RatContainer_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RatContainer_6() { return &___RatContainer_6; }
	inline void set_RatContainer_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RatContainer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatContainer_6), (void*)value);
	}

	inline static int32_t get_offset_of_RatStopper_7() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatStopper_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RatStopper_7() const { return ___RatStopper_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RatStopper_7() { return &___RatStopper_7; }
	inline void set_RatStopper_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RatStopper_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatStopper_7), (void*)value);
	}

	inline static int32_t get_offset_of_RatList_8() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatList_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_RatList_8() const { return ___RatList_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_RatList_8() { return &___RatList_8; }
	inline void set_RatList_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___RatList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatList_8), (void*)value);
	}

	inline static int32_t get_offset_of_RatSpawnTrain_9() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___RatSpawnTrain_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_RatSpawnTrain_9() const { return ___RatSpawnTrain_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_RatSpawnTrain_9() { return &___RatSpawnTrain_9; }
	inline void set_RatSpawnTrain_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___RatSpawnTrain_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RatSpawnTrain_9), (void*)value);
	}

	inline static int32_t get_offset_of_xOS_10() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___xOS_10)); }
	inline int32_t get_xOS_10() const { return ___xOS_10; }
	inline int32_t* get_address_of_xOS_10() { return &___xOS_10; }
	inline void set_xOS_10(int32_t value)
	{
		___xOS_10 = value;
	}

	inline static int32_t get_offset_of_yOS_11() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___yOS_11)); }
	inline int32_t get_yOS_11() const { return ___yOS_11; }
	inline int32_t* get_address_of_yOS_11() { return &___yOS_11; }
	inline void set_yOS_11(int32_t value)
	{
		___yOS_11 = value;
	}

	inline static int32_t get_offset_of_goms_12() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___goms_12)); }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * get_goms_12() const { return ___goms_12; }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C ** get_address_of_goms_12() { return &___goms_12; }
	inline void set_goms_12(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * value)
	{
		___goms_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goms_12), (void*)value);
	}

	inline static int32_t get_offset_of_mg_13() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___mg_13)); }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * get_mg_13() const { return ___mg_13; }
	inline MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 ** get_address_of_mg_13() { return &___mg_13; }
	inline void set_mg_13(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * value)
	{
		___mg_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mg_13), (void*)value);
	}

	inline static int32_t get_offset_of_pcs_14() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___pcs_14)); }
	inline PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * get_pcs_14() const { return ___pcs_14; }
	inline PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 ** get_address_of_pcs_14() { return &___pcs_14; }
	inline void set_pcs_14(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * value)
	{
		___pcs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcs_14), (void*)value);
	}

	inline static int32_t get_offset_of_foodMap_15() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___foodMap_15)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_foodMap_15() const { return ___foodMap_15; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_foodMap_15() { return &___foodMap_15; }
	inline void set_foodMap_15(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___foodMap_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodMap_15), (void*)value);
	}

	inline static int32_t get_offset_of_mazeMap_16() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___mazeMap_16)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_mazeMap_16() const { return ___mazeMap_16; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_mazeMap_16() { return &___mazeMap_16; }
	inline void set_mazeMap_16(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___mazeMap_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mazeMap_16), (void*)value);
	}

	inline static int32_t get_offset_of_totalRatNumber_17() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___totalRatNumber_17)); }
	inline int32_t get_totalRatNumber_17() const { return ___totalRatNumber_17; }
	inline int32_t* get_address_of_totalRatNumber_17() { return &___totalRatNumber_17; }
	inline void set_totalRatNumber_17(int32_t value)
	{
		___totalRatNumber_17 = value;
	}

	inline static int32_t get_offset_of_deadRatNumber_18() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___deadRatNumber_18)); }
	inline int32_t get_deadRatNumber_18() const { return ___deadRatNumber_18; }
	inline int32_t* get_address_of_deadRatNumber_18() { return &___deadRatNumber_18; }
	inline void set_deadRatNumber_18(int32_t value)
	{
		___deadRatNumber_18 = value;
	}

	inline static int32_t get_offset_of_SamplingRate_19() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___SamplingRate_19)); }
	inline float get_SamplingRate_19() const { return ___SamplingRate_19; }
	inline float* get_address_of_SamplingRate_19() { return &___SamplingRate_19; }
	inline void set_SamplingRate_19(float value)
	{
		___SamplingRate_19 = value;
	}

	inline static int32_t get_offset_of_timer_20() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___timer_20)); }
	inline float get_timer_20() const { return ___timer_20; }
	inline float* get_address_of_timer_20() { return &___timer_20; }
	inline void set_timer_20(float value)
	{
		___timer_20 = value;
	}

	inline static int32_t get_offset_of_totalRatStack_21() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___totalRatStack_21)); }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * get_totalRatStack_21() const { return ___totalRatStack_21; }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 ** get_address_of_totalRatStack_21() { return &___totalRatStack_21; }
	inline void set_totalRatStack_21(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * value)
	{
		___totalRatStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalRatStack_21), (void*)value);
	}

	inline static int32_t get_offset_of_deadRatStack_22() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___deadRatStack_22)); }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * get_deadRatStack_22() const { return ___deadRatStack_22; }
	inline LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 ** get_address_of_deadRatStack_22() { return &___deadRatStack_22; }
	inline void set_deadRatStack_22(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * value)
	{
		___deadRatStack_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deadRatStack_22), (void*)value);
	}

	inline static int32_t get_offset_of_isGameOver_23() { return static_cast<int32_t>(offsetof(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8, ___isGameOver_23)); }
	inline bool get_isGameOver_23() const { return ___isGameOver_23; }
	inline bool* get_address_of_isGameOver_23() { return &___isGameOver_23; }
	inline void set_isGameOver_23(bool value)
	{
		___isGameOver_23 = value;
	}
};


// RatScript
struct  RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 RatScript::id
	int32_t ___id_4;
	// UnityEngine.Rigidbody RatScript::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_5;
	// RatManager RatScript::rms
	RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * ___rms_6;
	// UnityEngine.GameObject RatScript::rm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rm_7;
	// UnityEngine.Transform RatScript::ratTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ratTransform_8;
	// UnityEngine.AI.NavMeshAgent RatScript::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_9;
	// UnityEngine.Animator RatScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_10;
	// System.Boolean RatScript::newSpawned
	bool ___newSpawned_11;
	// System.Boolean RatScript::alive
	bool ___alive_12;
	// System.Single RatScript::hunger
	float ___hunger_13;
	// System.Single RatScript::energy
	float ___energy_14;
	// System.Single RatScript::HP
	float ___HP_15;
	// System.Single RatScript::hungerRate
	float ___hungerRate_16;
	// System.Single RatScript::energyRate
	float ___energyRate_17;
	// System.Single RatScript::HungerHPRate
	float ___HungerHPRate_18;
	// System.Single RatScript::hungerRecoverRate
	float ___hungerRecoverRate_19;
	// System.Single RatScript::energyRecoverRate
	float ___energyRecoverRate_20;
	// System.Single RatScript::energyHPRecoverRate
	float ___energyHPRecoverRate_21;
	// RatBaseState RatScript::currentState
	RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * ___currentState_22;
	// RatIdleState RatScript::IdleState
	RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * ___IdleState_23;
	// RatLookingForFoodState RatScript::LookingForFoodState
	RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * ___LookingForFoodState_24;
	// RatEatingState RatScript::EatingState
	RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * ___EatingState_25;
	// RatSleepingState RatScript::SleepingState
	RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * ___SleepingState_26;
	// RatDeathState RatScript::DeathState
	RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * ___DeathState_27;
	// RatSpawnState RatScript::SpawnState
	RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * ___SpawnState_28;
	// System.Int32[0...,0...] RatScript::foodMap
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___foodMap_29;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___rb_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_rms_6() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___rms_6)); }
	inline RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * get_rms_6() const { return ___rms_6; }
	inline RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 ** get_address_of_rms_6() { return &___rms_6; }
	inline void set_rms_6(RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * value)
	{
		___rms_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rms_6), (void*)value);
	}

	inline static int32_t get_offset_of_rm_7() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___rm_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rm_7() const { return ___rm_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rm_7() { return &___rm_7; }
	inline void set_rm_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rm_7), (void*)value);
	}

	inline static int32_t get_offset_of_ratTransform_8() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___ratTransform_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ratTransform_8() const { return ___ratTransform_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ratTransform_8() { return &___ratTransform_8; }
	inline void set_ratTransform_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ratTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ratTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_agent_9() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___agent_9)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_9() const { return ___agent_9; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_9() { return &___agent_9; }
	inline void set_agent_9(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_9), (void*)value);
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___anim_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_10() const { return ___anim_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_10), (void*)value);
	}

	inline static int32_t get_offset_of_newSpawned_11() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___newSpawned_11)); }
	inline bool get_newSpawned_11() const { return ___newSpawned_11; }
	inline bool* get_address_of_newSpawned_11() { return &___newSpawned_11; }
	inline void set_newSpawned_11(bool value)
	{
		___newSpawned_11 = value;
	}

	inline static int32_t get_offset_of_alive_12() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___alive_12)); }
	inline bool get_alive_12() const { return ___alive_12; }
	inline bool* get_address_of_alive_12() { return &___alive_12; }
	inline void set_alive_12(bool value)
	{
		___alive_12 = value;
	}

	inline static int32_t get_offset_of_hunger_13() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___hunger_13)); }
	inline float get_hunger_13() const { return ___hunger_13; }
	inline float* get_address_of_hunger_13() { return &___hunger_13; }
	inline void set_hunger_13(float value)
	{
		___hunger_13 = value;
	}

	inline static int32_t get_offset_of_energy_14() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___energy_14)); }
	inline float get_energy_14() const { return ___energy_14; }
	inline float* get_address_of_energy_14() { return &___energy_14; }
	inline void set_energy_14(float value)
	{
		___energy_14 = value;
	}

	inline static int32_t get_offset_of_HP_15() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___HP_15)); }
	inline float get_HP_15() const { return ___HP_15; }
	inline float* get_address_of_HP_15() { return &___HP_15; }
	inline void set_HP_15(float value)
	{
		___HP_15 = value;
	}

	inline static int32_t get_offset_of_hungerRate_16() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___hungerRate_16)); }
	inline float get_hungerRate_16() const { return ___hungerRate_16; }
	inline float* get_address_of_hungerRate_16() { return &___hungerRate_16; }
	inline void set_hungerRate_16(float value)
	{
		___hungerRate_16 = value;
	}

	inline static int32_t get_offset_of_energyRate_17() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___energyRate_17)); }
	inline float get_energyRate_17() const { return ___energyRate_17; }
	inline float* get_address_of_energyRate_17() { return &___energyRate_17; }
	inline void set_energyRate_17(float value)
	{
		___energyRate_17 = value;
	}

	inline static int32_t get_offset_of_HungerHPRate_18() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___HungerHPRate_18)); }
	inline float get_HungerHPRate_18() const { return ___HungerHPRate_18; }
	inline float* get_address_of_HungerHPRate_18() { return &___HungerHPRate_18; }
	inline void set_HungerHPRate_18(float value)
	{
		___HungerHPRate_18 = value;
	}

	inline static int32_t get_offset_of_hungerRecoverRate_19() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___hungerRecoverRate_19)); }
	inline float get_hungerRecoverRate_19() const { return ___hungerRecoverRate_19; }
	inline float* get_address_of_hungerRecoverRate_19() { return &___hungerRecoverRate_19; }
	inline void set_hungerRecoverRate_19(float value)
	{
		___hungerRecoverRate_19 = value;
	}

	inline static int32_t get_offset_of_energyRecoverRate_20() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___energyRecoverRate_20)); }
	inline float get_energyRecoverRate_20() const { return ___energyRecoverRate_20; }
	inline float* get_address_of_energyRecoverRate_20() { return &___energyRecoverRate_20; }
	inline void set_energyRecoverRate_20(float value)
	{
		___energyRecoverRate_20 = value;
	}

	inline static int32_t get_offset_of_energyHPRecoverRate_21() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___energyHPRecoverRate_21)); }
	inline float get_energyHPRecoverRate_21() const { return ___energyHPRecoverRate_21; }
	inline float* get_address_of_energyHPRecoverRate_21() { return &___energyHPRecoverRate_21; }
	inline void set_energyHPRecoverRate_21(float value)
	{
		___energyHPRecoverRate_21 = value;
	}

	inline static int32_t get_offset_of_currentState_22() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___currentState_22)); }
	inline RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * get_currentState_22() const { return ___currentState_22; }
	inline RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 ** get_address_of_currentState_22() { return &___currentState_22; }
	inline void set_currentState_22(RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * value)
	{
		___currentState_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_22), (void*)value);
	}

	inline static int32_t get_offset_of_IdleState_23() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___IdleState_23)); }
	inline RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * get_IdleState_23() const { return ___IdleState_23; }
	inline RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 ** get_address_of_IdleState_23() { return &___IdleState_23; }
	inline void set_IdleState_23(RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * value)
	{
		___IdleState_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdleState_23), (void*)value);
	}

	inline static int32_t get_offset_of_LookingForFoodState_24() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___LookingForFoodState_24)); }
	inline RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * get_LookingForFoodState_24() const { return ___LookingForFoodState_24; }
	inline RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 ** get_address_of_LookingForFoodState_24() { return &___LookingForFoodState_24; }
	inline void set_LookingForFoodState_24(RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * value)
	{
		___LookingForFoodState_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LookingForFoodState_24), (void*)value);
	}

	inline static int32_t get_offset_of_EatingState_25() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___EatingState_25)); }
	inline RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * get_EatingState_25() const { return ___EatingState_25; }
	inline RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 ** get_address_of_EatingState_25() { return &___EatingState_25; }
	inline void set_EatingState_25(RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * value)
	{
		___EatingState_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EatingState_25), (void*)value);
	}

	inline static int32_t get_offset_of_SleepingState_26() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___SleepingState_26)); }
	inline RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * get_SleepingState_26() const { return ___SleepingState_26; }
	inline RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 ** get_address_of_SleepingState_26() { return &___SleepingState_26; }
	inline void set_SleepingState_26(RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * value)
	{
		___SleepingState_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SleepingState_26), (void*)value);
	}

	inline static int32_t get_offset_of_DeathState_27() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___DeathState_27)); }
	inline RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * get_DeathState_27() const { return ___DeathState_27; }
	inline RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 ** get_address_of_DeathState_27() { return &___DeathState_27; }
	inline void set_DeathState_27(RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * value)
	{
		___DeathState_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathState_27), (void*)value);
	}

	inline static int32_t get_offset_of_SpawnState_28() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___SpawnState_28)); }
	inline RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * get_SpawnState_28() const { return ___SpawnState_28; }
	inline RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 ** get_address_of_SpawnState_28() { return &___SpawnState_28; }
	inline void set_SpawnState_28(RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * value)
	{
		___SpawnState_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnState_28), (void*)value);
	}

	inline static int32_t get_offset_of_foodMap_29() { return static_cast<int32_t>(offsetof(RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF, ___foodMap_29)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_foodMap_29() const { return ___foodMap_29; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_foodMap_29() { return &___foodMap_29; }
	inline void set_foodMap_29(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___foodMap_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodMap_29), (void*)value);
	}
};


// SettingMenuManager
struct  SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SettingMenuManager::SettingMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SettingMenu_4;

public:
	inline static int32_t get_offset_of_SettingMenu_4() { return static_cast<int32_t>(offsetof(SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F, ___SettingMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SettingMenu_4() const { return ___SettingMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SettingMenu_4() { return &___SettingMenu_4; }
	inline void set_SettingMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SettingMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingMenu_4), (void*)value);
	}
};


// Timer
struct  Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Timer::width
	int32_t ___width_4;
	// System.Int32 Timer::height
	int32_t ___height_5;
	// UnityEngine.Rect Timer::rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect_6;
	// UnityEngine.GUIStyle Timer::labelStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___labelStyle_7;
	// System.String Timer::currentTime
	String_t* ___currentTime_8;

public:
	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_rect_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___rect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_rect_6() const { return ___rect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_rect_6() { return &___rect_6; }
	inline void set_rect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___rect_6 = value;
	}

	inline static int32_t get_offset_of_labelStyle_7() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___labelStyle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_labelStyle_7() const { return ___labelStyle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_labelStyle_7() { return &___labelStyle_7; }
	inline void set_labelStyle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___labelStyle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelStyle_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentTime_8() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___currentTime_8)); }
	inline String_t* get_currentTime_8() const { return ___currentTime_8; }
	inline String_t** get_address_of_currentTime_8() { return &___currentTime_8; }
	inline void set_currentTime_8(String_t* value)
	{
		___currentTime_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTime_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

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

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

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

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_InputField
struct  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * ___m_LayoutGroup_33;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_34;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_35;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_36;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_37;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_38;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_39;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_40;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_41;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_42;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_43;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_44;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_45;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_46;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnEndEdit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnSubmit_48;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnSelect_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnDeselect_50;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnTextSelection_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnEndTextSelection_52;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * ___m_OnValueChanged_53;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * ___m_OnTouchScreenKeyboardStatusChanged_54;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * ___m_OnValidateInput_55;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_56;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_57;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_58;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_59;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_60;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_61;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_62;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_63;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_64;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_67;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_68;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_69;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_70;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastPosition_71;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_72;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_73;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_74;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_75;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_76;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_79;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_80;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_81;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_82;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_83;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_84;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_85;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_86;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_87;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_88;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_89;
	// System.Boolean TMPro.TMP_InputField::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_91;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_92;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_93;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_94;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_95;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_97;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_98;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_99;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_GlobalFontAsset_100;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_102;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_103;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_104;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_105;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PreviouslySelectedObject_106;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_107;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_108;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_109;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * ___m_InputValidator_110;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_111;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_113;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_114;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_115;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_20() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SoftKeyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_SoftKeyboard_20() const { return ___m_SoftKeyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_SoftKeyboard_20() { return &___m_SoftKeyboard_20; }
	inline void set_m_SoftKeyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_SoftKeyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_22() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RectTransform_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_22() const { return ___m_RectTransform_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_22() { return &___m_RectTransform_22; }
	inline void set_m_RectTransform_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_23() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewport_23)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextViewport_23() const { return ___m_TextViewport_23; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextViewport_23() { return &___m_TextViewport_23; }
	inline void set_m_TextViewport_23(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextViewport_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectMask_24() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectMask_24)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextComponentRectMask_24() const { return ___m_TextComponentRectMask_24; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextComponentRectMask_24() { return &___m_TextComponentRectMask_24; }
	inline void set_m_TextComponentRectMask_24(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextComponentRectMask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectMask_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewportRectMask_25() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewportRectMask_25)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextViewportRectMask_25() const { return ___m_TextViewportRectMask_25; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextViewportRectMask_25() { return &___m_TextViewportRectMask_25; }
	inline void set_m_TextViewportRectMask_25(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextViewportRectMask_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewportRectMask_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedViewportRect_26() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedViewportRect_26)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_CachedViewportRect_26() const { return ___m_CachedViewportRect_26; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_CachedViewportRect_26() { return &___m_CachedViewportRect_26; }
	inline void set_m_CachedViewportRect_26(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_CachedViewportRect_26 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_27() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponent_27)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_27() const { return ___m_TextComponent_27; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_27() { return &___m_TextComponent_27; }
	inline void set_m_TextComponent_27(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_28() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectTransform_28)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextComponentRectTransform_28() const { return ___m_TextComponentRectTransform_28; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextComponentRectTransform_28() { return &___m_TextComponentRectTransform_28; }
	inline void set_m_TextComponentRectTransform_28(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextComponentRectTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_29() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Placeholder_29)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_29() const { return ___m_Placeholder_29; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_29() { return &___m_Placeholder_29; }
	inline void set_m_Placeholder_29(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_30() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbar_30)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_30() const { return ___m_VerticalScrollbar_30; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_30() { return &___m_VerticalScrollbar_30; }
	inline void set_m_VerticalScrollbar_30(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_31() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbarEventHandler_31)); }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * get_m_VerticalScrollbarEventHandler_31() const { return ___m_VerticalScrollbarEventHandler_31; }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED ** get_address_of_m_VerticalScrollbarEventHandler_31() { return &___m_VerticalScrollbarEventHandler_31; }
	inline void set_m_VerticalScrollbarEventHandler_31(TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * value)
	{
		___m_VerticalScrollbarEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_32() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsDrivenByLayoutComponents_32)); }
	inline bool get_m_IsDrivenByLayoutComponents_32() const { return ___m_IsDrivenByLayoutComponents_32; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_32() { return &___m_IsDrivenByLayoutComponents_32; }
	inline void set_m_IsDrivenByLayoutComponents_32(bool value)
	{
		___m_IsDrivenByLayoutComponents_32 = value;
	}

	inline static int32_t get_offset_of_m_LayoutGroup_33() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LayoutGroup_33)); }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * get_m_LayoutGroup_33() const { return ___m_LayoutGroup_33; }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 ** get_address_of_m_LayoutGroup_33() { return &___m_LayoutGroup_33; }
	inline void set_m_LayoutGroup_33(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * value)
	{
		___m_LayoutGroup_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutGroup_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_34() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollPosition_34)); }
	inline float get_m_ScrollPosition_34() const { return ___m_ScrollPosition_34; }
	inline float* get_address_of_m_ScrollPosition_34() { return &___m_ScrollPosition_34; }
	inline void set_m_ScrollPosition_34(float value)
	{
		___m_ScrollPosition_34 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_35() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollSensitivity_35)); }
	inline float get_m_ScrollSensitivity_35() const { return ___m_ScrollSensitivity_35; }
	inline float* get_address_of_m_ScrollSensitivity_35() { return &___m_ScrollSensitivity_35; }
	inline void set_m_ScrollSensitivity_35(float value)
	{
		___m_ScrollSensitivity_35 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_36() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ContentType_36)); }
	inline int32_t get_m_ContentType_36() const { return ___m_ContentType_36; }
	inline int32_t* get_address_of_m_ContentType_36() { return &___m_ContentType_36; }
	inline void set_m_ContentType_36(int32_t value)
	{
		___m_ContentType_36 = value;
	}

	inline static int32_t get_offset_of_m_InputType_37() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputType_37)); }
	inline int32_t get_m_InputType_37() const { return ___m_InputType_37; }
	inline int32_t* get_address_of_m_InputType_37() { return &___m_InputType_37; }
	inline void set_m_InputType_37(int32_t value)
	{
		___m_InputType_37 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_38() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AsteriskChar_38)); }
	inline Il2CppChar get_m_AsteriskChar_38() const { return ___m_AsteriskChar_38; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_38() { return &___m_AsteriskChar_38; }
	inline void set_m_AsteriskChar_38(Il2CppChar value)
	{
		___m_AsteriskChar_38 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_39() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyboardType_39)); }
	inline int32_t get_m_KeyboardType_39() const { return ___m_KeyboardType_39; }
	inline int32_t* get_address_of_m_KeyboardType_39() { return &___m_KeyboardType_39; }
	inline void set_m_KeyboardType_39(int32_t value)
	{
		___m_KeyboardType_39 = value;
	}

	inline static int32_t get_offset_of_m_LineType_40() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineType_40)); }
	inline int32_t get_m_LineType_40() const { return ___m_LineType_40; }
	inline int32_t* get_address_of_m_LineType_40() { return &___m_LineType_40; }
	inline void set_m_LineType_40(int32_t value)
	{
		___m_LineType_40 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_41() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideMobileInput_41)); }
	inline bool get_m_HideMobileInput_41() const { return ___m_HideMobileInput_41; }
	inline bool* get_address_of_m_HideMobileInput_41() { return &___m_HideMobileInput_41; }
	inline void set_m_HideMobileInput_41(bool value)
	{
		___m_HideMobileInput_41 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_42() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideSoftKeyboard_42)); }
	inline bool get_m_HideSoftKeyboard_42() const { return ___m_HideSoftKeyboard_42; }
	inline bool* get_address_of_m_HideSoftKeyboard_42() { return &___m_HideSoftKeyboard_42; }
	inline void set_m_HideSoftKeyboard_42(bool value)
	{
		___m_HideSoftKeyboard_42 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_43() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterValidation_43)); }
	inline int32_t get_m_CharacterValidation_43() const { return ___m_CharacterValidation_43; }
	inline int32_t* get_address_of_m_CharacterValidation_43() { return &___m_CharacterValidation_43; }
	inline void set_m_CharacterValidation_43(int32_t value)
	{
		___m_CharacterValidation_43 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_44() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RegexValue_44)); }
	inline String_t* get_m_RegexValue_44() const { return ___m_RegexValue_44; }
	inline String_t** get_address_of_m_RegexValue_44() { return &___m_RegexValue_44; }
	inline void set_m_RegexValue_44(String_t* value)
	{
		___m_RegexValue_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_45() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalPointSize_45)); }
	inline float get_m_GlobalPointSize_45() const { return ___m_GlobalPointSize_45; }
	inline float* get_address_of_m_GlobalPointSize_45() { return &___m_GlobalPointSize_45; }
	inline void set_m_GlobalPointSize_45(float value)
	{
		___m_GlobalPointSize_45 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_46() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterLimit_46)); }
	inline int32_t get_m_CharacterLimit_46() const { return ___m_CharacterLimit_46; }
	inline int32_t* get_address_of_m_CharacterLimit_46() { return &___m_CharacterLimit_46; }
	inline void set_m_CharacterLimit_46(int32_t value)
	{
		___m_CharacterLimit_46 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_47() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndEdit_47)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnEndEdit_47() const { return ___m_OnEndEdit_47; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnEndEdit_47() { return &___m_OnEndEdit_47; }
	inline void set_m_OnEndEdit_47(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnEndEdit_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_48() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSubmit_48)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnSubmit_48() const { return ___m_OnSubmit_48; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnSubmit_48() { return &___m_OnSubmit_48; }
	inline void set_m_OnSubmit_48(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnSubmit_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_49() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSelect_49)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnSelect_49() const { return ___m_OnSelect_49; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnSelect_49() { return &___m_OnSelect_49; }
	inline void set_m_OnSelect_49(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnSelect_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_50() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnDeselect_50)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnDeselect_50() const { return ___m_OnDeselect_50; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnDeselect_50() { return &___m_OnDeselect_50; }
	inline void set_m_OnDeselect_50(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnDeselect_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_51() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTextSelection_51)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnTextSelection_51() const { return ___m_OnTextSelection_51; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnTextSelection_51() { return &___m_OnTextSelection_51; }
	inline void set_m_OnTextSelection_51(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnTextSelection_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_52() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndTextSelection_52)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnEndTextSelection_52() const { return ___m_OnEndTextSelection_52; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnEndTextSelection_52() { return &___m_OnEndTextSelection_52; }
	inline void set_m_OnEndTextSelection_52(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnEndTextSelection_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_53() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValueChanged_53)); }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * get_m_OnValueChanged_53() const { return ___m_OnValueChanged_53; }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 ** get_address_of_m_OnValueChanged_53() { return &___m_OnValueChanged_53; }
	inline void set_m_OnValueChanged_53(OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * value)
	{
		___m_OnValueChanged_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_54() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTouchScreenKeyboardStatusChanged_54)); }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * get_m_OnTouchScreenKeyboardStatusChanged_54() const { return ___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_54() { return &___m_OnTouchScreenKeyboardStatusChanged_54; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_54(TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_55() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValidateInput_55)); }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * get_m_OnValidateInput_55() const { return ___m_OnValidateInput_55; }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA ** get_address_of_m_OnValidateInput_55() { return &___m_OnValidateInput_55; }
	inline void set_m_OnValidateInput_55(OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * value)
	{
		___m_OnValidateInput_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_56() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretColor_56)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_56() const { return ___m_CaretColor_56; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_56() { return &___m_CaretColor_56; }
	inline void set_m_CaretColor_56(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_56 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_57() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CustomCaretColor_57)); }
	inline bool get_m_CustomCaretColor_57() const { return ___m_CustomCaretColor_57; }
	inline bool* get_address_of_m_CustomCaretColor_57() { return &___m_CustomCaretColor_57; }
	inline void set_m_CustomCaretColor_57(bool value)
	{
		___m_CustomCaretColor_57 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_58() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionColor_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_58() const { return ___m_SelectionColor_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_58() { return &___m_SelectionColor_58; }
	inline void set_m_SelectionColor_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_58 = value;
	}

	inline static int32_t get_offset_of_m_Text_59() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Text_59)); }
	inline String_t* get_m_Text_59() const { return ___m_Text_59; }
	inline String_t** get_address_of_m_Text_59() { return &___m_Text_59; }
	inline void set_m_Text_59(String_t* value)
	{
		___m_Text_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_60() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretBlinkRate_60)); }
	inline float get_m_CaretBlinkRate_60() const { return ___m_CaretBlinkRate_60; }
	inline float* get_address_of_m_CaretBlinkRate_60() { return &___m_CaretBlinkRate_60; }
	inline void set_m_CaretBlinkRate_60(float value)
	{
		___m_CaretBlinkRate_60 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_61() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretWidth_61)); }
	inline int32_t get_m_CaretWidth_61() const { return ___m_CaretWidth_61; }
	inline int32_t* get_address_of_m_CaretWidth_61() { return &___m_CaretWidth_61; }
	inline void set_m_CaretWidth_61(int32_t value)
	{
		___m_CaretWidth_61 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_62() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReadOnly_62)); }
	inline bool get_m_ReadOnly_62() const { return ___m_ReadOnly_62; }
	inline bool* get_address_of_m_ReadOnly_62() { return &___m_ReadOnly_62; }
	inline void set_m_ReadOnly_62(bool value)
	{
		___m_ReadOnly_62 = value;
	}

	inline static int32_t get_offset_of_m_RichText_63() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RichText_63)); }
	inline bool get_m_RichText_63() const { return ___m_RichText_63; }
	inline bool* get_address_of_m_RichText_63() { return &___m_RichText_63; }
	inline void set_m_RichText_63(bool value)
	{
		___m_RichText_63 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_64() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringPosition_64)); }
	inline int32_t get_m_StringPosition_64() const { return ___m_StringPosition_64; }
	inline int32_t* get_address_of_m_StringPosition_64() { return &___m_StringPosition_64; }
	inline void set_m_StringPosition_64(int32_t value)
	{
		___m_StringPosition_64 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_65() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringSelectPosition_65)); }
	inline int32_t get_m_StringSelectPosition_65() const { return ___m_StringSelectPosition_65; }
	inline int32_t* get_address_of_m_StringSelectPosition_65() { return &___m_StringSelectPosition_65; }
	inline void set_m_StringSelectPosition_65(int32_t value)
	{
		___m_StringSelectPosition_65 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretPosition_66)); }
	inline int32_t get_m_CaretPosition_66() const { return ___m_CaretPosition_66; }
	inline int32_t* get_address_of_m_CaretPosition_66() { return &___m_CaretPosition_66; }
	inline void set_m_CaretPosition_66(int32_t value)
	{
		___m_CaretPosition_66 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_67() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretSelectPosition_67)); }
	inline int32_t get_m_CaretSelectPosition_67() const { return ___m_CaretSelectPosition_67; }
	inline int32_t* get_address_of_m_CaretSelectPosition_67() { return &___m_CaretSelectPosition_67; }
	inline void set_m_CaretSelectPosition_67(int32_t value)
	{
		___m_CaretSelectPosition_67 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_68() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___caretRectTrans_68)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_68() const { return ___caretRectTrans_68; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_68() { return &___caretRectTrans_68; }
	inline void set_caretRectTrans_68(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_69() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CursorVerts_69)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_69() const { return ___m_CursorVerts_69; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_69() { return &___m_CursorVerts_69; }
	inline void set_m_CursorVerts_69(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_69), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_70() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedInputRenderer_70)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_70() const { return ___m_CachedInputRenderer_70; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_70() { return &___m_CachedInputRenderer_70; }
	inline void set_m_CachedInputRenderer_70(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_70), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_71() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LastPosition_71)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastPosition_71() const { return ___m_LastPosition_71; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastPosition_71() { return &___m_LastPosition_71; }
	inline void set_m_LastPosition_71(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastPosition_71 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_72() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Mesh_72)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_72() const { return ___m_Mesh_72; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_72() { return &___m_Mesh_72; }
	inline void set_m_Mesh_72(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_72), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_73() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AllowInput_73)); }
	inline bool get_m_AllowInput_73() const { return ___m_AllowInput_73; }
	inline bool* get_address_of_m_AllowInput_73() { return &___m_AllowInput_73; }
	inline void set_m_AllowInput_73(bool value)
	{
		___m_AllowInput_73 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_74() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldActivateNextUpdate_74)); }
	inline bool get_m_ShouldActivateNextUpdate_74() const { return ___m_ShouldActivateNextUpdate_74; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_74() { return &___m_ShouldActivateNextUpdate_74; }
	inline void set_m_ShouldActivateNextUpdate_74(bool value)
	{
		___m_ShouldActivateNextUpdate_74 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_75() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_UpdateDrag_75)); }
	inline bool get_m_UpdateDrag_75() const { return ___m_UpdateDrag_75; }
	inline bool* get_address_of_m_UpdateDrag_75() { return &___m_UpdateDrag_75; }
	inline void set_m_UpdateDrag_75(bool value)
	{
		___m_UpdateDrag_75 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_76() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragPositionOutOfBounds_76)); }
	inline bool get_m_DragPositionOutOfBounds_76() const { return ___m_DragPositionOutOfBounds_76; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_76() { return &___m_DragPositionOutOfBounds_76; }
	inline void set_m_DragPositionOutOfBounds_76(bool value)
	{
		___m_DragPositionOutOfBounds_76 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_79() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretVisible_79)); }
	inline bool get_m_CaretVisible_79() const { return ___m_CaretVisible_79; }
	inline bool* get_address_of_m_CaretVisible_79() { return &___m_CaretVisible_79; }
	inline void set_m_CaretVisible_79(bool value)
	{
		___m_CaretVisible_79 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_80() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkCoroutine_80)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_80() const { return ___m_BlinkCoroutine_80; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_80() { return &___m_BlinkCoroutine_80; }
	inline void set_m_BlinkCoroutine_80(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_80), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_81() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkStartTime_81)); }
	inline float get_m_BlinkStartTime_81() const { return ___m_BlinkStartTime_81; }
	inline float* get_address_of_m_BlinkStartTime_81() { return &___m_BlinkStartTime_81; }
	inline void set_m_BlinkStartTime_81(float value)
	{
		___m_BlinkStartTime_81 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_82() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragCoroutine_82)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_82() const { return ___m_DragCoroutine_82; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_82() { return &___m_DragCoroutine_82; }
	inline void set_m_DragCoroutine_82(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_82), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_83() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OriginalText_83)); }
	inline String_t* get_m_OriginalText_83() const { return ___m_OriginalText_83; }
	inline String_t** get_address_of_m_OriginalText_83() { return &___m_OriginalText_83; }
	inline void set_m_OriginalText_83(String_t* value)
	{
		___m_OriginalText_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_83), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_84() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WasCanceled_84)); }
	inline bool get_m_WasCanceled_84() const { return ___m_WasCanceled_84; }
	inline bool* get_address_of_m_WasCanceled_84() { return &___m_WasCanceled_84; }
	inline void set_m_WasCanceled_84(bool value)
	{
		___m_WasCanceled_84 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_85() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HasDoneFocusTransition_85)); }
	inline bool get_m_HasDoneFocusTransition_85() const { return ___m_HasDoneFocusTransition_85; }
	inline bool* get_address_of_m_HasDoneFocusTransition_85() { return &___m_HasDoneFocusTransition_85; }
	inline void set_m_HasDoneFocusTransition_85(bool value)
	{
		___m_HasDoneFocusTransition_85 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_86() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WaitForSecondsRealtime_86)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_86() const { return ___m_WaitForSecondsRealtime_86; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_86() { return &___m_WaitForSecondsRealtime_86; }
	inline void set_m_WaitForSecondsRealtime_86(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_86), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_87() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreventCallback_87)); }
	inline bool get_m_PreventCallback_87() const { return ___m_PreventCallback_87; }
	inline bool* get_address_of_m_PreventCallback_87() { return &___m_PreventCallback_87; }
	inline void set_m_PreventCallback_87(bool value)
	{
		___m_PreventCallback_87 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TouchKeyboardAllowsInPlaceEditing_88)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_88() const { return ___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_88() { return &___m_TouchKeyboardAllowsInPlaceEditing_88; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_88(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_88 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_89() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsTextComponentUpdateRequired_89)); }
	inline bool get_m_IsTextComponentUpdateRequired_89() const { return ___m_IsTextComponentUpdateRequired_89; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_89() { return &___m_IsTextComponentUpdateRequired_89; }
	inline void set_m_IsTextComponentUpdateRequired_89(bool value)
	{
		___m_IsTextComponentUpdateRequired_89 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_90() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsScrollbarUpdateRequired_90)); }
	inline bool get_m_IsScrollbarUpdateRequired_90() const { return ___m_IsScrollbarUpdateRequired_90; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_90() { return &___m_IsScrollbarUpdateRequired_90; }
	inline void set_m_IsScrollbarUpdateRequired_90(bool value)
	{
		___m_IsScrollbarUpdateRequired_90 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_91() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsUpdatingScrollbarValues_91)); }
	inline bool get_m_IsUpdatingScrollbarValues_91() const { return ___m_IsUpdatingScrollbarValues_91; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_91() { return &___m_IsUpdatingScrollbarValues_91; }
	inline void set_m_IsUpdatingScrollbarValues_91(bool value)
	{
		___m_IsUpdatingScrollbarValues_91 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_92() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isLastKeyBackspace_92)); }
	inline bool get_m_isLastKeyBackspace_92() const { return ___m_isLastKeyBackspace_92; }
	inline bool* get_address_of_m_isLastKeyBackspace_92() { return &___m_isLastKeyBackspace_92; }
	inline void set_m_isLastKeyBackspace_92(bool value)
	{
		___m_isLastKeyBackspace_92 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_93() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PointerDownClickStartTime_93)); }
	inline float get_m_PointerDownClickStartTime_93() const { return ___m_PointerDownClickStartTime_93; }
	inline float* get_address_of_m_PointerDownClickStartTime_93() { return &___m_PointerDownClickStartTime_93; }
	inline void set_m_PointerDownClickStartTime_93(float value)
	{
		___m_PointerDownClickStartTime_93 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_94() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyDownStartTime_94)); }
	inline float get_m_KeyDownStartTime_94() const { return ___m_KeyDownStartTime_94; }
	inline float* get_address_of_m_KeyDownStartTime_94() { return &___m_KeyDownStartTime_94; }
	inline void set_m_KeyDownStartTime_94(float value)
	{
		___m_KeyDownStartTime_94 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_95() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DoubleClickDelay_95)); }
	inline float get_m_DoubleClickDelay_95() const { return ___m_DoubleClickDelay_95; }
	inline float* get_address_of_m_DoubleClickDelay_95() { return &___m_DoubleClickDelay_95; }
	inline void set_m_DoubleClickDelay_95(float value)
	{
		___m_DoubleClickDelay_95 = value;
	}

	inline static int32_t get_offset_of_m_IsCompositionActive_97() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCompositionActive_97)); }
	inline bool get_m_IsCompositionActive_97() const { return ___m_IsCompositionActive_97; }
	inline bool* get_address_of_m_IsCompositionActive_97() { return &___m_IsCompositionActive_97; }
	inline void set_m_IsCompositionActive_97(bool value)
	{
		___m_IsCompositionActive_97 = value;
	}

	inline static int32_t get_offset_of_m_ShouldUpdateIMEWindowPosition_98() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldUpdateIMEWindowPosition_98)); }
	inline bool get_m_ShouldUpdateIMEWindowPosition_98() const { return ___m_ShouldUpdateIMEWindowPosition_98; }
	inline bool* get_address_of_m_ShouldUpdateIMEWindowPosition_98() { return &___m_ShouldUpdateIMEWindowPosition_98; }
	inline void set_m_ShouldUpdateIMEWindowPosition_98(bool value)
	{
		___m_ShouldUpdateIMEWindowPosition_98 = value;
	}

	inline static int32_t get_offset_of_m_PreviousIMEInsertionLine_99() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreviousIMEInsertionLine_99)); }
	inline int32_t get_m_PreviousIMEInsertionLine_99() const { return ___m_PreviousIMEInsertionLine_99; }
	inline int32_t* get_address_of_m_PreviousIMEInsertionLine_99() { return &___m_PreviousIMEInsertionLine_99; }
	inline void set_m_PreviousIMEInsertionLine_99(int32_t value)
	{
		___m_PreviousIMEInsertionLine_99 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_100() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalFontAsset_100)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_GlobalFontAsset_100() const { return ___m_GlobalFontAsset_100; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_GlobalFontAsset_100() { return &___m_GlobalFontAsset_100; }
	inline void set_m_GlobalFontAsset_100(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_GlobalFontAsset_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_100), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_101() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnFocusSelectAll_101)); }
	inline bool get_m_OnFocusSelectAll_101() const { return ___m_OnFocusSelectAll_101; }
	inline bool* get_address_of_m_OnFocusSelectAll_101() { return &___m_OnFocusSelectAll_101; }
	inline void set_m_OnFocusSelectAll_101(bool value)
	{
		___m_OnFocusSelectAll_101 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_102() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelectAll_102)); }
	inline bool get_m_isSelectAll_102() const { return ___m_isSelectAll_102; }
	inline bool* get_address_of_m_isSelectAll_102() { return &___m_isSelectAll_102; }
	inline void set_m_isSelectAll_102(bool value)
	{
		___m_isSelectAll_102 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_103() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ResetOnDeActivation_103)); }
	inline bool get_m_ResetOnDeActivation_103() const { return ___m_ResetOnDeActivation_103; }
	inline bool* get_address_of_m_ResetOnDeActivation_103() { return &___m_ResetOnDeActivation_103; }
	inline void set_m_ResetOnDeActivation_103(bool value)
	{
		___m_ResetOnDeActivation_103 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_104() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionStillActive_104)); }
	inline bool get_m_SelectionStillActive_104() const { return ___m_SelectionStillActive_104; }
	inline bool* get_address_of_m_SelectionStillActive_104() { return &___m_SelectionStillActive_104; }
	inline void set_m_SelectionStillActive_104(bool value)
	{
		___m_SelectionStillActive_104 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_105() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReleaseSelection_105)); }
	inline bool get_m_ReleaseSelection_105() const { return ___m_ReleaseSelection_105; }
	inline bool* get_address_of_m_ReleaseSelection_105() { return &___m_ReleaseSelection_105; }
	inline void set_m_ReleaseSelection_105(bool value)
	{
		___m_ReleaseSelection_105 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslySelectedObject_106() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreviouslySelectedObject_106)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PreviouslySelectedObject_106() const { return ___m_PreviouslySelectedObject_106; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PreviouslySelectedObject_106() { return &___m_PreviouslySelectedObject_106; }
	inline void set_m_PreviouslySelectedObject_106(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PreviouslySelectedObject_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviouslySelectedObject_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_107() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RestoreOriginalTextOnEscape_107)); }
	inline bool get_m_RestoreOriginalTextOnEscape_107() const { return ___m_RestoreOriginalTextOnEscape_107; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_107() { return &___m_RestoreOriginalTextOnEscape_107; }
	inline void set_m_RestoreOriginalTextOnEscape_107(bool value)
	{
		___m_RestoreOriginalTextOnEscape_107 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_108() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isRichTextEditingAllowed_108)); }
	inline bool get_m_isRichTextEditingAllowed_108() const { return ___m_isRichTextEditingAllowed_108; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_108() { return &___m_isRichTextEditingAllowed_108; }
	inline void set_m_isRichTextEditingAllowed_108(bool value)
	{
		___m_isRichTextEditingAllowed_108 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_109() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineLimit_109)); }
	inline int32_t get_m_LineLimit_109() const { return ___m_LineLimit_109; }
	inline int32_t* get_address_of_m_LineLimit_109() { return &___m_LineLimit_109; }
	inline void set_m_LineLimit_109(int32_t value)
	{
		___m_LineLimit_109 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_110() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputValidator_110)); }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * get_m_InputValidator_110() const { return ___m_InputValidator_110; }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D ** get_address_of_m_InputValidator_110() { return &___m_InputValidator_110; }
	inline void set_m_InputValidator_110(TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * value)
	{
		___m_InputValidator_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_110), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_111() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelected_111)); }
	inline bool get_m_isSelected_111() const { return ___m_isSelected_111; }
	inline bool* get_address_of_m_isSelected_111() { return &___m_isSelected_111; }
	inline void set_m_isSelected_111(bool value)
	{
		___m_isSelected_111 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_112() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsStringPositionDirty_112)); }
	inline bool get_m_IsStringPositionDirty_112() const { return ___m_IsStringPositionDirty_112; }
	inline bool* get_address_of_m_IsStringPositionDirty_112() { return &___m_IsStringPositionDirty_112; }
	inline void set_m_IsStringPositionDirty_112(bool value)
	{
		___m_IsStringPositionDirty_112 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_113() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCaretPositionDirty_113)); }
	inline bool get_m_IsCaretPositionDirty_113() const { return ___m_IsCaretPositionDirty_113; }
	inline bool* get_address_of_m_IsCaretPositionDirty_113() { return &___m_IsCaretPositionDirty_113; }
	inline void set_m_IsCaretPositionDirty_113(bool value)
	{
		___m_IsCaretPositionDirty_113 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_114() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_forceRectTransformAdjustment_114)); }
	inline bool get_m_forceRectTransformAdjustment_114() const { return ___m_forceRectTransformAdjustment_114; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_114() { return &___m_forceRectTransformAdjustment_114; }
	inline void set_m_forceRectTransformAdjustment_114(bool value)
	{
		___m_forceRectTransformAdjustment_114 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_115() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ProcessingEvent_115)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_115() const { return ___m_ProcessingEvent_115; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_115() { return &___m_ProcessingEvent_115; }
	inline void set_m_ProcessingEvent_115(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_115), (void*)value);
	}
};

struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_gshared (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_gshared_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_gshared_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_gshared_inline (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3_gshared (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_gshared (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_gshared (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method);

// System.Int32[0...,0...] MapGeneratorScript::getMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void DragControlScript::sendDropMessage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragControlScript_sendDropMessage_mBE1F6A47F13907BED7BCB0776C9BF41993DEEB3D (DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Int32[0...,0...] FoodManager::generateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* FoodManager_generateFoodMap_m503C16053644F52B50DEE2D2A16F1EA4698B1BFB (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32[]>::.ctor()
inline void Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3 (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Int32[]>::get_Count()
inline int32_t Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_inline (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int32[]>::Dequeue()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98 (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32[] GameOverManager::LinkedListToArray(System.Collections.Generic.LinkedList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GameOverManager_LinkedListToArray_mE68967F4DE9EF7880D4063C690FE381215C014D5 (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * ___list0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(!0[],System.Int32)
inline void LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_gshared)(__this, ___array0, ___index1, method);
}
// System.Void GameOverManager::drawGraphByData(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_drawGraphByData_m40E032E6F39908C5411BAA686EBC296112BF91F6 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject GameOverManager::CreateCircle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameOverManager_CreateCircle_m4A8D75B6A3668F7AE14F808C2EB0D30EB0DA18C7 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___anchoredPosition0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void GameOverManager::CreateDotConnection(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_CreateDotConnection_mF4992392F203DA7871E90ABE6470E8B6C9B9B7C5 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dotPositionA0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dotPositionB1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single GameOverManager::GetAngleFromVectorFloat(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameOverManager_GetAngleFromVectorFloat_m8E483234FCC526CB29E90571C72ED218EF48DC15 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
inline int32_t LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, const RuntimeMethod*))LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_gshared_inline)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, const RuntimeMethod*))LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
inline int32_t LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_inline (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 *, const RuntimeMethod*))LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::RemoveFirst()
inline void LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3 (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, const RuntimeMethod*))LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void GlobalScript::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScript_SetLayerRecursively_m7E0C9912BDA8C6B689827DA0F698FE7CC957EC19 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, int32_t ___layer1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Int32[0...,0...] MapGeneratorScript::renderMazeMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* MapGeneratorScript_renderMazeMap_m6410A958B795F6542D12A04D4FDD86BE484756D7 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___unitNumber0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void MapGeneratorScript::generateMaze(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_generateMaze_mE8775169A2142F6D4428FA48A0DAEAAC1F1641B3 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshSurface::BuildNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshSurface_BuildNavMesh_mE6606F10EA912379674F43E92D50273AB1A9B4B7 (NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * __this, const RuntimeMethod* method);
// System.Void MapGeneratorScript::createMazeWall(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createMazeWall_m82C81BFC4F8BD8576754FF746C07BBE9A02888D5 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method);
// System.Void MapGeneratorScript::createFoodBowl(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createFoodBowl_mA7F52E8F47877E895A6C493FD74C0E42F9B4B16C (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method);
// System.Void MapGeneratorScript::createWaterBottle(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createWaterBottle_mF85F6C20937822F16FAB712A8D77B38807FC7E85 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method);
// System.Void MapGeneratorScript::createFloor(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createFloor_m113C8EB9BE31595B38AC68E029DAC062567C22CA (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PauseControl::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl_PauseGame_m7E5453F4099DADFF467AB1CED2A068CC2021BBA4 (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void RatScript::die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_die_mCC95C4B6C44BFCB7572291024C5C497C9DC3CC67 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// System.Void RatBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A (RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * __this, const RuntimeMethod* method);
// System.Void RatScript::StopRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m3CFD57C08562A9A79AC501773050A18EA0FC791A (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void RatScript::TransitionToState(RatBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * ___state0, const RuntimeMethod* method);
// System.Void RatIdleState::moveToRandomDestination(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_moveToRandomDestination_mCAED1A277324A0D7D1B030938EE9CE595B24FA44 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_mB55D92B0CBEA48367C5FC6879FDEE2915FB6CD36 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Int32[0...,0...] RatScript::getFoodMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901_inline (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void RatScript::RunToDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_RunToDestination_mD6185E440D3B2134ED92446E15EC16E4F38A9E8C (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___des0, const RuntimeMethod* method);
// System.Void RatLookingForFoodState::searchAndGo(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState_searchAndGo_mAFDDDEF4AA624FA0B0A80B3027EAB34DA329A0BF (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method);
// System.Int32[0...,0...] RatManager::generateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatManager_generateFoodMap_m1C5FE80735980DBAE1EC33659A4A022CF2C16502 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// System.Void GlobalScript::print2DArray(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScript_print2DArray_m32AD64BCBEC7A49FB97FAE797E70092DDBBEC4BD (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// System.Void RatManager::spawnRats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_spawnRats_m5B0CA5623BF1F2E58CFC3A58BE41CEB93E26D5A0 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method);
// System.Void RatManager::sampleGameDataAndCheckGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_sampleGameDataAndCheckGameOver_m027FB392B48641D514EAF1D07FFC0903616334A5 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<RatScript>()
inline RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * GameObject_GetComponent_TisRatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF_m38139505971FC6FE828869D630987296CD704203 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void RatScript::AutoDropRatAtLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_AutoDropRatAtLocation_m03066099A8BCE5C37F08C63A631849B6F6026E8A (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Void RatManager::removeRatTrainCell(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_removeRatTrainCell_m46399CC5B3B7B7A2672567BC83503F567059A7CB (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void GameOverManager::showGameOverPanel(RatManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_showGameOverPanel_mEA540B86246139D7EEAC3411A1D3BF7F7EDB0887 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * ___rm0, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(!0)
inline LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749 (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, int32_t, const RuntimeMethod*))LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_gshared)(__this, ___value0, method);
}
// System.Void RatManager::gameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_gameOver_mCFC9D053EE5E2956B4EE9E2E2738FE3AE930BA1C (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
inline void LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *, const RuntimeMethod*))LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<RatManager>()
inline RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * GameObject_GetComponent_TisRatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8_m2AD53757DCA4E1E04EA8CD64CEB9CDC5CA6942B5 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void RatScript::ratRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_ratRoutine_mBB45944BE2AD9E527F3963AD3A3BFA515E2F3A11 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void RatManager::ratReleased(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_ratReleased_m1552C66CB163D3BEF1C7CED345207232DBC566B5 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void RatScript::HealthChangeByHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_HealthChangeByHunger_m87757D2A64AF2F070E94C0A28FB2A06C6644D5FE (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// System.Void RatManager::UpdateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_UpdateFoodMap_m696B357A26BE3FED6ED68D2D444065D629819134 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Void RatManager::ratDeath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_ratDeath_mB024BAA1065C59A7F91269F087AB6F44690D4E5F (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void RatScript::objectDropped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_objectDropped_mC9CA19A395A742B3BB45C64B2F63DD36C2108E3B (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method);
// System.Void RatIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState__ctor_m87E18FC312BCAA38C17181EBA750E817232B7155 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, const RuntimeMethod* method);
// System.Void RatLookingForFoodState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState__ctor_m695A4D591ADE9F80CE2C8CA04C62B0042002F481 (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, const RuntimeMethod* method);
// System.Void RatEatingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatEatingState__ctor_mD765D0EDDA6C009EC28B50FCAB6FD7B2B8FBCFB9 (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * __this, const RuntimeMethod* method);
// System.Void RatSleepingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSleepingState__ctor_mE1F61F5293366FD68E1A55830FFFCCEBE1587B0D (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * __this, const RuntimeMethod* method);
// System.Void RatDeathState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatDeathState__ctor_mE3E5D43453B6E95DF618362FBC6A9C12C5035D72 (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * __this, const RuntimeMethod* method);
// System.Void RatSpawnState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSpawnState__ctor_mEF2B6858D5B089A82022C7DB95B12FF102D897E7 (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// map = mg.getMap();
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_0 = __this->get_mg_10();
		NullCheck(L_0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1;
		L_1 = MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline(L_0, /*hidden argument*/NULL);
		__this->set_map_11(L_1);
		// pos = cam.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		__this->set_pos_5(L_4);
		// topBound = pos.y*Mathf.Tan((90-cam.transform.rotation.eulerAngles.x)*(Mathf.PI/180));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_pos_5();
		float L_6 = L_5->get_y_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_cam_4();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12;
		L_12 = tanf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_11)), (float)(0.0174532924f))));
		__this->set_topBound_12(((float)il2cpp_codegen_multiply((float)L_6, (float)L_12)));
		// bottomBound = (map.GetLength(0)-1)*10f+pos.y*Mathf.Tan((90-cam.transform.rotation.eulerAngles.x)*(Mathf.PI/180));
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_13 = __this->get_map_11();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_13);
		int32_t L_14;
		L_14 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_13, 0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_pos_5();
		float L_16 = L_15->get_y_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = __this->get_cam_4();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		float L_22;
		L_22 = tanf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_21)), (float)(0.0174532924f))));
		__this->set_bottomBound_13(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))), (float)(10.0f))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_22)))));
		// leftBound = 0f;
		__this->set_leftBound_14((0.0f));
		// rightBound = (map.GetLength(1)-1)*10f;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_23 = __this->get_map_11();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_23);
		int32_t L_24;
		L_24 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_23, 1, /*hidden argument*/NULL);
		__this->set_rightBound_15(((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)))), (float)(10.0f))));
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// pos = cam.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cam_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_pos_5(L_2);
		// if(upPressed && pos.x>=topBound){
		bool L_3 = __this->get_upPressed_6();
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_pos_5();
		float L_5 = L_4->get_x_2();
		float L_6 = __this->get_topBound_12();
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_006d;
		}
	}
	{
		// cam.transform.position = new Vector3(pos.x-1f, pos.y, pos.z);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_cam_4();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_pos_5();
		float L_10 = L_9->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_pos_5();
		float L_12 = L_11->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_pos_5();
		float L_14 = L_13->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)il2cpp_codegen_subtract((float)L_10, (float)(1.0f))), L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_15, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if(downPressed && pos.x<=bottomBound){
		bool L_16 = __this->get_downPressed_7();
		if (!L_16)
		{
			goto IL_00c4;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_pos_5();
		float L_18 = L_17->get_x_2();
		float L_19 = __this->get_bottomBound_13();
		if ((!(((float)L_18) <= ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		// cam.transform.position = new Vector3(pos.x+1f, pos.y, pos.z);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = __this->get_cam_4();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_pos_5();
		float L_23 = L_22->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_pos_5();
		float L_25 = L_24->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_pos_5();
		float L_27 = L_26->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_add((float)L_23, (float)(1.0f))), L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_28, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		// if(leftPressed && pos.z>=leftBound){
		bool L_29 = __this->get_leftPressed_8();
		if (!L_29)
		{
			goto IL_011b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_pos_5();
		float L_31 = L_30->get_z_4();
		float L_32 = __this->get_leftBound_14();
		if ((!(((float)L_31) >= ((float)L_32))))
		{
			goto IL_011b;
		}
	}
	{
		// cam.transform.position = new Vector3(pos.x, pos.y, pos.z-1f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_33 = __this->get_cam_4();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = __this->get_address_of_pos_5();
		float L_36 = L_35->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = __this->get_address_of_pos_5();
		float L_38 = L_37->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_pos_5();
		float L_40 = L_39->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), L_36, L_38, ((float)il2cpp_codegen_subtract((float)L_40, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_34, L_41, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// if(rightPressed && pos.z<=rightBound){
		bool L_42 = __this->get_rightPressed_9();
		if (!L_42)
		{
			goto IL_0172;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_pos_5();
		float L_44 = L_43->get_z_4();
		float L_45 = __this->get_rightBound_15();
		if ((!(((float)L_44) <= ((float)L_45))))
		{
			goto IL_0172;
		}
	}
	{
		// cam.transform.position = new Vector3(pos.x, pos.y, pos.z+1f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_46 = __this->get_cam_4();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_pos_5();
		float L_49 = L_48->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_50 = __this->get_address_of_pos_5();
		float L_51 = L_50->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_52 = __this->get_address_of_pos_5();
		float L_53 = L_52->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), L_49, L_51, ((float)il2cpp_codegen_add((float)L_53, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_47, L_54, /*hidden argument*/NULL);
	}

IL_0172:
	{
		// }
		return;
	}
}
// System.Void CameraController::moveCameraUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_moveCameraUp_mF7F89A571FCB0A558C6EF4367A2C0200A392036A (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// upPressed = true;
		__this->set_upPressed_6((bool)1);
		// }
		return;
	}
}
// System.Void CameraController::moveCameraDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_moveCameraDown_m0C296380D13E469434B99FF00DCDCE60424E57F7 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// downPressed = true;
		__this->set_downPressed_7((bool)1);
		// }
		return;
	}
}
// System.Void CameraController::moveCameraLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_moveCameraLeft_mBE7EAC7C87DCBB18227332EE1390EF7F4203EA66 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// leftPressed = true;
		__this->set_leftPressed_8((bool)1);
		// }
		return;
	}
}
// System.Void CameraController::moveCameraRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_moveCameraRight_mD9259B8DD8DCC0985F64201A0E907BE6794840DD (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// rightPressed = true;
		__this->set_rightPressed_9((bool)1);
		// }
		return;
	}
}
// System.Void CameraController::upReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_upReleased_mFBC7B05B164C20B5D7573400645EBD9192978860 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// upPressed = false;
		__this->set_upPressed_6((bool)0);
		// }
		return;
	}
}
// System.Void CameraController::downReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_downReleased_mD94B55C58DE222CF8AE2D25A4BEE3F68C98FC5FC (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// downPressed = false;
		__this->set_downPressed_7((bool)0);
		// }
		return;
	}
}
// System.Void CameraController::leftReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_leftReleased_m68D3B52221A5F285893F29406C009B2C179322CA (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// leftPressed = false;
		__this->set_leftPressed_8((bool)0);
		// }
		return;
	}
}
// System.Void CameraController::rightReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_rightReleased_mEF877E9DCD27650D2696B6672FBAE68D7FDBCB82 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// rightPressed = false;
		__this->set_rightPressed_9((bool)0);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DragControlScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragControlScript_Start_m594E87884E088D8E39BAAA19780F30DF268A82D3 (DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// isDragging = false;
		__this->set_isDragging_6((bool)0);
		// Vector3 sPoint = new Vector3(0.0f, 20.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (20.0f), (0.0f), /*hidden argument*/NULL);
		// movePlane = new Plane(Vector3.up, sPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set_movePlane_8(L_2);
		// map = mg.getMap();
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_3 = __this->get_mg_4();
		NullCheck(L_3);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4;
		L_4 = MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline(L_3, /*hidden argument*/NULL);
		__this->set_map_9(L_4);
		// }
		return;
	}
}
// System.Void DragControlScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragControlScript_Update_m6A886157711D604E13E616833318B27950397326 (DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D45F725B1A81BD9702CBCB1E7F8008CBCE4E9ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2102B0860BFB656222741B782D56B5684F78CA5);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B17_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B14_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B16_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B15_0 = NULL;
	float G_B18_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B18_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B22_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B19_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B21_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B20_0 = NULL;
	float G_B23_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B23_1 = NULL;
	{
		// if(Input.touchCount>0 && Input.GetTouch(0).phase == TouchPhase.Began){
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00b1;
		}
	}
	{
		// Vector3 position = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3;
		L_3 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Ray ray = Camera.main.ScreenPointToRay(position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		NullCheck(L_6);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_8;
		L_8 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_6, L_7, /*hidden argument*/NULL);
		// if(Physics.Raycast(ray, out hit)){
		bool L_9;
		L_9 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_8, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b1;
		}
	}
	{
		// var name = hit.collider.name;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10;
		L_10 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		// Debug.Log(name + "hit");
		String_t* L_12 = L_11;
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// if(name == "Rat"){
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralC2102B0860BFB656222741B782D56B5684F78CA5, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.Log("Rat hit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0D45F725B1A81BD9702CBCB1E7F8008CBCE4E9ED, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// hitObject = hit.collider.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_15;
		L_15 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		__this->set_hitObject_5(L_16);
		// screenPosition = Camera.main.WorldToScreenPoint(hitObject.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17;
		L_17 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_hitObject_5();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_17, L_20, /*hidden argument*/NULL);
		__this->set_screenPosition_7(L_21);
		// isDragging = true;
		__this->set_isDragging_6((bool)1);
	}

IL_00b1:
	{
		// if(Input.touchCount==0){
		int32_t L_22;
		L_22 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00e0;
		}
	}
	{
		// if(hitObject!=null){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_hitObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// sendDropMessage(hitObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_hitObject_5();
		DragControlScript_sendDropMessage_mBE1F6A47F13907BED7BCB0776C9BF41993DEEB3D(__this, L_25, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// isDragging = false;
		__this->set_isDragging_6((bool)0);
		// hitObject = null;
		__this->set_hitObject_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_00e0:
	{
		// if(isDragging && hitObject){
		bool L_26 = __this->get_isDragging_6();
		if (!L_26)
		{
			goto IL_021a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_hitObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_021a;
		}
	}
	{
		// Vector3 position = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_29;
		L_29 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_29;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		// Ray ray = Camera.main.ScreenPointToRay(position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32;
		L_32 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_3;
		NullCheck(L_32);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_34;
		L_34 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_32, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		// float enter = 0.0f;
		V_5 = (0.0f);
		// if(movePlane.Raycast(ray, out enter)){
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_35 = __this->get_address_of_movePlane_8();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_36 = V_4;
		bool L_37;
		L_37 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_35, L_36, (float*)(&V_5), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_021a;
		}
	}
	{
		// Vector3 hitPoint = ray.GetPoint(enter);
		float L_38 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_4), L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		// Vector3 pos = new Vector3();
		il2cpp_codegen_initobj((&V_7), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// pos.x = hitPoint.x < 0f ? 0f : (hitPoint.x > (map.GetLength(0)-1)*10f ? (map.GetLength(0)-1)*10f : hitPoint.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_6;
		float L_41 = L_40.get_x_2();
		G_B14_0 = (&V_7);
		if ((((float)L_41) < ((float)(0.0f))))
		{
			G_B17_0 = (&V_7);
			goto IL_0198;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_6;
		float L_43 = L_42.get_x_2();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_44 = __this->get_map_9();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_44);
		int32_t L_45;
		L_45 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_44, 0, /*hidden argument*/NULL);
		G_B15_0 = G_B14_0;
		if ((((float)L_43) > ((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)))), (float)(10.0f))))))
		{
			G_B16_0 = G_B14_0;
			goto IL_0181;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_6;
		float L_47 = L_46.get_x_2();
		G_B18_0 = L_47;
		G_B18_1 = G_B15_0;
		goto IL_019d;
	}

IL_0181:
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_48 = __this->get_map_9();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_48);
		int32_t L_49;
		L_49 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_48, 0, /*hidden argument*/NULL);
		G_B18_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)))), (float)(10.0f)));
		G_B18_1 = G_B16_0;
		goto IL_019d;
	}

IL_0198:
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B17_0;
	}

IL_019d:
	{
		G_B18_1->set_x_2(G_B18_0);
		// pos.z = hitPoint.z < 0f ? 0f : (hitPoint.z > (map.GetLength(1)-1)*10f ? (map.GetLength(1)-1)*10f : hitPoint.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_6;
		float L_51 = L_50.get_z_4();
		G_B19_0 = (&V_7);
		if ((((float)L_51) < ((float)(0.0f))))
		{
			G_B22_0 = (&V_7);
			goto IL_01f0;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_6;
		float L_53 = L_52.get_z_4();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_54 = __this->get_map_9();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_54);
		int32_t L_55;
		L_55 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_54, 1, /*hidden argument*/NULL);
		G_B20_0 = G_B19_0;
		if ((((float)L_53) > ((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)))), (float)(10.0f))))))
		{
			G_B21_0 = G_B19_0;
			goto IL_01d9;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_6;
		float L_57 = L_56.get_z_4();
		G_B23_0 = L_57;
		G_B23_1 = G_B20_0;
		goto IL_01f5;
	}

IL_01d9:
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_58 = __this->get_map_9();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_58);
		int32_t L_59;
		L_59 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_58, 1, /*hidden argument*/NULL);
		G_B23_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1)))), (float)(10.0f)));
		G_B23_1 = G_B21_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B22_0;
	}

IL_01f5:
	{
		G_B23_1->set_z_4(G_B23_0);
		// pos.y = hitPoint.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_6;
		float L_61 = L_60.get_y_3();
		(&V_7)->set_y_3(L_61);
		// hitObject.transform.position = pos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_hitObject_5();
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_7;
		NullCheck(L_63);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_63, L_64, /*hidden argument*/NULL);
	}

IL_021a:
	{
		// }
		return;
	}
}
// System.Void DragControlScript::sendDropMessage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragControlScript_sendDropMessage_mBE1F6A47F13907BED7BCB0776C9BF41993DEEB3D (DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA29C1E216E6053582CF409232F29617A5729D2DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.SendMessage("objectDropped");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_0, _stringLiteralA29C1E216E6053582CF409232F29617A5729D2DB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DragControlScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragControlScript__ctor_mE67459F575085883995AD298199659EBC8709C3B (DragControlScript_tC460FA72D2A7E84B8D8F762064BC11F3BB0160EF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FoodManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodManager_Start_m9B28839A9743C67F910D827C7EF8E32468E11550 (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, const RuntimeMethod* method)
{
	{
		// int[,] foodMap  = generateFoodMap(mg.getMap());
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_0 = __this->get_mg_4();
		NullCheck(L_0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1;
		L_1 = MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline(L_0, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2;
		L_2 = FoodManager_generateFoodMap_m503C16053644F52B50DEE2D2A16F1EA4698B1BFB(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FoodManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodManager_Update_mC53813F7BE7FA2B32EDDCD9D57031391B8BBD9BE (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32[0...,0...] FoodManager::generateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* FoodManager_generateFoodMap_m503C16053644F52B50DEE2D2A16F1EA4698B1BFB (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// int[,] result = new int[10, 10];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)10), (il2cpp_array_size_t)((int32_t)10) };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		V_0 = L_0;
		// int fX = 0;
		V_1 = 0;
		// int fY = 0;
		V_2 = 0;
		// for(int i=0; i<map.GetLength(0); i++){
		V_5 = 0;
		goto IL_005a;
	}

IL_0013:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		V_6 = 0;
		goto IL_0049;
	}

IL_0018:
	{
		// if(map[i, j] == 2){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = ___map0;
		int32_t L_3 = V_5;
		int32_t L_4 = V_6;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = (L_2)->GetAt(L_3, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_002b;
		}
	}
	{
		// fX=i;
		int32_t L_6 = V_5;
		V_1 = L_6;
		// fY=j;
		int32_t L_7 = V_6;
		V_2 = L_7;
	}

IL_002b:
	{
		// if(map[i, j] == 1){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_8 = ___map0;
		int32_t L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		// result[i, j] =-1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_12 = V_0;
		int32_t L_13 = V_5;
		int32_t L_14 = V_6;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, (-1));
	}

IL_0043:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_15 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0049:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_16 = V_6;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_17 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_17);
		int32_t L_18;
		L_18 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_17, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0018;
		}
	}
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005a:
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_20 = V_5;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_21 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_21);
		int32_t L_22;
		L_22 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_21, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0013;
		}
	}
	{
		// Queue<int[]> q = new Queue<int[]>();
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_23 = (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *)il2cpp_codegen_object_new(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65_il2cpp_TypeInfo_var);
		Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3(L_23, /*hidden argument*/Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3_RuntimeMethod_var);
		V_3 = L_23;
		// q.Enqueue(new int[]{fX, fY});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_24 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = L_25;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_27);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = L_26;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_29);
		NullCheck(L_24);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_24, L_28, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// int step=1;
		V_4 = 1;
		goto IL_01bb;
	}

IL_0087:
	{
		// int size = q.Count;
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_inline(L_30, /*hidden argument*/Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		V_7 = L_31;
		// for(int i=0; i<size; i++){
		V_8 = 0;
		goto IL_01ac;
	}

IL_0097:
	{
		// int[] current = q.Dequeue();
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_32 = V_3;
		NullCheck(L_32);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33;
		L_33 = Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98(L_32, /*hidden argument*/Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98_RuntimeMethod_var);
		// int cX = current[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35 = 0;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_9 = L_36;
		// int cY = current[1];
		NullCheck(L_34);
		int32_t L_37 = 1;
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_10 = L_38;
		// result[cX, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_39 = V_0;
		int32_t L_40 = V_9;
		int32_t L_41 = V_10;
		int32_t L_42 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(L_40, L_41, L_42);
		// if(cX>0 && result[cX-1,cY]==0){
		int32_t L_43 = V_9;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_00eb;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_44 = V_0;
		int32_t L_45 = V_9;
		int32_t L_46 = V_10;
		NullCheck(L_44);
		int32_t L_47;
		L_47 = (L_44)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)), L_46);
		if (L_47)
		{
			goto IL_00eb;
		}
	}
	{
		// q.Enqueue(new int[]{cX-1, cY});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_48 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = L_49;
		int32_t L_51 = V_9;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_50;
		int32_t L_53 = V_10;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_53);
		NullCheck(L_48);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_48, L_52, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX-1, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_54 = V_0;
		int32_t L_55 = V_9;
		int32_t L_56 = V_10;
		int32_t L_57 = V_4;
		NullCheck(L_54);
		(L_54)->SetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)), L_56, L_57);
	}

IL_00eb:
	{
		// if(cX<result.GetLength(0)-1 && result[cX+1,cY]==0){
		int32_t L_58 = V_9;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_59 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_59);
		int32_t L_60;
		L_60 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_59, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_58) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)1)))))
		{
			goto IL_012c;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_61 = V_0;
		int32_t L_62 = V_9;
		int32_t L_63 = V_10;
		NullCheck(L_61);
		int32_t L_64;
		L_64 = (L_61)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1)), L_63);
		if (L_64)
		{
			goto IL_012c;
		}
	}
	{
		// q.Enqueue(new int[]{cX+1, cY});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_65 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = L_66;
		int32_t L_68 = V_9;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_67;
		int32_t L_70 = V_10;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_70);
		NullCheck(L_65);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_65, L_69, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX+1, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_71 = V_0;
		int32_t L_72 = V_9;
		int32_t L_73 = V_10;
		int32_t L_74 = V_4;
		NullCheck(L_71);
		(L_71)->SetAt(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)), L_73, L_74);
	}

IL_012c:
	{
		// if(cY>0 && result[cX,cY-1]==0){
		int32_t L_75 = V_10;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_76 = V_0;
		int32_t L_77 = V_9;
		int32_t L_78 = V_10;
		NullCheck(L_76);
		int32_t L_79;
		L_79 = (L_76)->GetAt(L_77, ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1)));
		if (L_79)
		{
			goto IL_0165;
		}
	}
	{
		// q.Enqueue(new int[]{cX, cY-1});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_80 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = L_81;
		int32_t L_83 = V_9;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_83);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = L_82;
		int32_t L_85 = V_10;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1)));
		NullCheck(L_80);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_80, L_84, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX, cY-1] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_86 = V_0;
		int32_t L_87 = V_9;
		int32_t L_88 = V_10;
		int32_t L_89 = V_4;
		NullCheck(L_86);
		(L_86)->SetAt(L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1)), L_89);
	}

IL_0165:
	{
		// if(cY<result.GetLength(1)-1 && result[cX,cY+1]==0){
		int32_t L_90 = V_10;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_91 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_91);
		int32_t L_92;
		L_92 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_91, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_90) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1)))))
		{
			goto IL_01a6;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_93 = V_0;
		int32_t L_94 = V_9;
		int32_t L_95 = V_10;
		NullCheck(L_93);
		int32_t L_96;
		L_96 = (L_93)->GetAt(L_94, ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)));
		if (L_96)
		{
			goto IL_01a6;
		}
	}
	{
		// q.Enqueue(new int[]{cX, cY+1});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_97 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_98 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = L_98;
		int32_t L_100 = V_9;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_100);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = L_99;
		int32_t L_102 = V_10;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1)));
		NullCheck(L_97);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_97, L_101, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX, cY+1] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_103 = V_0;
		int32_t L_104 = V_9;
		int32_t L_105 = V_10;
		int32_t L_106 = V_4;
		NullCheck(L_103);
		(L_103)->SetAt(L_104, ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1)), L_106);
	}

IL_01a6:
	{
		// for(int i=0; i<size; i++){
		int32_t L_107 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_01ac:
	{
		// for(int i=0; i<size; i++){
		int32_t L_108 = V_8;
		int32_t L_109 = V_7;
		if ((((int32_t)L_108) < ((int32_t)L_109)))
		{
			goto IL_0097;
		}
	}
	{
		// step++;
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01bb:
	{
		// while(q.Count != 0){
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_111 = V_3;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_inline(L_111, /*hidden argument*/Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		if (L_112)
		{
			goto IL_0087;
		}
	}
	{
		// return result;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_113 = V_0;
		return L_113;
	}
}
// System.Int32[0...,0...] FoodManager::getFoodMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* FoodManager_getFoodMap_mAD94A1D5FD442D0FA98E9C1DF392AA57BAE53240 (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, const RuntimeMethod* method)
{
	{
		// return foodMap;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_foodMap_5();
		return L_0;
	}
}
// System.Void FoodManager::UpdateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodManager_UpdateFoodMap_mA977CCB261AA0B60E631EFD487CEFA6F8517C18F (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	{
		// this.foodMap = map;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		__this->set_foodMap_5(L_0);
		// }
		return;
	}
}
// System.Void FoodManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodManager__ctor_mFB5746DD57F2E2288284DBB625DE891424371D42 (FoodManager_t888741E831CF42A8A4DFBF653715F0FFFA109424 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameOverManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Start_mCF340FAB95187564C54942AD01D2A65BD005CEDD (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RatPopulationGraphTransform = RatPopulationGraphContainer.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_RatPopulationGraphContainer_5();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		__this->set_RatPopulationGraphTransform_8(L_1);
		// }
		return;
	}
}
// System.Void GameOverManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Update_mCC4D30DD698BBDEAEE7EC313A9446B5457C356EF (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOverManager::showGameOverPanel(RatManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_showGameOverPanel_mEA540B86246139D7EEAC3411A1D3BF7F7EDB0887 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * ___rm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// totalRatData = LinkedListToArray(rm.totalRatStack);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_1 = ___rm0;
		NullCheck(L_1);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_2 = L_1->get_totalRatStack_21();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = GameOverManager_LinkedListToArray_mE68967F4DE9EF7880D4063C690FE381215C014D5(L_2, /*hidden argument*/NULL);
		__this->set_totalRatData_9(L_3);
		// deadRatData = LinkedListToArray(rm.deadRatStack);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_4 = ___rm0;
		NullCheck(L_4);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_5 = L_4->get_deadRatStack_22();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6;
		L_6 = GameOverManager_LinkedListToArray_mE68967F4DE9EF7880D4063C690FE381215C014D5(L_5, /*hidden argument*/NULL);
		__this->set_deadRatData_10(L_6);
		// rm.totalRatStack.CopyTo(totalRatData, 0);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_7 = ___rm0;
		NullCheck(L_7);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_8 = L_7->get_totalRatStack_21();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_totalRatData_9();
		NullCheck(L_8);
		LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA(L_8, L_9, 0, /*hidden argument*/LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_RuntimeMethod_var);
		// rm.deadRatStack.CopyTo(deadRatData, 0);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_10 = ___rm0;
		NullCheck(L_10);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_11 = L_10->get_deadRatStack_22();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_deadRatData_10();
		NullCheck(L_11);
		LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA(L_11, L_12, 0, /*hidden argument*/LinkedList_1_CopyTo_mCE34C205425C79FC5E41D6BCEFBB59D1C8AF6ACA_RuntimeMethod_var);
		// drawGraphByData(deadRatData);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_deadRatData_10();
		GameOverManager_drawGraphByData_m40E032E6F39908C5411BAA686EBC296112BF91F6(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject GameOverManager::CreateCircle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameOverManager_CreateCircle_m4A8D75B6A3668F7AE14F808C2EB0D30EB0DA18C7 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___anchoredPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject gameObject = new GameObject("circle", typeof(Image));
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_4, _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7, L_1, /*hidden argument*/NULL);
		// gameObject.transform.SetParent(RatPopulationGraphTransform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_RatPopulationGraphTransform_8();
		NullCheck(L_6);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_6, L_7, (bool)0, /*hidden argument*/NULL);
		// gameObject.GetComponent<Image>().sprite = circleSprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_5;
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_circleSprite_6();
		NullCheck(L_9);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_8;
		NullCheck(L_11);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12;
		L_12 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		// rectTransform.anchoredPosition = anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = L_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___anchoredPosition0;
		NullCheck(L_13);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_13, L_14, /*hidden argument*/NULL);
		// rectTransform.sizeDelta = new Vector2(11, 11);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = L_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), (11.0f), (11.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_15, L_16, /*hidden argument*/NULL);
		// rectTransform.anchorMin = new Vector2(0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_17, L_18, /*hidden argument*/NULL);
		// rectTransform.anchorMin = new Vector2(0, 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_17, L_19, /*hidden argument*/NULL);
		// return gameObject;
		return L_11;
	}
}
// System.Void GameOverManager::drawGraphByData(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_drawGraphByData_m40E032E6F39908C5411BAA686EBC296112BF91F6 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	{
		// GameObject singleGraphContainer = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// float graphHeight = RatPopulationGraphTransform.sizeDelta.y;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_RatPopulationGraphTransform_8();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_1();
		V_0 = L_3;
		// float graphWidth = RatPopulationGraphTransform.sizeDelta.x;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_RatPopulationGraphTransform_8();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		// int size = data.GetLength(0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___data0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		int32_t L_8;
		L_8 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_7, 0, /*hidden argument*/NULL);
		V_1 = L_8;
		// float yMaximum = (float)data[size-1]+1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___data0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = ((float)il2cpp_codegen_add((float)((float)((float)L_12)), (float)(1.0f)));
		// float x_delta = graphWidth/(size+1);
		int32_t L_13 = V_1;
		V_3 = ((float)((float)L_6/(float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))))));
		// GameObject lastCircleGameObject = null;
		V_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// for(int i=0; i<size; i++){
		V_5 = 0;
		goto IL_00a1;
	}

IL_004a:
	{
		// float xPosition = x_delta + i * x_delta;
		float L_14 = V_3;
		int32_t L_15 = V_5;
		float L_16 = V_3;
		V_6 = ((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)L_16))));
		// float yPosition = (data[i]/yMaximum)*graphHeight;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ___data0;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21 = V_2;
		float L_22 = V_0;
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_20))/(float)L_21)), (float)L_22));
		// GameObject circleGameObject = CreateCircle(new Vector2(xPosition, yPosition));
		float L_23 = V_6;
		float L_24 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), L_23, L_24, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = GameOverManager_CreateCircle_m4A8D75B6A3668F7AE14F808C2EB0D30EB0DA18C7(__this, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// if(lastCircleGameObject!=null){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0097;
		}
	}
	{
		// CreateDotConnection(lastCircleGameObject.GetComponent<RectTransform>().anchoredPosition, circleGameObject.GetComponent<RectTransform>().anchoredPosition);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_4;
		NullCheck(L_29);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30;
		L_30 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_29, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		NullCheck(L_30);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_30, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_8;
		NullCheck(L_32);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33;
		L_33 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_32, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		NullCheck(L_33);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_33, /*hidden argument*/NULL);
		GameOverManager_CreateDotConnection_mF4992392F203DA7871E90ABE6470E8B6C9B9B7C5(__this, L_31, L_34, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// lastCircleGameObject = circleGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_8;
		V_4 = L_35;
		// for(int i=0; i<size; i++){
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a1:
	{
		// for(int i=0; i<size; i++){
		int32_t L_37 = V_5;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameOverManager::CreateDotConnection(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_CreateDotConnection_mF4992392F203DA7871E90ABE6470E8B6C9B9B7C5 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dotPositionA0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dotPositionB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26243C1EA0773F7D677E96AD5A25A15C90ABFA83);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject gameObject = new GameObject("dotConnection", typeof(Image));
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_4, _stringLiteral26243C1EA0773F7D677E96AD5A25A15C90ABFA83, L_1, /*hidden argument*/NULL);
		// gameObject.transform.SetParent(RatPopulationGraphTransform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_RatPopulationGraphTransform_8();
		NullCheck(L_6);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_6, L_7, (bool)0, /*hidden argument*/NULL);
		// gameObject.GetComponent<Image>().color = new Color(153f, 0f, 17f, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_5;
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (153.0f), (0.0f), (17.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11;
		L_11 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_8, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		// Vector2 dir = (dotPositionB - dotPositionA).normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___dotPositionB1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___dotPositionA0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_15;
		// float distance = Vector2.Distance(dotPositionA, dotPositionB);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___dotPositionA0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = ___dotPositionB1;
		float L_18;
		L_18 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// rectTransform.anchorMin = new Vector2(0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19 = L_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_19, L_20, /*hidden argument*/NULL);
		// rectTransform.anchorMax = new Vector2(0, 0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21 = L_19;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(L_21, L_22, /*hidden argument*/NULL);
		// rectTransform.sizeDelta = new Vector2(distance, 3f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = L_21;
		float L_24 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), L_24, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_23, L_25, /*hidden argument*/NULL);
		// rectTransform.anchoredPosition = dotPositionA + dir*distance * 0.5f;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_26 = L_23;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = ___dotPositionA0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_0;
		float L_29 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_28, L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_30, (0.5f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_27, L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_26, L_32, /*hidden argument*/NULL);
		// rectTransform.localEulerAngles = new Vector3(0, 0, GetAngleFromVectorFloat(dir));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_33, /*hidden argument*/NULL);
		float L_35;
		L_35 = GameOverManager_GetAngleFromVectorFloat_m8E483234FCC526CB29E90571C72ED218EF48DC15(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), (0.0f), (0.0f), L_35, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_26, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single GameOverManager::GetAngleFromVectorFloat(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameOverManager_GetAngleFromVectorFloat_m8E483234FCC526CB29E90571C72ED218EF48DC15 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// dir = dir.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___dir0), /*hidden argument*/NULL);
		___dir0 = L_0;
		// float n = Mathf.Atan2(dir.y, dir.x)*Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___dir0;
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___dir0;
		float L_4 = L_3.get_x_2();
		float L_5;
		L_5 = atan2f(L_2, L_4);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)(57.2957802f)));
		// if(n<0) n += 360;
		float L_6 = V_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// if(n<0) n += 360;
		float L_7 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_7, (float)(360.0f)));
	}

IL_0031:
	{
		// return n;
		float L_8 = V_0;
		return L_8;
	}
}
// System.Int32[] GameOverManager::LinkedListToArray(System.Collections.Generic.LinkedList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GameOverManager_LinkedListToArray_mE68967F4DE9EF7880D4063C690FE381215C014D5 (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int size = list.Count;
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_inline(L_0, /*hidden argument*/LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_RuntimeMethod_var);
		V_0 = L_1;
		// int[] result = new int[list.Count];
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_inline(L_2, /*hidden argument*/LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_RuntimeMethod_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// for(int i=0; i<size; i++){
		V_2 = 0;
		goto IL_002f;
	}

IL_0017:
	{
		// result[i] = list.First.Value;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_1;
		int32_t L_6 = V_2;
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_7 = ___list0;
		NullCheck(L_7);
		LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * L_8;
		L_8 = LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_inline(L_7, /*hidden argument*/LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_inline(L_8, /*hidden argument*/LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_RuntimeMethod_var);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_9);
		// list.RemoveFirst();
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_10 = ___list0;
		NullCheck(L_10);
		LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3(L_10, /*hidden argument*/LinkedList_1_RemoveFirst_m858FF747DB2F1597C94FD34E5B28BF79AEDBCAB3_RuntimeMethod_var);
		// for(int i=0; i<size; i++){
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002f:
	{
		// for(int i=0; i<size; i++){
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0017;
		}
	}
	{
		// return result;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_1;
		return L_14;
	}
}
// System.Void GameOverManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager__ctor_m52207DE1B4AFE3EB17B968DC034DF9CD126BE15B (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GlobalScript::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScript_SetLayerRecursively_m7E0C9912BDA8C6B689827DA0F698FE7CC957EC19 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, int32_t ___layer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(obj == null){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// obj.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___obj0;
		int32_t L_3 = ___layer1;
		NullCheck(L_2);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_2, L_3, /*hidden argument*/NULL);
		// foreach(Transform child in obj.transform){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___obj0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001f:
		{
			// foreach(Transform child in obj.transform){
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			RuntimeObject * L_8;
			L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_8, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if(child != null){
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0040;
			}
		}

IL_0034:
		{
			// SetLayerRecursively(child.gameObject, layer);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
			NullCheck(L_11);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
			L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
			int32_t L_13 = ___layer1;
			GlobalScript_SetLayerRecursively_m7E0C9912BDA8C6B689827DA0F698FE7CC957EC19(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0040:
		{
			// foreach(Transform child in obj.transform){
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001f;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_2;
			if (!L_17)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void GlobalScript::print2DArray(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScript_print2DArray_m32AD64BCBEC7A49FB97FAE797E70092DDBBEC4BD (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral112DE891A861FA63F392A21E5500DB2351F835B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for(int row=0; row<map.GetLength(0); row++){
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		// string m = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for(int col=0; col<map.GetLength(1); col++){
		V_2 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		// m=m+string.Format("{0}\t", map[row, col]);
		String_t* L_0 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1 = ___map0;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral112DE891A861FA63F392A21E5500DB2351F835B1, L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// for(int col=0; col<map.GetLength(1); col++){
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		// for(int col=0; col<map.GetLength(1); col++){
		int32_t L_10 = V_2;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_11 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_11);
		int32_t L_12;
		L_12 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_11, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log(m);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// for(int row=0; row<map.GetLength(0); row++){
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0044:
	{
		// for(int row=0; row<map.GetLength(0); row++){
		int32_t L_15 = V_0;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_16 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_16, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// }
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
// System.Void MainController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_Start_mCB939AEB64460DA322E086C461603DE0196A3941 (MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController_Update_m4067F63F85150EEB4BDC438739554B5A10261792 (MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainController__ctor_mD54970CDDB17F015F7D2362DB2074CA80121E22E (MainController_tDA651262D40482B45C8ED0D4291070D831FA29FE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Start_mF4446A5FDE97841590C718B06B5DDDC188B228E2 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_Update_m3433178EDAF25B8CD00B3F4DDC8F0408580470F5 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainMenuManager::StartNewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager_StartNewGame_m7797DDEEEA5D1BCB14E11F07EC011F2C93502A60 (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(unitNumberInput.text == ""){
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = __this->get_unitNumberInput_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// unitNumberInput.text = "1";
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = __this->get_unitNumberInput_4();
		NullCheck(L_3);
		TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB(L_3, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if(ratNumberInput.text == ""){
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_4 = __this->get_ratNumberInput_5();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// ratNumberInput.text = "10";
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_7 = __this->get_ratNumberInput_5();
		NullCheck(L_7);
		TMP_InputField_set_text_m52BC8546DFA3BD649C2EBD1C9548C8DBFC4A87BB(L_7, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// PlayerPrefs.SetInt("Unit_Number", int.Parse(unitNumberInput.text));
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_8 = __this->get_unitNumberInput_4();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_9, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC, L_10, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Rat_Number", int.Parse(ratNumberInput.text));
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_11 = __this->get_ratNumberInput_5();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_12, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2, L_13, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuManager__ctor_m39846598ADB8889025A11166F08497A1E99D13BF (MainMenuManager_t7A113A7F5C26F3BD9FB68E3D52C1221E8D8386EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MapGeneratorScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_Awake_m60BC296370F2B56B1D4B2E3F3C3695B9D2CEA93E (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2);
		s_Il2CppMethodInitialized = true;
	}
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B2_0 = NULL;
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B3_1 = NULL;
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B5_0 = NULL;
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * G_B6_1 = NULL;
	{
		// unitNumber = PlayerPrefs.GetInt("Unit_Number") == 0 ? 1 : PlayerPrefs.GetInt("Unit_Number");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1928FC0823AA6DD78D6EAF63116E27E54F5D29FC, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_unitNumber_13(G_B3_0);
		// ratNumber = PlayerPrefs.GetInt("Rat_Number") == 0 ? 10 : PlayerPrefs.GetInt("Rat_Number");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0038;
		}
	}
	{
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral5E864EA00EB2F3CB5EB070F4793A874175FA28B2, /*hidden argument*/NULL);
		G_B6_0 = L_3;
		G_B6_1 = G_B4_0;
		goto IL_003a;
	}

IL_0038:
	{
		G_B6_0 = ((int32_t)10);
		G_B6_1 = G_B5_0;
	}

IL_003a:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_ratNumber_14(G_B6_0);
		// Debug.Log(unitNumber + " " + ratNumber);
		int32_t* L_4 = __this->get_address_of_unitNumber_13();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		int32_t* L_6 = __this->get_address_of_ratNumber_14();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// map = renderMazeMap(unitNumber);
		int32_t L_9 = __this->get_unitNumber_13();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_10;
		L_10 = MapGeneratorScript_renderMazeMap_m6410A958B795F6542D12A04D4FDD86BE484756D7(__this, L_9, /*hidden argument*/NULL);
		__this->set_map_16(L_10);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_Start_m6B7B0CE6C5E002602727CE29DD30C39DDC837452 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF59752E8A72696F8B8E12BCBC2B7B6C33DF6EB6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainMaze = GameObject.Find("MainMaze");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFF59752E8A72696F8B8E12BCBC2B7B6C33DF6EB6, /*hidden argument*/NULL);
		__this->set_MainMaze_5(L_0);
		// generateMaze(map);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1 = __this->get_map_16();
		MapGeneratorScript_generateMaze_mE8775169A2142F6D4428FA48A0DAEAAC1F1641B3(__this, L_1, /*hidden argument*/NULL);
		// GlobalScript.SetLayerRecursively(this.gameObject, 2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GlobalScript_SetLayerRecursively_m7E0C9912BDA8C6B689827DA0F698FE7CC957EC19(L_2, 2, /*hidden argument*/NULL);
		// surface.BuildNavMesh();
		NavMeshSurface_t9B99700568A78FB41F365E38A5CCD902134FA78A * L_3 = __this->get_surface_9();
		NullCheck(L_3);
		NavMeshSurface_BuildNavMesh_mE6606F10EA912379674F43E92D50273AB1A9B4B7(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_Update_mF74F9B69EA04B03412C878FA9FD494E659C0EDCA (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MapGeneratorScript::generateMaze(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_generateMaze_mE8775169A2142F6D4428FA48A0DAEAAC1F1641B3 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int row = map.GetLength(0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int col = map.GetLength(1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		// for(int i=0; i<row; i++){
		V_2 = 0;
		goto IL_006d;
	}

IL_0014:
	{
		// for(int j=0; j<col; j++){
		V_3 = 0;
		goto IL_0065;
	}

IL_0018:
	{
		// if(map[i, j] == Wall_Code){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = ___map0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var);
		int32_t L_8 = ((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->get_Wall_Code_19();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0031;
		}
	}
	{
		// createMazeWall(i, j);
		int32_t L_9 = V_2;
		int32_t L_10 = V_3;
		MapGeneratorScript_createMazeWall_m82C81BFC4F8BD8576754FF746C07BBE9A02888D5(__this, L_9, L_10, /*hidden argument*/NULL);
		// } else if(map[i,j] == Food_Bowl_Code) {
		goto IL_0061;
	}

IL_0031:
	{
		// } else if(map[i,j] == Food_Bowl_Code) {
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_11 = ___map0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = (L_11)->GetAt(L_12, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var);
		int32_t L_15 = ((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->get_Food_Bowl_Code_20();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_004a;
		}
	}
	{
		// createFoodBowl(i, j);
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		MapGeneratorScript_createFoodBowl_mA7F52E8F47877E895A6C493FD74C0E42F9B4B16C(__this, L_16, L_17, /*hidden argument*/NULL);
		// } else if(map[i, j] == Water_Bottle_Code){
		goto IL_0061;
	}

IL_004a:
	{
		// } else if(map[i, j] == Water_Bottle_Code){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_18 = ___map0;
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = (L_18)->GetAt(L_19, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var);
		int32_t L_22 = ((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->get_Water_Bottle_Code_21();
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0061;
		}
	}
	{
		// createWaterBottle(i, j);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		MapGeneratorScript_createWaterBottle_mF85F6C20937822F16FAB712A8D77B38807FC7E85(__this, L_23, L_24, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// for(int j=0; j<col; j++){
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0065:
	{
		// for(int j=0; j<col; j++){
		int32_t L_26 = V_3;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0018;
		}
	}
	{
		// for(int i=0; i<row; i++){
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006d:
	{
		// for(int i=0; i<row; i++){
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0014;
		}
	}
	{
		// createFloor(map);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_31 = ___map0;
		MapGeneratorScript_createFloor_m113C8EB9BE31595B38AC68E029DAC062567C22CA(__this, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::createMazeWall(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createMazeWall_m82C81BFC4F8BD8576754FF746C07BBE9A02888D5 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F54B7BFEE63FC7CF1A6ECC3EBE9DEFA4807B5E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3(i*xOS, 5.5f, j*zOS);
		int32_t L_0 = ___i0;
		float L_1 = __this->get_xOS_10();
		int32_t L_2 = ___j1;
		float L_3 = __this->get_zOS_12();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)L_1)), (5.5f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		// GameObject wall = Instantiate(mazeWall[0], position, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_mazeWall_4();
		NullCheck(L_4);
		int32_t L_5 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// wall.name = "Wall_" + i + "_" + j;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___j1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral90F54B7BFEE63FC7CF1A6ECC3EBE9DEFA4807B5E, L_11, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_10, L_13, /*hidden argument*/NULL);
		// wall.transform.parent = this.transform;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::createFloor(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createFloor_m113C8EB9BE31595B38AC68E029DAC062567C22CA (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3((map.GetLength(0)-1)*xOS/2, 0.0f, (map.GetLength(1)-1)*zOS/2);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		float L_2 = __this->get_xOS_10();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_3 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_3);
		int32_t L_4;
		L_4 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		float L_5 = __this->get_zOS_12();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))), (float)L_2))/(float)(2.0f))), (0.0f), ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))), (float)L_5))/(float)(2.0f))), /*hidden argument*/NULL);
		// GameObject floor = GameObject.Instantiate(floorObject, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_floorObject_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// floor.transform.localScale = new Vector3 (map.GetLength(0)*xOS, 1, map.GetLength(1)*zOS);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_12 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_12);
		int32_t L_13;
		L_13 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_12, 0, /*hidden argument*/NULL);
		float L_14 = __this->get_xOS_10();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_15 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16;
		L_16 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_15, 1, /*hidden argument*/NULL);
		float L_17 = __this->get_zOS_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)L_14)), (1.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_16)), (float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_18, /*hidden argument*/NULL);
		// floor.transform.parent = this.transform;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::createFoodBowl(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createFoodBowl_mA7F52E8F47877E895A6C493FD74C0E42F9B4B16C (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E3B5D9F6D09A2672E908486041F3A6D0C474827);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3(i*xOS, 2f, j*zOS);
		int32_t L_0 = ___i0;
		float L_1 = __this->get_xOS_10();
		int32_t L_2 = ___j1;
		float L_3 = __this->get_zOS_12();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)L_1)), (2.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		// GameObject foodBowlObject = Instantiate(foodBowlModel, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_foodBowlModel_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// foodBowlObject.name = "foodbowl_"+i+"_"+j;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___j1), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral9E3B5D9F6D09A2672E908486041F3A6D0C474827, L_9, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_11, /*hidden argument*/NULL);
		// foodBowlObject.transform.parent = this.transform;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGeneratorScript::createWaterBottle(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript_createWaterBottle_mF85F6C20937822F16FAB712A8D77B38807FC7E85 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF92A19FFF30FF9FACC453DDDD7858F6891469B03);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = new Vector3(i*xOS, 15f, j*zOS);
		int32_t L_0 = ___i0;
		float L_1 = __this->get_xOS_10();
		int32_t L_2 = ___j1;
		float L_3 = __this->get_zOS_12();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)L_1)), (15.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		// GameObject waterBottleObject = Instantiate(waterBottleModel, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_waterBottleModel_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// waterBottleObject.name = "waterBottle_"+i+"_"+j;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___j1), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralF92A19FFF30FF9FACC453DDDD7858F6891469B03, L_9, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_11, /*hidden argument*/NULL);
		// waterBottleObject.transform.parent = this.transform;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32[0...,0...] MapGeneratorScript::getMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	{
		// return map;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_map_16();
		return L_0;
	}
}
// System.Int32[0...,0...] MapGeneratorScript::renderMazeMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* MapGeneratorScript_renderMazeMap_m6410A958B795F6542D12A04D4FDD86BE484756D7 (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, int32_t ___unitNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		// int floorSqrt = (int)Mathf.Floor(Mathf.Sqrt(unitNumber));
		int32_t L_0 = ___unitNumber0;
		float L_1;
		L_1 = sqrtf(((float)((float)L_0)));
		float L_2;
		L_2 = floorf(L_1);
		V_0 = ((int32_t)((int32_t)L_2));
		// int ceilSqrt = floorSqrt + 1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		// int rows = 0;
		V_2 = 0;
		// int cols = 0;
		V_3 = 0;
		// int x = 0;
		V_4 = 0;
		// int y = 0;
		V_5 = 0;
		// if(unitNumber==floorSqrt*floorSqrt){
		int32_t L_4 = ___unitNumber0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))))))
		{
			goto IL_002b;
		}
	}
	{
		// x = floorSqrt;
		int32_t L_7 = V_0;
		V_4 = L_7;
		// y=x;
		int32_t L_8 = V_4;
		V_5 = L_8;
		// }else if(unitNumber < floorSqrt*ceilSqrt){
		goto IL_0040;
	}

IL_002b:
	{
		// }else if(unitNumber < floorSqrt*ceilSqrt){
		int32_t L_9 = ___unitNumber0;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)))))
		{
			goto IL_0039;
		}
	}
	{
		// x = floorSqrt;
		int32_t L_12 = V_0;
		V_4 = L_12;
		// y = ceilSqrt;
		int32_t L_13 = V_1;
		V_5 = L_13;
		// } else {
		goto IL_0040;
	}

IL_0039:
	{
		// x = ceilSqrt;
		int32_t L_14 = V_1;
		V_4 = L_14;
		// y = x;
		int32_t L_15 = V_4;
		V_5 = L_15;
	}

IL_0040:
	{
		// rows = x*16+4;
		int32_t L_16 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)((int32_t)16))), (int32_t)4));
		// cols = y*16+4;
		int32_t L_17 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)((int32_t)16))), (int32_t)4));
		// int[,] result = new int[rows, cols];
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		il2cpp_array_size_t L_21[] = { (il2cpp_array_size_t)L_18, (il2cpp_array_size_t)L_19 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_20 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_21);
		V_6 = L_20;
		// for(int i=0; i<x; i++){
		V_7 = 0;
		goto IL_01ba;
	}

IL_0061:
	{
		// for(int j=0; j<y; j++){
		V_8 = 0;
		goto IL_01ab;
	}

IL_0069:
	{
		// for(int ip = 0; ip<unitPattern.GetLength(0); ip++){
		V_9 = 0;
		goto IL_0192;
	}

IL_0071:
	{
		// for(int jp = 0; jp<unitPattern.GetLength(1); jp++){
		V_10 = 0;
		goto IL_0179;
	}

IL_0079:
	{
		// if(unitPattern[ip, jp] == 1){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_22 = __this->get_unitPattern_22();
		int32_t L_23 = V_9;
		int32_t L_24 = V_10;
		NullCheck(L_22);
		int32_t L_25;
		L_25 = (L_22)->GetAt(L_23, L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00f7;
		}
	}
	{
		// for(int ib = 0; ib<bedroomUnit.GetLength(0); ib++){
		V_11 = 0;
		goto IL_00e5;
	}

IL_0090:
	{
		// for(int jb = 0; jb<bedroomUnit.GetLength(1); jb++){
		V_12 = 0;
		goto IL_00cf;
	}

IL_0095:
	{
		// result[2+i*16 + ip*4 + ib, 2+j*16 + jp*4 + jb] = bedroomUnit[ib, jb];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_26 = V_6;
		int32_t L_27 = V_7;
		int32_t L_28 = V_9;
		int32_t L_29 = V_11;
		int32_t L_30 = V_8;
		int32_t L_31 = V_10;
		int32_t L_32 = V_12;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_33 = __this->get_bedroomUnit_17();
		int32_t L_34 = V_11;
		int32_t L_35 = V_12;
		NullCheck(L_33);
		int32_t L_36;
		L_36 = (L_33)->GetAt(L_34, L_35);
		NullCheck(L_26);
		(L_26)->SetAt(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)((int32_t)16))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)4)))), (int32_t)L_29)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)((int32_t)16))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)4)))), (int32_t)L_32)), L_36);
		// for(int jb = 0; jb<bedroomUnit.GetLength(1); jb++){
		int32_t L_37 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00cf:
	{
		// for(int jb = 0; jb<bedroomUnit.GetLength(1); jb++){
		int32_t L_38 = V_12;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_39 = __this->get_bedroomUnit_17();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_39);
		int32_t L_40;
		L_40 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_39, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0095;
		}
	}
	{
		// for(int ib = 0; ib<bedroomUnit.GetLength(0); ib++){
		int32_t L_41 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00e5:
	{
		// for(int ib = 0; ib<bedroomUnit.GetLength(0); ib++){
		int32_t L_42 = V_11;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_43 = __this->get_bedroomUnit_17();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_43);
		int32_t L_44;
		L_44 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_43, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_0090;
		}
	}
	{
		// } else if(unitPattern[ip, jp]==2){
		goto IL_0173;
	}

IL_00f7:
	{
		// } else if(unitPattern[ip, jp]==2){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_45 = __this->get_unitPattern_22();
		int32_t L_46 = V_9;
		int32_t L_47 = V_10;
		NullCheck(L_45);
		int32_t L_48;
		L_48 = (L_45)->GetAt(L_46, L_47);
		if ((!(((uint32_t)L_48) == ((uint32_t)2))))
		{
			goto IL_0173;
		}
	}
	{
		// for(int il = 0; il<livingRoomUnit.GetLength(0); il++){
		V_13 = 0;
		goto IL_0163;
	}

IL_010e:
	{
		// for(int jl = 0; jl<livingRoomUnit.GetLength(1); jl++){
		V_14 = 0;
		goto IL_014d;
	}

IL_0113:
	{
		// result[2+i*16 + ip*4 + il, 2+j*16 + jp*4 + jl] = livingRoomUnit[il, jl];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_49 = V_6;
		int32_t L_50 = V_7;
		int32_t L_51 = V_9;
		int32_t L_52 = V_13;
		int32_t L_53 = V_8;
		int32_t L_54 = V_10;
		int32_t L_55 = V_14;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_56 = __this->get_livingRoomUnit_18();
		int32_t L_57 = V_13;
		int32_t L_58 = V_14;
		NullCheck(L_56);
		int32_t L_59;
		L_59 = (L_56)->GetAt(L_57, L_58);
		NullCheck(L_49);
		(L_49)->SetAt(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_50, (int32_t)((int32_t)16))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_51, (int32_t)4)))), (int32_t)L_52)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)((int32_t)16))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)4)))), (int32_t)L_55)), L_59);
		// for(int jl = 0; jl<livingRoomUnit.GetLength(1); jl++){
		int32_t L_60 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_014d:
	{
		// for(int jl = 0; jl<livingRoomUnit.GetLength(1); jl++){
		int32_t L_61 = V_14;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_62 = __this->get_livingRoomUnit_18();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_62);
		int32_t L_63;
		L_63 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_62, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_0113;
		}
	}
	{
		// for(int il = 0; il<livingRoomUnit.GetLength(0); il++){
		int32_t L_64 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0163:
	{
		// for(int il = 0; il<livingRoomUnit.GetLength(0); il++){
		int32_t L_65 = V_13;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_66 = __this->get_livingRoomUnit_18();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_66);
		int32_t L_67;
		L_67 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_66, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_010e;
		}
	}

IL_0173:
	{
		// for(int jp = 0; jp<unitPattern.GetLength(1); jp++){
		int32_t L_68 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_0179:
	{
		// for(int jp = 0; jp<unitPattern.GetLength(1); jp++){
		int32_t L_69 = V_10;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_70 = __this->get_unitPattern_22();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_70);
		int32_t L_71;
		L_71 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_70, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_0079;
		}
	}
	{
		// for(int ip = 0; ip<unitPattern.GetLength(0); ip++){
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0192:
	{
		// for(int ip = 0; ip<unitPattern.GetLength(0); ip++){
		int32_t L_73 = V_9;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_74 = __this->get_unitPattern_22();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_74);
		int32_t L_75;
		L_75 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_74, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_0071;
		}
	}
	{
		// for(int j=0; j<y; j++){
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01ab:
	{
		// for(int j=0; j<y; j++){
		int32_t L_77 = V_8;
		int32_t L_78 = V_5;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0069;
		}
	}
	{
		// for(int i=0; i<x; i++){
		int32_t L_79 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_01ba:
	{
		// for(int i=0; i<x; i++){
		int32_t L_80 = V_7;
		int32_t L_81 = V_4;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_0061;
		}
	}
	{
		// for(int i=0; i<rows; i++){
		V_15 = 0;
		goto IL_0200;
	}

IL_01c8:
	{
		// for(int j=0; j<cols; j++){
		V_16 = 0;
		goto IL_01f5;
	}

IL_01cd:
	{
		// if(i==0 || j==0 || i==rows-1 || j==cols-1){
		int32_t L_82 = V_15;
		if (!L_82)
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_83 = V_16;
		if (!L_83)
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_84 = V_15;
		int32_t L_85 = V_2;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1)))))
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_86 = V_16;
		int32_t L_87 = V_3;
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1))))))
		{
			goto IL_01ef;
		}
	}

IL_01e3:
	{
		// result[i, j] = 1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_88 = V_6;
		int32_t L_89 = V_15;
		int32_t L_90 = V_16;
		NullCheck(L_88);
		(L_88)->SetAt(L_89, L_90, 1);
	}

IL_01ef:
	{
		// for(int j=0; j<cols; j++){
		int32_t L_91 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_01f5:
	{
		// for(int j=0; j<cols; j++){
		int32_t L_92 = V_16;
		int32_t L_93 = V_3;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_01cd;
		}
	}
	{
		// for(int i=0; i<rows; i++){
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0200:
	{
		// for(int i=0; i<rows; i++){
		int32_t L_95 = V_15;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01c8;
		}
	}
	{
		// return result;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_97 = V_6;
		return L_97;
	}
}
// System.Void MapGeneratorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript__ctor_m0E1AF87EAF0A2B30F80519D720ED4FADF6C8821D (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float xOS = 10;
		__this->set_xOS_10((10.0f));
		// public float yOS = 0.1f;
		__this->set_yOS_11((0.100000001f));
		// public float zOS = 10;
		__this->set_zOS_12((10.0f));
		// public int[,] defaultmap = new int [,]{
		//     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		//     {1, 0, 0, 0, 1, 1, 0, 0, 0, 1},
		//     {1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		//     {1, 1, 0, 0, 0, 1, 0, 0, 0, 1},
		//     {1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
		//     {1, 0, 1, 0, 0, 1, 1, 1, 1, 1},
		//     {1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
		//     {1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
		//     {1, 1, 1, 1, 1, 1, 2, 1, 1, 1},
		//     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		//     };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)10), (il2cpp_array_size_t)((int32_t)10) };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A615E19610AC19B36E24E2E38E653F7E14AEDA81BBA1040D394E8072919CD245_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		__this->set_defaultmap_15(L_2);
		// public int[,] bedroomUnit = new int[,]{
		// {1, 1, 1, 0},
		// {1, 0, 1, 0},
		// {1, 0, 1, 0},
		// {0, 0, 0, 0},
		// };
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)4 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_5);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E70DF7AFC3B19C8C9123F64FB0B367F05BA74E9D5226ADB4F207F77730519967_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		__this->set_bedroomUnit_17(L_6);
		// public int[,] livingRoomUnit = new int[,]{
		// {1, 1, 1, 0, 1, 1, 1, 0},
		// {1, 3, 0, 0, 0, 3, 1, 0},
		// {1, 0, 0, 0, 0, 0, 1, 0},
		// {0, 0, 0, 2, 0, 0, 0, 0},
		// {1, 0, 0, 0, 0, 0, 1, 0},
		// {1, 3, 0, 0, 0, 3, 1, 0},
		// {1, 1, 1, 0, 1, 1, 1, 0},
		// {0, 0, 0, 0, 0, 0, 0, 0},
		// };
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)8, (il2cpp_array_size_t)8 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_8 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_9);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_10 = L_8;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C64F21C1DD21AFD19A4F3DD0917CA7773A185B83C90D4693DE68AB3C45934683_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		__this->set_livingRoomUnit_18(L_10);
		// public int[,] unitPattern = new int[,]{
		// {1, 1, 1, 1},
		// {1, 2, 0, 1},
		// {1, 0, 0, 1},
		// {1, 1, 1, 1},
		// };
		il2cpp_array_size_t L_13[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)4 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_12 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_13);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_14 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____182BA1EE1D4A522EE37D2AF2D8FB6592FE067EE497FD47CFB93B835D2AC8A8EE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		__this->set_unitPattern_22(L_14);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapGeneratorScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGeneratorScript__cctor_m3EA83CCA5A157FF44F1241C62EAB2177DAE95B8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Wall_Code = 1;
		((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->set_Wall_Code_19(1);
		// public static int Food_Bowl_Code = 2;
		((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->set_Food_Bowl_Code_20(2);
		// public static int Water_Bottle_Code = 3;
		((MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_StaticFields*)il2cpp_codegen_static_fields_for(MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40_il2cpp_TypeInfo_var))->set_Water_Bottle_Code_21(3);
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
// System.Void PauseControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl_Start_m6B88F9592F21F510BDF1601461B14CD938F0CC59 (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameIsPaused = false;
		((PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields*)il2cpp_codegen_static_fields_for(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl_Update_m1D53A0EAF05229B3550D78CB6734FCB7D60E8A6C (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)){
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// gameIsPaused = !gameIsPaused;
		bool L_1 = ((PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields*)il2cpp_codegen_static_fields_for(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var))->get_gameIsPaused_4();
		((PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields*)il2cpp_codegen_static_fields_for(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// PauseGame();
		PauseControl_PauseGame_m7E5453F4099DADFF467AB1CED2A068CC2021BBA4(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void PauseControl::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl_PauseGame_m7E5453F4099DADFF467AB1CED2A068CC2021BBA4 (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameIsPaused = true;
		((PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields*)il2cpp_codegen_static_fields_for(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)1);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseControl::UnPauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl_UnPauseGame_m70987EA19B4045061BD0F267F0E2D9F76DF249D1 (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameIsPaused = false;
		((PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_StaticFields*)il2cpp_codegen_static_fields_for(PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)0);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseControl__ctor_m001CB55CCB7476AED5D1BF1663D5ED8A03E0A8B1 (PauseControl_t04F65C09D6B9748F47163E975ABA68B727D17A85 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RatBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A (RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * __this, const RuntimeMethod* method)
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
// System.Void RatContainer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatContainer_Start_m8CB1755BF7A24F64F78338610A3EB4B6EF1DC00C (RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// }
		return;
	}
}
// System.Void RatContainer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatContainer_FixedUpdate_m6B0BE7B21BD1250DDEC78296C6958D6360B784AA (RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11 * __this, const RuntimeMethod* method)
{
	{
		// rb.AddForce(Vector3.left*thrust);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_2 = __this->get_thrust_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatContainer__ctor_mD3863AD8AB6B798A7EEE437511A822393E23ECBA (RatContainer_t04A24AF985935176D5A84F3B177B857B05BEDD11 * __this, const RuntimeMethod* method)
{
	{
		// public float thrust = 10f;
		__this->set_thrust_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RatController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatController__ctor_m1382B556A4B22F2B136294C6C48607E1B381BACD (RatController_tAD14641E93C5D6BC55EDC299ADFC7C3F48960DA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RatDeathState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatDeathState_EnterState_m5F8DB9C3CC996DC7359E97296E1DD171651E6FCC (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// rs.die();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		RatScript_die_mCC95C4B6C44BFCB7572291024C5C497C9DC3CC67(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatDeathState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatDeathState_OnCollisionEnter_mDDFE1C334AB8B9822A045A652D78837E2FCD9F6F (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatDeathState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatDeathState_Update_mE4408899EE0D061B702369D174D7C9E313DBF544 (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatDeathState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatDeathState__ctor_mE3E5D43453B6E95DF618362FBC6A9C12C5035D72 (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * __this, const RuntimeMethod* method)
{
	{
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void RatEatingState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatEatingState_EnterState_m221F604553DC09300FBD04D32F76D4ADC690729F (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// rs.StopRunning();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252(L_0, /*hidden argument*/NULL);
		// rs.agent.velocity = Vector3.zero;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_1 = ___rs0;
		NullCheck(L_1);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_2 = L_1->get_agent_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_2);
		NavMeshAgent_set_velocity_m3CFD57C08562A9A79AC501773050A18EA0FC791A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatEatingState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatEatingState_OnCollisionEnter_mFEEAC1357BDAB6F1EA743417226C03094BCA7282 (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatEatingState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatEatingState_Update_mDDD4053D6D3107465F5DAA63307C6CC060BE86C5 (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B2_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B3_1 = NULL;
	{
		// rs.hunger = rs.hunger<1f ? rs.hunger+ rs.hungerRecoverRate*Time.deltaTime : 1f;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_1 = ___rs0;
		NullCheck(L_1);
		float L_2 = L_1->get_hunger_13();
		G_B1_0 = L_0;
		if ((((float)L_2) < ((float)(1.0f))))
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0015:
	{
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_3 = ___rs0;
		NullCheck(L_3);
		float L_4 = L_3->get_hunger_13();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_5 = ___rs0;
		NullCheck(L_5);
		float L_6 = L_5->get_hungerRecoverRate_19();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_hunger_13(G_B3_0);
		// if(rs.hunger == 1f){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_8 = ___rs0;
		NullCheck(L_8);
		float L_9 = L_8->get_hunger_13();
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// rs.TransitionToState(rs.IdleState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_10 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_11 = ___rs0;
		NullCheck(L_11);
		RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * L_12 = L_11->get_IdleState_23();
		NullCheck(L_10);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void RatEatingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatEatingState__ctor_mD765D0EDDA6C009EC28B50FCAB6FD7B2B8FBCFB9 (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * __this, const RuntimeMethod* method)
{
	{
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void RatIdleState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_EnterState_m10FC63D24559781292179264A2A276A7C9F8052F (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// moveToRandomDestination(rs);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		RatIdleState_moveToRandomDestination_mCAED1A277324A0D7D1B030938EE9CE595B24FA44(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatIdleState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_OnCollisionEnter_mCC7C3DB85D9712AAE56D42783382F0F7760C4F11 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatIdleState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_Update_m3AE2DBF7711DF6F8A233E9BC0086CA878E359C05 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// if(rs.hunger<0.5f){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		float L_1 = L_0->get_hunger_13();
		if ((!(((float)L_1) < ((float)(0.5f)))))
		{
			goto IL_001a;
		}
	}
	{
		// rs.TransitionToState(rs.LookingForFoodState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_2 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_3 = ___rs0;
		NullCheck(L_3);
		RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * L_4 = L_3->get_LookingForFoodState_24();
		NullCheck(L_2);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if(rs.energy < 0.5f){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_5 = ___rs0;
		NullCheck(L_5);
		float L_6 = L_5->get_energy_14();
		if ((!(((float)L_6) < ((float)(0.5f)))))
		{
			goto IL_0034;
		}
	}
	{
		// rs.TransitionToState(rs.SleepingState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_7 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_8 = ___rs0;
		NullCheck(L_8);
		RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * L_9 = L_8->get_SleepingState_26();
		NullCheck(L_7);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// else if(rs.agent.remainingDistance<=5f){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_10 = ___rs0;
		NullCheck(L_10);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_11 = L_10->get_agent_9();
		NullCheck(L_11);
		float L_12;
		L_12 = NavMeshAgent_get_remainingDistance_mB55D92B0CBEA48367C5FC6879FDEE2915FB6CD36(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) <= ((float)(5.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// moveToRandomDestination(rs);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_13 = ___rs0;
		RatIdleState_moveToRandomDestination_mCAED1A277324A0D7D1B030938EE9CE595B24FA44(__this, L_13, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void RatIdleState::moveToRandomDestination(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_moveToRandomDestination_mCAED1A277324A0D7D1B030938EE9CE595B24FA44 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F3560ADA10DBA9C322A6973D663CAAD2B0004D);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int[,] foodMap = rs.getFoodMap();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1;
		L_1 = RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_2 = ___rs0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_ratTransform_8();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = floorf(((float)((float)L_5/(float)(10.0f))));
		// int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_7 = ___rs0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_ratTransform_8();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		float L_11;
		L_11 = floorf(((float)((float)L_10/(float)(10.0f))));
		// int mapValue = -1;
		V_1 = (-1);
		// int dX = 0;
		V_2 = 0;
		// int dY = 0;
		V_3 = 0;
		goto IL_0070;
	}

IL_0047:
	{
		// dX = Random.Range(1, foodMap.GetLength(0)-1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_12 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_12);
		int32_t L_13;
		L_13 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_12, 0, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_14;
		// dY = Random.Range(1, foodMap.GetLength(1)-1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_15 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16;
		L_16 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_15, 1, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		// mapValue = foodMap[dX, dY];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = (L_18)->GetAt(L_19, L_20);
		V_1 = L_21;
	}

IL_0070:
	{
		// while(mapValue <=0 ){
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// Vector3 des = new Vector3(dX*10f, 0f, dY*10f);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), ((float)il2cpp_codegen_multiply((float)((float)((float)L_23)), (float)(10.0f))), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_24)), (float)(10.0f))), /*hidden argument*/NULL);
		// Debug.Log("new destination: "+des);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_4;
		V_5 = L_25;
		String_t* L_26;
		L_26 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral56F3560ADA10DBA9C322A6973D663CAAD2B0004D, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_27, /*hidden argument*/NULL);
		// rs.RunToDestination(new Vector3(dX*10f, rs.ratTransform.position.y, dY*10f));
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_28 = ___rs0;
		int32_t L_29 = V_2;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_30 = ___rs0;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = L_30->get_ratTransform_8();
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		int32_t L_34 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), ((float)il2cpp_codegen_multiply((float)((float)((float)L_29)), (float)(10.0f))), L_33, ((float)il2cpp_codegen_multiply((float)((float)((float)L_34)), (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_28);
		RatScript_RunToDestination_mD6185E440D3B2134ED92446E15EC16E4F38A9E8C(L_28, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState__ctor_m87E18FC312BCAA38C17181EBA750E817232B7155 (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[,] codDirection = new int[,]{
		//     {1, 0},
		//     {0, 1},
		//     {-1, 0},
		//     {0, -1}
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____C11C5B1A1ACE200F7ACCECCFEE328E05DCB4BE49E30C396CE8A52D4C2B364F65_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		__this->set_codDirection_0(L_2);
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void RatLookingForFoodState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState_EnterState_m57FF1D6B09DE093AD08F43163BFDC54368A0E525 (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// rs.StopRunning();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252(L_0, /*hidden argument*/NULL);
		// searchAndGo(rs);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_1 = ___rs0;
		RatLookingForFoodState_searchAndGo_mAFDDDEF4AA624FA0B0A80B3027EAB34DA329A0BF(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatLookingForFoodState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState_OnCollisionEnter_m7114568234A2C6ECA43DB6960AF70CA0D483CBD7 (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatLookingForFoodState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState_Update_mCF66E1CC9E1FECE0601CCE6A8037A4AD3956065C (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int[,] foodMap = rs.getFoodMap();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1;
		L_1 = RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901_inline(L_0, /*hidden argument*/NULL);
		// int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_2 = ___rs0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_ratTransform_8();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = floorf(((float)((float)L_5/(float)(10.0f))));
		V_0 = ((int32_t)((int32_t)L_6));
		// int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_7 = ___rs0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_ratTransform_8();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		float L_11;
		L_11 = floorf(((float)((float)L_10/(float)(10.0f))));
		V_1 = ((int32_t)((int32_t)L_11));
		// if(foodMap[ratX, ratY]==1){
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_1);
		int32_t L_14;
		L_14 = (L_1)->GetAt(L_12, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0056;
		}
	}
	{
		// rs.TransitionToState(rs.EatingState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_15 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_16 = ___rs0;
		NullCheck(L_16);
		RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * L_17 = L_16->get_EatingState_25();
		NullCheck(L_15);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_15, L_17, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if(rs.agent.remainingDistance<=5){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_18 = ___rs0;
		NullCheck(L_18);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_19 = L_18->get_agent_9();
		NullCheck(L_19);
		float L_20;
		L_20 = NavMeshAgent_get_remainingDistance_mB55D92B0CBEA48367C5FC6879FDEE2915FB6CD36(L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) <= ((float)(5.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		// searchAndGo(rs);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_21 = ___rs0;
		RatLookingForFoodState_searchAndGo_mAFDDDEF4AA624FA0B0A80B3027EAB34DA329A0BF(__this, L_21, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void RatLookingForFoodState::searchAndGo(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState_searchAndGo_mAFDDDEF4AA624FA0B0A80B3027EAB34DA329A0BF (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF43CC53DEC9784A8930E483FF6BF2B85B3805EBF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	{
		// int searchRange = 5;
		V_0 = 5;
		// int[,] foodMap = rs.getFoodMap();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1;
		L_1 = RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// int rows = foodMap.GetLength(0);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = V_1;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_2, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		// int cols = foodMap.GetLength(1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = V_1;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		int32_t L_5;
		L_5 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_4, 1, /*hidden argument*/NULL);
		V_3 = L_5;
		// int ratX = (int)Mathf.Floor(rs.ratTransform.position.x/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_6 = ___rs0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6->get_ratTransform_8();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10;
		L_10 = floorf(((float)((float)L_9/(float)(10.0f))));
		V_4 = ((int32_t)((int32_t)L_10));
		// int ratY = (int)Mathf.Floor(rs.ratTransform.position.z/10f);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_11 = ___rs0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11->get_ratTransform_8();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		float L_15;
		L_15 = floorf(((float)((float)L_14/(float)(10.0f))));
		V_5 = ((int32_t)((int32_t)L_15));
		// int min = 2147483647;
		V_6 = ((int32_t)2147483647LL);
		// int[] target = new int[2];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		V_7 = L_16;
		// for(int i = -searchRange; i<searchRange+1; i++){
		int32_t L_17 = V_0;
		V_8 = ((-L_17));
		goto IL_00d8;
	}

IL_006a:
	{
		// for(int j=-searchRange; j<searchRange+1; j++){
		int32_t L_18 = V_0;
		V_9 = ((-L_18));
		goto IL_00cb;
	}

IL_0070:
	{
		// int x = ratX+i;
		int32_t L_19 = V_4;
		int32_t L_20 = V_8;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		// int y = ratY+j;
		int32_t L_21 = V_5;
		int32_t L_22 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
		// if((x>0 && x<rows) && (y>0 && y<cols)){
		int32_t L_23 = V_10;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_24 = V_10;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_26 = V_11;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_27 = V_11;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_00c5;
		}
	}
	{
		// if(foodMap[x,y]>0 && foodMap[x, y]<min){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_29 = V_1;
		int32_t L_30 = V_10;
		int32_t L_31 = V_11;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = (L_29)->GetAt(L_30, L_31);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_33 = V_1;
		int32_t L_34 = V_10;
		int32_t L_35 = V_11;
		NullCheck(L_33);
		int32_t L_36;
		L_36 = (L_33)->GetAt(L_34, L_35);
		int32_t L_37 = V_6;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00c5;
		}
	}
	{
		// min = foodMap[x, y];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_38 = V_1;
		int32_t L_39 = V_10;
		int32_t L_40 = V_11;
		NullCheck(L_38);
		int32_t L_41;
		L_41 = (L_38)->GetAt(L_39, L_40);
		V_6 = L_41;
		// target[0] = x;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_7;
		int32_t L_43 = V_10;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_43);
		// target[1] = y;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_7;
		int32_t L_45 = V_11;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_45);
	}

IL_00c5:
	{
		// for(int j=-searchRange; j<searchRange+1; j++){
		int32_t L_46 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00cb:
	{
		// for(int j=-searchRange; j<searchRange+1; j++){
		int32_t L_47 = V_9;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)))))
		{
			goto IL_0070;
		}
	}
	{
		// for(int i = -searchRange; i<searchRange+1; i++){
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00d8:
	{
		// for(int i = -searchRange; i<searchRange+1; i++){
		int32_t L_50 = V_8;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1)))))
		{
			goto IL_006a;
		}
	}
	{
		// rs.RunToDestination(new Vector3(target[0]*10f, rs.ratTransform.position.y, target[1]*10f));
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_52 = ___rs0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_7;
		NullCheck(L_53);
		int32_t L_54 = 0;
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_56 = ___rs0;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = L_56->get_ratTransform_8();
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = V_7;
		NullCheck(L_60);
		int32_t L_61 = 1;
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_63), ((float)il2cpp_codegen_multiply((float)((float)((float)L_55)), (float)(10.0f))), L_59, ((float)il2cpp_codegen_multiply((float)((float)((float)L_62)), (float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_52);
		RatScript_RunToDestination_mD6185E440D3B2134ED92446E15EC16E4F38A9E8C(L_52, L_63, /*hidden argument*/NULL);
		// Debug.Log("Min food path found: " + target);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = L_64;
		G_B14_0 = L_65;
		G_B14_1 = _stringLiteralF43CC53DEC9784A8930E483FF6BF2B85B3805EBF;
		if (L_65)
		{
			G_B15_0 = L_65;
			G_B15_1 = _stringLiteralF43CC53DEC9784A8930E483FF6BF2B85B3805EBF;
			goto IL_011e;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		goto IL_0123;
	}

IL_011e:
	{
		NullCheck((RuntimeObject *)(RuntimeObject *)G_B15_0);
		String_t* L_66;
		L_66 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(RuntimeObject *)G_B15_0);
		G_B16_0 = L_66;
		G_B16_1 = G_B15_1;
	}

IL_0123:
	{
		String_t* L_67;
		L_67 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B16_1, G_B16_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatLookingForFoodState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatLookingForFoodState__ctor_m695A4D591ADE9F80CE2C8CA04C62B0042002F481 (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * __this, const RuntimeMethod* method)
{
	{
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void RatManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_Awake_m4D18219CB422444FC4773F4C1AE08612A766100D (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_Start_m3386D6725A18D152B024F80980FC64299CB39291 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C3FF849AC561FC4A9583DE8096F925346B0D655);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RatAmount = mg.ratNumber;
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_0 = __this->get_mg_13();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_ratNumber_14();
		__this->set_RatAmount_4(L_1);
		// foodMap = generateFoodMap(mg.getMap());
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_2 = __this->get_mg_13();
		NullCheck(L_2);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_3;
		L_3 = MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline(L_2, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4;
		L_4 = RatManager_generateFoodMap_m1C5FE80735980DBAE1EC33659A4A022CF2C16502(__this, L_3, /*hidden argument*/NULL);
		__this->set_foodMap_15(L_4);
		// mazeMap = mg.getMap();
		MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * L_5 = __this->get_mg_13();
		NullCheck(L_5);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6;
		L_6 = MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline(L_5, /*hidden argument*/NULL);
		__this->set_mazeMap_16(L_6);
		// GlobalScript.print2DArray(foodMap);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_7 = __this->get_foodMap_15();
		GlobalScript_print2DArray_m32AD64BCBEC7A49FB97FAE797E70092DDBBEC4BD(L_7, /*hidden argument*/NULL);
		// RatList = new GameObject[RatAmount];
		int32_t L_8 = __this->get_RatAmount_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_RatList_8(L_9);
		// RatSpawnTrain = new GameObject[RatAmount];
		int32_t L_10 = __this->get_RatAmount_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_RatSpawnTrain_9(L_11);
		// spawnRats();
		RatManager_spawnRats_m5B0CA5623BF1F2E58CFC3A58BE41CEB93E26D5A0(__this, /*hidden argument*/NULL);
		// Debug.Log("First Rat: " + RatList[0].transform.position);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_RatList_8();
		NullCheck(L_12);
		int32_t L_13 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5C3FF849AC561FC4A9583DE8096F925346B0D655, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_Update_m7C72D998F6125E3A326B5E81E3D867F9E252F840 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	{
		// if(!isGameOver){
		bool L_0 = __this->get_isGameOver_23();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// sampleGameDataAndCheckGameOver();
		RatManager_sampleGameDataAndCheckGameOver_m027FB392B48641D514EAF1D07FFC0903616334A5(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void RatManager::spawnRats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_spawnRats_m5B0CA5623BF1F2E58CFC3A58BE41CEB93E26D5A0 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50CF19AC453632AAB00DF64B10E8D547D540E9B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C667B8AF1B61DA474DDF0E74692262538B2905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00B97E8261E5F06B8F7A3FC9A6E016376DA60B3);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// GameObject RatTrain = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// RatTrain.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_3, /*hidden argument*/NULL);
		// GameObject stopper = Instantiate(RatStopper, new Vector3(-10f, 0f, -20f), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_RatStopper_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (-10.0f), (0.0f), (-20.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for(int i=0; i<RatAmount; i++){
		V_1 = 0;
		goto IL_010d;
	}

IL_0043:
	{
		// Debug.Log("Rat generated!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral61C667B8AF1B61DA474DDF0E74692262538B2905, /*hidden argument*/NULL);
		// Vector3 position = new Vector3((0+i)*10f, 0f, -20f);
		int32_t L_8 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)(10.0f))), (0.0f), (-20.0f), /*hidden argument*/NULL);
		// GameObject newRatCont = Instantiate(RatContainer, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_RatContainer_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_12;
		// newRatCont.transform.parent = RatTrain.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_3;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_14, L_16, /*hidden argument*/NULL);
		// Transform rat = newRatCont.transform.GetChild(0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, 0, /*hidden argument*/NULL);
		V_4 = L_19;
		// rat.gameObject.SendMessage("SetID", i);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_4;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_21, _stringLiteralC00B97E8261E5F06B8F7A3FC9A6E016376DA60B3, L_24, /*hidden argument*/NULL);
		// rat.gameObject.SendMessage("DownloadFoodMap",foodMap);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_4;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_27 = __this->get_foodMap_15();
		NullCheck(L_26);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_26, _stringLiteral50CF19AC453632AAB00DF64B10E8D547D540E9B5, (RuntimeObject *)(RuntimeObject *)L_27, /*hidden argument*/NULL);
		// RatSpawnTrain[i] = newRatCont;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = __this->get_RatSpawnTrain_9();
		int32_t L_29 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_30);
		// RatList[i] = rat.gameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get_RatList_8();
		int32_t L_32 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_4;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_34);
		// Debug.Log(i + " " + rat.position);
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = V_4;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		String_t* L_38;
		L_38 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_38, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
		// for(int i=0; i<RatAmount; i++){
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_010d:
	{
		// for(int i=0; i<RatAmount; i++){
		int32_t L_41 = V_1;
		int32_t L_42 = __this->get_RatAmount_4();
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0043;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RatManager::removeRatTrainCell(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_removeRatTrainCell_m46399CC5B3B7B7A2672567BC83503F567059A7CB (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(RatSpawnTrain[id]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_RatSpawnTrain_9();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// RatSpawnTrain[id] = null;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_RatSpawnTrain_9();
		int32_t L_5 = ___id0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void RatManager::UpdateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_UpdateFoodMap_m696B357A26BE3FED6ED68D2D444065D629819134 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32[0...,0...] RatManager::DeepCopyMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatManager_DeepCopyMap_m3E1D29048F7BBB109DD47C527E68AAD3A70FB593 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int[,] result = new int[map.GetLength(0), map.GetLength(1)];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_3 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_5);
		V_0 = L_4;
		// for(int i=0; i<map.GetLength(0); i++){
		V_1 = 0;
		goto IL_003e;
	}

IL_0018:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		V_2 = 0;
		goto IL_0030;
	}

IL_001c:
	{
		// result[i, j] = map[i, j];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_9 = ___map0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_6);
		(L_6)->SetAt(L_7, L_8, L_12);
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0030:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_14 = V_2;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_15 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16;
		L_16 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_15, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_001c;
		}
	}
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_003e:
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_18 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_19 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_19);
		int32_t L_20;
		L_20 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_19, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0018;
		}
	}
	{
		// return result;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_21 = V_0;
		return L_21;
	}
}
// System.Int32[0...,0...] RatManager::generateFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatManager_generateFoodMap_m1C5FE80735980DBAE1EC33659A4A022CF2C16502 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int[,] result = new int[map.GetLength(0), map.GetLength(1)];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_3 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_4 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_5);
		V_0 = L_4;
		// Queue<int[]> q = new Queue<int[]>();
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_6 = (Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 *)il2cpp_codegen_object_new(Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65_il2cpp_TypeInfo_var);
		Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3(L_6, /*hidden argument*/Queue_1__ctor_m19BDD813D4E1850C49D2FAFAB18A18D022F77AC3_RuntimeMethod_var);
		V_1 = L_6;
		// for(int i=0; i<map.GetLength(0); i++){
		V_3 = 0;
		goto IL_006f;
	}

IL_001e:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		V_4 = 0;
		goto IL_0060;
	}

IL_0023:
	{
		// if(map[i, j] == 2){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_7 = ___map0;
		int32_t L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		// q.Enqueue(new int[]{i, j});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_11 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_14);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = L_13;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_16);
		NullCheck(L_11);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_11, L_15, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
	}

IL_0044:
	{
		// if(map[i, j] == 1){
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_17 = ___map0;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = (L_17)->GetAt(L_18, L_19);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}
	{
		// result[i, j] =-1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_21 = V_0;
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(L_22, L_23, (-1));
	}

IL_005a:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0060:
	{
		// for(int j=0; j<map.GetLength(1); j++){
		int32_t L_25 = V_4;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_26 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_26);
		int32_t L_27;
		L_27 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_26, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0023;
		}
	}
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006f:
	{
		// for(int i=0; i<map.GetLength(0); i++){
		int32_t L_29 = V_3;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_30 = ___map0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_30);
		int32_t L_31;
		L_31 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_30, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_001e;
		}
	}
	{
		// int step=1;
		V_2 = 1;
		goto IL_01ad;
	}

IL_0080:
	{
		// int size = q.Count;
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_inline(L_32, /*hidden argument*/Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		V_5 = L_33;
		// for(int i=0; i<size; i++){
		V_6 = 0;
		goto IL_01a0;
	}

IL_0090:
	{
		// int[] current = q.Dequeue();
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_34 = V_1;
		NullCheck(L_34);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35;
		L_35 = Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98(L_34, /*hidden argument*/Queue_1_Dequeue_mB53767174721BB8F7BB9DCF66644F62EF50A9F98_RuntimeMethod_var);
		// int cX = current[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = L_35;
		NullCheck(L_36);
		int32_t L_37 = 0;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_7 = L_38;
		// int cY = current[1];
		NullCheck(L_36);
		int32_t L_39 = 1;
		int32_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_8 = L_40;
		// result[cX, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_41 = V_0;
		int32_t L_42 = V_7;
		int32_t L_43 = V_8;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		(L_41)->SetAt(L_42, L_43, L_44);
		// if(cX>0 && result[cX-1,cY]==0){
		int32_t L_45 = V_7;
		if ((((int32_t)L_45) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_46 = V_0;
		int32_t L_47 = V_7;
		int32_t L_48 = V_8;
		NullCheck(L_46);
		int32_t L_49;
		L_49 = (L_46)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1)), L_48);
		if (L_49)
		{
			goto IL_00e2;
		}
	}
	{
		// q.Enqueue(new int[]{cX-1, cY});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_50 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_51;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = L_52;
		int32_t L_55 = V_8;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_55);
		NullCheck(L_50);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_50, L_54, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX-1, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_56 = V_0;
		int32_t L_57 = V_7;
		int32_t L_58 = V_8;
		int32_t L_59 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), L_58, L_59);
	}

IL_00e2:
	{
		// if(cX<result.GetLength(0)-1 && result[cX+1,cY]==0){
		int32_t L_60 = V_7;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_61 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_61);
		int32_t L_62;
		L_62 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_61, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_60) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1)))))
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_63 = V_0;
		int32_t L_64 = V_7;
		int32_t L_65 = V_8;
		NullCheck(L_63);
		int32_t L_66;
		L_66 = (L_63)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)), L_65);
		if (L_66)
		{
			goto IL_0122;
		}
	}
	{
		// q.Enqueue(new int[]{cX+1, cY});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_67 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_68;
		int32_t L_70 = V_7;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = L_69;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_72);
		NullCheck(L_67);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_67, L_71, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX+1, cY] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_73 = V_0;
		int32_t L_74 = V_7;
		int32_t L_75 = V_8;
		int32_t L_76 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)), L_75, L_76);
	}

IL_0122:
	{
		// if(cY>0 && result[cX,cY-1]==0){
		int32_t L_77 = V_8;
		if ((((int32_t)L_77) <= ((int32_t)0)))
		{
			goto IL_015a;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_78 = V_0;
		int32_t L_79 = V_7;
		int32_t L_80 = V_8;
		NullCheck(L_78);
		int32_t L_81;
		L_81 = (L_78)->GetAt(L_79, ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1)));
		if (L_81)
		{
			goto IL_015a;
		}
	}
	{
		// q.Enqueue(new int[]{cX, cY-1});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_82 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = L_83;
		int32_t L_85 = V_7;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_85);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = L_84;
		int32_t L_87 = V_8;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1)));
		NullCheck(L_82);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_82, L_86, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX, cY-1] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_88 = V_0;
		int32_t L_89 = V_7;
		int32_t L_90 = V_8;
		int32_t L_91 = V_2;
		NullCheck(L_88);
		(L_88)->SetAt(L_89, ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1)), L_91);
	}

IL_015a:
	{
		// if(cY<result.GetLength(1)-1 && result[cX,cY+1]==0){
		int32_t L_92 = V_8;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_93 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_93);
		int32_t L_94;
		L_94 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_93, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1)))))
		{
			goto IL_019a;
		}
	}
	{
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_95 = V_0;
		int32_t L_96 = V_7;
		int32_t L_97 = V_8;
		NullCheck(L_95);
		int32_t L_98;
		L_98 = (L_95)->GetAt(L_96, ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1)));
		if (L_98)
		{
			goto IL_019a;
		}
	}
	{
		// q.Enqueue(new int[]{cX, cY+1});
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_99 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_100 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = L_100;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = L_101;
		int32_t L_104 = V_8;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1)));
		NullCheck(L_99);
		Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A(L_99, L_103, /*hidden argument*/Queue_1_Enqueue_m8CB9EA772485DCAF3CC68D6BBE9019413DE1044A_RuntimeMethod_var);
		// result[cX, cY+1] = step;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_105 = V_0;
		int32_t L_106 = V_7;
		int32_t L_107 = V_8;
		int32_t L_108 = V_2;
		NullCheck(L_105);
		(L_105)->SetAt(L_106, ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1)), L_108);
	}

IL_019a:
	{
		// for(int i=0; i<size; i++){
		int32_t L_109 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_01a0:
	{
		// for(int i=0; i<size; i++){
		int32_t L_110 = V_6;
		int32_t L_111 = V_5;
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0090;
		}
	}
	{
		// step++;
		int32_t L_112 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_01ad:
	{
		// while(q.Count != 0){
		Queue_1_t27CB8519ECD278CD87DB39C7A7A536A95EB7DC65 * L_113 = V_1;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_inline(L_113, /*hidden argument*/Queue_1_get_Count_m71E1557C29B81B3A4E51C71A701C5F3DF8FE8491_RuntimeMethod_var);
		if (L_114)
		{
			goto IL_0080;
		}
	}
	{
		// return result;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_115 = V_0;
		return L_115;
	}
}
// System.Void RatManager::DropAllNewSpawnedRats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_DropAllNewSpawnedRats_m7402E99E56BBCF8F118F2E103978621D7DA45D21 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF_m38139505971FC6FE828869D630987296CD704203_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// for(int i=0; i<RatList.GetLength(0); i++){
		V_1 = 0;
		goto IL_0094;
	}

IL_0007:
	{
		// currentRat = RatList[i].GetComponent<RatScript>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_RatList_8();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_4;
		L_4 = GameObject_GetComponent_TisRatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF_m38139505971FC6FE828869D630987296CD704203(L_3, /*hidden argument*/GameObject_GetComponent_TisRatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF_m38139505971FC6FE828869D630987296CD704203_RuntimeMethod_var);
		V_0 = L_4;
		// if(currentRat.newSpawned){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_newSpawned_11();
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		// int mapValue = -1;
		V_2 = (-1);
		// int dX = 0;
		V_3 = 0;
		// int dY = 0;
		V_4 = 0;
		goto IL_0060;
	}

IL_0026:
	{
		// dX = Random.Range(1, foodMap.GetLength(0)-1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_7 = __this->get_foodMap_15();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		int32_t L_8;
		L_8 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_7, 0, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_9;
		// dY = Random.Range(1, foodMap.GetLength(1)-1);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_10 = __this->get_foodMap_15();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_10, 1, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_12;
		// mapValue = foodMap[dX, dY];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_13 = __this->get_foodMap_15();
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		V_2 = L_16;
	}

IL_0060:
	{
		// while(mapValue <=0 ){
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// Vector3 des = new Vector3(dX*10f, 10f, dY*10f);
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), ((float)il2cpp_codegen_multiply((float)((float)((float)L_18)), (float)(10.0f))), (10.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)(10.0f))), /*hidden argument*/NULL);
		// currentRat.AutoDropRatAtLocation(des);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_5;
		NullCheck(L_20);
		RatScript_AutoDropRatAtLocation_m03066099A8BCE5C37F08C63A631849B6F6026E8A(L_20, L_21, /*hidden argument*/NULL);
		// removeRatTrainCell(i);
		int32_t L_22 = V_1;
		RatManager_removeRatTrainCell_m46399CC5B3B7B7A2672567BC83503F567059A7CB(__this, L_22, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// for(int i=0; i<RatList.GetLength(0); i++){
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0094:
	{
		// for(int i=0; i<RatList.GetLength(0); i++){
		int32_t L_24 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_RatList_8();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_25);
		int32_t L_26;
		L_26 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_25, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RatManager::ratReleased(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_ratReleased_m1552C66CB163D3BEF1C7CED345207232DBC566B5 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// totalRatNumber++;
		int32_t L_0 = __this->get_totalRatNumber_17();
		__this->set_totalRatNumber_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void RatManager::ratDeath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_ratDeath_mB024BAA1065C59A7F91269F087AB6F44690D4E5F (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// deadRatNumber++;
		int32_t L_0 = __this->get_deadRatNumber_18();
		__this->set_deadRatNumber_18(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void RatManager::gameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_gameOver_mCFC9D053EE5E2956B4EE9E2E2738FE3AE930BA1C (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	{
		// isGameOver=true;
		__this->set_isGameOver_23((bool)1);
		// goms.showGameOverPanel(this);
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_0 = __this->get_goms_12();
		NullCheck(L_0);
		GameOverManager_showGameOverPanel_mEA540B86246139D7EEAC3411A1D3BF7F7EDB0887(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatManager::sampleGameDataAndCheckGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager_sampleGameDataAndCheckGameOver_m027FB392B48641D514EAF1D07FFC0903616334A5 (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F7A1BBDBC54F367FCC353FE64AB1EC5B640E17);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// timer = timer + Time.deltaTime;
		float L_0 = __this->get_timer_20();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_20(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(timer>= SamplingRate){
		float L_2 = __this->get_timer_20();
		float L_3 = __this->get_SamplingRate_19();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		// timer = 0f;
		__this->set_timer_20((0.0f));
		// totalRatStack.AddLast(totalRatNumber);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_4 = __this->get_totalRatStack_21();
		int32_t L_5 = __this->get_totalRatNumber_17();
		NullCheck(L_4);
		LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * L_6;
		L_6 = LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749(L_4, L_5, /*hidden argument*/LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_RuntimeMethod_var);
		// deadRatStack.AddLast(deadRatNumber);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_7 = __this->get_deadRatStack_22();
		int32_t L_8 = __this->get_deadRatNumber_18();
		NullCheck(L_7);
		LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * L_9;
		L_9 = LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749(L_7, L_8, /*hidden argument*/LinkedList_1_AddLast_m9C81CA77C25AD5AD74F2371B68D5F0D238366749_RuntimeMethod_var);
		// Debug.Log("Sampled data: " + deadRatStack);
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_10 = __this->get_deadRatStack_22();
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_11 = L_10;
		G_B2_0 = L_11;
		G_B2_1 = _stringLiteral44F7A1BBDBC54F367FCC353FE64AB1EC5B640E17;
		if (L_11)
		{
			G_B3_0 = L_11;
			G_B3_1 = _stringLiteral44F7A1BBDBC54F367FCC353FE64AB1EC5B640E17;
			goto IL_0061;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0066;
	}

IL_0061:
	{
		NullCheck(G_B3_0);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0066:
	{
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// if(totalRatNumber> 0 && deadRatNumber == totalRatNumber && !isGameOver){
		int32_t L_14 = __this->get_totalRatNumber_17();
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_15 = __this->get_deadRatNumber_18();
		int32_t L_16 = __this->get_totalRatNumber_17();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0095;
		}
	}
	{
		bool L_17 = __this->get_isGameOver_23();
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		// gameOver();
		RatManager_gameOver_mCFC9D053EE5E2956B4EE9E2E2738FE3AE930BA1C(__this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void RatManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatManager__ctor_mBF8E53807985BE3D39738E0AB1842D80E00AF23F (RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float SamplingRate = 1f;
		__this->set_SamplingRate_19((1.0f));
		// public LinkedList<int> totalRatStack = new LinkedList<int>();
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_0 = (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *)il2cpp_codegen_object_new(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A(L_0, /*hidden argument*/LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_RuntimeMethod_var);
		__this->set_totalRatStack_21(L_0);
		// public LinkedList<int> deadRatStack = new LinkedList<int>();
		LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * L_1 = (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 *)il2cpp_codegen_object_new(LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A(L_1, /*hidden argument*/LinkedList_1__ctor_mA2210B550E9A4E8FB7D499065398630263D14E1A_RuntimeMethod_var);
		__this->set_deadRatStack_22(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RatScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_Start_m99A261DD288882AF8C0F48D5D56D318CBEDB2593 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8_m2AD53757DCA4E1E04EA8CD64CEB9CDC5CA6942B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A45FC8203EA38F824604BE223774335C5F01A40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D38BB1F8E8EB191370FAE21E9402E86BD85B710);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("Rat start: " + this.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0A45FC8203EA38F824604BE223774335C5F01A40, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// agent.enabled = false;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_4 = __this->get_agent_9();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5;
		L_5 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_5(L_5);
		// ratTransform = GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set_ratTransform_8(L_6);
		// rm = GameObject.Find("RatManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4D38BB1F8E8EB191370FAE21E9402E86BD85B710, /*hidden argument*/NULL);
		__this->set_rm_7(L_7);
		// rms = rm.GetComponent<RatManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_rm_7();
		NullCheck(L_8);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_9;
		L_9 = GameObject_GetComponent_TisRatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8_m2AD53757DCA4E1E04EA8CD64CEB9CDC5CA6942B5(L_8, /*hidden argument*/GameObject_GetComponent_TisRatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8_m2AD53757DCA4E1E04EA8CD64CEB9CDC5CA6942B5_RuntimeMethod_var);
		__this->set_rms_6(L_9);
		// alive = true;
		__this->set_alive_12((bool)1);
		// newSpawned = true;
		__this->set_newSpawned_11((bool)1);
		// HP = 1.0f;
		__this->set_HP_15((1.0f));
		// hunger = 1.0f;
		__this->set_hunger_13((1.0f));
		// energy = 1.0f;
		__this->set_energy_14((1.0f));
		// hungerRate = 0.02f;
		__this->set_hungerRate_16((0.0199999996f));
		// energyRate = hungerRate/4;
		float L_10 = __this->get_hungerRate_16();
		__this->set_energyRate_17(((float)((float)L_10/(float)(4.0f))));
		// hungerRecoverRate = hungerRate*10f;
		float L_11 = __this->get_hungerRate_16();
		__this->set_hungerRecoverRate_19(((float)il2cpp_codegen_multiply((float)L_11, (float)(10.0f))));
		// energyRecoverRate = energyRate*10f;
		float L_12 = __this->get_energyRate_17();
		__this->set_energyRecoverRate_20(((float)il2cpp_codegen_multiply((float)L_12, (float)(10.0f))));
		// energyHPRecoverRate = energyRecoverRate;
		float L_13 = __this->get_energyRecoverRate_20();
		__this->set_energyHPRecoverRate_21(L_13);
		// HungerHPRate = energyHPRecoverRate/2f;
		float L_14 = __this->get_energyHPRecoverRate_21();
		__this->set_HungerHPRate_18(((float)((float)L_14/(float)(2.0f))));
		// TransitionToState(SpawnState);
		RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * L_15 = __this->get_SpawnState_28();
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_Update_m13EE20CA1F873F99AADF10C86BE1FE0582AF8ED2 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// if(ratTransform.position.z>0){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_ratTransform_8();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		// if(!newSpawned && alive){
		bool L_3 = __this->get_newSpawned_11();
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		bool L_4 = __this->get_alive_12();
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// ratRoutine();
		RatScript_ratRoutine_mBB45944BE2AD9E527F3963AD3A3BFA515E2F3A11(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// currentState.Update(this);
		RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * L_5 = __this->get_currentState_22();
		NullCheck(L_5);
		VirtActionInvoker1< RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * >::Invoke(6 /* System.Void RatBaseState::Update(RatScript) */, L_5, __this);
		// }
		return;
	}
}
// System.Void RatScript::objectDropped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_objectDropped_mC9CA19A395A742B3BB45C64B2F63DD36C2108E3B (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6894551D0A9AFA70901AA04BA1B590ADB732257);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Rat Dropped");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF6894551D0A9AFA70901AA04BA1B590ADB732257, /*hidden argument*/NULL);
		// if(newSpawned){
		bool L_0 = __this->get_newSpawned_11();
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// rb.isKinematic = false;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rb_5();
		NullCheck(L_1);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_1, (bool)0, /*hidden argument*/NULL);
		// this.transform.parent = rm.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_rm_7();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_4, /*hidden argument*/NULL);
		// rms.removeRatTrainCell(id);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_5 = __this->get_rms_6();
		int32_t L_6 = __this->get_id_4();
		NullCheck(L_5);
		RatManager_removeRatTrainCell_m46399CC5B3B7B7A2672567BC83503F567059A7CB(L_5, L_6, /*hidden argument*/NULL);
		// rms.ratReleased(id);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_7 = __this->get_rms_6();
		int32_t L_8 = __this->get_id_4();
		NullCheck(L_7);
		RatManager_ratReleased_m1552C66CB163D3BEF1C7CED345207232DBC566B5(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void RatScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_OnCollisionEnter_m85F3380EAD49B6EF21FFE06BA8CD70282C6D98D6 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A26EFBA99A894C7DDBA362C14DD2108E9D59D5);
		s_Il2CppMethodInitialized = true;
	}
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("collision: " + other);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___other0;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral72A26EFBA99A894C7DDBA362C14DD2108E9D59D5;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral72A26EFBA99A894C7DDBA362C14DD2108E9D59D5;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// currentState.OnCollisionEnter(this, other);
		RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * L_4 = __this->get_currentState_22();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_5 = ___other0;
		NullCheck(L_4);
		VirtActionInvoker2< RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF *, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * >::Invoke(5 /* System.Void RatBaseState::OnCollisionEnter(RatScript,UnityEngine.Collision) */, L_4, __this, L_5);
		// }
		return;
	}
}
// System.Void RatScript::ratRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_ratRoutine_mBB45944BE2AD9E527F3963AD3A3BFA515E2F3A11 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B2_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B3_1 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B5_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B6_1 = NULL;
	{
		// hunger = hunger > 0f ? hunger - hungerRate * Time.deltaTime: 0f;
		float L_0 = __this->get_hunger_13();
		G_B1_0 = __this;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0015:
	{
		float L_1 = __this->get_hunger_13();
		float L_2 = __this->get_hungerRate_16();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_hunger_13(G_B3_0);
		// energy = energy > 0f ? energy - energyRate * Time.deltaTime: 0f;
		float L_4 = __this->get_energy_14();
		G_B4_0 = __this;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0055;
	}

IL_0042:
	{
		float L_5 = __this->get_energy_14();
		float L_6 = __this->get_energyRate_17();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B6_0 = ((float)il2cpp_codegen_subtract((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		G_B6_1 = G_B5_0;
	}

IL_0055:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_energy_14(G_B6_0);
		// HealthChangeByHunger();
		RatScript_HealthChangeByHunger_m87757D2A64AF2F070E94C0A28FB2A06C6644D5FE(__this, /*hidden argument*/NULL);
		// if(HP <= 0){
		float L_8 = __this->get_HP_15();
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// TransitionToState(DeathState);
		RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * L_9 = __this->get_DeathState_27();
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(__this, L_9, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void RatScript::HealthChangeByHunger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_HealthChangeByHunger_m87757D2A64AF2F070E94C0A28FB2A06C6644D5FE (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B3_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B4_1 = NULL;
	{
		// if(hunger<0.3f){
		float L_0 = __this->get_hunger_13();
		if ((!(((float)L_0) < ((float)(0.300000012f)))))
		{
			goto IL_003a;
		}
	}
	{
		// HP = HP>0f? HP - HungerHPRate * Time.deltaTime : 0f;
		float L_1 = __this->get_HP_15();
		G_B2_0 = __this;
		if ((((float)L_1) > ((float)(0.0f))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B2_0;
		goto IL_0035;
	}

IL_0022:
	{
		float L_2 = __this->get_HP_15();
		float L_3 = __this->get_HungerHPRate_18();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4))));
		G_B4_1 = G_B3_0;
	}

IL_0035:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_HP_15(G_B4_0);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void RatScript::SetID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_SetID_mB854F176DAC6376E4236F31158B25C95A7B1B753 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// id = i;
		int32_t L_0 = ___i0;
		__this->set_id_4(L_0);
		// }
		return;
	}
}
// System.Void RatScript::TransitionToState(RatBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * ___state0, const RuntimeMethod* method)
{
	{
		// currentState = state;
		RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * L_0 = ___state0;
		__this->set_currentState_22(L_0);
		// currentState.EnterState(this);
		RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * L_1 = __this->get_currentState_22();
		NullCheck(L_1);
		VirtActionInvoker1< RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * >::Invoke(4 /* System.Void RatBaseState::EnterState(RatScript) */, L_1, __this);
		// }
		return;
	}
}
// RatBaseState RatScript::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * RatScript_get_CurrentState_m5A5AE843FFEE0DE61FB50B20A6676FC9935B76E9 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// get {return currentState; }
		RatBaseState_t4FC15688DB121AE77C923499300D5EF2674A28F1 * L_0 = __this->get_currentState_22();
		return L_0;
	}
}
// System.Void RatScript::DownloadFoodMap(System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_DownloadFoodMap_m1222874F7C872DDA2FFED376891B759566AB106A (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foodMap = map;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = ___map0;
		__this->set_foodMap_29(L_0);
		// Debug.Log(foodMap[1,1]);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1 = __this->get_foodMap_29();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = (L_1)->GetAt(1, 1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::UploadFoodMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_UploadFoodMap_m52C5454619D3AC5D7FEA30958BE5644CE4AEEFE1 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// rms.UpdateFoodMap(this.foodMap);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_0 = __this->get_rms_6();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1 = __this->get_foodMap_29();
		NullCheck(L_0);
		RatManager_UpdateFoodMap_m696B357A26BE3FED6ED68D2D444065D629819134(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32[0...,0...] RatScript::getFoodMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// return this.foodMap;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_foodMap_29();
		return L_0;
	}
}
// System.Void RatScript::die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_die_mCC95C4B6C44BFCB7572291024C5C497C9DC3CC67 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// StopRunning();
		RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252(__this, /*hidden argument*/NULL);
		// agent.enabled = false;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_9();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// rb.constraints = RigidbodyConstraints.FreezeRotationZ;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rb_5();
		NullCheck(L_1);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_1, ((int32_t)64), /*hidden argument*/NULL);
		// ratTransform.RotateAround(ratTransform.position,new Vector3(0f, 0f, 1f), 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_ratTransform_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_ratTransform_8();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_2, L_4, L_5, (90.0f), /*hidden argument*/NULL);
		// alive = false;
		__this->set_alive_12((bool)0);
		// rms.ratDeath(id);
		RatManager_tE626D33B3127BF108693931CC4D6163ACA8053D8 * L_6 = __this->get_rms_6();
		int32_t L_7 = __this->get_id_4();
		NullCheck(L_6);
		RatManager_ratDeath_mB024BAA1065C59A7F91269F087AB6F44690D4E5F(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::RunToDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_RunToDestination_mD6185E440D3B2134ED92446E15EC16E4F38A9E8C (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___des0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EA8C8A08A599A8528EB581F015EC475961F7FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.SetDestination(des);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___des0;
		NullCheck(L_0);
		bool L_2;
		L_2 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_0, L_1, /*hidden argument*/NULL);
		// anim.CrossFade("Running", 0.1f);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim_10();
		NullCheck(L_3);
		Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F(L_3, _stringLiteral4E1BAB0B18C7A55EB65D6F964C2DADEB0863418B, (0.100000001f), /*hidden argument*/NULL);
		// anim.SetBool("IsIdle", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_10();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteralB0EA8C8A08A599A8528EB581F015EC475961F7FB, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::StopRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EA8C8A08A599A8528EB581F015EC475961F7FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(agent.enabled){
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_9();
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// agent.ResetPath();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_2 = __this->get_agent_9();
		NullCheck(L_2);
		NavMeshAgent_ResetPath_mEAB767048210D7EE16A3A765D41494D770D10A0C(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// anim.CrossFade("Idle", 0.1f);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim_10();
		NullCheck(L_3);
		Animator_CrossFade_mD3F99D6835AA415C0B32AE0C574B1815CC07586F(L_3, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, (0.100000001f), /*hidden argument*/NULL);
		// anim.SetBool("IsIdle", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_10();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteralB0EA8C8A08A599A8528EB581F015EC475961F7FB, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::AutoDropRatAtLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript_AutoDropRatAtLocation_m03066099A8BCE5C37F08C63A631849B6F6026E8A (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method)
{
	{
		// ratTransform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_ratTransform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos0;
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// objectDropped();
		RatScript_objectDropped_mC9CA19A395A742B3BB45C64B2F63DD36C2108E3B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatScript__ctor_m5D4940F059E5EA32AFE44231E6DE0652B65384E4 (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly RatIdleState IdleState = new RatIdleState();
		RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * L_0 = (RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 *)il2cpp_codegen_object_new(RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83_il2cpp_TypeInfo_var);
		RatIdleState__ctor_m87E18FC312BCAA38C17181EBA750E817232B7155(L_0, /*hidden argument*/NULL);
		__this->set_IdleState_23(L_0);
		// public readonly RatLookingForFoodState LookingForFoodState = new RatLookingForFoodState();
		RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 * L_1 = (RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4 *)il2cpp_codegen_object_new(RatLookingForFoodState_tEEAF3ADD0D7B9AA308EEFE1CA7B514F74704E5F4_il2cpp_TypeInfo_var);
		RatLookingForFoodState__ctor_m695A4D591ADE9F80CE2C8CA04C62B0042002F481(L_1, /*hidden argument*/NULL);
		__this->set_LookingForFoodState_24(L_1);
		// public readonly RatEatingState EatingState = new RatEatingState();
		RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 * L_2 = (RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2 *)il2cpp_codegen_object_new(RatEatingState_t63EE2DFD9B4152BCA3BB96F0FD9904E8F3141AD2_il2cpp_TypeInfo_var);
		RatEatingState__ctor_mD765D0EDDA6C009EC28B50FCAB6FD7B2B8FBCFB9(L_2, /*hidden argument*/NULL);
		__this->set_EatingState_25(L_2);
		// public readonly RatSleepingState SleepingState = new RatSleepingState();
		RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * L_3 = (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 *)il2cpp_codegen_object_new(RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544_il2cpp_TypeInfo_var);
		RatSleepingState__ctor_mE1F61F5293366FD68E1A55830FFFCCEBE1587B0D(L_3, /*hidden argument*/NULL);
		__this->set_SleepingState_26(L_3);
		// public readonly RatDeathState DeathState = new RatDeathState();
		RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 * L_4 = (RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3 *)il2cpp_codegen_object_new(RatDeathState_t87CC0CD2874E348A40B17C03C311806AA930B8F3_il2cpp_TypeInfo_var);
		RatDeathState__ctor_mE3E5D43453B6E95DF618362FBC6A9C12C5035D72(L_4, /*hidden argument*/NULL);
		__this->set_DeathState_27(L_4);
		// public readonly RatSpawnState SpawnState = new RatSpawnState();
		RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * L_5 = (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 *)il2cpp_codegen_object_new(RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9_il2cpp_TypeInfo_var);
		RatSpawnState__ctor_mEF2B6858D5B089A82022C7DB95B12FF102D897E7(L_5, /*hidden argument*/NULL);
		__this->set_SpawnState_28(L_5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RatSleepingState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSleepingState_EnterState_m1A45EB7402CD0702EEF3CAE30F6CD80EA8D17870 (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatSleepingState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSleepingState_OnCollisionEnter_mA7C52EECEB8D8D7B8D5EA295ABDFC37A5A45AA79 (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatSleepingState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSleepingState_Update_m79345A3D4BF0ADA3F78639A2B30607D94E9855EC (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B2_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B3_1 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B5_0 = NULL;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * G_B6_1 = NULL;
	{
		// rs.energy = rs.energy > 1f? 1f : rs.energy + rs.energyRecoverRate*Time.deltaTime;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_1 = ___rs0;
		NullCheck(L_1);
		float L_2 = L_1->get_energy_14();
		G_B1_0 = L_0;
		if ((((float)L_2) > ((float)(1.0f))))
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_3 = ___rs0;
		NullCheck(L_3);
		float L_4 = L_3->get_energy_14();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_5 = ___rs0;
		NullCheck(L_5);
		float L_6 = L_5->get_energyRecoverRate_20();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_energy_14(G_B3_0);
		// rs.HP = rs.HP > 1f? 1f : rs.HP + rs.energyHPRecoverRate*Time.deltaTime;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_8 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_9 = ___rs0;
		NullCheck(L_9);
		float L_10 = L_9->get_HP_15();
		G_B4_0 = L_8;
		if ((((float)L_10) > ((float)(1.0f))))
		{
			G_B5_0 = L_8;
			goto IL_0050;
		}
	}
	{
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_11 = ___rs0;
		NullCheck(L_11);
		float L_12 = L_11->get_HP_15();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_13 = ___rs0;
		NullCheck(L_13);
		float L_14 = L_13->get_energyHPRecoverRate_21();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B6_0 = ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15))));
		G_B6_1 = G_B4_0;
		goto IL_0055;
	}

IL_0050:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0055:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_HP_15(G_B6_0);
		// if(rs.energy >= 1f){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_16 = ___rs0;
		NullCheck(L_16);
		float L_17 = L_16->get_energy_14();
		if ((!(((float)L_17) >= ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// rs.TransitionToState(rs.IdleState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_18 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_19 = ___rs0;
		NullCheck(L_19);
		RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * L_20 = L_19->get_IdleState_23();
		NullCheck(L_18);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_18, L_20, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void RatSleepingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSleepingState__ctor_mE1F61F5293366FD68E1A55830FFFCCEBE1587B0D (RatSleepingState_t395A28DE15EF665C4A134D350CDE0DAEEDD5F544 * __this, const RuntimeMethod* method)
{
	{
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void RatSpawnState::EnterState(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSpawnState_EnterState_m49F76DEAC382D34888E14471DCBFB0FD39C3CB7E (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// rs.StopRunning();
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		RatScript_StopRunning_m1CDA89949E10D278375218F1EDC9DDB8C9107252(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatSpawnState::OnCollisionEnter(RatScript,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSpawnState_OnCollisionEnter_m5502714B08C56245C71AB174574D1861959A1FD8 (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other1, const RuntimeMethod* method)
{
	{
		// if(rs.newSpawned){
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_0 = ___rs0;
		NullCheck(L_0);
		bool L_1 = L_0->get_newSpawned_11();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// rs.newSpawned = false;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_2 = ___rs0;
		NullCheck(L_2);
		L_2->set_newSpawned_11((bool)0);
		// rs.agent.enabled = true;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_3 = ___rs0;
		NullCheck(L_3);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_4 = L_3->get_agent_9();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// rs.TransitionToState(rs.IdleState);
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_5 = ___rs0;
		RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * L_6 = ___rs0;
		NullCheck(L_6);
		RatIdleState_t2AECAC451687861ADF300E60BEBBF9924CB42E83 * L_7 = L_6->get_IdleState_23();
		NullCheck(L_5);
		RatScript_TransitionToState_m6F9CB2D4D9F13D4B70BCC8FB6808794A4C90301D(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RatSpawnState::Update(RatScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSpawnState_Update_mF473E49E5CD0385830FD5B5673151D5B62520D84 (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * __this, RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * ___rs0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RatSpawnState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatSpawnState__ctor_mEF2B6858D5B089A82022C7DB95B12FF102D897E7 (RatSpawnState_tCCAF900ACD345F38FC1F604F7ADF6A39FE76ABA9 * __this, const RuntimeMethod* method)
{
	{
		RatBaseState__ctor_m124C46465D6FABAF709806119519285B86A6302A(__this, /*hidden argument*/NULL);
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
// System.Void SettingMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_Start_mA3A954FC49C2F5E243679FA761ECEFD0ACE85EAC (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SettingMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_Update_m4E07E9115DBD663020EA8E33622DCD0BA423C190 (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SettingMenuManager::showSettingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_showSettingPanel_mD0F365B83307B80D6124A3AAE678D85605BD3161 (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	{
		// SettingMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SettingMenu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingMenuManager::reloadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_reloadGame_mA46C3709CFDC56428AB41CA413196930F9B3E97F (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingMenuManager::closeSettingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_closeSettingPanel_m384114CD761F53522370F23D84E92FEBA631AF78 (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	{
		// SettingMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SettingMenu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingMenuManager::loadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager_loadMainMenu_mA06E54F3ED68E87A1B2CF1C0D9EB26F801AD02D6 (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6B3C9B5DDE6CDE2A041D05C4F3BE4A3D3D745B70(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenuManager__ctor_m3276FF53955FB0918B2545C8CB94FFAD620C8C33 (SettingMenuManager_t6388E4C64795DC5DADD93B3127994845177FE88F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Timer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Awake_m64834DF27C680EDFC2DA15EDCA940A9D98E4C295 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// width = Screen.width;
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		__this->set_width_4(L_0);
		// height = Screen.height;
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		__this->set_height_5(L_1);
		// rect = new Rect(10, 10, width-20, height-20);
		int32_t L_2 = __this->get_width_4();
		int32_t L_3 = __this->get_height_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_4), (10.0f), (10.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)20))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)20))))), /*hidden argument*/NULL);
		__this->set_rect_6(L_4);
		// }
		return;
	}
}
// System.Void Timer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_OnGUI_m1FC06B24B3A51BF8FF41E2AC3096B504A9E1EF69 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* MapGeneratorScript_getMap_m1EC32A94632C7D6F4DA82BB3011F5E6C0DF2712F_inline (MapGeneratorScript_t805E57BC0CF704C83C84F11892639C2A4BE4DF40 * __this, const RuntimeMethod* method)
{
	{
		// return map;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_map_16();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_m14531DC868984D1436064D2FCF6ADFED61BEE81D_inline (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_59();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* RatScript_getFoodMap_mA2962102DBADA2FA555E6862EB794FDE3BCCC901_inline (RatScript_tD72173CCDB1205F4066682A15123B7D6C85304DF * __this, const RuntimeMethod* method)
{
	{
		// return this.foodMap;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = __this->get_foodMap_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mE6B099A8257CF8A61B78EB6618957924F4BB4B7F_gshared_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * LinkedList_1_get_First_m2B547310055586E0C560ADAF0D25E560AC1EEB66_gshared_inline (LinkedList_1_tCE2D520C9671B7A8B7A6C2DEF189DC4091F83C43 * __this, const RuntimeMethod* method)
{
	{
		LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * L_0 = (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 *)__this->get_head_0();
		return (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedListNode_1_get_Value_mD37DF7E8B49B7D8C43C824E32172A61D11CEFBD0_gshared_inline (LinkedListNode_1_tA3A0238444E365FB93B3869649E446D564AE3883 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_item_3();
		return (int32_t)L_0;
	}
}
