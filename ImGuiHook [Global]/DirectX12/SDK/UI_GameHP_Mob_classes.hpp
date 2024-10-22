#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Mob

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameHP_Mob.UI_GameHP_Mob_C
// 0x0090 (0x0980 - 0x08F0)
class UUI_GameHP_Mob_C final : public UM1UIMonsterInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Property_Open;                              // 0x08F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Focus;                                        // 0x0900(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AdvantageIcon;                                     // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Icon_Property;                                     // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_280;                                         // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_ElementalWeakness;                           // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               Panel_EliteSkillIcons;                             // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_State;                                    // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_EliteSkills;                                    // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UI_Focus;                                          // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1WidgetSwitcher*                      WS_Marker;                                         // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           In_Color;                                          // 0x0960(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Color_0;                                        // 0x0970(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ChangedEliteSkills(const class FString& SkillNames, const TArray<class UTexture2D*>& InIcons);
	void BP_ChangedMonsterLifeTime(float InLifeTime);
	void BP_SetFocusUIVisibility(bool bVisible);
	void BP_SetSpawnedByMission(bool InByMission, bool bHidden);
	void BP_SetupForReuse();
	void BP_UpdateWeakAdvantageIcon(class UTexture2D* WeakAdvantageIcon);
	void BP_UpdateWeakElementalIcons(const TArray<class UTexture2D*>& WeakElementalIcons);
	void Construct();
	void ExecuteUbergraph_UI_GameHP_Mob(int32 EntryPoint);
	bool GetPhasedHP(const struct FM1ScaledInteger& CurrentHp, float* OutRatio);
	void UISetEliteMonster(bool InElite);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameHP_Mob_C">();
	}
	static class UUI_GameHP_Mob_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameHP_Mob_C>();
	}
};
static_assert(alignof(UUI_GameHP_Mob_C) == 0x000008, "Wrong alignment on UUI_GameHP_Mob_C");
static_assert(sizeof(UUI_GameHP_Mob_C) == 0x000980, "Wrong size on UUI_GameHP_Mob_C");
static_assert(offsetof(UUI_GameHP_Mob_C, UberGraphFrame) == 0x0008F0, "Member 'UUI_GameHP_Mob_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, UIAnim_Property_Open) == 0x0008F8, "Member 'UUI_GameHP_Mob_C::UIAnim_Property_Open' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, ANIM_Focus) == 0x000900, "Member 'UUI_GameHP_Mob_C::ANIM_Focus' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, AdvantageIcon) == 0x000908, "Member 'UUI_GameHP_Mob_C::AdvantageIcon' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Icon_Property) == 0x000910, "Member 'UUI_GameHP_Mob_C::Icon_Property' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Image) == 0x000918, "Member 'UUI_GameHP_Mob_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Image_280) == 0x000920, "Member 'UUI_GameHP_Mob_C::Image_280' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Panel_ElementalWeakness) == 0x000928, "Member 'UUI_GameHP_Mob_C::Panel_ElementalWeakness' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Panel_EliteSkillIcons) == 0x000930, "Member 'UUI_GameHP_Mob_C::Panel_EliteSkillIcons' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, RetainerBox_0) == 0x000938, "Member 'UUI_GameHP_Mob_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, Switcher_State) == 0x000940, "Member 'UUI_GameHP_Mob_C::Switcher_State' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, TB_EliteSkills) == 0x000948, "Member 'UUI_GameHP_Mob_C::TB_EliteSkills' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, UI_Focus) == 0x000950, "Member 'UUI_GameHP_Mob_C::UI_Focus' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, WS_Marker) == 0x000958, "Member 'UUI_GameHP_Mob_C::WS_Marker' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, In_Color) == 0x000960, "Member 'UUI_GameHP_Mob_C::In_Color' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Mob_C, In_Color_0) == 0x000970, "Member 'UUI_GameHP_Mob_C::In_Color_0' has a wrong offset!");

}

