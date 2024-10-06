#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_DefenseStraight

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_DefenseStraight.UI_Mission_Task_DefenseStraight_C
// 0x0008 (0x0728 - 0x0720)
class UUI_Mission_Task_DefenseStraight_C final : public UM1UIMIssionTaskGoal_Wave
{
public:
	class UWidgetAnimation*                       ANIM_Warning;                                      // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_DefenseStraight_C">();
	}
	static class UUI_Mission_Task_DefenseStraight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_DefenseStraight_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_DefenseStraight_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_DefenseStraight_C");
static_assert(sizeof(UUI_Mission_Task_DefenseStraight_C) == 0x000728, "Wrong size on UUI_Mission_Task_DefenseStraight_C");
static_assert(offsetof(UUI_Mission_Task_DefenseStraight_C, ANIM_Warning) == 0x000720, "Member 'UUI_Mission_Task_DefenseStraight_C::ANIM_Warning' has a wrong offset!");

}

