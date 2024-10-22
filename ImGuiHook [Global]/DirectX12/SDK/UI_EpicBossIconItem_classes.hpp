#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBossIconItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_EpicBossIconItem.UI_EpicBossIconItem_C
// 0x0018 (0x0720 - 0x0708)
class UUI_EpicBossIconItem_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 EpicBoss;                                          // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_001_C*                    UI_Deco_Back_001_53;                               // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_EpicBossIconItem(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_EpicBossIconItem_C">();
	}
	static class UUI_EpicBossIconItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_EpicBossIconItem_C>();
	}
};
static_assert(alignof(UUI_EpicBossIconItem_C) == 0x000008, "Wrong alignment on UUI_EpicBossIconItem_C");
static_assert(sizeof(UUI_EpicBossIconItem_C) == 0x000720, "Wrong size on UUI_EpicBossIconItem_C");
static_assert(offsetof(UUI_EpicBossIconItem_C, UberGraphFrame) == 0x000708, "Member 'UUI_EpicBossIconItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_EpicBossIconItem_C, EpicBoss) == 0x000710, "Member 'UUI_EpicBossIconItem_C::EpicBoss' has a wrong offset!");
static_assert(offsetof(UUI_EpicBossIconItem_C, UI_Deco_Back_001_53) == 0x000718, "Member 'UUI_EpicBossIconItem_C::UI_Deco_Back_001_53' has a wrong offset!");

}

