#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemOptionStat

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemOptionStat.UI_ItemOptionStat_C
// 0x0010 (0x0728 - 0x0718)
class UUI_ItemOptionStat_C final : public UM1UIItemOptionSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                ItemOptionStat;                                    // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_SetOptionTier(EM1ItemOptionTierType InOptionTier);
	void ExecuteUbergraph_UI_ItemOptionStat(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UISet_StatTierColor(EM1ItemOptionTierType OptionTier);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemOptionStat_C">();
	}
	static class UUI_ItemOptionStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemOptionStat_C>();
	}
};
static_assert(alignof(UUI_ItemOptionStat_C) == 0x000008, "Wrong alignment on UUI_ItemOptionStat_C");
static_assert(sizeof(UUI_ItemOptionStat_C) == 0x000728, "Wrong size on UUI_ItemOptionStat_C");
static_assert(offsetof(UUI_ItemOptionStat_C, UberGraphFrame) == 0x000718, "Member 'UUI_ItemOptionStat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemOptionStat_C, ItemOptionStat) == 0x000720, "Member 'UUI_ItemOptionStat_C::ItemOptionStat' has a wrong offset!");

}

