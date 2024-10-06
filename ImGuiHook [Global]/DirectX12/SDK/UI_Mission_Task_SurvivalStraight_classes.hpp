#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_SurvivalStraight

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_SurvivalStraight.UI_Mission_Task_SurvivalStraight_C
// 0x0028 (0x0758 - 0x0730)
class UUI_Mission_Task_SurvivalStraight_C final : public UM1UIMIssionTaskGoal_WaveSurvival
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Mission_Task_TargetListItem2_Survival_C* UI_Mission_Task_TargetListItem2_Survival;          // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetListItem2_Survival_C* UI_Mission_Task_TargetListItem2_Survival_1;        // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetListItem2_Survival_C* UI_Mission_Task_TargetListItem2_Survival_2;        // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Task_TargetListItem2_Survival_C* UI_Mission_Task_TargetListItem2_Survival_3;        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Mission_Task_SurvivalStraight(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_SurvivalStraight_C">();
	}
	static class UUI_Mission_Task_SurvivalStraight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_SurvivalStraight_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_SurvivalStraight_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_SurvivalStraight_C");
static_assert(sizeof(UUI_Mission_Task_SurvivalStraight_C) == 0x000758, "Wrong size on UUI_Mission_Task_SurvivalStraight_C");
static_assert(offsetof(UUI_Mission_Task_SurvivalStraight_C, UberGraphFrame) == 0x000730, "Member 'UUI_Mission_Task_SurvivalStraight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_SurvivalStraight_C, UI_Mission_Task_TargetListItem2_Survival) == 0x000738, "Member 'UUI_Mission_Task_SurvivalStraight_C::UI_Mission_Task_TargetListItem2_Survival' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_SurvivalStraight_C, UI_Mission_Task_TargetListItem2_Survival_1) == 0x000740, "Member 'UUI_Mission_Task_SurvivalStraight_C::UI_Mission_Task_TargetListItem2_Survival_1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_SurvivalStraight_C, UI_Mission_Task_TargetListItem2_Survival_2) == 0x000748, "Member 'UUI_Mission_Task_SurvivalStraight_C::UI_Mission_Task_TargetListItem2_Survival_2' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Task_SurvivalStraight_C, UI_Mission_Task_TargetListItem2_Survival_3) == 0x000750, "Member 'UUI_Mission_Task_SurvivalStraight_C::UI_Mission_Task_TargetListItem2_Survival_3' has a wrong offset!");

}
