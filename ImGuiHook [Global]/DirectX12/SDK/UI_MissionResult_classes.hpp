#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionResult

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionResult.UI_MissionResult_C
// 0x0138 (0x08D0 - 0x0798)
class UUI_MissionResult_C final : public UM1UIMissionResult
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Common_End_0;                               // 0x07A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Common_End;                                 // 0x07A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Common_Mid;                                 // 0x07B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Common_Start;                               // 0x07B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Close;                                      // 0x07C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open_InvasionDungeon;                       // 0x07C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open_InstanceDungeon;                       // 0x07D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open_Default;                               // 0x07D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Fx;                                             // 0x07E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Title_Light_00;                                 // 0x07F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Title_right_01;                                 // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_InvasionDungeon;                              // 0x0800(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0808(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG_1;                                        // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DecoLine;                                    // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           P_InstanceDungeon_Score;                           // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           P_InvasionDungeon_Score;                           // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_MissionSucceededOrFailed;                    // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_TimeOver;                                    // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ClearWave;                                      // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_MissionTitle;                                   // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Title;                                          // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Currencies_C*                       UI_Currencies;                                     // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_04;                              // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_MasterRankProgress_C* UI_MasteryRankProgress;                            // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_Slot_Item_C*         UI_Mission_Result_SlotItem_0;                      // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_Slot_Item_C*         UI_Mission_Result_SlotItem_1;                      // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_Slot_Item_C*         UI_Mission_Result_SlotItem_2;                      // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_Slot_Item_C*         UI_Mission_Result_SlotItem_3;                      // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_StatItem_C*          UI_Mission_Result_StatItem_0;                      // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_StatItem_C*          UI_Mission_Result_StatItem_1;                      // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_StatItem_C*          UI_Mission_Result_StatItem_2;                      // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_StatItem_C*          UI_Mission_Result_StatItem_3;                      // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Timer_C*                            UI_Timer_Over;                                     // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_PlayCloseAnim();
	void BP_PlayOpenAnim(EM1MissionResultOpenAnimType InAnimType);
	void Construct();
	void ExecuteUbergraph_UI_MissionResult(int32 EntryPoint);
	void OnEventOpenAnimFinished();
	void PlayAnim_Common_End();
	void PlayAnim_Common_End_0();
	void PlayAnim_Common_Mid();
	void PlayAnim_Common_Start();
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTUI_MissionResult();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_0();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_1();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_10();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_11();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_12();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_13();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_14();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_15();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_16();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_17(class UUI_InstanceDungeon_ScoreBar_C* UI_InstanceDungeon_ScoreBar_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_18(class UUI_InvasionDungeon_ScoreBar_C* UI_InvasionDungeon_ScoreBar_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_2(class UUI_Mission_Result_MasterRankProgress_C* UI_MasteryRankProgress_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_3(class UUI_Mission_Result_Reward_Items_C* UI_Mission_Result_RewardItems);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_4();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_5();
	void SequenceEvent__ENTRYPOINTUI_MissionResult_6(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_3_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_7(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_0_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_8(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_1_0);
	void SequenceEvent__ENTRYPOINTUI_MissionResult_9(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_2_0);
	void SetCurrencyData(class UM1UIDataMissionResult* InResultData);
	void SetDataImpl(class UM1UIData* InData);
	void SetExpData(class UM1UIDataMissionResult* InResultData);
	void SetItemData(class UM1UIDataMissionResult* InResultData);
	void SetMissionResultInfo(class UM1UIDataMissionResult* InResultData);
	void SetUIMissionResult(bool Is_False);
	void UI_InstanceDungeon_ScoreBar_Event(class UUI_InstanceDungeon_ScoreBar_C* UI_InstanceDungeon_ScoreBar_0);
	void UI_InvasionDungeon_ScoreBar_Event(class UUI_InvasionDungeon_ScoreBar_C* UI_InvasionDungeon_ScoreBar_0);
	void UI_MasteryRankProgress_Event(class UUI_Mission_Result_MasterRankProgress_C* UI_MasteryRankProgress_0);
	void UI_Mission_Result_RewardItems_Event(class UUI_Mission_Result_Reward_Items_C* UI_Mission_Result_RewardItems);
	void UI_Mission_Result_SlotItem_0_Event(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_0_0);
	void UI_Mission_Result_SlotItem_1_Event(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_1_0);
	void UI_Mission_Result_SlotItem_2_Event(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_2_0);
	void UI_Mission_Result_SlotItem_3_Event(class UUI_Mission_Result_Slot_Item_C* UI_Mission_Result_SlotItem_3_0);
	void WidgetAnimationEvt_UIAnim_Close_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_UIAnim_Open_Default_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_UIAnim_Open_InstanceDungeon_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_UIAnim_Open_InvasionDungeon_K2Node_WidgetAnimationEvent_2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionResult_C">();
	}
	static class UUI_MissionResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionResult_C>();
	}
};
static_assert(alignof(UUI_MissionResult_C) == 0x000008, "Wrong alignment on UUI_MissionResult_C");
static_assert(sizeof(UUI_MissionResult_C) == 0x0008D0, "Wrong size on UUI_MissionResult_C");
static_assert(offsetof(UUI_MissionResult_C, UberGraphFrame) == 0x000798, "Member 'UUI_MissionResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Common_End_0) == 0x0007A0, "Member 'UUI_MissionResult_C::UIAnim_Common_End_0' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Common_End) == 0x0007A8, "Member 'UUI_MissionResult_C::UIAnim_Common_End' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Common_Mid) == 0x0007B0, "Member 'UUI_MissionResult_C::UIAnim_Common_Mid' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Common_Start) == 0x0007B8, "Member 'UUI_MissionResult_C::UIAnim_Common_Start' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Close) == 0x0007C0, "Member 'UUI_MissionResult_C::UIAnim_Close' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Open_InvasionDungeon) == 0x0007C8, "Member 'UUI_MissionResult_C::UIAnim_Open_InvasionDungeon' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Open_InstanceDungeon) == 0x0007D0, "Member 'UUI_MissionResult_C::UIAnim_Open_InstanceDungeon' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UIAnim_Open_Default) == 0x0007D8, "Member 'UUI_MissionResult_C::UIAnim_Open_Default' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, BG) == 0x0007E0, "Member 'UUI_MissionResult_C::BG' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, BG_Fx) == 0x0007E8, "Member 'UUI_MissionResult_C::BG_Fx' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Fx_Title_Light_00) == 0x0007F0, "Member 'UUI_MissionResult_C::Fx_Title_Light_00' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Fx_Title_right_01) == 0x0007F8, "Member 'UUI_MissionResult_C::Fx_Title_right_01' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Icon_InvasionDungeon) == 0x000800, "Member 'UUI_MissionResult_C::Icon_InvasionDungeon' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image) == 0x000808, "Member 'UUI_MissionResult_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image_1) == 0x000810, "Member 'UUI_MissionResult_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image_2) == 0x000818, "Member 'UUI_MissionResult_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image_BG) == 0x000820, "Member 'UUI_MissionResult_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image_BG_1) == 0x000828, "Member 'UUI_MissionResult_C::Image_BG_1' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Image_DecoLine) == 0x000830, "Member 'UUI_MissionResult_C::Image_DecoLine' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, P_InstanceDungeon_Score) == 0x000838, "Member 'UUI_MissionResult_C::P_InstanceDungeon_Score' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, P_InvasionDungeon_Score) == 0x000840, "Member 'UUI_MissionResult_C::P_InvasionDungeon_Score' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Panel_MissionSucceededOrFailed) == 0x000848, "Member 'UUI_MissionResult_C::Panel_MissionSucceededOrFailed' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, Panel_TimeOver) == 0x000850, "Member 'UUI_MissionResult_C::Panel_TimeOver' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, TB_ClearWave) == 0x000858, "Member 'UUI_MissionResult_C::TB_ClearWave' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, TB_MissionTitle) == 0x000860, "Member 'UUI_MissionResult_C::TB_MissionTitle' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, TB_Title) == 0x000868, "Member 'UUI_MissionResult_C::TB_Title' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Currencies) == 0x000870, "Member 'UUI_MissionResult_C::UI_Currencies' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Deco_TitleLine_04) == 0x000878, "Member 'UUI_MissionResult_C::UI_Deco_TitleLine_04' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_MasteryRankProgress) == 0x000880, "Member 'UUI_MissionResult_C::UI_MasteryRankProgress' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_SlotItem_0) == 0x000888, "Member 'UUI_MissionResult_C::UI_Mission_Result_SlotItem_0' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_SlotItem_1) == 0x000890, "Member 'UUI_MissionResult_C::UI_Mission_Result_SlotItem_1' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_SlotItem_2) == 0x000898, "Member 'UUI_MissionResult_C::UI_Mission_Result_SlotItem_2' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_SlotItem_3) == 0x0008A0, "Member 'UUI_MissionResult_C::UI_Mission_Result_SlotItem_3' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_StatItem_0) == 0x0008A8, "Member 'UUI_MissionResult_C::UI_Mission_Result_StatItem_0' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_StatItem_1) == 0x0008B0, "Member 'UUI_MissionResult_C::UI_Mission_Result_StatItem_1' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_StatItem_2) == 0x0008B8, "Member 'UUI_MissionResult_C::UI_Mission_Result_StatItem_2' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Mission_Result_StatItem_3) == 0x0008C0, "Member 'UUI_MissionResult_C::UI_Mission_Result_StatItem_3' has a wrong offset!");
static_assert(offsetof(UUI_MissionResult_C, UI_Timer_Over) == 0x0008C8, "Member 'UUI_MissionResult_C::UI_Timer_Over' has a wrong offset!");

}

