#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemSet_Slot

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemSet_Slot.UI_ItemSet_Slot_C
// 0x0018 (0x0728 - 0x0710)
class UUI_ItemSet_Slot_C final : public UM1UIAccessorySetOptionSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Slot;                                        // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EM1EquipmentSlotType                          Slot_Type;                                         // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_SetEquipStatus(bool bIsEquipped);
	void ExecuteUbergraph_UI_ItemSet_Slot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetUISlotType();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemSet_Slot_C">();
	}
	static class UUI_ItemSet_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemSet_Slot_C>();
	}
};
static_assert(alignof(UUI_ItemSet_Slot_C) == 0x000008, "Wrong alignment on UUI_ItemSet_Slot_C");
static_assert(sizeof(UUI_ItemSet_Slot_C) == 0x000728, "Wrong size on UUI_ItemSet_Slot_C");
static_assert(offsetof(UUI_ItemSet_Slot_C, UberGraphFrame) == 0x000710, "Member 'UUI_ItemSet_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemSet_Slot_C, Image_Slot) == 0x000718, "Member 'UUI_ItemSet_Slot_C::Image_Slot' has a wrong offset!");
static_assert(offsetof(UUI_ItemSet_Slot_C, Slot_Type) == 0x000720, "Member 'UUI_ItemSet_Slot_C::Slot_Type' has a wrong offset!");

}
