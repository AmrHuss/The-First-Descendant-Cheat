#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Details_RuneCondition

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Details_RuneCondition.UI_Details_RuneCondition_C
// 0x0018 (0x0720 - 0x0708)
class UUI_Details_RuneCondition_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Icon_Visibility;                                   // 0x0718(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Details_RuneCondition(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetColor(EM1ItemTierType InRuneTier);
	void SetDataImpl(class UM1UIData* InData);
	void SetRuneEquip(bool bIsEquipped);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Details_RuneCondition_C">();
	}
	static class UUI_Details_RuneCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Details_RuneCondition_C>();
	}
};
static_assert(alignof(UUI_Details_RuneCondition_C) == 0x000008, "Wrong alignment on UUI_Details_RuneCondition_C");
static_assert(sizeof(UUI_Details_RuneCondition_C) == 0x000720, "Wrong size on UUI_Details_RuneCondition_C");
static_assert(offsetof(UUI_Details_RuneCondition_C, UberGraphFrame) == 0x000708, "Member 'UUI_Details_RuneCondition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Details_RuneCondition_C, Icon) == 0x000710, "Member 'UUI_Details_RuneCondition_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_Details_RuneCondition_C, Icon_Visibility) == 0x000718, "Member 'UUI_Details_RuneCondition_C::Icon_Visibility' has a wrong offset!");

}

