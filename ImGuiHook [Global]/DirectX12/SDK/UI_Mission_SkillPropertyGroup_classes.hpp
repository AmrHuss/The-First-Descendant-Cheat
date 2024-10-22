#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_SkillPropertyGroup

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_SkillPropertyGroup.UI_Mission_SkillPropertyGroup_C
// 0x0030 (0x0738 - 0x0708)
class UUI_Mission_SkillPropertyGroup_C final : public UM1UIWidget
{
public:
	class UHorizontalBox*                         Blazer;                                            // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Demonic;                                           // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Electricity;                                       // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Glacier;                                           // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Plain;                                             // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetElementalType(EM1ElementalDamageChannel InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_SkillPropertyGroup_C">();
	}
	static class UUI_Mission_SkillPropertyGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_SkillPropertyGroup_C>();
	}
};
static_assert(alignof(UUI_Mission_SkillPropertyGroup_C) == 0x000008, "Wrong alignment on UUI_Mission_SkillPropertyGroup_C");
static_assert(sizeof(UUI_Mission_SkillPropertyGroup_C) == 0x000738, "Wrong size on UUI_Mission_SkillPropertyGroup_C");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, Blazer) == 0x000708, "Member 'UUI_Mission_SkillPropertyGroup_C::Blazer' has a wrong offset!");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, Demonic) == 0x000710, "Member 'UUI_Mission_SkillPropertyGroup_C::Demonic' has a wrong offset!");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, Electricity) == 0x000718, "Member 'UUI_Mission_SkillPropertyGroup_C::Electricity' has a wrong offset!");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, Glacier) == 0x000720, "Member 'UUI_Mission_SkillPropertyGroup_C::Glacier' has a wrong offset!");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, Plain) == 0x000728, "Member 'UUI_Mission_SkillPropertyGroup_C::Plain' has a wrong offset!");
static_assert(offsetof(UUI_Mission_SkillPropertyGroup_C, WidgetSwitcher_0) == 0x000730, "Member 'UUI_Mission_SkillPropertyGroup_C::WidgetSwitcher_0' has a wrong offset!");

}

