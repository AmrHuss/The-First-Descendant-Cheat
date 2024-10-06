#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Notice_MtxItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Notice_MtxItem.UI_Notice_MtxItem_C
// 0x0030 (0x0780 - 0x0750)
class UUI_Notice_MtxItem_C final : public UM1UIBoostActivationNotice
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 bg_01_tier;                                        // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_Bright;                                         // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x0778(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_SetBackgroundColor(const EM1ItemTierType InTierType);
	void BP_SetIcon(const EM1BuffSubItemType InBoostType);
	void BP_widget_playAkEvent();
	void ExecuteUbergraph_UI_Notice_MtxItem(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTUI_Notice_MtxItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Notice_MtxItem_C">();
	}
	static class UUI_Notice_MtxItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Notice_MtxItem_C>();
	}
};
static_assert(alignof(UUI_Notice_MtxItem_C) == 0x000010, "Wrong alignment on UUI_Notice_MtxItem_C");
static_assert(sizeof(UUI_Notice_MtxItem_C) == 0x000780, "Wrong size on UUI_Notice_MtxItem_C");
static_assert(offsetof(UUI_Notice_MtxItem_C, UberGraphFrame) == 0x000750, "Member 'UUI_Notice_MtxItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Notice_MtxItem_C, bg_01_tier) == 0x000758, "Member 'UUI_Notice_MtxItem_C::bg_01_tier' has a wrong offset!");
static_assert(offsetof(UUI_Notice_MtxItem_C, Image_2) == 0x000760, "Member 'UUI_Notice_MtxItem_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_Notice_MtxItem_C, Image_3) == 0x000768, "Member 'UUI_Notice_MtxItem_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUI_Notice_MtxItem_C, MI_Bright) == 0x000770, "Member 'UUI_Notice_MtxItem_C::MI_Bright' has a wrong offset!");
static_assert(offsetof(UUI_Notice_MtxItem_C, NewVar) == 0x000778, "Member 'UUI_Notice_MtxItem_C::NewVar' has a wrong offset!");

}
