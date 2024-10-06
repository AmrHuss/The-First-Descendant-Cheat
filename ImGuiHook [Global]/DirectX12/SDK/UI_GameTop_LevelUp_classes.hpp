#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_LevelUp

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameTop_LevelUp.UI_GameTop_LevelUp_C
// 0x0078 (0x07E0 - 0x0768)
class UUI_GameTop_LevelUp_C final : public UM1UIGameTop_LevelUp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0768(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_AnimClose;                                      // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_AnimSkillOpen;                                  // 0x0778(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_AnimOpen;                                       // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_LevelBg;                                     // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MaxLevelBg;                                  // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        UI_ChangeListSwitcher;                             // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_LevelUp_SkillIcon_C*        UI_GameTop_LevelUp_SkillIcon;                      // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             UI_GameTop_Levelup_Stat;                           // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             UI_GameTop_Levelup_Stat_1;                         // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             UI_GameTop_Levelup_Stat_2;                         // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             UI_GameTop_Levelup_Stat_3;                         // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             UI_GameTop_Levelup_Stat_4;                         // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameTop_LevelUp_SkillStat_C*        UI_GameTop_LevelUpSkill_1;                         // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1WidgetSwitcher*                      UI_LevelImageSwitcher;                             // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_playakSound(class UAkAudioEvent* AkEvent);
	void BP_PlayChangedListOpenAnim();
	void BP_UpdateAppearanceByLevel(bool bIsMaxLevel);
	void ExecuteUbergraph_UI_GameTop_LevelUp(int32 EntryPoint);
	class UWidgetAnimation* GetEndAnimation();
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PlayCloseAnim();
	void PlaySkillAnim();
	void SequenceEvent__ENTRYPOINTUI_GameTop_LevelUp();
	void UI_Deco_TitleLine_Event_0(class UUI_Deco_TitleLine_01_C* UI_Deco_TitleLine);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameTop_LevelUp_C">();
	}
	static class UUI_GameTop_LevelUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameTop_LevelUp_C>();
	}
};
static_assert(alignof(UUI_GameTop_LevelUp_C) == 0x000008, "Wrong alignment on UUI_GameTop_LevelUp_C");
static_assert(sizeof(UUI_GameTop_LevelUp_C) == 0x0007E0, "Wrong size on UUI_GameTop_LevelUp_C");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UberGraphFrame) == 0x000768, "Member 'UUI_GameTop_LevelUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_AnimClose) == 0x000770, "Member 'UUI_GameTop_LevelUp_C::UI_AnimClose' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_AnimSkillOpen) == 0x000778, "Member 'UUI_GameTop_LevelUp_C::UI_AnimSkillOpen' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_AnimOpen) == 0x000780, "Member 'UUI_GameTop_LevelUp_C::UI_AnimOpen' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, Image_LevelBg) == 0x000788, "Member 'UUI_GameTop_LevelUp_C::Image_LevelBg' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, Image_MaxLevelBg) == 0x000790, "Member 'UUI_GameTop_LevelUp_C::Image_MaxLevelBg' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_ChangeListSwitcher) == 0x000798, "Member 'UUI_GameTop_LevelUp_C::UI_ChangeListSwitcher' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_LevelUp_SkillIcon) == 0x0007A0, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_LevelUp_SkillIcon' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_Levelup_Stat) == 0x0007A8, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_Levelup_Stat' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_Levelup_Stat_1) == 0x0007B0, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_Levelup_Stat_1' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_Levelup_Stat_2) == 0x0007B8, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_Levelup_Stat_2' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_Levelup_Stat_3) == 0x0007C0, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_Levelup_Stat_3' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_Levelup_Stat_4) == 0x0007C8, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_Levelup_Stat_4' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_GameTop_LevelUpSkill_1) == 0x0007D0, "Member 'UUI_GameTop_LevelUp_C::UI_GameTop_LevelUpSkill_1' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_LevelUp_C, UI_LevelImageSwitcher) == 0x0007D8, "Member 'UUI_GameTop_LevelUp_C::UI_LevelImageSwitcher' has a wrong offset!");

}
