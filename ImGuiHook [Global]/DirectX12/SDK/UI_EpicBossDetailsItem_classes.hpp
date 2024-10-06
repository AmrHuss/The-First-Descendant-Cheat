#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBossDetailsItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_EpicBossDetailsItem.UI_EpicBossDetailsItem_C
// 0x0018 (0x0720 - 0x0708)
class UUI_EpicBossDetailsItem_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1TextBlock*                           Text_Name;                                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_EpicBossIconItem_C*                 UI_VoidBattle_EpicBossIconItem;                    // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_EpicBossDetailsItem(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_EpicBossDetailsItem_C">();
	}
	static class UUI_EpicBossDetailsItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_EpicBossDetailsItem_C>();
	}
};
static_assert(alignof(UUI_EpicBossDetailsItem_C) == 0x000008, "Wrong alignment on UUI_EpicBossDetailsItem_C");
static_assert(sizeof(UUI_EpicBossDetailsItem_C) == 0x000720, "Wrong size on UUI_EpicBossDetailsItem_C");
static_assert(offsetof(UUI_EpicBossDetailsItem_C, UberGraphFrame) == 0x000708, "Member 'UUI_EpicBossDetailsItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_EpicBossDetailsItem_C, Text_Name) == 0x000710, "Member 'UUI_EpicBossDetailsItem_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UUI_EpicBossDetailsItem_C, UI_VoidBattle_EpicBossIconItem) == 0x000718, "Member 'UUI_EpicBossDetailsItem_C::UI_VoidBattle_EpicBossIconItem' has a wrong offset!");

}

