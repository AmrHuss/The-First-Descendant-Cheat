#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemList

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemList.UI_ItemList_C
// 0x0028 (0x0730 - 0x0708)
class UUI_ItemList_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1Button*                              Button_Default;                                    // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ItemName;                                       // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Tier;                                           // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_C*                         UI_ItemIcon;                                       // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ItemList(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemList_C">();
	}
	static class UUI_ItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemList_C>();
	}
};
static_assert(alignof(UUI_ItemList_C) == 0x000008, "Wrong alignment on UUI_ItemList_C");
static_assert(sizeof(UUI_ItemList_C) == 0x000730, "Wrong size on UUI_ItemList_C");
static_assert(offsetof(UUI_ItemList_C, UberGraphFrame) == 0x000708, "Member 'UUI_ItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemList_C, Button_Default) == 0x000710, "Member 'UUI_ItemList_C::Button_Default' has a wrong offset!");
static_assert(offsetof(UUI_ItemList_C, TB_ItemName) == 0x000718, "Member 'UUI_ItemList_C::TB_ItemName' has a wrong offset!");
static_assert(offsetof(UUI_ItemList_C, TB_Tier) == 0x000720, "Member 'UUI_ItemList_C::TB_Tier' has a wrong offset!");
static_assert(offsetof(UUI_ItemList_C, UI_ItemIcon) == 0x000728, "Member 'UUI_ItemList_C::UI_ItemIcon' has a wrong offset!");

}
