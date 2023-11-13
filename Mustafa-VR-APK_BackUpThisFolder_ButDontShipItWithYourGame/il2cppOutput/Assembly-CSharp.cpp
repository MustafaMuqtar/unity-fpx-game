#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FMODUnity.ParamRef>
struct List_1_t661315603FDBEA2CBD0830969F93FD47C156CE41;
// System.Collections.Generic.List`1<FMODUnity.StudioEventEmitter>
struct List_1_tC9E9413E4D08BE51D6F2D26873E5DCB64FFDD26F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// FMODUnity.ParamRef[]
struct ParamRefU5BU5D_t26BF7E24E219F3CA313B1DB999DBB5D3FBB290FE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AgentBaseScene1
struct AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C;
// AgentBaseScene2
struct AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool
struct BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject
struct ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage
struct EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7;
// Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool
struct EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176;
// EnemyPatroll
struct EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E;
// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject
struct EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC;
// Assets.FPX_Game.Scripts.GameManagers.GameManager
struct GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C;
// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager
struct GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Assets.FPX_Game.Scripts.GameManagers.Game_Over
struct Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057;
// Assets.FPX_Game.Scripts.WeaponScripts.GrabGun
struct GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject
struct GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF;
// Assets.FPX_Game.Scripts.ControllerScripts.HandController
struct HandController_tB75E3324B562C99DAD054E0A62AAD4D01CECB031;
// Hide
struct Hide_t0EADDCF527E220088043E586CEA1FA0AFE625508;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Assets.FPX_Game.Scripts.WeaponScripts.Magazine
struct Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NavEnemy
struct NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// Assets.FPX_Game.Scripts.Player.PlayerHealth
struct PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag
struct ScoketMag_t48296211818F38396069C503E31D82CE40E05117;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas
struct ShowAndHideCanvas_tC731947E911AD83E5BFAD3C543ED02EF49380D64;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartMissionScene3
struct StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A;
// System.String
struct String_t;
// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TriggerAnimation
struct TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire
struct WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C;
// Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder
struct WeaponHolder_tDEBB1C2AA61B341738E90AE386A8AF0393592632;
// Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas
struct WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC;
// WristMenu
struct WristMenu_t1692A0D1E558787904E2250D4BEC0D1B0AFC4DE3;
// AgentBaseScene1/<PlayBossAnim>d__16
struct U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D;
// AgentBaseScene2/<PlayBossAnim>d__11
struct U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12
struct U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F;
// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13
struct U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0;
// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14
struct U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NavEnemy/<GameOver>d__12
struct U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471;
// Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8
struct U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpawnEnemy/<GameCompleted>d__18
struct U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F;
// SpawnEnemy/<LevelCountDownLV1>d__12
struct U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A;
// SpawnEnemy/<LevelCountDownLV2>d__15
struct U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17;
// SpawnEnemy/<SpawnRandomEnemie2>d__16
struct U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1;
// SpawnEnemy/<SpawnRandomEnemiesLV1>d__13
struct U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC;
// TriggerAnimation/<PlayAnim>d__14
struct U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21;
// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18
struct U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D;

IL2CPP_EXTERN_C RuntimeClass* AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09CDCAA4FB3B164F6FFF6F2850648E216F9990F0;
IL2CPP_EXTERN_C String_t* _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA;
IL2CPP_EXTERN_C String_t* _stringLiteral26374C159ED7B35A8F2B5D7B5E380B165D486364;
IL2CPP_EXTERN_C String_t* _stringLiteral292D4A7C65EB921A1EF34A3419D9511AE209F0C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD3FC96CCD17F83E718649AC95AA6F5078D1874;
IL2CPP_EXTERN_C String_t* _stringLiteral43BE0BFAAEEFE3D375DB01ED82A806D4FE8E7527;
IL2CPP_EXTERN_C String_t* _stringLiteral64630D48F97D245D68480BE6D118849C1E57C2E7;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECDEF422DB65EC6CDB2595950AC5EB942D994EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6F406B13F8F8D0DE5B8BFF8CEF75D44586D52901;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteral997BD5DE1C976E1663865B5702A4CE7E769C3626;
IL2CPP_EXTERN_C String_t* _stringLiteral99A4B33C609026E1B72D9943CEBEEFB980F5B3D9;
IL2CPP_EXTERN_C String_t* _stringLiteralB28D938C0E72616EDCD76DC409C60985643501A4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD57B6BDE75928FEF547FB52643B6A8376E0191CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE8770ADAB47AF41B48CD0C808702CE7E159001CA;
IL2CPP_EXTERN_C String_t* _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFBB76652AC744FF981C326A98D6FC17F1F342E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7_mD8258264367421ABB5FAC5322AB61A01864CF481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6_m12EFB146D4876B3C56DF060EC8D47B0F4C70EABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDieU3Ed__12_System_Collections_IEnumerator_Reset_m9109669A3B43EF3DE6977E0D8695B14C67364C7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameCompletedU3Ed__18_System_Collections_IEnumerator_Reset_m0218410CC60D823363879C3FEA4A4E1E26093F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameOverU3Ed__12_System_Collections_IEnumerator_Reset_mFF85B066422A0CB155BC86F84AEC6E07DE309976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameOverU3Ed__8_System_Collections_IEnumerator_Reset_m83C9E884ECEFD10995DE6016A2A146B2847A4F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CImpactSetActiveU3Ed__18_System_Collections_IEnumerator_Reset_m494B8F1FAAA85B08B094214DB1CDD89CED03EEEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelCountDownLV1U3Ed__12_System_Collections_IEnumerator_Reset_m88DA61FAC74777819451F76945A723D359F67492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelCountDownLV2U3Ed__15_System_Collections_IEnumerator_Reset_m484213B4D5D7E972CC64D30CE48E7A3C9D7B87ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadYourAsyncSceneU3Ed__14_System_Collections_IEnumerator_Reset_mE60BD0EF08B1886A4C262602BB50E90836552F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayAnimU3Ed__14_System_Collections_IEnumerator_Reset_m0D46EDCDAE61F1BD8B6EF7A5475097A069DB3D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayBossAnimU3Ed__11_System_Collections_IEnumerator_Reset_mEFFC9C272818E4DEC978F3FAAC0261CCC71CB99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayBossAnimU3Ed__16_System_Collections_IEnumerator_Reset_m63B2BDF81D311F1BA92B61FFAB780811F8833149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnRandomEnemie2U3Ed__16_System_Collections_IEnumerator_Reset_mDFCEE1F26D229BB8A7F4BEF695C65110CD037AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnRandomEnemiesLV1U3Ed__13_System_Collections_IEnumerator_Reset_m12B5B5D330CDF8202DD86287408288AA46B37292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextDeactiveeU3Ed__13_System_Collections_IEnumerator_Reset_m2ABFDDB784F5554CA4AEA8B848E7F7396395B66F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AgentBaseScene1/<PlayBossAnim>d__16
struct U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D  : public RuntimeObject
{
	// System.Int32 AgentBaseScene1/<PlayBossAnim>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AgentBaseScene1/<PlayBossAnim>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AgentBaseScene1 AgentBaseScene1/<PlayBossAnim>d__16::<>4__this
	AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* ___U3CU3E4__this_2;
};

// AgentBaseScene2/<PlayBossAnim>d__11
struct U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156  : public RuntimeObject
{
	// System.Int32 AgentBaseScene2/<PlayBossAnim>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AgentBaseScene2/<PlayBossAnim>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AgentBaseScene2 AgentBaseScene2/<PlayBossAnim>d__11::<>4__this
	AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* ___U3CU3E4__this_2;
};

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12
struct U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F  : public RuntimeObject
{
	// System.Int32 Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::<>4__this
	EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* ___U3CU3E4__this_2;
};

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13
struct U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0  : public RuntimeObject
{
	// System.Int32 Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::<>4__this
	EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* ___U3CU3E4__this_2;
};

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14
struct U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3  : public RuntimeObject
{
	// System.Int32 Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::<asyncLoad>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncLoadU3E5__2_2;
};

// NavEnemy/<GameOver>d__12
struct U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471  : public RuntimeObject
{
	// System.Int32 NavEnemy/<GameOver>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NavEnemy/<GameOver>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NavEnemy NavEnemy/<GameOver>d__12::<>4__this
	NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* ___U3CU3E4__this_2;
};

// Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8
struct U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03  : public RuntimeObject
{
	// System.Int32 Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Assets.FPX_Game.Scripts.Player.PlayerHealth Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::<>4__this
	PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* ___U3CU3E4__this_2;
};

// SpawnEnemy/<GameCompleted>d__18
struct U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F  : public RuntimeObject
{
	// System.Int32 SpawnEnemy/<GameCompleted>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnEnemy/<GameCompleted>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnEnemy SpawnEnemy/<GameCompleted>d__18::<>4__this
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___U3CU3E4__this_2;
};

// SpawnEnemy/<LevelCountDownLV1>d__12
struct U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A  : public RuntimeObject
{
	// System.Int32 SpawnEnemy/<LevelCountDownLV1>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnEnemy/<LevelCountDownLV1>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 SpawnEnemy/<LevelCountDownLV1>d__12::timeremaning
	int32_t ___timeremaning_2;
	// SpawnEnemy SpawnEnemy/<LevelCountDownLV1>d__12::<>4__this
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___U3CU3E4__this_3;
	// System.Int32 SpawnEnemy/<LevelCountDownLV1>d__12::<f>5__2
	int32_t ___U3CfU3E5__2_4;
};

// SpawnEnemy/<LevelCountDownLV2>d__15
struct U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17  : public RuntimeObject
{
	// System.Int32 SpawnEnemy/<LevelCountDownLV2>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnEnemy/<LevelCountDownLV2>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 SpawnEnemy/<LevelCountDownLV2>d__15::timeremaning
	int32_t ___timeremaning_2;
	// SpawnEnemy SpawnEnemy/<LevelCountDownLV2>d__15::<>4__this
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___U3CU3E4__this_3;
	// System.Int32 SpawnEnemy/<LevelCountDownLV2>d__15::<f>5__2
	int32_t ___U3CfU3E5__2_4;
};

// SpawnEnemy/<SpawnRandomEnemie2>d__16
struct U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1  : public RuntimeObject
{
	// System.Int32 SpawnEnemy/<SpawnRandomEnemie2>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnEnemy/<SpawnRandomEnemie2>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnEnemy SpawnEnemy/<SpawnRandomEnemie2>d__16::<>4__this
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___U3CU3E4__this_2;
	// System.Int32 SpawnEnemy/<SpawnRandomEnemie2>d__16::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// SpawnEnemy/<SpawnRandomEnemiesLV1>d__13
struct U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC  : public RuntimeObject
{
	// System.Int32 SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnEnemy SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::<>4__this
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___U3CU3E4__this_2;
	// System.Int32 SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// TriggerAnimation/<PlayAnim>d__14
struct U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21  : public RuntimeObject
{
	// System.Int32 TriggerAnimation/<PlayAnim>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TriggerAnimation/<PlayAnim>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TriggerAnimation TriggerAnimation/<PlayAnim>d__14::<>4__this
	TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* ___U3CU3E4__this_2;
};

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18
struct U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D  : public RuntimeObject
{
	// System.Int32 Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// FMOD.GUID
struct GUID_tFB268B4FFFA3CA85D227CAE412BC765F4B71BE54 
{
	// System.Int32 FMOD.GUID::Data1
	int32_t ___Data1_0;
	// System.Int32 FMOD.GUID::Data2
	int32_t ___Data2_1;
	// System.Int32 FMOD.GUID::Data3
	int32_t ___Data3_2;
	// System.Int32 FMOD.GUID::Data4
	int32_t ___Data4_3;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// FMOD.Studio.EventDescription
struct EventDescription_t2904DB225583633AC5E150B2FF1EA269955FB28C 
{
	// System.IntPtr FMOD.Studio.EventDescription::handle
	intptr_t ___handle_0;
};

// FMOD.Studio.EventInstance
struct EventInstance_tB965FE66D8F64AF5ED7084290FED14B1B50B11CF 
{
	// System.IntPtr FMOD.Studio.EventInstance::handle
	intptr_t ___handle_0;
};

// FMODUnity.EventReference
struct EventReference_tA4CA1F882DC447E6B50F989D1FC08F065C91FB51 
{
	// FMOD.GUID FMODUnity.EventReference::Guid
	GUID_tFB268B4FFFA3CA85D227CAE412BC765F4B71BE54 ___Guid_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject
struct ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject::health
	float ___health_4;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject::maxhealth
	float ___maxhealth_5;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject
struct EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::Name
	String_t* ___Name_4;
	// System.String Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::LevelText
	String_t* ___LevelText_5;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::TargetPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TargetPrefab_6;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::enemiesDesired
	int32_t ___enemiesDesired_7;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::enemiesCurrentCount
	int32_t ___enemiesCurrentCount_8;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::countEnemy
	int32_t ___countEnemy_9;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::countEnemy2
	int32_t ___countEnemy2_10;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::countEnemyAttacks
	float ___countEnemyAttacks_11;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::MaxValueX
	float ___MaxValueX_12;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::MaxValueY
	float ___MaxValueY_13;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::MinValueX
	float ___MinValueX_14;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::MinValueY
	float ___MinValueY_15;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::YValue
	float ___YValue_16;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::spawndelay
	float ___spawndelay_17;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::damage
	float ___damage_18;
	// System.Boolean Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::isCompleted
	bool ___isCompleted_19;
	// System.Boolean Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::isReset
	bool ___isReset_20;
};

// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject
struct GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::damage
	float ___damage_4;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::fireRate
	float ___fireRate_5;
	// System.Single Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::hitRange
	float ___hitRange_6;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::currentAmo
	int32_t ___currentAmo_7;
	// System.Int32 Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::maxMag
	int32_t ___maxMag_8;
	// System.String Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::weaponName
	String_t* ___weaponName_9;
	// UnityEngine.Sprite Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_10;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AgentBaseScene1
struct AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FMODUnity.StudioEventEmitter AgentBaseScene1::audioBoss
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___audioBoss_4;
	// UnityEngine.Animator AgentBaseScene1::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// UnityEngine.Animator AgentBaseScene1::bossAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___bossAnim_6;
	// UnityEngine.GameObject AgentBaseScene1::bossGameObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossGameObj_7;
	// UnityEngine.GameObject AgentBaseScene1::buttonHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonHide_8;
	// UnityEngine.GameObject AgentBaseScene1::buttonshow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonshow_9;
	// UnityEngine.GameObject AgentBaseScene1::wristHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wristHide_10;
	// System.Boolean AgentBaseScene1::_truckAduio
	bool ____truckAduio_11;
	// System.String AgentBaseScene1::sceneName
	String_t* ___sceneName_12;
	// UnityEngine.GameObject[] AgentBaseScene1::hideGuns
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hideGuns_13;
};

// AgentBaseScene2
struct AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FMODUnity.StudioEventEmitter AgentBaseScene2::audioBoss
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___audioBoss_4;
	// UnityEngine.Animator AgentBaseScene2::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// UnityEngine.GameObject[] AgentBaseScene2::weaponObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___weaponObjects_6;
	// System.Boolean AgentBaseScene2::_truckAduio
	bool ____truckAduio_7;
	// UnityEngine.GameObject AgentBaseScene2::buttonHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonHide_8;
	// UnityEngine.GameObject AgentBaseScene2::buttonshow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonshow_9;
	// System.String AgentBaseScene2::sceneName
	String_t* ___sceneName_10;
};

// Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool
struct BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::bulletImapctPooledObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___bulletImapctPooledObjects_5;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::bulletImapctPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletImapctPrefab_6;
	// System.Int32 Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::_amounBulletImapctToPool
	int32_t ____amounBulletImapctToPool_7;
};

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage
struct EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// TMPro.TextMeshProUGUI Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::damageHealthDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageHealthDisplay_5;
	// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::enemyScriptableObject
	EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* ___enemyScriptableObject_6;
	// FMODUnity.StudioEventEmitter Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::zombieTalk
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___zombieTalk_7;
	// System.Single Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::health
	float ___health_8;
	// System.Single Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::maxhealth
	float ___maxhealth_9;
	// UnityEngine.Animator Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::_anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____anim_10;
	// UnityEngine.AI.NavMeshAgent Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::_enemy
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ____enemy_11;
	// SpawnEnemy Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::_spawnEnemyScript
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ____spawnEnemyScript_12;
};

// Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool
struct EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::enemyPooledObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemyPooledObjects_5;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::enemyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyPrefab_6;
	// System.Int32 Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::_amountEnemyToPool
	int32_t ____amountEnemyToPool_7;
};

// EnemyPatroll
struct EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AI.NavMeshAgent EnemyPatroll::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_4;
	// UnityEngine.Transform[] EnemyPatroll::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_5;
	// System.Int32 EnemyPatroll::waypointIndex
	int32_t ___waypointIndex_6;
	// UnityEngine.Vector3 EnemyPatroll::target
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target_7;
};

// FMODUnity.EventHandler
struct EventHandler_tE9454C70821845BBFA2A6119CCDA96D8E3975284  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String FMODUnity.EventHandler::CollisionTag
	String_t* ___CollisionTag_4;
};

// Assets.FPX_Game.Scripts.GameManagers.GameManager
struct GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.GameManagers.GameManager::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// SpawnEnemy Assets.FPX_Game.Scripts.GameManagers.GameManager::SpawnEnemyScript
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ___SpawnEnemyScript_6;
};

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager
struct GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_4;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_5;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::wristHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wristHide_6;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::wristShow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wristShow_7;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::showButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___showButton_8;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::_camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____camera_9;
};

// Assets.FPX_Game.Scripts.GameManagers.Game_Over
struct Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Assets.FPX_Game.Scripts.WeaponScripts.GrabGun
struct GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::spawnPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnPlace_4;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_5;
	// UnityEngine.UI.Image Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_6;
	// TMPro.TextMeshProUGUI Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::weapaonName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___weapaonName_7;
	// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::weaponScriptable
	GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* ___weaponScriptable_8;
	// UnityEngine.UI.Button Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_9;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::showWeaponCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___showWeaponCanvas_10;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::hideWeaponCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hideWeaponCanvas_11;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::mag
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mag_12;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::gun
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gun_13;
	// UnityEngine.Rigidbody Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_14;
};

// Assets.FPX_Game.Scripts.ControllerScripts.HandController
struct HandController_tB75E3324B562C99DAD054E0A62AAD4D01CECB031  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.ControllerScripts.HandController::triggerAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___triggerAction_4;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.ControllerScripts.HandController::gripAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___gripAction_5;
	// UnityEngine.Animator Assets.FPX_Game.Scripts.ControllerScripts.HandController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
};

// Hide
struct Hide_t0EADDCF527E220088043E586CEA1FA0AFE625508  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Hide::clones
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___clones_4;
};

// Assets.FPX_Game.Scripts.WeaponScripts.Magazine
struct Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.Magazine::spawnPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnPlace_4;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.Magazine::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_5;
	// UnityEngine.Rigidbody Assets.FPX_Game.Scripts.WeaponScripts.Magazine::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_6;
};

// NavEnemy
struct NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject NavEnemy::enemyScriptableObject
	EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* ___enemyScriptableObject_4;
	// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject NavEnemy::champScriptableObject
	ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* ___champScriptableObject_5;
	// FMODUnity.StudioEventEmitter NavEnemy::zombieScream
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___zombieScream_6;
	// UnityEngine.AI.NavMeshAgent NavEnemy::_enemy
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ____enemy_7;
	// UnityEngine.Animator NavEnemy::_anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____anim_8;
	// UnityEngine.GameObject NavEnemy::_player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____player_9;
	// Assets.FPX_Game.Scripts.Player.PlayerHealth NavEnemy::_playerHealth
	PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* ____playerHealth_10;
};

// Assets.FPX_Game.Scripts.Player.PlayerHealth
struct PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject Assets.FPX_Game.Scripts.Player.PlayerHealth::champScriptableObject
	ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* ___champScriptableObject_4;
	// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject Assets.FPX_Game.Scripts.Player.PlayerHealth::enemyScriptableObject
	EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* ___enemyScriptableObject_5;
	// UnityEngine.UI.Slider Assets.FPX_Game.Scripts.Player.PlayerHealth::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// TMPro.TextMeshProUGUI Assets.FPX_Game.Scripts.Player.PlayerHealth::damageHealthDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageHealthDisplay_7;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.Player.PlayerHealth::show
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___show_8;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.Player.PlayerHealth::hide
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hide_9;
};

// Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag
struct ScoketMag_t48296211818F38396069C503E31D82CE40E05117  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag::weaponScriptable
	GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* ___weaponScriptable_4;
};

// Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas
struct ShowAndHideCanvas_tC731947E911AD83E5BFAD3C543ED02EF49380D64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas::hideCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hideCanvas_4;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas::showCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___showCanvas_5;
};

// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI SpawnEnemy::numberCount
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___numberCount_4;
	// TMPro.TextMeshProUGUI SpawnEnemy::levelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___levelText_5;
	// TMPro.TextMeshProUGUI SpawnEnemy::anotherText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___anotherText_6;
	// TMPro.TextMeshProUGUI SpawnEnemy::gameCompleted
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gameCompleted_7;
	// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject SpawnEnemy::enemyScriptableObject
	EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* ___enemyScriptableObject_8;
	// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject SpawnEnemy::champScriptableObject
	ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* ___champScriptableObject_9;
	// UnityEngine.GameObject SpawnEnemy::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_10;
	// UnityEngine.GameObject SpawnEnemy::_camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____camera_11;
	// UnityEngine.UI.Slider SpawnEnemy::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_12;
	// TMPro.TextMeshProUGUI SpawnEnemy::damageHealthDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageHealthDisplay_13;
};

// StartMissionScene3
struct StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] StartMissionScene3::show
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___show_4;
	// UnityEngine.GameObject[] StartMissionScene3::hide
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hide_5;
};

// TriggerAnimation
struct TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FMODUnity.StudioEventEmitter TriggerAnimation::constructorWorker
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___constructorWorker_4;
	// FMODUnity.StudioEventEmitter TriggerAnimation::cellPhone
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___cellPhone_5;
	// UnityEngine.Animator TriggerAnimation::cellPhoneAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___cellPhoneAnim_6;
	// UnityEngine.Animator TriggerAnimation::constructorAnim1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___constructorAnim1_7;
	// UnityEngine.Animator TriggerAnimation::constructorAnim2
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___constructorAnim2_8;
	// System.Single TriggerAnimation::waitArgue
	float ___waitArgue_9;
	// System.Single TriggerAnimation::waitTalking
	float ___waitTalking_10;
	// UnityEngine.GameObject TriggerAnimation::buttonshow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonshow_11;
	// UnityEngine.GameObject TriggerAnimation::papper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___papper_12;
	// UnityEngine.GameObject TriggerAnimation::missionButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missionButton_13;
	// System.String TriggerAnimation::sceneName
	String_t* ___sceneName_14;
	// System.Boolean TriggerAnimation::_truckAduio
	bool ____truckAduio_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire
struct WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::ammotDisplay
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ammotDisplay_4;
	// FMODUnity.StudioEventEmitter Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::gunFireSound
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___gunFireSound_5;
	// UnityEngine.ParticleSystem Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::muzzleFlash
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___muzzleFlash_6;
	// UnityEngine.ParticleSystem Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::casing
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___casing_7;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::impactPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactPrefab_8;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::raycastOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___raycastOrigin_9;
	// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::weaponScriptable
	GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* ___weaponScriptable_10;
	// UnityEngine.LayerMask Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer_11;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::triggerAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___triggerAction_12;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::realeaseMagazineAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___realeaseMagazineAction_13;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::grabGunAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___grabGunAction_14;
	// UnityEngine.Animator Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::cloneAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___cloneAnim_15;
	// UnityEngine.Animator Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::bossANim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___bossANim_16;
	// System.Single Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::_nextFire
	float ____nextFire_17;
	// UnityEngine.Rigidbody Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_18;
};

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder
struct WeaponHolder_tDEBB1C2AA61B341738E90AE386A8AF0393592632  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::canvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___canvas_4;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::hideCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hideCanvas_5;
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::canvasShowButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___canvasShowButton_6;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::mag
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mag_7;
	// UnityEngine.Transform Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::gun
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gun_8;
};

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas
struct WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::showButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___showButton_4;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_5;
	// UnityEngine.GameObject Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::_camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____camera_6;
	// UnityEngine.GameObject[] Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::images
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___images_7;
	// UnityEngine.UI.Button[] Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::button
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___button_8;
};

