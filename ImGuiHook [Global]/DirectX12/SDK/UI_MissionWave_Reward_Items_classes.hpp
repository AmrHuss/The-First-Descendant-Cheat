#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionWave_Reward_Items

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionWave_Reward_Items.UI_MissionWave_Reward_Items_C
// 0x0010 (0x0A70 - 0x0A60)
class UUI_MissionWave_Reward_Items_C final : public UM1UIMissionWaveRewards
{
public:
	class UUI_ItemIconButton_C*                   UI_ItemIconButton;                                 // 0x0A60(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionWave_Reward_Items_C">();
	}
	static class UUI_MissionWave_Reward_Items_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionWave_Reward_Items_C>();
	}
};
static_assert(alignof(UUI_MissionWave_Reward_Items_C) == 0x000010, "Wrong alignment on UUI_MissionWave_Reward_Items_C");
static_assert(sizeof(UUI_MissionWave_Reward_Items_C) == 0x000A70, "Wrong size on UUI_MissionWave_Reward_Items_C");
static_assert(offsetof(UUI_MissionWave_Reward_Items_C, UI_ItemIconButton) == 0x000A60, "Member 'UUI_MissionWave_Reward_Items_C::UI_ItemIconButton' has a wrong offset!");

}
