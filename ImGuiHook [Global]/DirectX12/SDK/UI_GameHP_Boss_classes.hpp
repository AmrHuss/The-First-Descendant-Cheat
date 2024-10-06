#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Boss

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameHP_Boss.UI_GameHP_Boss_C
// 0x00F0 (0x0A00 - 0x0910)
class UUI_GameHP_Boss_C final : public UM1UIBossMonsterInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Close;                                        // 0x0918(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_End;                                 // 0x0920(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Loop;                                // 0x0928(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Start;                               // 0x0930(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Runaway_Full;                                 // 0x0938(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Runaway;                                      // 0x0940(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Name;                                         // 0x0948(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Focus;                                        // 0x0950(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Zero1;                                             // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zero2;                                             // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zero3;                                             // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AdvantageIcon;                                     // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Buff;                                              // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Effect;                                            // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Effect_Notice;                                     // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Guage_Background;                                  // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Guages;                                            // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Icon_Property;                                     // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Immune_Panel;                                      // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Info;                                              // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Name_0;                                            // 0x09B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_ElementalWeakness;                           // 0x09C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_01;                                          // 0x09C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_02;                                          // 0x09D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_03;                                          // 0x09D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Phase_Panel_BossNotUsed;                           // 0x09E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Runaway;                                           // 0x09E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_HP;                                             // 0x09F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PrevPhaseRemainCount;                              // 0x09F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_InitBossMonsterWidget();
	void BP_InitWidgetImpl();
	void BP_NotifyTagAdded(const struct FGameplayTag& Tag);
	void BP_NotifyTagRemoved(const struct FGameplayTag& Tag);
	void BP_OnActivateDetectionIndicator();
	void BP_OnBerserkGaugeChanged(float GaugeRatio);
	void BP_OnDeactivateDetectionIndicator();
	void BP_PlayFocusAnim(bool bInForwardAnim);
	void BP_PlayNameAnim(bool bInForwardAnim);
	void BP_UpdateWeakAdvantageIcon(class UTexture2D* WeakAdvantageIcon);
	void BP_UpdateWeakElementalIcons(const TArray<class UTexture2D*>& WeakElementalIcons);
	void Construct();
	void ExecuteUbergraph_UI_GameHP_Boss(int32 EntryPoint);
	bool GetPhasedHP(const struct FM1ScaledInteger& CurrentHp, float* OutRatio);
	void LoopPhaseImmune();
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void RefreshPhaseImmune(bool bReset);
	void RefreshPhaseState(bool bReset);
	void SetUIPhaseView(bool In_Phase);
	void StopPhaseImmune();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameHP_Boss_C">();
	}
	static class UUI_GameHP_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameHP_Boss_C>();
	}
};
static_assert(alignof(UUI_GameHP_Boss_C) == 0x000008, "Wrong alignment on UUI_GameHP_Boss_C");
static_assert(sizeof(UUI_GameHP_Boss_C) == 0x000A00, "Wrong size on UUI_GameHP_Boss_C");
static_assert(offsetof(UUI_GameHP_Boss_C, UberGraphFrame) == 0x000910, "Member 'UUI_GameHP_Boss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Anim_Close) == 0x000918, "Member 'UUI_GameHP_Boss_C::Anim_Close' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, UIAnim_Immune_End) == 0x000920, "Member 'UUI_GameHP_Boss_C::UIAnim_Immune_End' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, UIAnim_Immune_Loop) == 0x000928, "Member 'UUI_GameHP_Boss_C::UIAnim_Immune_Loop' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, UIAnim_Immune_Start) == 0x000930, "Member 'UUI_GameHP_Boss_C::UIAnim_Immune_Start' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, ANIM_Runaway_Full) == 0x000938, "Member 'UUI_GameHP_Boss_C::ANIM_Runaway_Full' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, ANIM_Runaway) == 0x000940, "Member 'UUI_GameHP_Boss_C::ANIM_Runaway' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, ANIM_Name) == 0x000948, "Member 'UUI_GameHP_Boss_C::ANIM_Name' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, ANIM_Focus) == 0x000950, "Member 'UUI_GameHP_Boss_C::ANIM_Focus' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Zero1) == 0x000958, "Member 'UUI_GameHP_Boss_C::Zero1' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Zero2) == 0x000960, "Member 'UUI_GameHP_Boss_C::Zero2' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Zero3) == 0x000968, "Member 'UUI_GameHP_Boss_C::Zero3' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, AdvantageIcon) == 0x000970, "Member 'UUI_GameHP_Boss_C::AdvantageIcon' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Buff) == 0x000978, "Member 'UUI_GameHP_Boss_C::Buff' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Effect) == 0x000980, "Member 'UUI_GameHP_Boss_C::Effect' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Effect_Notice) == 0x000988, "Member 'UUI_GameHP_Boss_C::Effect_Notice' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Guage_Background) == 0x000990, "Member 'UUI_GameHP_Boss_C::Guage_Background' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Guages) == 0x000998, "Member 'UUI_GameHP_Boss_C::Guages' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Icon_Property) == 0x0009A0, "Member 'UUI_GameHP_Boss_C::Icon_Property' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Immune_Panel) == 0x0009A8, "Member 'UUI_GameHP_Boss_C::Immune_Panel' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Info) == 0x0009B0, "Member 'UUI_GameHP_Boss_C::Info' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Name_0) == 0x0009B8, "Member 'UUI_GameHP_Boss_C::Name_0' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Panel_ElementalWeakness) == 0x0009C0, "Member 'UUI_GameHP_Boss_C::Panel_ElementalWeakness' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Phase_01) == 0x0009C8, "Member 'UUI_GameHP_Boss_C::Phase_01' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Phase_02) == 0x0009D0, "Member 'UUI_GameHP_Boss_C::Phase_02' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Phase_03) == 0x0009D8, "Member 'UUI_GameHP_Boss_C::Phase_03' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Phase_Panel_BossNotUsed) == 0x0009E0, "Member 'UUI_GameHP_Boss_C::Phase_Panel_BossNotUsed' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, Runaway) == 0x0009E8, "Member 'UUI_GameHP_Boss_C::Runaway' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, SB_HP) == 0x0009F0, "Member 'UUI_GameHP_Boss_C::SB_HP' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_C, PrevPhaseRemainCount) == 0x0009F8, "Member 'UUI_GameHP_Boss_C::PrevPhaseRemainCount' has a wrong offset!");

}