// WristMenu
struct WristMenu_t1692A0D1E558787904E2250D4BEC0D1B0AFC4DE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WristMenu::buttonHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonHide_4;
	// UnityEngine.GameObject WristMenu::buttonshow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonshow_5;
	// UnityEngine.GameObject WristMenu::showPapper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___showPapper_6;
	// UnityEngine.LayerMask WristMenu::layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7  : public EventHandler_tE9454C70821845BBFA2A6119CCDA96D8E3975284
{
	// FMODUnity.EventReference FMODUnity.StudioEventEmitter::EventReference
	EventReference_tA4CA1F882DC447E6B50F989D1FC08F065C91FB51 ___EventReference_5;
	// System.String FMODUnity.StudioEventEmitter::Event
	String_t* ___Event_6;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::PlayEvent
	int32_t ___PlayEvent_7;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::StopEvent
	int32_t ___StopEvent_8;
	// System.Boolean FMODUnity.StudioEventEmitter::AllowFadeout
	bool ___AllowFadeout_9;
	// System.Boolean FMODUnity.StudioEventEmitter::TriggerOnce
	bool ___TriggerOnce_10;
	// System.Boolean FMODUnity.StudioEventEmitter::Preload
	bool ___Preload_11;
	// System.Boolean FMODUnity.StudioEventEmitter::AllowNonRigidbodyDoppler
	bool ___AllowNonRigidbodyDoppler_12;
	// FMODUnity.ParamRef[] FMODUnity.StudioEventEmitter::Params
	ParamRefU5BU5D_t26BF7E24E219F3CA313B1DB999DBB5D3FBB290FE* ___Params_13;
	// System.Boolean FMODUnity.StudioEventEmitter::OverrideAttenuation
	bool ___OverrideAttenuation_14;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMinDistance
	float ___OverrideMinDistance_15;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMaxDistance
	float ___OverrideMaxDistance_16;
	// FMOD.Studio.EventDescription FMODUnity.StudioEventEmitter::eventDescription
	EventDescription_t2904DB225583633AC5E150B2FF1EA269955FB28C ___eventDescription_17;
	// FMOD.Studio.EventInstance FMODUnity.StudioEventEmitter::instance
	EventInstance_tB965FE66D8F64AF5ED7084290FED14B1B50B11CF ___instance_18;
	// System.Boolean FMODUnity.StudioEventEmitter::hasTriggered
	bool ___hasTriggered_19;
	// System.Boolean FMODUnity.StudioEventEmitter::isQuitting
	bool ___isQuitting_20;
	// System.Boolean FMODUnity.StudioEventEmitter::isOneshot
	bool ___isOneshot_21;
	// System.Collections.Generic.List`1<FMODUnity.ParamRef> FMODUnity.StudioEventEmitter::cachedParams
	List_1_t661315603FDBEA2CBD0830969F93FD47C156CE41* ___cachedParams_22;
	// System.Boolean FMODUnity.StudioEventEmitter::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_25;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// AgentBaseScene1/<PlayBossAnim>d__16

// AgentBaseScene1/<PlayBossAnim>d__16

// AgentBaseScene2/<PlayBossAnim>d__11

// AgentBaseScene2/<PlayBossAnim>d__11

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14

// NavEnemy/<GameOver>d__12

// NavEnemy/<GameOver>d__12

// Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8

// Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8

// SpawnEnemy/<GameCompleted>d__18

// SpawnEnemy/<GameCompleted>d__18

// SpawnEnemy/<LevelCountDownLV1>d__12

// SpawnEnemy/<LevelCountDownLV1>d__12

// SpawnEnemy/<LevelCountDownLV2>d__15

// SpawnEnemy/<LevelCountDownLV2>d__15

// SpawnEnemy/<SpawnRandomEnemie2>d__16

// SpawnEnemy/<SpawnRandomEnemie2>d__16

// SpawnEnemy/<SpawnRandomEnemiesLV1>d__13

// SpawnEnemy/<SpawnRandomEnemiesLV1>d__13

// TriggerAnimation/<PlayAnim>d__14

// TriggerAnimation/<PlayAnim>d__14

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputActionProperty

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject

// Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject

// UnityEngine.Collider

// UnityEngine.Collider

// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject

// Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject

// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject

// Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// AgentBaseScene1
struct AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_StaticFields
{
	// System.Boolean AgentBaseScene1::practiceScenStart
	bool ___practiceScenStart_14;
};

// AgentBaseScene1

// AgentBaseScene2

// AgentBaseScene2

// Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool
struct BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_StaticFields
{
	// Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::impactInstance
	BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* ___impactInstance_4;
};

// Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage

// Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage

// Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool
struct EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_StaticFields
{
	// Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::enemyInstance
	EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* ___enemyInstance_4;
};

// Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool

// EnemyPatroll

// EnemyPatroll

// Assets.FPX_Game.Scripts.GameManagers.GameManager
struct GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields
{
	// Assets.FPX_Game.Scripts.GameManagers.GameManager Assets.FPX_Game.Scripts.GameManagers.GameManager::gameManagersInstance
	GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* ___gameManagersInstance_4;
};

// Assets.FPX_Game.Scripts.GameManagers.GameManager

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager
struct GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122_StaticFields
{
	// System.Boolean Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::practiceScenStart
	bool ___practiceScenStart_10;
};

// Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager

// Assets.FPX_Game.Scripts.GameManagers.Game_Over

// Assets.FPX_Game.Scripts.GameManagers.Game_Over

// Assets.FPX_Game.Scripts.WeaponScripts.GrabGun

// Assets.FPX_Game.Scripts.WeaponScripts.GrabGun

// Assets.FPX_Game.Scripts.ControllerScripts.HandController

// Assets.FPX_Game.Scripts.ControllerScripts.HandController

// Hide

// Hide

// Assets.FPX_Game.Scripts.WeaponScripts.Magazine

// Assets.FPX_Game.Scripts.WeaponScripts.Magazine

// NavEnemy

// NavEnemy

// Assets.FPX_Game.Scripts.Player.PlayerHealth

// Assets.FPX_Game.Scripts.Player.PlayerHealth

// Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag

// Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag

// Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas

// Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas

// SpawnEnemy

// SpawnEnemy

// StartMissionScene3
struct StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_StaticFields
{
	// System.Boolean StartMissionScene3::missionScene3Start
	bool ___missionScene3Start_6;
	// System.Boolean StartMissionScene3::missionScene4Start
	bool ___missionScene4Start_7;
};

// StartMissionScene3

// TriggerAnimation

// TriggerAnimation

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas

// Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas

// WristMenu

// WristMenu

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7_StaticFields
{
	// System.Collections.Generic.List`1<FMODUnity.StudioEventEmitter> FMODUnity.StudioEventEmitter::activeEmitters
	List_1_tC9E9413E4D08BE51D6F2D26873E5DCB64FFDD26F* ___activeEmitters_23;
};

// FMODUnity.StudioEventEmitter

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Assets.FPX_Game.Scripts.Player.PlayerHealth>()
inline PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* GameObject_GetComponent_TisPlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6_m12EFB146D4876B3C56DF060EC8D47B0F4C70EABA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NavEnemy::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavEnemy_GameOver_m08ECC472B6AE43D0174468BD6DFD381D1A4AF38B (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Void FMODUnity.StudioEventEmitter::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967 (StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_mF33F9A10F4DA918834ADBB8253EA8FF5384DEC1B (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, float ___0_amount, const RuntimeMethod* method) ;
// System.Void NavEnemy/<GameOver>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__12__ctor_m92091E8F5F9EB0DD46F7E10B96C12287F78CFE11 (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnEnemy::LevelCountDownLV1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_LevelCountDownLV1_mB38C339C3C12F5F3EC0B3274EFFD481404895DA1 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, int32_t ___0_timeremaning, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnEnemy::GameCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_GameCompleted_m164FEDFF16148B8E0E9DAED5B5E03FCC6CAB2587 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void SpawnEnemy/<LevelCountDownLV1>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV1U3Ed__12__ctor_m07ACCEDDD7A94B6D8736176E9D1DB182419293CC (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemiesLV1U3Ed__13__ctor_mF1EA61EA969926C43C709A79FB515CCF21F6E0DD (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnEnemy::LevelCountDownLV2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_LevelCountDownLV2_m6D4CD3EC55B9112AFC6CE6F34DDE040FB5BD5673 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, int32_t ___0_timeremaning, const RuntimeMethod* method) ;
// System.Void SpawnEnemy/<LevelCountDownLV2>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV2U3Ed__15__ctor_m4B7F1F7FBEF1B97DB416A01536FB472B78E0AE57 (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SpawnEnemy/<SpawnRandomEnemie2>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemie2U3Ed__16__ctor_mDF61C04F60998583F3C3DF4A492F763E70C9ACC0 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::GetEnemyPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyObjectPool_GetEnemyPool_m07147AA919AB8710798ADDB890A929BD982C83DE (EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void SpawnEnemy/<GameCompleted>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameCompletedU3Ed__18__ctor_m738AA58CD36C733D549B7163B1E4693788E7A354 (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnEnemy::SpawnRandomEnemiesLV1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_SpawnRandomEnemiesLV1_mB18A85EF3C85BA6A5AFE8D5820892CC867345C04 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void SpawnEnemy::InstantiateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_InstantiateEnemy_m1D8B84BD836B27315E4A5B57B32DC1BC82661A6A (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnEnemy::SpawnRandomEnemie2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_SpawnRandomEnemie2_m2D1605C6FD8DB651ACE4BA36B01A92977A56D228 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void AgentBaseScene1::PracticeScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_PracticeScen_m5E6CC39960FCE283695057CC8057EB36A75D4268 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) ;
// System.Boolean FMODUnity.StudioEventEmitter::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StudioEventEmitter_IsPlaying_m97BA574E515193442FD2DF7B842B9FB2C0E04C1C (StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AgentBaseScene1::PlayBossAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentBaseScene1_PlayBossAnim_m430B949855B4DD2F4436BDE55958E9B7EAE601B6 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) ;
// System.Void AgentBaseScene1/<PlayBossAnim>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__16__ctor_m5699C9B2E4937E6787701FE290E75142E44E8C0F (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AgentBaseScene2::PlayBossAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentBaseScene2_PlayBossAnim_m05EA2C65DAA846D6C249B38CB5F3C8210CB32A05 (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) ;
// System.Void AgentBaseScene2/<PlayBossAnim>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__11__ctor_m4D49DAAFA5EEB2B030121C87E74DA9DB2C07B6E6 (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EnemyPatroll::UpdateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_UpdateDestination_mAEB6147E872C231A08BB1C32C4F0FA01FCE56FDF (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void EnemyPatroll::IterateWaypointIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_IterateWaypointIndex_m459028AB52E39A8BC545D54E620BF35C9224C8EF (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TriggerAnimation::PlayAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriggerAnimation_PlayAnim_m8A1AA68AB557EA988F7624F67CEE10B4025C2551 (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, const RuntimeMethod* method) ;
// System.Void TriggerAnimation/<PlayAnim>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimU3Ed__14__ctor_m1238F2E40C979C5BFF7EE8FA04AF0F61A8B33700 (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFire_shoot_m8FF84E4E8D64324601158F52806D80DBF7A782B7 (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, const RuntimeMethod* method) ;
// System.Void FMODUnity.StudioEventEmitter::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudioEventEmitter_Stop_mECC28C7A304B00140CFC742A72D25C9F9C1456E9 (StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage>()
inline EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* Component_GetComponent_TisEnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7_mD8258264367421ABB5FAC5322AB61A01864CF481 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::GetBulletImapctPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BulletImpactObjectPool_GetBulletImapctPool_m12A5916F845D3A44EBE4F2A91146A96264F95B79 (BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::ImpactSetActive(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeaponFire_ImpactSetActive_m019414D19372F3485909E9D916513289DA55A32F (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_TakeDamage_m03DB4F568FE57186F465E7398E849D5154740520 (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, float ___0_amount, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImpactSetActiveU3Ed__18__ctor_m91A4A2753D294750A42D1821433C8B519BAC194A (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::ButtonDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_ButtonDisable_mE9922996701B3BE6DF9B59910A4A055AC0917F0E (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::HideImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_HideImage_m2A02ED42221DE6BE55F809B66478C050D6CC1BE4 (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.Player.PlayerHealth::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_GameOver_mEFADEED7A66F3F3D67E9573E0C5A0ECE2EC3BDA1 (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__8__ctor_m9BC90092B9DFD5C521B3F2F19A7C85349A015A00 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDamage_Die_mD2797392C2B9B480956B3C420812A75BBE80BA60 (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::TextDeactivee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDamage_TextDeactivee_m8666300A7BE19E42510AAC338840CDDED9191E3E (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__12__ctor_mAC8AB70BC1CB74EFCA9585507ED60F4272287F12 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextDeactiveeU3Ed__13__ctor_mFBA752494BBAA32559542909B29F71DC3736AC2A (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SpawnEnemy::StartLevelCountDownLV2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_StartLevelCountDownLV2_m4737DA4652F56A27044E2F4C1884CF88A83C1881 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::PracticeScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_PracticeScen_m040537BF01A6644EF21D6D6C41DE91173BC0DE4C (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::LoadYourAsyncScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameMenuManager_LoadYourAsyncScene_m58D69BEB65E4C4F935DC7B0A04454E60F9F6B8E8 (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) ;
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadYourAsyncSceneU3Ed__14__ctor_mE62EA01B139F9DB931CC632D236E762C67CB3E74 (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void NavEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy_Start_mAD4905E9E3F49226E731BB347854A1D732622A5B (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6_m12EFB146D4876B3C56DF060EC8D47B0F4C70EABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _player = GameManager.gameManagersInstance.player;
		GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* L_0 = ((GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var))->___gameManagersInstance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___player_5;
		__this->____player_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_9), (void*)L_1);
		// _enemy = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->____enemy_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_7), (void*)L_2);
		// _anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____anim_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anim_8), (void*)L_3);
		// _playerHealth = _player.GetComponent<PlayerHealth>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____player_9;
		NullCheck(L_4);
		PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* L_5;
		L_5 = GameObject_GetComponent_TisPlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6_m12EFB146D4876B3C56DF060EC8D47B0F4C70EABA(L_4, GameObject_GetComponent_TisPlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6_m12EFB146D4876B3C56DF060EC8D47B0F4C70EABA_RuntimeMethod_var);
		__this->____playerHealth_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerHealth_10), (void*)L_5);
		// }
		return;
	}
}
// System.Void NavEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy_Update_m0A92EABB0BFFC083AC2A04CB6B7771C1BA77137B (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) 
{
	{
		// _enemy.SetDestination(_player.transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____enemy_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____player_9;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_3, NULL);
		// if (champScriptableObject.health <= 0)
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_5 = __this->___champScriptableObject_5;
		NullCheck(L_5);
		float L_6 = L_5->___health_4;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// StartCoroutine(GameOver());
		RuntimeObject* L_7;
		L_7 = NavEnemy_GameOver_m08ECC472B6AE43D0174468BD6DFD381D1A4AF38B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void NavEnemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy_OnTriggerEnter_mB9A09F630399A973BB0608E61A71AD0A23AC9E6F (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFBB76652AC744FF981C326A98D6FC17F1F342E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// _anim.SetBool("IsAttacking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____anim_8;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralFBFBB76652AC744FF981C326A98D6FC17F1F342E, (bool)1, NULL);
	}

IL_0023:
	{
		// if (other.gameObject.layer == LayerMask.NameToLayer("Trigger"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_5, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		// _anim.SetBool("IsRunning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->____anim_8;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral145F5B0B4068B3895C7D3D01D48B50C9B894BFBA, (bool)1, NULL);
		// zombieScream.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_9 = __this->___zombieScream_6;
		NullCheck(L_9);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_9, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void NavEnemy::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy_OnTriggerExit_m1F1E11C3FE8C9C9FA6067746DEEFCA7386966736 (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFBB76652AC744FF981C326A98D6FC17F1F342E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// _anim.SetBool("IsAttacking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____anim_8;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralFBFBB76652AC744FF981C326A98D6FC17F1F342E, (bool)0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void NavEnemy::AnimationEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy_AnimationEvent_m70EDFEBF52EFE1E62ED4DE70D6A20803CA93ECC0 (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) 
{
	{
		// enemyScriptableObject.countEnemyAttacks++;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_0 = __this->___enemyScriptableObject_4;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->___countEnemyAttacks_11;
		NullCheck(L_1);
		L_1->___countEnemyAttacks_11 = ((float)il2cpp_codegen_add(L_2, (1.0f)));
		// if (enemyScriptableObject.countEnemyAttacks < 6)
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_3 = __this->___enemyScriptableObject_4;
		NullCheck(L_3);
		float L_4 = L_3->___countEnemyAttacks_11;
		if ((!(((float)L_4) < ((float)(6.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// _playerHealth.TakeDamage(enemyScriptableObject.damage);
		PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* L_5 = __this->____playerHealth_10;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_6 = __this->___enemyScriptableObject_4;
		NullCheck(L_6);
		float L_7 = L_6->___damage_18;
		NullCheck(L_5);
		PlayerHealth_TakeDamage_mF33F9A10F4DA918834ADBB8253EA8FF5384DEC1B(L_5, L_7, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator NavEnemy::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavEnemy_GameOver_m08ECC472B6AE43D0174468BD6DFD381D1A4AF38B (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* L_0 = (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471*)il2cpp_codegen_object_new(U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameOverU3Ed__12__ctor_m92091E8F5F9EB0DD46F7E10B96C12287F78CFE11(L_0, 0, NULL);
		U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NavEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavEnemy__ctor_m8C945460632F251D992710D05D28E66E4DC31A4E (NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NavEnemy/<GameOver>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__12__ctor_m92091E8F5F9EB0DD46F7E10B96C12287F78CFE11 (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NavEnemy/<GameOver>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__12_System_IDisposable_Dispose_m349C6853D2CFF6BAD76AD8C27D490481BA9E8CDD (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NavEnemy/<GameOver>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameOverU3Ed__12_MoveNext_m987ACC1C130097D357C80B583AC6ADD3B944B54D (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		NavEnemy_t465C465A141E7B6F55A79D0FF251CF599B1574A0* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object NavEnemy/<GameOver>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EAA82880DCB1EDDAE18BE4E4EB720C82AB21500 (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NavEnemy/<GameOver>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__12_System_Collections_IEnumerator_Reset_mFF85B066422A0CB155BC86F84AEC6E07DE309976 (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameOverU3Ed__12_System_Collections_IEnumerator_Reset_mFF85B066422A0CB155BC86F84AEC6E07DE309976_RuntimeMethod_var)));
	}
}
// System.Object NavEnemy/<GameOver>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverU3Ed__12_System_Collections_IEnumerator_get_Current_mB90564C7DE0DB52DA4222864782B4F1A05EACCB5 (U3CGameOverU3Ed__12_t33E2CAB97A5964D8BD463592F40F7A0ACDA5F471* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Start_mC7726203354D875E8F7DBF2A39480C6F312BF75B (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// enemyScriptableObject.countEnemy = 0;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_0 = __this->___enemyScriptableObject_8;
		NullCheck(L_0);
		L_0->___countEnemy_9 = 0;
		// enemyScriptableObject.countEnemy2 = 0;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_1 = __this->___enemyScriptableObject_8;
		NullCheck(L_1);
		L_1->___countEnemy2_10 = 0;
		// enemyScriptableObject.isCompleted = false;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_2 = __this->___enemyScriptableObject_8;
		NullCheck(L_2);
		L_2->___isCompleted_19 = (bool)0;
		// StartCoroutine(LevelCountDownLV1());
		RuntimeObject* L_3;
		L_3 = SpawnEnemy_LevelCountDownLV1_mB38C339C3C12F5F3EC0B3274EFFD481404895DA1(__this, ((int32_t)10), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void SpawnEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Update_m8C17771352CA43D1CE958B5B5D5A151C0BBBB35F (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____camera_11;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_6, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_7, NULL);
		// if (enemyScriptableObject.isCompleted && enemyScriptableObject.countEnemy2 == 0)
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_8 = __this->___enemyScriptableObject_8;
		NullCheck(L_8);
		bool L_9 = L_8->___isCompleted_19;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_10 = __this->___enemyScriptableObject_8;
		NullCheck(L_10);
		int32_t L_11 = L_10->___countEnemy2_10;
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		// StartCoroutine(GameCompleted());
		RuntimeObject* L_12;
		L_12 = SpawnEnemy_GameCompleted_m164FEDFF16148B8E0E9DAED5B5E03FCC6CAB2587(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnEnemy::LevelCountDownLV1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_LevelCountDownLV1_mB38C339C3C12F5F3EC0B3274EFFD481404895DA1 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, int32_t ___0_timeremaning, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* L_0 = (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A*)il2cpp_codegen_object_new(U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelCountDownLV1U3Ed__12__ctor_m07ACCEDDD7A94B6D8736176E9D1DB182419293CC(L_0, 0, NULL);
		U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* L_2 = L_1;
		int32_t L_3 = ___0_timeremaning;
		NullCheck(L_2);
		L_2->___timeremaning_2 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator SpawnEnemy::SpawnRandomEnemiesLV1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_SpawnRandomEnemiesLV1_mB18A85EF3C85BA6A5AFE8D5820892CC867345C04 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* L_0 = (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC*)il2cpp_codegen_object_new(U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnRandomEnemiesLV1U3Ed__13__ctor_mF1EA61EA969926C43C709A79FB515CCF21F6E0DD(L_0, 0, NULL);
		U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SpawnEnemy::StartLevelCountDownLV2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_StartLevelCountDownLV2_m4737DA4652F56A27044E2F4C1884CF88A83C1881 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LevelCountDownLV2());
		RuntimeObject* L_0;
		L_0 = SpawnEnemy_LevelCountDownLV2_m6D4CD3EC55B9112AFC6CE6F34DDE040FB5BD5673(__this, ((int32_t)10), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnEnemy::LevelCountDownLV2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_LevelCountDownLV2_m6D4CD3EC55B9112AFC6CE6F34DDE040FB5BD5673 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, int32_t ___0_timeremaning, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* L_0 = (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17*)il2cpp_codegen_object_new(U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelCountDownLV2U3Ed__15__ctor_m4B7F1F7FBEF1B97DB416A01536FB472B78E0AE57(L_0, 0, NULL);
		U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* L_2 = L_1;
		int32_t L_3 = ___0_timeremaning;
		NullCheck(L_2);
		L_2->___timeremaning_2 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator SpawnEnemy::SpawnRandomEnemie2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_SpawnRandomEnemie2_m2D1605C6FD8DB651ACE4BA36B01A92977A56D228 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* L_0 = (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1*)il2cpp_codegen_object_new(U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnRandomEnemie2U3Ed__16__ctor_mDF61C04F60998583F3C3DF4A492F763E70C9ACC0(L_0, 0, NULL);
		U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SpawnEnemy::InstantiateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_InstantiateEnemy_m1D8B84BD836B27315E4A5B57B32DC1BC82661A6A (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// Vector3 randomSpawn = new Vector3(Random.Range(enemyScriptableObject.MinValueX, enemyScriptableObject.MaxValueX), enemyScriptableObject.YValue, Random.Range(enemyScriptableObject.MinValueY, enemyScriptableObject.MaxValueY));
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_0 = __this->___enemyScriptableObject_8;
		NullCheck(L_0);
		float L_1 = L_0->___MinValueX_14;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_2 = __this->___enemyScriptableObject_8;
		NullCheck(L_2);
		float L_3 = L_2->___MaxValueX_12;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_1, L_3, NULL);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_5 = __this->___enemyScriptableObject_8;
		NullCheck(L_5);
		float L_6 = L_5->___YValue_16;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_7 = __this->___enemyScriptableObject_8;
		NullCheck(L_7);
		float L_8 = L_7->___MinValueY_15;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_9 = __this->___enemyScriptableObject_8;
		NullCheck(L_9);
		float L_10 = L_9->___MaxValueY_13;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_8, L_10, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_4, L_6, L_11, NULL);
		// GameObject enemyPool = EnemyObjectPool.enemyInstance.GetEnemyPool();
		EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* L_12 = ((EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_StaticFields*)il2cpp_codegen_static_fields_for(EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var))->___enemyInstance_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = EnemyObjectPool_GetEnemyPool_m07147AA919AB8710798ADDB890A929BD982C83DE(L_12, NULL);
		V_1 = L_13;
		// if (enemyPool != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		// enemyPool.transform.position = randomSpawn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
		// enemyPool.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnEnemy::GameCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnEnemy_GameCompleted_m164FEDFF16148B8E0E9DAED5B5E03FCC6CAB2587 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* L_0 = (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F*)il2cpp_codegen_object_new(U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameCompletedU3Ed__18__ctor_m738AA58CD36C733D549B7163B1E4693788E7A354(L_0, 0, NULL);
		U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SpawnEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__ctor_mF4ACB2F1D347568304B1A0FE83882EB99DCECA57 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SpawnEnemy/<LevelCountDownLV1>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV1U3Ed__12__ctor_m07ACCEDDD7A94B6D8736176E9D1DB182419293CC (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnEnemy/<LevelCountDownLV1>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV1U3Ed__12_System_IDisposable_Dispose_m90D5FFE302FCA4AF3EC5AEFEB9D9DE6218ADA708 (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnEnemy/<LevelCountDownLV1>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelCountDownLV1U3Ed__12_MoveNext_m89B7744EEF04DDA2687D49BE08687D6C53929DD3 (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_4 = __this->___timeremaning_2;
		__this->___U3CfU3E5__2_4 = L_4;
		goto IL_00a4;
	}

IL_002c:
	{
		// canvas.SetActive(true);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___canvas_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// numberCount.text = f.ToString("00");
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___numberCount_4;
		int32_t* L_9 = (&__this->___U3CfU3E5__2_4);
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_9, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// levelText.text = f.ToString(enemyScriptableObject.LevelText);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___levelText_5;
		int32_t* L_13 = (&__this->___U3CfU3E5__2_4);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_14 = V_1;
		NullCheck(L_14);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_15 = L_14->___enemyScriptableObject_8;
		NullCheck(L_15);
		String_t* L_16 = L_15->___LevelText_5;
		String_t* L_17;
		L_17 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_13, L_16, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_19 = __this->___U3CfU3E5__2_4;
		V_2 = L_19;
		int32_t L_20 = V_2;
		__this->___U3CfU3E5__2_4 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_00a4:
	{
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_21 = __this->___U3CfU3E5__2_4;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// anotherText.enabled = false;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_22 = V_1;
		NullCheck(L_22);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___anotherText_6;
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)0, NULL);
		// StartCoroutine(SpawnRandomEnemiesLV1());
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_24 = V_1;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = SpawnEnemy_SpawnRandomEnemiesLV1_mB18A85EF3C85BA6A5AFE8D5820892CC867345C04(L_25, NULL);
		NullCheck(L_24);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_27;
		L_27 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_24, L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SpawnEnemy/<LevelCountDownLV1>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCountDownLV1U3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEB9D170D638C73190478FC0FEB6A1AD481B24DE (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnEnemy/<LevelCountDownLV1>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV1U3Ed__12_System_Collections_IEnumerator_Reset_m88DA61FAC74777819451F76945A723D359F67492 (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelCountDownLV1U3Ed__12_System_Collections_IEnumerator_Reset_m88DA61FAC74777819451F76945A723D359F67492_RuntimeMethod_var)));
	}
}
// System.Object SpawnEnemy/<LevelCountDownLV1>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCountDownLV1U3Ed__12_System_Collections_IEnumerator_get_Current_m4351624F45CA486CD2ED2D77374C252F1F8B87C7 (U3CLevelCountDownLV1U3Ed__12_t7C228332DE52AC703A6DD7DFCFBB3A9FAE15DD9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemiesLV1U3Ed__13__ctor_mF1EA61EA969926C43C709A79FB515CCF21F6E0DD (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemiesLV1U3Ed__13_System_IDisposable_Dispose_m92E8C20834E75B20F0C6EFFAA305399BCC468837 (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnRandomEnemiesLV1U3Ed__13_MoveNext_mECF571826476F02A31A5C9A3FE5F0A81A5790E6C (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canvas.SetActive(false);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___canvas_10;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired; i++)
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_6 = V_1;
		NullCheck(L_6);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_7 = L_6->___enemyScriptableObject_8;
		NullCheck(L_7);
		int32_t L_8 = L_7->___enemiesCurrentCount_8;
		__this->___U3CiU3E5__2_3 = L_8;
		goto IL_008c;
	}

IL_003d:
	{
		// enemyScriptableObject.countEnemy++;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_9 = V_1;
		NullCheck(L_9);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_10 = L_9->___enemyScriptableObject_8;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = L_11->___countEnemy_9;
		NullCheck(L_11);
		L_11->___countEnemy_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// InstantiateEnemy();
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_13 = V_1;
		NullCheck(L_13);
		SpawnEnemy_InstantiateEnemy_m1D8B84BD836B27315E4A5B57B32DC1BC82661A6A(L_13, NULL);
		// yield return new WaitForSeconds(enemyScriptableObject.spawndelay);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_14 = V_1;
		NullCheck(L_14);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_15 = L_14->___enemyScriptableObject_8;
		NullCheck(L_15);
		float L_16 = L_15->___spawndelay_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired; i++)
		int32_t L_18 = __this->___U3CiU3E5__2_3;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_008c:
	{
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired; i++)
		int32_t L_20 = __this->___U3CiU3E5__2_3;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_21 = V_1;
		NullCheck(L_21);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_22 = L_21->___enemyScriptableObject_8;
		NullCheck(L_22);
		int32_t L_23 = L_22->___enemiesDesired_7;
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomEnemiesLV1U3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA545CE0BC7EA067DCAB9687C85A103EAE4AE3E46 (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemiesLV1U3Ed__13_System_Collections_IEnumerator_Reset_m12B5B5D330CDF8202DD86287408288AA46B37292 (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnRandomEnemiesLV1U3Ed__13_System_Collections_IEnumerator_Reset_m12B5B5D330CDF8202DD86287408288AA46B37292_RuntimeMethod_var)));
	}
}
// System.Object SpawnEnemy/<SpawnRandomEnemiesLV1>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomEnemiesLV1U3Ed__13_System_Collections_IEnumerator_get_Current_m8F22AB12ACBE54E7EB118CAAF8C10D1FA1013B18 (U3CSpawnRandomEnemiesLV1U3Ed__13_t93B853A302D3E3856B9CA3FE26FEE8FD6F87A1AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnEnemy/<LevelCountDownLV2>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV2U3Ed__15__ctor_m4B7F1F7FBEF1B97DB416A01536FB472B78E0AE57 (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnEnemy/<LevelCountDownLV2>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV2U3Ed__15_System_IDisposable_Dispose_mD69517FADCEB104248E766AB89A26251606E70A9 (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnEnemy/<LevelCountDownLV2>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelCountDownLV2U3Ed__15_MoveNext_mF511AC33B6C32275F684A798757081CB12D3165C (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64630D48F97D245D68480BE6D118849C1E57C2E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_4 = __this->___timeremaning_2;
		__this->___U3CfU3E5__2_4 = L_4;
		goto IL_009e;
	}

IL_002c:
	{
		// canvas.SetActive(true);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___canvas_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// numberCount.text = f.ToString("00");
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___numberCount_4;
		int32_t* L_9 = (&__this->___U3CfU3E5__2_4);
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_9, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// levelText.text = f.ToString("Prepare for Wave 2");
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___levelText_5;
		int32_t* L_13 = (&__this->___U3CfU3E5__2_4);
		String_t* L_14;
		L_14 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_13, _stringLiteral64630D48F97D245D68480BE6D118849C1E57C2E7, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0087:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_16 = __this->___U3CfU3E5__2_4;
		V_2 = L_16;
		int32_t L_17 = V_2;
		__this->___U3CfU3E5__2_4 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_009e:
	{
		// for (int f = timeremaning; f > 0; f--)
		int32_t L_18 = __this->___U3CfU3E5__2_4;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// champScriptableObject.health = champScriptableObject.maxhealth;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_19 = V_1;
		NullCheck(L_19);
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_20 = L_19->___champScriptableObject_9;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_21 = V_1;
		NullCheck(L_21);
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_22 = L_21->___champScriptableObject_9;
		NullCheck(L_22);
		float L_23 = L_22->___maxhealth_5;
		NullCheck(L_20);
		L_20->___health_4 = L_23;
		// damageHealthDisplay.text = champScriptableObject.health.ToString();
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_24 = V_1;
		NullCheck(L_24);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = L_24->___damageHealthDisplay_13;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_26 = V_1;
		NullCheck(L_26);
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_27 = L_26->___champScriptableObject_9;
		NullCheck(L_27);
		float* L_28 = (&L_27->___health_4);
		String_t* L_29;
		L_29 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_28, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_29);
		// slider.maxValue = champScriptableObject.maxhealth;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_30 = V_1;
		NullCheck(L_30);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_31 = L_30->___slider_12;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_32 = V_1;
		NullCheck(L_32);
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_33 = L_32->___champScriptableObject_9;
		NullCheck(L_33);
		float L_34 = L_33->___maxhealth_5;
		NullCheck(L_31);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_31, L_34, NULL);
		// slider.value = champScriptableObject.health;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_35 = V_1;
		NullCheck(L_35);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_36 = L_35->___slider_12;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_37 = V_1;
		NullCheck(L_37);
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_38 = L_37->___champScriptableObject_9;
		NullCheck(L_38);
		float L_39 = L_38->___health_4;
		NullCheck(L_36);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_36, L_39);
		// StartCoroutine(SpawnRandomEnemie2());
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_40 = V_1;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_41 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = SpawnEnemy_SpawnRandomEnemie2_m2D1605C6FD8DB651ACE4BA36B01A92977A56D228(L_41, NULL);
		NullCheck(L_40);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_40, L_42, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SpawnEnemy/<LevelCountDownLV2>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCountDownLV2U3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m31BF585266E580B96D61D05637C4855AC7C59848 (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnEnemy/<LevelCountDownLV2>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelCountDownLV2U3Ed__15_System_Collections_IEnumerator_Reset_m484213B4D5D7E972CC64D30CE48E7A3C9D7B87ED (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelCountDownLV2U3Ed__15_System_Collections_IEnumerator_Reset_m484213B4D5D7E972CC64D30CE48E7A3C9D7B87ED_RuntimeMethod_var)));
	}
}
// System.Object SpawnEnemy/<LevelCountDownLV2>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelCountDownLV2U3Ed__15_System_Collections_IEnumerator_get_Current_m925379B9AAA8A2C7AEEE3FC750856874EEDEB258 (U3CLevelCountDownLV2U3Ed__15_tA6F4672ACA2319E05314C5DCBF6A9CF08780CB17* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnEnemy/<SpawnRandomEnemie2>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemie2U3Ed__16__ctor_mDF61C04F60998583F3C3DF4A492F763E70C9ACC0 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnEnemy/<SpawnRandomEnemie2>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemie2U3Ed__16_System_IDisposable_Dispose_mEEF3B633A85599715E578EB820A907AF63FC6B63 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnEnemy/<SpawnRandomEnemie2>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnRandomEnemie2U3Ed__16_MoveNext_m55184ED38C8589F2982D586E05B2752368A6AE90 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// enemyScriptableObject.isCompleted = true;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_4 = V_1;
		NullCheck(L_4);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_5 = L_4->___enemyScriptableObject_8;
		NullCheck(L_5);
		L_5->___isCompleted_19 = (bool)1;
		// canvas.SetActive(false);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___canvas_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired + 5; i++)
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_8 = V_1;
		NullCheck(L_8);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_9 = L_8->___enemyScriptableObject_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___enemiesCurrentCount_8;
		__this->___U3CiU3E5__2_3 = L_10;
		goto IL_009e;
	}

IL_0049:
	{
		// enemyScriptableObject.countEnemy2++;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_11 = V_1;
		NullCheck(L_11);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_12 = L_11->___enemyScriptableObject_8;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___countEnemy2_10;
		NullCheck(L_13);
		L_13->___countEnemy2_10 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// InstantiateEnemy();
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_15 = V_1;
		NullCheck(L_15);
		SpawnEnemy_InstantiateEnemy_m1D8B84BD836B27315E4A5B57B32DC1BC82661A6A(L_15, NULL);
		// yield return new WaitForSeconds(enemyScriptableObject.spawndelay / 2);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_16 = V_1;
		NullCheck(L_16);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_17 = L_16->___enemyScriptableObject_8;
		NullCheck(L_17);
		float L_18 = L_17->___spawndelay_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, ((float)(L_18/(2.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0087:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired + 5; i++)
		int32_t L_20 = __this->___U3CiU3E5__2_3;
		V_2 = L_20;
		int32_t L_21 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009e:
	{
		// for (int i = enemyScriptableObject.enemiesCurrentCount; i < enemyScriptableObject.enemiesDesired + 5; i++)
		int32_t L_22 = __this->___U3CiU3E5__2_3;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_23 = V_1;
		NullCheck(L_23);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_24 = L_23->___enemyScriptableObject_8;
		NullCheck(L_24);
		int32_t L_25 = L_24->___enemiesDesired_7;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_add(L_25, 5)))))
		{
			goto IL_0049;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnEnemy/<SpawnRandomEnemie2>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomEnemie2U3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0D6109859BA8759627FAE77EB404FC964974ACF8 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnEnemy/<SpawnRandomEnemie2>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnRandomEnemie2U3Ed__16_System_Collections_IEnumerator_Reset_mDFCEE1F26D229BB8A7F4BEF695C65110CD037AA0 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnRandomEnemie2U3Ed__16_System_Collections_IEnumerator_Reset_mDFCEE1F26D229BB8A7F4BEF695C65110CD037AA0_RuntimeMethod_var)));
	}
}
// System.Object SpawnEnemy/<SpawnRandomEnemie2>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnRandomEnemie2U3Ed__16_System_Collections_IEnumerator_get_Current_m48F8500F22CAB1A7FA0964ECFA5C792A6BBB2199 (U3CSpawnRandomEnemie2U3Ed__16_t67A24ECC27400B7F4274448421C05688F736D4E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnEnemy/<GameCompleted>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameCompletedU3Ed__18__ctor_m738AA58CD36C733D549B7163B1E4693788E7A354 (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnEnemy/<GameCompleted>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameCompletedU3Ed__18_System_IDisposable_Dispose_m15F3BB2700C54D3EBD13D24BCB3233BA7F1E3A33 (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnEnemy/<GameCompleted>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameCompletedU3Ed__18_MoveNext_m64981E4B0AF9752271A3C8A4E10E389279A5C97F (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997BD5DE1C976E1663865B5702A4CE7E769C3626);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// levelText.text = "Game Is completed";
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___levelText_5;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteral997BD5DE1C976E1663865B5702A4CE7E769C3626);
		// numberCount.enabled = false;
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_6 = V_1;
		NullCheck(L_6);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = L_6->___numberCount_4;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// canvas.SetActive(true);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___canvas_10;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SpawnEnemy/<GameCompleted>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameCompletedU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFF8F1CF444E958502602C31A8E45349A86F84A1C (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnEnemy/<GameCompleted>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameCompletedU3Ed__18_System_Collections_IEnumerator_Reset_m0218410CC60D823363879C3FEA4A4E1E26093F5C (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameCompletedU3Ed__18_System_Collections_IEnumerator_Reset_m0218410CC60D823363879C3FEA4A4E1E26093F5C_RuntimeMethod_var)));
	}
}
// System.Object SpawnEnemy/<GameCompleted>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameCompletedU3Ed__18_System_Collections_IEnumerator_get_Current_mFD4A4CF8E8E21EABE805360C387C979E4215D648 (U3CGameCompletedU3Ed__18_t6FC00362C6F3C7C464EE07455C3382AE7F03616F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AgentBaseScene1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_Start_m73D2A25D61703646B92CD32AAFD650DD3A05AAB6 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (practiceScenStart)
		bool L_0 = ((AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_StaticFields*)il2cpp_codegen_static_fields_for(AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var))->___practiceScenStart_14;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// PracticeScen();
		AgentBaseScene1_PracticeScen_m5E6CC39960FCE283695057CC8057EB36A75D4268(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void AgentBaseScene1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_Update_m1A8770279CE59960D0B6288508FCECBC8A55C796 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_truckAduio)
		bool L_0 = __this->____truckAduio_11;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// if (!audioBoss.IsPlaying())
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_1 = __this->___audioBoss_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = StudioEventEmitter_IsPlaying_m97BA574E515193442FD2DF7B842B9FB2C0E04C1C(L_1, NULL);
		if (L_2)
		{
			goto IL_004a;
		}
	}
	{
		// anim.SetBool("IsSpawning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_5;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540, (bool)0, NULL);
		// buttonHide.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___buttonHide_8;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// buttonshow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___buttonshow_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// bossGameObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bossGameObj_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void AgentBaseScene1::BossMssage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_BossMssage_mBCC020E1879C1E8FB339CA4B4D0D41EDE10819B6 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("IsSpawning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AgentBaseScene1::StartMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_StartMission_mB457CCF2636E9E25B38CAEFC09B8589BEDC11AB4 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_12;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void AgentBaseScene1::PlayAduio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_PlayAduio_m87D41FFDB3FF481BD3BD47ED4AECA820E64AF1BA (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	{
		// audioBoss.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_0 = __this->___audioBoss_4;
		NullCheck(L_0);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_0, NULL);
		// _truckAduio = true;
		__this->____truckAduio_11 = (bool)1;
		// StartCoroutine(PlayBossAnim());
		RuntimeObject* L_1;
		L_1 = AgentBaseScene1_PlayBossAnim_m430B949855B4DD2F4436BDE55958E9B7EAE601B6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AgentBaseScene1::PlayBossAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentBaseScene1_PlayBossAnim_m430B949855B4DD2F4436BDE55958E9B7EAE601B6 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* L_0 = (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D*)il2cpp_codegen_object_new(U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayBossAnimU3Ed__16__ctor_m5699C9B2E4937E6787701FE290E75142E44E8C0F(L_0, 0, NULL);
		U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AgentBaseScene1::PracticeScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1_PracticeScen_m5E6CC39960FCE283695057CC8057EB36A75D4268 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// wristHide.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wristHide_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// foreach (var item in hideGuns)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___hideGuns_13;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_0017:
	{
		// foreach (var item in hideGuns)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// item.SetActive(true);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0024:
	{
		// foreach (var item in hideGuns)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AgentBaseScene1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene1__ctor_m3CD16E96DDF646B114653B403E8AE00D0BA9C7E0 (AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AgentBaseScene1/<PlayBossAnim>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__16__ctor_m5699C9B2E4937E6787701FE290E75142E44E8C0F (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AgentBaseScene1/<PlayBossAnim>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__16_System_IDisposable_Dispose_mD6938B90B8E8C7680E0EBC15FD1C838E342476B9 (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AgentBaseScene1/<PlayBossAnim>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayBossAnimU3Ed__16_MoveNext_m376A05C47334333C2BBEC33B11ED8D899E367764 (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26374C159ED7B35A8F2B5D7B5E380B165D486364);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(6);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (6.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bossGameObj.SetActive(true);
		AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bossGameObj_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// anim.SetTrigger("IsRotating");
		AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___anim_5;
		NullCheck(L_8);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, _stringLiteral26374C159ED7B35A8F2B5D7B5E380B165D486364, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AgentBaseScene1/<PlayBossAnim>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayBossAnimU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0A11EB0C0D56D9F47976A3DFE2FF0212B290B46 (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AgentBaseScene1/<PlayBossAnim>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__16_System_Collections_IEnumerator_Reset_m63B2BDF81D311F1BA92B61FFAB780811F8833149 (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayBossAnimU3Ed__16_System_Collections_IEnumerator_Reset_m63B2BDF81D311F1BA92B61FFAB780811F8833149_RuntimeMethod_var)));
	}
}
// System.Object AgentBaseScene1/<PlayBossAnim>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayBossAnimU3Ed__16_System_Collections_IEnumerator_get_Current_mDB097B26A02E3F23BFD4FDBACDA9FD011244ED7B (U3CPlayBossAnimU3Ed__16_t52508DB24D90F70E990159E3BEFB8881C84B604D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AgentBaseScene2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene2_Update_m37411750F5BA4EAF4014BBDEA31AC2A626FA698F (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (_truckAduio)
		bool L_0 = __this->____truckAduio_7;
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		// if (!audioBoss.IsPlaying())
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_1 = __this->___audioBoss_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = StudioEventEmitter_IsPlaying_m97BA574E515193442FD2DF7B842B9FB2C0E04C1C(L_1, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		// anim.SetBool("IsSpawning", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_5;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540, (bool)0, NULL);
		// buttonHide.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___buttonHide_8;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// buttonshow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___buttonshow_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// foreach (var item in weaponObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___weaponObjects_6;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0056;
	}

IL_0049:
	{
		// foreach (var item in weaponObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// item.SetActive(true);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0056:
	{
		// foreach (var item in weaponObjects)
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0049;
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void AgentBaseScene2::BossMssage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene2_BossMssage_m5999B9CB16B81F2C6ACCC353CA6C1BBC6A58D58D (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("IsSpawning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral2A0CDBC853C0A98B63F190EAA166093EFF54F540, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AgentBaseScene2::StartMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene2_StartMission_mC846B1DB3D3876C48839D438C293E56524609CC9 (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartMissionScene3.missionScene4Start = true;
		((StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_StaticFields*)il2cpp_codegen_static_fields_for(StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var))->___missionScene4Start_7 = (bool)1;
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_10;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void AgentBaseScene2::PlayAduio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene2_PlayAduio_m25BC16671CD06B29CDBE3AE5C49DAEADEA760C28 (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	{
		// audioBoss.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_0 = __this->___audioBoss_4;
		NullCheck(L_0);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_0, NULL);
		// _truckAduio = true;
		__this->____truckAduio_7 = (bool)1;
		// StartCoroutine(PlayBossAnim());
		RuntimeObject* L_1;
		L_1 = AgentBaseScene2_PlayBossAnim_m05EA2C65DAA846D6C249B38CB5F3C8210CB32A05(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AgentBaseScene2::PlayBossAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentBaseScene2_PlayBossAnim_m05EA2C65DAA846D6C249B38CB5F3C8210CB32A05 (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* L_0 = (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156*)il2cpp_codegen_object_new(U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayBossAnimU3Ed__11__ctor_m4D49DAAFA5EEB2B030121C87E74DA9DB2C07B6E6(L_0, 0, NULL);
		U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AgentBaseScene2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBaseScene2__ctor_m37180CE3B313DC6D73C7D62E7E3E5B6B8493E701 (AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AgentBaseScene2/<PlayBossAnim>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__11__ctor_m4D49DAAFA5EEB2B030121C87E74DA9DB2C07B6E6 (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AgentBaseScene2/<PlayBossAnim>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__11_System_IDisposable_Dispose_mEE4FE3E1C04D329A278F928CB98A66E040A226A9 (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AgentBaseScene2/<PlayBossAnim>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayBossAnimU3Ed__11_MoveNext_m88EA67AB9CC564A8C39186FB4E446DC92B53D6E8 (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26374C159ED7B35A8F2B5D7B5E380B165D486364);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(6);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (6.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetTrigger("IsRotating");
		AgentBaseScene2_t58DDAAEEE1905E09D6A4DC2A777E0DBDFE63CF4B* L_5 = V_1;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___anim_5;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral26374C159ED7B35A8F2B5D7B5E380B165D486364, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AgentBaseScene2/<PlayBossAnim>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayBossAnimU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m75D0AD1AA2DEE585C8A73EB1C6DA0BAFACC1493C (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AgentBaseScene2/<PlayBossAnim>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayBossAnimU3Ed__11_System_Collections_IEnumerator_Reset_mEFFC9C272818E4DEC978F3FAAC0261CCC71CB99E (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayBossAnimU3Ed__11_System_Collections_IEnumerator_Reset_mEFFC9C272818E4DEC978F3FAAC0261CCC71CB99E_RuntimeMethod_var)));
	}
}
// System.Object AgentBaseScene2/<PlayBossAnim>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayBossAnimU3Ed__11_System_Collections_IEnumerator_get_Current_m325C2DE69416ABF0DC6368CF4C643D09BAC6BE53 (U3CPlayBossAnimU3Ed__11_t5BD4AFD604C12438870CCA6B96FC48A6FBCA1156* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EnemyPatroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_Start_mE2B405E308F43780771DC228ACBBD014E911C392 (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_0);
		// UpdateDestination();
		EnemyPatroll_UpdateDestination_mAEB6147E872C231A08BB1C32C4F0FA01FCE56FDF(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyPatroll::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_Update_m37B55E8AB94CCADBE9D51A41D7723DD0FC6209B0 (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) 
{
	{
		// if (Vector3.Distance(transform.position, target) < 1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___target_7;
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_2, NULL);
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// IterateWaypointIndex();
		EnemyPatroll_IterateWaypointIndex_m459028AB52E39A8BC545D54E620BF35C9224C8EF(__this, NULL);
		// UpdateDestination();
		EnemyPatroll_UpdateDestination_mAEB6147E872C231A08BB1C32C4F0FA01FCE56FDF(__this, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void EnemyPatroll::UpdateDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_UpdateDestination_mAEB6147E872C231A08BB1C32C4F0FA01FCE56FDF (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) 
{
	{
		// target = waypoints[waypointIndex].position;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_5;
		int32_t L_1 = __this->___waypointIndex_6;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___target_7 = L_4;
		// agent.SetDestination(target);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = __this->___agent_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___target_7;
		NullCheck(L_5);
		bool L_7;
		L_7 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void EnemyPatroll::IterateWaypointIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll_IterateWaypointIndex_m459028AB52E39A8BC545D54E620BF35C9224C8EF (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) 
{
	{
		// waypointIndex++;
		int32_t L_0 = __this->___waypointIndex_6;
		__this->___waypointIndex_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (waypointIndex == waypoints.Length)
		int32_t L_1 = __this->___waypointIndex_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___waypoints_5;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// waypointIndex = 0;
		__this->___waypointIndex_6 = 0;
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void EnemyPatroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatroll__ctor_m3268A0D53F2792B664637863FCF1260B459E4404 (EnemyPatroll_tEE0AD7A16D31C9838069A096CED05E8C5214C85E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hide::HideALlClones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hide_HideALlClones_mBF01A965FBA0E113EF6233E01DCE3A77D671135E (Hide_t0EADDCF527E220088043E586CEA1FA0AFE625508* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in clones)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___clones_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var item in clones)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.SetActive(false);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (var item in clones)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Hide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hide__ctor_m6584748D90BA3434552014EBD89D4B31F4F36E10 (Hide_t0EADDCF527E220088043E586CEA1FA0AFE625508* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StartMissionScene3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMissionScene3_Start_m8C09AF54F43098DD43B3EEC054F79A6C184B33B4 (StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (missionScene3Start)
		bool L_0 = ((StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_StaticFields*)il2cpp_codegen_static_fields_for(StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var))->___missionScene3Start_6;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// foreach (var item in show)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___show_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// foreach (var item in show)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// item.SetActive(true);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// foreach (var item in show)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// foreach (var item in hide)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___hide_5;
		V_0 = L_9;
		V_1 = 0;
		goto IL_003d;
	}

IL_0030:
	{
		// foreach (var item in hide)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// item.SetActive(false);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003d:
	{
		// foreach (var item in hide)
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_0043:
	{
		// if (missionScene4Start)
		bool L_17 = ((StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_StaticFields*)il2cpp_codegen_static_fields_for(StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var))->___missionScene4Start_7;
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		// foreach (var item in show)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___show_4;
		V_0 = L_18;
		V_1 = 0;
		goto IL_0062;
	}

IL_0055:
	{
		// foreach (var item in show)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// item.SetActive(true);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0062:
	{
		// foreach (var item in show)
		int32_t L_24 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		// foreach (var item in hide)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___hide_5;
		V_0 = L_26;
		V_1 = 0;
		goto IL_0080;
	}

IL_0073:
	{
		// foreach (var item in hide)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		// item.SetActive(false);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0080:
	{
		// foreach (var item in hide)
		int32_t L_32 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0073;
		}
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void StartMissionScene3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMissionScene3__ctor_mFEB0C34AB4E8D3DA99BD6AA9C2109E6CE2FD9520 (StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TriggerAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerAnimation_Update_m52E347A4295228E6FAE828558DDDA774D992F7BE (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, const RuntimeMethod* method) 
{
	{
		// if (_truckAduio)
		bool L_0 = __this->____truckAduio_15;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (!constructorWorker.IsPlaying())
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_1 = __this->___constructorWorker_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = StudioEventEmitter_IsPlaying_m97BA574E515193442FD2DF7B842B9FB2C0E04C1C(L_1, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// buttonshow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___buttonshow_11;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0021:
	{
		// if (papper.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___papper_12;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// missionButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___missionButton_13;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void TriggerAnimation::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerAnimation_OnTriggerEnter_m51C789E16CAF28E784C9AB5BE41924111C3A17B0 (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09CDCAA4FB3B164F6FFF6F2850648E216F9990F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F406B13F8F8D0DE5B8BFF8CEF75D44586D52901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8770ADAB47AF41B48CD0C808702CE7E159001CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("TalkingCell"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral6F406B13F8F8D0DE5B8BFF8CEF75D44586D52901, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// cellPhoneAnim.SetTrigger("IsPlaying");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___cellPhoneAnim_6;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteralE8770ADAB47AF41B48CD0C808702CE7E159001CA, NULL);
		// cellPhone.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_4 = __this->___cellPhone_5;
		NullCheck(L_4);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_4, NULL);
	}

IL_002d:
	{
		// if (other.gameObject.CompareTag("ConstructorWorker"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_other;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_6, _stringLiteral09CDCAA4FB3B164F6FFF6F2850648E216F9990F0, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// StartCoroutine(PlayAnim());
		RuntimeObject* L_8;
		L_8 = TriggerAnimation_PlayAnim_m8A1AA68AB557EA988F7624F67CEE10B4025C2551(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TriggerAnimation::PlayAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriggerAnimation_PlayAnim_m8A1AA68AB557EA988F7624F67CEE10B4025C2551 (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* L_0 = (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21*)il2cpp_codegen_object_new(U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayAnimU3Ed__14__ctor_m1238F2E40C979C5BFF7EE8FA04AF0F61A8B33700(L_0, 0, NULL);
		U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TriggerAnimation::StartMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerAnimation_StartMission_m9D2F5D14280D06C84A8FF61D1D40CD4340AE9C6D (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AgentBaseScene1.practiceScenStart = true;
		((AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_StaticFields*)il2cpp_codegen_static_fields_for(AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var))->___practiceScenStart_14 = (bool)1;
		// StartMissionScene3.missionScene3Start = true;
		((StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_StaticFields*)il2cpp_codegen_static_fields_for(StartMissionScene3_t6D6A36083138744281B8BED1E2995558177C515A_il2cpp_TypeInfo_var))->___missionScene3Start_6 = (bool)1;
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->___sceneName_14;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void TriggerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerAnimation__ctor_m8A55E24960A3485116646617D55BB31EF4C459A2 (TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float waitArgue = 13f, waitTalking = 3.5f;
		__this->___waitArgue_9 = (13.0f);
		// [SerializeField] float waitArgue = 13f, waitTalking = 3.5f;
		__this->___waitTalking_10 = (3.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TriggerAnimation/<PlayAnim>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimU3Ed__14__ctor_m1238F2E40C979C5BFF7EE8FA04AF0F61A8B33700 (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TriggerAnimation/<PlayAnim>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimU3Ed__14_System_IDisposable_Dispose_m47D51F415282419309DA380A7A5DA80E5A47C8DC (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TriggerAnimation/<PlayAnim>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayAnimU3Ed__14_MoveNext_m69764B16F4DB0BB950BFC581E42FA6FCC05E663C (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BE0BFAAEEFE3D375DB01ED82A806D4FE8E7527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A4B33C609026E1B72D9943CEBEEFB980F5B3D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_00a8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// constructorWorker.Play();
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_3 = V_1;
		NullCheck(L_3);
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_4 = L_3->___constructorWorker_4;
		NullCheck(L_4);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_4, NULL);
		// _truckAduio = true;
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_5 = V_1;
		NullCheck(L_5);
		L_5->____truckAduio_15 = (bool)1;
		// constructorAnim1.SetBool("IsArguing", true);
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_6 = V_1;
		NullCheck(L_6);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = L_6->___constructorAnim1_7;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral99A4B33C609026E1B72D9943CEBEEFB980F5B3D9, (bool)1, NULL);
		// yield return new WaitForSeconds(waitArgue);
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___waitArgue_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// constructorAnim1.SetBool("IsArguing", false);
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_11 = V_1;
		NullCheck(L_11);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = L_11->___constructorAnim1_7;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral99A4B33C609026E1B72D9943CEBEEFB980F5B3D9, (bool)0, NULL);
		// constructorAnim2.SetTrigger("IsTalking");
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_13 = V_1;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = L_13->___constructorAnim2_8;
		NullCheck(L_14);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_14, _stringLiteral43BE0BFAAEEFE3D375DB01ED82A806D4FE8E7527, NULL);
		// yield return new WaitForSeconds(waitTalking);
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___waitTalking_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// constructorAnim1.SetTrigger("IsTalking");
		TriggerAnimation_t9896697BD6BF115500E39B3C83CA3BD42004EE6F* L_18 = V_1;
		NullCheck(L_18);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = L_18->___constructorAnim1_7;
		NullCheck(L_19);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_19, _stringLiteral43BE0BFAAEEFE3D375DB01ED82A806D4FE8E7527, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TriggerAnimation/<PlayAnim>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayAnimU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m01A4A288FF595F20DD296C6C3D250B5A979C95AF (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TriggerAnimation/<PlayAnim>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimU3Ed__14_System_Collections_IEnumerator_Reset_m0D46EDCDAE61F1BD8B6EF7A5475097A069DB3D9D (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayAnimU3Ed__14_System_Collections_IEnumerator_Reset_m0D46EDCDAE61F1BD8B6EF7A5475097A069DB3D9D_RuntimeMethod_var)));
	}
}
// System.Object TriggerAnimation/<PlayAnim>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayAnimU3Ed__14_System_Collections_IEnumerator_get_Current_m042279A1EE7AF4FEB4294D1DC0B5CA4D0378F368 (U3CPlayAnimU3Ed__14_t645C56DC402605D4AF06901061D5993FC6567C21* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void WristMenu::PhotoPapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristMenu_PhotoPapper_m8B28413B103E6D97A3AE21547D8DEF6B0B26F43C (WristMenu_t1692A0D1E558787904E2250D4BEC0D1B0AFC4DE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD57B6BDE75928FEF547FB52643B6A8376E0191CA);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_2, L_3, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_5), L_1, L_4, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out RaycastHit hittInfo, layer))
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___layer_7;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_5, (&V_0), ((float)L_7), NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.Log("raycast");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD57B6BDE75928FEF547FB52643B6A8376E0191CA, NULL);
		// showPapper.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___showPapper_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// buttonshow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___buttonshow_5;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void WristMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristMenu__ctor_m9195804B7345FB709AD813B007DCDBC1125CB3F3 (WristMenu_t1692A0D1E558787904E2250D4BEC0D1B0AFC4DE3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun_Start_m19BD2AE04475696EDE890B999E6F6A2C48945E1E (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun_Update_m37D97906022C34B166AA9B015C336225FCFBEE63 (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, const RuntimeMethod* method) 
{
	{
		// spawnPlace.transform.position = spawnPlace.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spawnPlace_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___spawnPlace_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// spawnPlace.transform.rotation = spawnPlace.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___spawnPlace_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spawnPlace_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::GrabThisGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun_GrabThisGun_m899FA8A3B400985C9E69A6967B0F535D76FA26CF (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// icon.sprite = weaponScriptable.image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_6;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_1 = __this->___weaponScriptable_8;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___image_10;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_2, NULL);
		// weapaonName.text = weaponScriptable.name.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___weapaonName_7;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_4 = __this->___weaponScriptable_8;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// _button.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->____button_9;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)1, NULL);
		// foreach (var item in hideWeaponCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___hideWeaponCanvas_11;
		V_0 = L_8;
		V_1 = 0;
		goto IL_007d;
	}

IL_0048:
	{
		// foreach (var item in hideWeaponCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (item.transform.IsChildOf(gun) || item.transform.IsChildOf(mag))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___gun_13;
		NullCheck(L_14);
		bool L_16;
		L_16 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0072;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___mag_12;
		NullCheck(L_18);
		bool L_20;
		L_20 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0079;
		}
	}

IL_0072:
	{
		// item.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_0079:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007d:
	{
		// foreach (var item in hideWeaponCanvas)
		int32_t L_23 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::ReleaseWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun_ReleaseWeapon_m83BAD3550212B94CAA70DD1819913C26D4B22E6A (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, const RuntimeMethod* method) 
{
	{
		// _rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_14;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun_OnCollisionEnter_m1E19EB40C0E2FAAD532B62DB998061D97CBBDC80 (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (collision.gameObject.CompareTag("Floor"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_2)
		{
			goto IL_009a;
		}
	}
	{
		// transform.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parent_5;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// gameObject.transform.position = spawnPlace.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spawnPlace_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// gameObject.transform.rotation = spawnPlace.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___spawnPlace_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_14, NULL);
		// _rb.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->____rb_14;
		NullCheck(L_15);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_15, (bool)1, NULL);
		// foreach (var item in showWeaponCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___showWeaponCanvas_10;
		V_0 = L_16;
		V_1 = 0;
		goto IL_0094;
	}

IL_007d:
	{
		// foreach (var item in showWeaponCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_2 = L_20;
		// if (item.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		bool L_22;
		L_22 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_21, NULL);
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		// item.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
	}

IL_0090:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0094:
	{
		// foreach (var item in showWeaponCanvas)
		int32_t L_25 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_007d;
		}
	}

IL_009a:
	{
		// if (collision.gameObject.CompareTag("Table"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_27 = ___0_collision;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_27, NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_28, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (!L_29)
		{
			goto IL_00b8;
		}
	}
	{
		// _rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->____rb_14;
		NullCheck(L_30);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_30, (bool)0, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.GrabGun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabGun__ctor_m8C2A0F9036323D44249C49723340A788F5F60288 (GrabGun_t0D97FE162A54E779BD606980ECD76F2ABC928369* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.Magazine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magazine_Awake_m6C85D283B4E4C3F01102F35C5A5C4C7048EC3BA0 (Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.Magazine::GrabMagazine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magazine_GrabMagazine_mB040E891403AA800C280B6B63213D9C58D7C5F67 (Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85* __this, const RuntimeMethod* method) 
{
	{
		// _rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_6;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.Magazine::DropMagazine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magazine_DropMagazine_m884A4C13FEC11A290772B2B9D24D15A19D7E6C68 (Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85* __this, const RuntimeMethod* method) 
{
	{
		// _rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_6;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.Magazine::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magazine_OnCollisionEnter_m080B65618870036F2F7A88A0494FFC5F0F7BA8C2 (Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Floor"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		// transform.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parent_5;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// gameObject.transform.position = spawnPlace.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spawnPlace_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// gameObject.transform.rotation = spawnPlace.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___spawnPlace_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_14, NULL);
		// _rb.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->____rb_6;
		NullCheck(L_15);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_15, (bool)1, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.Magazine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magazine__ctor_mE853BAA89D860B07260BD2671065FECC3CCCA165 (Magazine_t7FA617CF948171E337E84BB6D28FFD68A6446C85* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag::MagSocketSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoketMag_MagSocketSelect_mDC751451135404B4B23E01020CAF81FB264BAEEC (ScoketMag_t48296211818F38396069C503E31D82CE40E05117* __this, const RuntimeMethod* method) 
{
	{
		// weaponScriptable.currentAmo = weaponScriptable.maxMag;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_0 = __this->___weaponScriptable_4;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_1 = __this->___weaponScriptable_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___maxMag_8;
		NullCheck(L_0);
		L_0->___currentAmo_7 = L_2;
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag::MagDeSocketSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoketMag_MagDeSocketSelect_m01E976761DC69FA03BC8E5B42618384C79609F9D (ScoketMag_t48296211818F38396069C503E31D82CE40E05117* __this, const RuntimeMethod* method) 
{
	{
		// weaponScriptable.currentAmo = 0;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_0 = __this->___weaponScriptable_4;
		NullCheck(L_0);
		L_0->___currentAmo_7 = 0;
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ScoketMag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoketMag__ctor_mF8DECABD9AFA78C01A208A58B8A8637984ED9ACC (ScoketMag_t48296211818F38396069C503E31D82CE40E05117* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas::ShowCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAndHideCanvas_ShowCanvas_m1469BC3E549D4A175FF43A4A35E674F71EF3B513 (ShowAndHideCanvas_tC731947E911AD83E5BFAD3C543ED02EF49380D64* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in showCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___showCanvas_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (var item in showCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.gameObject.SetActive(true);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// foreach (var item in showCanvas)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas::HideCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAndHideCanvas_HideCanvas_mD0144C9EE03B65360718E86F45A4A590F448E448 (ShowAndHideCanvas_tC731947E911AD83E5BFAD3C543ED02EF49380D64* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in hideCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___hideCanvas_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (var item in hideCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.gameObject.SetActive(false);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// foreach (var item in hideCanvas)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.ShowAndHideCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAndHideCanvas__ctor_m066B843F389724AD5BBEF75667C7FEC5CECC497A (ShowAndHideCanvas_tC731947E911AD83E5BFAD3C543ED02EF49380D64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFire_Start_m53AE3C1EBD47D8F82545192E2DC31E6D7C8B21DD (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFire_Update_mD6AF75065E0A5C31443D49F680EF8941EAA51FD8 (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ammotDisplay.text = weaponScriptable.currentAmo.ToString() + "/" + weaponScriptable.maxMag.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___ammotDisplay_4;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_1 = __this->___weaponScriptable_10;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___currentAmo_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_4 = __this->___weaponScriptable_10;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___maxMag_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_7);
		// if (triggerAction.action.IsPressed() && _rb.useGravity == false && weaponScriptable.currentAmo > 0)
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_8 = (&__this->___triggerAction_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_9, NULL);
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->____rb_18;
		NullCheck(L_11);
		bool L_12;
		L_12 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_11, NULL);
		if (L_12)
		{
			goto IL_0097;
		}
	}
	{
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_13 = __this->___weaponScriptable_10;
		NullCheck(L_13);
		int32_t L_14 = L_13->___currentAmo_7;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		// if (Time.time > _nextFire)
		float L_15;
		L_15 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_16 = __this->____nextFire_17;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_0097;
		}
	}
	{
		// _nextFire = Time.time + weaponScriptable.fireRate;
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_18 = __this->___weaponScriptable_10;
		NullCheck(L_18);
		float L_19 = L_18->___fireRate_5;
		__this->____nextFire_17 = ((float)il2cpp_codegen_add(L_17, L_19));
		// shoot();
		WeaponFire_shoot_m8FF84E4E8D64324601158F52806D80DBF7A782B7(__this, NULL);
		// gunFireSound.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_20 = __this->___gunFireSound_5;
		NullCheck(L_20);
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_20, NULL);
	}

IL_0097:
	{
		// if (!triggerAction.action.IsPressed() && _rb.useGravity == false || weaponScriptable.currentAmo == 0)
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_21 = (&__this->___triggerAction_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_21, NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_22, NULL);
		if (L_23)
		{
			goto IL_00b6;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->____rb_18;
		NullCheck(L_24);
		bool L_25;
		L_25 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_24, NULL);
		if (!L_25)
		{
			goto IL_00c3;
		}
	}

IL_00b6:
	{
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_26 = __this->___weaponScriptable_10;
		NullCheck(L_26);
		int32_t L_27 = L_26->___currentAmo_7;
		if (L_27)
		{
			goto IL_00ce;
		}
	}

IL_00c3:
	{
		// gunFireSound.Stop();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_28 = __this->___gunFireSound_5;
		NullCheck(L_28);
		StudioEventEmitter_Stop_mECC28C7A304B00140CFC742A72D25C9F9C1456E9(L_28, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFire_shoot_m8FF84E4E8D64324601158F52806D80DBF7A782B7 (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7_mD8258264367421ABB5FAC5322AB61A01864CF481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD3FC96CCD17F83E718649AC95AA6F5078D1874);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECDEF422DB65EC6CDB2595950AC5EB942D994EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F406B13F8F8D0DE5B8BFF8CEF75D44586D52901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// Ray ray = new Ray(transform.position, transform.TransformDirection(Vector3.forward));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_2, L_3, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_0), L_1, L_4, NULL);
		// if (weaponScriptable.currentAmo > 0)
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_5 = __this->___weaponScriptable_10;
		NullCheck(L_5);
		int32_t L_6 = L_5->___currentAmo_7;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_01ec;
		}
	}
	{
		// muzzleFlash.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___muzzleFlash_6;
		NullCheck(L_7);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_7, NULL);
		// casing.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___casing_7;
		NullCheck(L_8);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_8, NULL);
		// weaponScriptable.currentAmo--;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_9 = __this->___weaponScriptable_10;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___currentAmo_7;
		NullCheck(L_10);
		L_10->___currentAmo_7 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		// ammotDisplay.text = weaponScriptable.currentAmo.ToString() + "/" + weaponScriptable.maxMag.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___ammotDisplay_4;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_13 = __this->___weaponScriptable_10;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___currentAmo_7);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_16 = __this->___weaponScriptable_10;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___maxMag_8);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_18, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_19);
		// if (Physics.Raycast(ray, out RaycastHit hittInfo, weaponScriptable.hitRange, layer))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_20 = V_0;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_21 = __this->___weaponScriptable_10;
		NullCheck(L_21);
		float L_22 = L_21->___hitRange_6;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_23 = __this->___layer_11;
		int32_t L_24;
		L_24 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_23, NULL);
		bool L_25;
		L_25 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_20, (&V_1), L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_01ec;
		}
	}
	{
		// EnemyDamage damage = hittInfo.transform.GetComponent<EnemyDamage>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_26);
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_27;
		L_27 = Component_GetComponent_TisEnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7_mD8258264367421ABB5FAC5322AB61A01864CF481(L_26, Component_GetComponent_TisEnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7_mD8258264367421ABB5FAC5322AB61A01864CF481_RuntimeMethod_var);
		V_2 = L_27;
		// Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hittInfo.distance, Color.blue);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_30, L_31, NULL);
		float L_33;
		L_33 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_29, L_34, L_35, NULL);
		// GameObject impactPool = BulletImpactObjectPool.impactInstance.GetBulletImapctPool();
		BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* L_36 = ((BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_StaticFields*)il2cpp_codegen_static_fields_for(BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var))->___impactInstance_4;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = BulletImpactObjectPool_GetBulletImapctPool_m12A5916F845D3A44EBE4F2A91146A96264F95B79(L_36, NULL);
		V_3 = L_37;
		// if (impactPool != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_016a;
		}
	}
	{
		// impactPool.transform.position = hittInfo.point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_3;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_42, NULL);
		// impactPool.transform.forward = hittInfo.normal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		NullCheck(L_44);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_44, L_45, NULL);
		// impactPool.transform.position += impactPool.transform.forward / 1000;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_3;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = L_47;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_3;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (1000.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_53, NULL);
		NullCheck(L_48);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_54, NULL);
		// impactPool.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = V_3;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)1, NULL);
		// StartCoroutine(ImpactSetActive(impactPool));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_3;
		RuntimeObject* L_57;
		L_57 = WeaponFire_ImpactSetActive_m019414D19372F3485909E9D916513289DA55A32F(__this, L_56, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_58;
		L_58 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_57, NULL);
	}

IL_016a:
	{
		// if (damage != null)
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_59 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_019c;
		}
	}
	{
		// if (hittInfo.collider.tag == "EnemyBody")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_61;
		L_61 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_61);
		String_t* L_62;
		L_62 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_61, NULL);
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral3DD3FC96CCD17F83E718649AC95AA6F5078D1874, NULL);
		if (!L_63)
		{
			goto IL_019c;
		}
	}
	{
		// damage.TakeDamage(weaponScriptable.damage);
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_64 = V_2;
		GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* L_65 = __this->___weaponScriptable_10;
		NullCheck(L_65);
		float L_66 = L_65->___damage_4;
		NullCheck(L_64);
		EnemyDamage_TakeDamage_m03DB4F568FE57186F465E7398E849D5154740520(L_64, L_66, NULL);
	}

IL_019c:
	{
		// if (hittInfo.collider.tag == "TalkingCell")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_67;
		L_67 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_67, NULL);
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral6F406B13F8F8D0DE5B8BFF8CEF75D44586D52901, NULL);
		if (!L_69)
		{
			goto IL_01c4;
		}
	}
	{
		// cloneAnim.SetTrigger("IsDying");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_70 = __this->___cloneAnim_15;
		NullCheck(L_70);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_70, _stringLiteral6ECDEF422DB65EC6CDB2595950AC5EB942D994EB, NULL);
	}

IL_01c4:
	{
		// if (hittInfo.collider.tag == "Table")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_71;
		L_71 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_71, NULL);
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (!L_73)
		{
			goto IL_01ec;
		}
	}
	{
		// bossANim.SetTrigger("IsDying");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_74 = __this->___bossANim_16;
		NullCheck(L_74);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_74, _stringLiteral6ECDEF422DB65EC6CDB2595950AC5EB942D994EB, NULL);
	}

IL_01ec:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::ImpactSetActive(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeaponFire_ImpactSetActive_m019414D19372F3485909E9D916513289DA55A32F (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* L_0 = (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D*)il2cpp_codegen_object_new(U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CImpactSetActiveU3Ed__18__ctor_m91A4A2753D294750A42D1821433C8B519BAC194A(L_0, 0, NULL);
		U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_1);
		L_1->___gameObject_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___gameObject_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFire__ctor_m08DB71CAA8FEAB5711A26F69E0917C07B4139DCD (WeaponFire_t2A741DDCDF60A5176B076947398E6444BD32417C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImpactSetActiveU3Ed__18__ctor_m91A4A2753D294750A42D1821433C8B519BAC194A (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImpactSetActiveU3Ed__18_System_IDisposable_Dispose_m70A4311BFDCF124737C497826BC4098F1188A7F8 (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CImpactSetActiveU3Ed__18_MoveNext_mB22B08DDEC032F4B96458BF9C7A8508B6B04979F (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameObject_2;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImpactSetActiveU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m846C73CF009BAD8ED3276128AB7AB8C1BD3A1E00 (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImpactSetActiveU3Ed__18_System_Collections_IEnumerator_Reset_m494B8F1FAAA85B08B094214DB1CDD89CED03EEEE (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CImpactSetActiveU3Ed__18_System_Collections_IEnumerator_Reset_m494B8F1FAAA85B08B094214DB1CDD89CED03EEEE_RuntimeMethod_var)));
	}
}
// System.Object Assets.FPX_Game.Scripts.WeaponScripts.WeaponFire/<ImpactSetActive>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CImpactSetActiveU3Ed__18_System_Collections_IEnumerator_get_Current_m970DE5B61433418231AE97EC706362DD96589191 (U3CImpactSetActiveU3Ed__18_tBF52049DDC128A6E88589F4B1A0225362289F23D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::WeapoonSetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponHolder_WeapoonSetActive_mFA92D0F89A4B13B88CAD0F13A1A8CFF1AC67BB61 (WeaponHolder_tDEBB1C2AA61B341738E90AE386A8AF0393592632* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// foreach (var item in canvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___canvas_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0057;
	}

IL_000b:
	{
		// foreach (var item in canvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (item.activeInHierarchy && !canvasShowButton.action.WasPressedThisFrame())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_5, NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_7 = (&__this->___canvasShowButton_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_8, NULL);
		if (L_9)
		{
			goto IL_0032;
		}
	}
	{
		// item.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		goto IL_0053;
	}

IL_0032:
	{
		// else if (!item.activeInHierarchy && !canvasShowButton.action.WasPressedThisFrame())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		if (L_12)
		{
			goto IL_0053;
		}
	}
	{
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_13 = (&__this->___canvasShowButton_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_14, NULL);
		if (L_15)
		{
			goto IL_0053;
		}
	}
	{
		// item.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// foreach (var item in canvas)
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var items in hideCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___hideCanvas_5;
		V_0 = L_20;
		V_1 = 0;
		goto IL_009d;
	}

IL_0068:
	{
		// foreach (var items in hideCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		// if ( items.transform.IsChildOf(gun) || items.transform.IsChildOf(mag))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___gun_8;
		NullCheck(L_26);
		bool L_28;
		L_28 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_26, L_27, NULL);
		if (L_28)
		{
			goto IL_0092;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___mag_7;
		NullCheck(L_30);
		bool L_32;
		L_32 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_0099;
		}
	}

IL_0092:
	{
		// items.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
	}

IL_0099:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_009d:
	{
		// foreach (var items in hideCanvas)
		int32_t L_35 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0068;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponHolder__ctor_mA0BDB4423E7BD7BDD916740AF5F4A23604E678AC (WeaponHolder_tDEBB1C2AA61B341738E90AE386A8AF0393592632* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_Start_m80C4F2CE0323B6F95140CA31C46D1403FEE165DF (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) 
{
	{
		// ButtonDisable();
		WeaponWheelCanvas_ButtonDisable_mE9922996701B3BE6DF9B59910A4A055AC0917F0E(__this, NULL);
		// HideImage();
		WeaponWheelCanvas_HideImage_m2A02ED42221DE6BE55F809B66478C050D6CC1BE4(__this, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_Update_m65596E34FF908990D4465D6F92B402FDB5D07364 (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) 
{
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____camera_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_6, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_7, NULL);
		// if (showButton.action.WasPressedThisFrame())
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_8 = (&__this->___showButton_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_9, NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// if (canvas.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___canvas_5;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// canvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___canvas_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		return;
	}

IL_005c:
	{
		// else if (!canvas.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___canvas_5;
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_14, NULL);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		// canvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___canvas_5;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::ButtonDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_ButtonDisable_mE9922996701B3BE6DF9B59910A4A055AC0917F0E (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) 
{
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in button)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_0 = __this->___button_8;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var item in button)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.interactable = false;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (var item in button)
		int32_t L_6 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::HideImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas_HideImage_m2A02ED42221DE6BE55F809B66478C050D6CC1BE4 (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in images)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___images_7;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (var item in images)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.gameObject.SetActive(false);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// foreach (var item in images)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.WeaponScripts.WeaponWheelCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponWheelCanvas__ctor_mD18E281D3865BED0AD9EE262061EA9738CA9F51A (WeaponWheelCanvas_tAEE32316FEC1D7D5622AA674976BF0F4694604DC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.ScriptableObjects.ChampScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChampScriptableObject__ctor_m7BA3C3DFCBBFAE4B81057DE68C397C067CE89C41 (ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.ScriptableObjects.EnemyScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScriptableObject__ctor_m82B13CA4456A6C1DD150F063BB9CAEBA9F80C068 (EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.ScriptableObjects.GunScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunScriptableObject__ctor_m2532F8386CDB87D37843DEB1378BE2D07E91F778 (GunScriptableObject_tC62528DADB12892116110815BB08F0A5CA9FB9EF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Start_m7F7A0055884438B0F1440DFCAAF0A6FA90F010CE (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, const RuntimeMethod* method) 
{
	{
		// champScriptableObject.health = champScriptableObject.maxhealth;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_0 = __this->___champScriptableObject_4;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_1 = __this->___champScriptableObject_4;
		NullCheck(L_1);
		float L_2 = L_1->___maxhealth_5;
		NullCheck(L_0);
		L_0->___health_4 = L_2;
		// damageHealthDisplay.text = champScriptableObject.health.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___damageHealthDisplay_7;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_4 = __this->___champScriptableObject_4;
		NullCheck(L_4);
		float* L_5 = (&L_4->___health_4);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// enemyScriptableObject.countEnemyAttacks = 0;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_7 = __this->___enemyScriptableObject_5;
		NullCheck(L_7);
		L_7->___countEnemyAttacks_11 = (0.0f);
		// slider.maxValue = champScriptableObject.maxhealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___slider_6;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_9 = __this->___champScriptableObject_4;
		NullCheck(L_9);
		float L_10 = L_9->___maxhealth_5;
		NullCheck(L_8);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_8, L_10, NULL);
		// slider.value = champScriptableObject.health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___slider_6;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_12 = __this->___champScriptableObject_4;
		NullCheck(L_12);
		float L_13 = L_12->___health_4;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_mF33F9A10F4DA918834ADBB8253EA8FF5384DEC1B (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// champScriptableObject.health -= amount;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_0 = __this->___champScriptableObject_4;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->___health_4;
		float L_3 = ___0_amount;
		NullCheck(L_1);
		L_1->___health_4 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// if (champScriptableObject.health >= 0)
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_4 = __this->___champScriptableObject_4;
		NullCheck(L_4);
		float L_5 = L_4->___health_4;
		if ((!(((float)L_5) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// damageHealthDisplay.text = champScriptableObject.health.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___damageHealthDisplay_7;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_7 = __this->___champScriptableObject_4;
		NullCheck(L_7);
		float* L_8 = (&L_7->___health_4);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_9);
	}

IL_0040:
	{
		// slider.value = champScriptableObject.health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___slider_6;
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_11 = __this->___champScriptableObject_4;
		NullCheck(L_11);
		float L_12 = L_11->___health_4;
		NullCheck(L_10);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_10, L_12);
		// if (champScriptableObject.health <= 0)
		ChampScriptableObject_t55B222E5E13011180C81207CEC39CC6C300BE2DD* L_13 = __this->___champScriptableObject_4;
		NullCheck(L_13);
		float L_14 = L_13->___health_4;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// StartCoroutine(GameOver());
		RuntimeObject* L_15;
		L_15 = PlayerHealth_GameOver_mEFADEED7A66F3F3D67E9573E0C5A0ECE2EC3BDA1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.Player.PlayerHealth::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_GameOver_mEFADEED7A66F3F3D67E9573E0C5A0ECE2EC3BDA1 (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* L_0 = (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03*)il2cpp_codegen_object_new(U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameOverU3Ed__8__ctor_m9BC90092B9DFD5C521B3F2F19A7C85349A015A00(L_0, 0, NULL);
		U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth__ctor_m0924112A328F4A0B596FB418E6EAB5DDD09FA951 (PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__8__ctor_m9BC90092B9DFD5C521B3F2F19A7C85349A015A00 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__8_System_IDisposable_Dispose_mA4E68A621382FD76CB2368DF7EF58E41768053E8 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameOverU3Ed__8_MoveNext_m78F3BFEE8C9DF4FA5AB4EFB5060AEF1E5DF70CA9 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// show.SetActive(true);
		PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___show_8;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// foreach (var item in hide)
		PlayerHealth_t986853C8B0D71730A249927C1CDCD6E2F50BB6E6* L_7 = V_1;
		NullCheck(L_7);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = L_7->___hide_9;
		V_2 = L_8;
		V_3 = 0;
		goto IL_0062;
	}

IL_0055:
	{
		// foreach (var item in hide)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// item.SetActive(false);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0062:
	{
		// foreach (var item in hide)
		int32_t L_14 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m74549CAE93E86CE56746894993CD0E033D830C79 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverU3Ed__8_System_Collections_IEnumerator_Reset_m83C9E884ECEFD10995DE6016A2A146B2847A4F72 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameOverU3Ed__8_System_Collections_IEnumerator_Reset_m83C9E884ECEFD10995DE6016A2A146B2847A4F72_RuntimeMethod_var)));
	}
}
// System.Object Assets.FPX_Game.Scripts.Player.PlayerHealth/<GameOver>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverU3Ed__8_System_Collections_IEnumerator_get_Current_m5A4F8AF5FCD55BF940A243DDA08B88699EF24313 (U3CGameOverU3Ed__8_t32EC3D3EFEA1315516A96228F6CEE6586D849D03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletImpactObjectPool_Awake_m29E39E276320DDE2EE06288D29ADE6237042108D (BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (impactInstance == null)
		BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* L_0 = ((BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_StaticFields*)il2cpp_codegen_static_fields_for(BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var))->___impactInstance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// impactInstance = this;
		((BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_StaticFields*)il2cpp_codegen_static_fields_for(BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var))->___impactInstance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_StaticFields*)il2cpp_codegen_static_fields_for(BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC_il2cpp_TypeInfo_var))->___impactInstance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletImpactObjectPool_Start_m29F96D287EFDB4A9DBA554B6B18E97DA558D2CBA (BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for (int i = 0; i < _amounBulletImapctToPool; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// GameObject obj = Instantiate(bulletImapctPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bulletImapctPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_1;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// bulletImapctPooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___bulletImapctPooledObjects_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < _amounBulletImapctToPool; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < _amounBulletImapctToPool; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____amounBulletImapctToPool_7;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::GetBulletImapctPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BulletImpactObjectPool_GetBulletImapctPool_m12A5916F845D3A44EBE4F2A91146A96264F95B79 (BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bulletImapctPooledObjects.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!bulletImapctPooledObjects[i].activeInHierarchy)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___bulletImapctPooledObjects_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return bulletImapctPooledObjects[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___bulletImapctPooledObjects_5;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < bulletImapctPooledObjects.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < bulletImapctPooledObjects.Count; i++)
		int32_t L_8 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___bulletImapctPooledObjects_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void Assets.FPX_Game.Scripts.ObjectPools.BulletImpactObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletImpactObjectPool__ctor_m502F97E72A0CF6087448F28DB4622CC468E9E8CD (BulletImpactObjectPool_tDD9B60611DCB799214B2A66074502DBA28D1C8DC* __this, const RuntimeMethod* method) 
{
	{
		// private int _amounBulletImapctToPool = 60;
		__this->____amounBulletImapctToPool_7 = ((int32_t)60);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyObjectPool_Awake_m37700F9DED0DA7C1967C419561830E21F4750260 (EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemyInstance == null)
		EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* L_0 = ((EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_StaticFields*)il2cpp_codegen_static_fields_for(EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var))->___enemyInstance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// enemyInstance = this;
		((EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_StaticFields*)il2cpp_codegen_static_fields_for(EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var))->___enemyInstance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_StaticFields*)il2cpp_codegen_static_fields_for(EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176_il2cpp_TypeInfo_var))->___enemyInstance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyObjectPool_Start_mCEAFD495AE16EF154C21CBE105CC11FF73208F76 (EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for (int i = 0; i < _amountEnemyToPool; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// GameObject obj = Instantiate(enemyPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemyPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_1;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// enemyPooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___enemyPooledObjects_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < _amountEnemyToPool; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < _amountEnemyToPool; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____amountEnemyToPool_7;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::GetEnemyPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyObjectPool_GetEnemyPool_m07147AA919AB8710798ADDB890A929BD982C83DE (EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < enemyPooledObjects.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!enemyPooledObjects[i].activeInHierarchy)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemyPooledObjects_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return enemyPooledObjects[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___enemyPooledObjects_5;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < enemyPooledObjects.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < enemyPooledObjects.Count; i++)
		int32_t L_8 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___enemyPooledObjects_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void Assets.FPX_Game.Scripts.ObjectPools.EnemyObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyObjectPool__ctor_m3F2B133A18D1B3F6C7409FCAE934736FE21BB6D5 (EnemyObjectPool_tD62C4721FB103895623C8C8EB202D2F212897176* __this, const RuntimeMethod* method) 
{
	{
		// private int _amountEnemyToPool = 25;
		__this->____amountEnemyToPool_7 = ((int32_t)25);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.GameManagers.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m0512575B3F99FC5B91220193C886474F9997E51B (GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameManagersInstance == null)
		GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* L_0 = ((GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var))->___gameManagersInstance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// gameManagersInstance = this;
		((GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var))->___gameManagersInstance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var))->___gameManagersInstance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.GameManagers.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mD3B9C16D9899242024FDF8B64B82CF6BA57425B2 (GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.GameManagers.Game_Over::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Over_Exit_m54B62CD138CCB4F3950BC4A79935173509A882A5 (Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.GameManagers.Game_Over::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Over_LoadScene_m9223B08E55CB4F01B36EDB846AE1DF854289CE99 (Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(name);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.GameManagers.Game_Over::StartPractice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Over_StartPractice_m5D6E1197DB2E8146572B7615B04F1B9645A2CB1B (Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AgentBaseScene1.practiceScenStart = true;
		((AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_StaticFields*)il2cpp_codegen_static_fields_for(AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var))->___practiceScenStart_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.GameManagers.Game_Over::StartMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Over_StartMission_m586DD66981DC6FFE68D8847216388A7D4363A95E (Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AgentBaseScene1.practiceScenStart = false;
		((AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_StaticFields*)il2cpp_codegen_static_fields_for(AgentBaseScene1_t186C1BC18ADC2742DF63120EF3863AC022728C3C_il2cpp_TypeInfo_var))->___practiceScenStart_14 = (bool)0;
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.GameManagers.Game_Over::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Over__ctor_mFACAC957427A295E05ACFE7D2E2D3133EAF9F767 (Game_Over_tA58F6657CD2132FA5854BC962641F6E423755057* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_Start_m01B3DC77F60B9FBCA233213CBA9BE161C33F7CED (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spawnEnemyScript = GameManager.gameManagersInstance.SpawnEnemyScript;
		GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C* L_0 = ((GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t81689E6C8FCA9544D547BB95C186C77B6EB8D68C_il2cpp_TypeInfo_var))->___gameManagersInstance_4;
		NullCheck(L_0);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_1 = L_0->___SpawnEnemyScript_6;
		__this->____spawnEnemyScript_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnEnemyScript_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_OnEnable_mB8A5537C5DBDC70D0BC83A7B1785F35E2C9F88F2 (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____anim_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anim_10), (void*)L_0);
		// _enemy = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1;
		L_1 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->____enemy_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemy_11), (void*)L_1);
		// _enemy.speed = 0.3f;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->____enemy_11;
		NullCheck(L_2);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_2, (0.300000012f), NULL);
		// health = maxhealth;
		float L_3 = __this->___maxhealth_9;
		__this->___health_8 = L_3;
		// damageHealthDisplay.text = health.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___damageHealthDisplay_5;
		float* L_5 = (&__this->___health_8);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// slider.maxValue = maxhealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___slider_4;
		float L_8 = __this->___maxhealth_9;
		NullCheck(L_7);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_7, L_8, NULL);
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___slider_4;
		float L_10 = __this->___health_8;
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_10);
		// slider.gameObject.SetActive(true);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___slider_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage_TakeDamage_m03DB4F568FE57186F465E7398E849D5154740520 (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// health -= amount;
		float L_0 = __this->___health_8;
		float L_1 = ___0_amount;
		__this->___health_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (health >= 0)
		float L_2 = __this->___health_8;
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// damageHealthDisplay.text = health.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___damageHealthDisplay_5;
		float* L_4 = (&__this->___health_8);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
	}

IL_0031:
	{
		// slider.value = health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_4;
		float L_7 = __this->___health_8;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_7);
		// if (health <= 0)
		float L_8 = __this->___health_8;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		// StartCoroutine(Die());
		RuntimeObject* L_9;
		L_9 = EnemyDamage_Die_mD2797392C2B9B480956B3C420812A75BBE80BA60(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// zombieTalk.Stop();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_11 = __this->___zombieTalk_7;
		NullCheck(L_11);
		StudioEventEmitter_Stop_mECC28C7A304B00140CFC742A72D25C9F9C1456E9(L_11, NULL);
	}

IL_0067:
	{
		// StartCoroutine(TextDeactivee());
		RuntimeObject* L_12;
		L_12 = EnemyDamage_TextDeactivee_m8666300A7BE19E42510AAC338840CDDED9191E3E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDamage_Die_mD2797392C2B9B480956B3C420812A75BBE80BA60 (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* L_0 = (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F*)il2cpp_codegen_object_new(U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDieU3Ed__12__ctor_mAC8AB70BC1CB74EFCA9585507ED60F4272287F12(L_0, 0, NULL);
		U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::TextDeactivee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDamage_TextDeactivee_m8666300A7BE19E42510AAC338840CDDED9191E3E (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* L_0 = (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0*)il2cpp_codegen_object_new(U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTextDeactiveeU3Ed__13__ctor_mFBA752494BBAA32559542909B29F71DC3736AC2A(L_0, 0, NULL);
		U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDamage__ctor_m9CA909DAED09D95EC96AB1324E0EFDC13B0D3DEF (EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__12__ctor_mAC8AB70BC1CB74EFCA9585507ED60F4272287F12 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__12_System_IDisposable_Dispose_mEF6D40A04900A62FFECBBE1F0689CECB3A4002A8 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDieU3Ed__12_MoveNext_mE5AE0C502D2269C00BDB06170015DBC7F44FD7D7 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D938C0E72616EDCD76DC409C60985643501A4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _anim.SetBool("IsDead", true);
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->____anim_10;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralB28D938C0E72616EDCD76DC409C60985643501A4, (bool)1, NULL);
		// _enemy.speed = 0;
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_6 = V_1;
		NullCheck(L_6);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_7 = L_6->____enemy_11;
		NullCheck(L_7);
		NavMeshAgent_set_speed_m820E45289B3AE7DEE16F2F4BF163EAC361E64646(L_7, (0.0f), NULL);
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// enemyScriptableObject.countEnemy--;
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_11 = V_1;
		NullCheck(L_11);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_12 = L_11->___enemyScriptableObject_6;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___countEnemy_9;
		NullCheck(L_13);
		L_13->___countEnemy_9 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// if (enemyScriptableObject.isCompleted)
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_15 = V_1;
		NullCheck(L_15);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_16 = L_15->___enemyScriptableObject_6;
		NullCheck(L_16);
		bool L_17 = L_16->___isCompleted_19;
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		// enemyScriptableObject.countEnemy2--;
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_18 = V_1;
		NullCheck(L_18);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_19 = L_18->___enemyScriptableObject_6;
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___countEnemy2_10;
		NullCheck(L_20);
		L_20->___countEnemy2_10 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_009e:
	{
		// if (enemyScriptableObject.countEnemy == 0)
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_22 = V_1;
		NullCheck(L_22);
		EnemyScriptableObject_t484EE32B76A0397220067C759E15C8C063D4C7DC* L_23 = L_22->___enemyScriptableObject_6;
		NullCheck(L_23);
		int32_t L_24 = L_23->___countEnemy_9;
		if (L_24)
		{
			goto IL_00b6;
		}
	}
	{
		// _spawnEnemyScript.StartLevelCountDownLV2();
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_25 = V_1;
		NullCheck(L_25);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_26 = L_25->____spawnEnemyScript_12;
		NullCheck(L_26);
		SpawnEnemy_StartLevelCountDownLV2_m4737DA4652F56A27044E2F4C1884CF88A83C1881(L_26, NULL);
	}

IL_00b6:
	{
		// }
		return (bool)0;
	}
}
// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDieU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m869F6A9ED6F64609035C7124AD16C3B08D0653E3 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__12_System_Collections_IEnumerator_Reset_m9109669A3B43EF3DE6977E0D8695B14C67364C7D (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDieU3Ed__12_System_Collections_IEnumerator_Reset_m9109669A3B43EF3DE6977E0D8695B14C67364C7D_RuntimeMethod_var)));
	}
}
// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<Die>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDieU3Ed__12_System_Collections_IEnumerator_get_Current_mF29EFB4E3A0625004A1A42C31AC57DF19BCB54C3 (U3CDieU3Ed__12_tB11978CA1F7818663D11F1D3B49CF4D14761076F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextDeactiveeU3Ed__13__ctor_mFBA752494BBAA32559542909B29F71DC3736AC2A (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextDeactiveeU3Ed__13_System_IDisposable_Dispose_m0751A9650F4C37A95EAF9F72262E4D54A7569CA6 (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextDeactiveeU3Ed__13_MoveNext_m0739E5DC309F0E7B6901237F68EEB8F803162F79 (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (health == 0)
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___health_8;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// slider.gameObject.SetActive(false);
		EnemyDamage_t3B74D12A7705D0E4FF71B5015EAB0DA6DBC8DDA7* L_7 = V_1;
		NullCheck(L_7);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = L_7->___slider_4;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_005c:
	{
		// }
		return (bool)0;
	}
}
// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextDeactiveeU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E9108A3B182CEDA05F670BECEE5FC68D779CA62 (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextDeactiveeU3Ed__13_System_Collections_IEnumerator_Reset_m2ABFDDB784F5554CA4AEA8B848E7F7396395B66F (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextDeactiveeU3Ed__13_System_Collections_IEnumerator_Reset_m2ABFDDB784F5554CA4AEA8B848E7F7396395B66F_RuntimeMethod_var)));
	}
}
// System.Object Assets.FPX_Game.Scripts.TargetScripts.EnemyDamage/<TextDeactivee>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextDeactiveeU3Ed__13_System_Collections_IEnumerator_get_Current_mE99518C9BF9ADBEF5C736AA552E2564AB365A051 (U3CTextDeactiveeU3Ed__13_tA7F1565A4A7FEB5C899A61B2B1EA8ABC937AF0B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Start_m5249D6542C20C6695D44F8D41775A22DB4D041D5 (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (practiceScenStart)
		bool L_0 = ((GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122_StaticFields*)il2cpp_codegen_static_fields_for(GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122_il2cpp_TypeInfo_var))->___practiceScenStart_10;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// PracticeScen();
		GameMenuManager_PracticeScen_m040537BF01A6644EF21D6D6C41DE91173BC0DE4C(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Update_m632B7470E27F2D4C1AD2662116C967172BBF6627 (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - _camera.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____camera_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_6, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_7, NULL);
		// if (showButton.action.WasPressedThisFrame())
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_8 = (&__this->___showButton_8);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_9, NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// if (menu.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___menu_5;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___menu_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		return;
	}

IL_005c:
	{
		// else if (!menu.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___menu_5;
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_14, NULL);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___menu_5;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Exit_m0FA33A55BACC841D964DECE41DA45B0F4996E99B (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_Restart_m7751FD70EFDD56E62B97CEF9C0D1A1DD4576696E (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadYourAsyncScene());
		RuntimeObject* L_0;
		L_0 = GameMenuManager_LoadYourAsyncScene_m58D69BEB65E4C4F935DC7B0A04454E60F9F6B8E8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_ResumeGame_m90E184EB1256A17630A2E3C0B6B1329806D4705F (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_PauseGame_m93F7437C5BCA715851067E478FAB9631F593E52B (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_LoadScene_mA75B9F1D01434A38EF57EA020DECC837B26B76EB (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(name);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::LoadYourAsyncScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameMenuManager_LoadYourAsyncScene_m58D69BEB65E4C4F935DC7B0A04454E60F9F6B8E8 (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* L_0 = (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3*)il2cpp_codegen_object_new(U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadYourAsyncSceneU3Ed__14__ctor_mE62EA01B139F9DB931CC632D236E762C67CB3E74(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::PracticeScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager_PracticeScen_m040537BF01A6644EF21D6D6C41DE91173BC0DE4C (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		// wristHide.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wristHide_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// wristShow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___wristShow_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuManager__ctor_m80009E52E452321F941C32A6D3F123FBF9B502C5 (GameMenuManager_t473FBEC94EBF501758D7219BBC5B60C4791E5122* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadYourAsyncSceneU3Ed__14__ctor_mE62EA01B139F9DB931CC632D236E762C67CB3E74 (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadYourAsyncSceneU3Ed__14_System_IDisposable_Dispose_m12229B1CECC2520192FA844D786D2DCDAB768BC1 (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadYourAsyncSceneU3Ed__14_MoveNext_m6835CB55A24CCE1CD80433E9514FB9D71F972C72 (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292D4A7C65EB921A1EF34A3419D9511AE209F0C2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Lobby");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(_stringLiteral292D4A7C65EB921A1EF34A3419D9511AE209F0C2, NULL);
		__this->___U3CasyncLoadU3E5__2_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncLoadU3E5__2_2), (void*)L_3);
		goto IL_0040;
	}

IL_0029:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0040:
	{
		// while (!asyncLoad.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4 = __this->___U3CasyncLoadU3E5__2_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadYourAsyncSceneU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC764197A09280818A701F5F7F7F8F3C393DF2A00 (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadYourAsyncSceneU3Ed__14_System_Collections_IEnumerator_Reset_mE60BD0EF08B1886A4C262602BB50E90836552F6E (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadYourAsyncSceneU3Ed__14_System_Collections_IEnumerator_Reset_mE60BD0EF08B1886A4C262602BB50E90836552F6E_RuntimeMethod_var)));
	}
}
// System.Object Assets.FPX_Game.Scripts.ControllerScripts.GameMenuManager/<LoadYourAsyncScene>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadYourAsyncSceneU3Ed__14_System_Collections_IEnumerator_get_Current_m842A1C355213A231F8E17C32BAAE83897863E63C (U3CLoadYourAsyncSceneU3Ed__14_tF8234AD2A7F410FDACDADB0202C9A5B8F651ECD3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_mB47CDA0AFAB947F7C439E978BD12D5589EFAF534 (HandController_tB75E3324B562C99DAD054E0A62AAD4D01CECB031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.HandController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Update_mE5DF4B7C9643611E389AAADA77473E67957DC6C8 (HandController_tB75E3324B562C99DAD054E0A62AAD4D01CECB031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float triggerValue = triggerAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___triggerAction_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// float gripValue = gripAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_3 = (&__this->___gripAction_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_4, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_1 = L_5;
		// anim.SetFloat("Trigger", triggerValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_6;
		float L_7 = V_0;
		NullCheck(L_6);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_6, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_7, NULL);
		// anim.SetFloat("Grip", gripValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_6;
		float L_9 = V_1;
		NullCheck(L_8);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_9, NULL);
		// }
		return;
	}
}
// System.Void Assets.FPX_Game.Scripts.ControllerScripts.HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_m1672E6065D0B6D6BEF52DF91CAAEE5ECC143D33C (HandController_tB75E3324B562C99DAD054E0A62AAD4D01CECB031* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
