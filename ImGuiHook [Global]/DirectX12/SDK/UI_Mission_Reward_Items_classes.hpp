#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Reward_Items

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Reward_Items.UI_Mission_Reward_Items_C
// 0x0000 (0x0A70 - 0x0A70)
class UUI_Mission_Reward_Items_C final : public UM1UIMissionRewards
{
public:
	void NewFunction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Reward_Items_C">();
	}
	static class UUI_Mission_Reward_Items_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Reward_Items_C>();
	}
};
static_assert(alignof(UUI_Mission_Reward_Items_C) == 0x000010, "Wrong alignment on UUI_Mission_Reward_Items_C");
static_assert(sizeof(UUI_Mission_Reward_Items_C) == 0x000A70, "Wrong size on UUI_Mission_Reward_Items_C");

}

