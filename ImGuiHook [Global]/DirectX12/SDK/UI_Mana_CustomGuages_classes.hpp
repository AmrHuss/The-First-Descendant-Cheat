#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mana_CustomGuages

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mana_CustomGuages.UI_Mana_CustomGuages_C
// 0x0048 (0x0770 - 0x0728)
class UUI_Mana_CustomGuages_C final : public UM1UIGameBottom_ManaCustomGauges
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Custom_numerical;                                  // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           MP_numerical;                                      // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_01_C*                     UI_Deco_Cube;                                      // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_01_C*                     UI_Deco_Cube_01;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_Hor_C*            UI_Deco_numericaloutput1;                          // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_Hor_C*            UI_Deco_numericaloutput2;                          // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          In_Number;                                         // 0x0768(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mana_CustomGuages(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void Set_Numerical(bool InNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mana_CustomGuages_C">();
	}
	static class UUI_Mana_CustomGuages_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mana_CustomGuages_C>();
	}
};
static_assert(alignof(UUI_Mana_CustomGuages_C) == 0x000008, "Wrong alignment on UUI_Mana_CustomGuages_C");
static_assert(sizeof(UUI_Mana_CustomGuages_C) == 0x000770, "Wrong size on UUI_Mana_CustomGuages_C");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UberGraphFrame) == 0x000728, "Member 'UUI_Mana_CustomGuages_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UIAnim_Open) == 0x000730, "Member 'UUI_Mana_CustomGuages_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, Custom_numerical) == 0x000738, "Member 'UUI_Mana_CustomGuages_C::Custom_numerical' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, MP_numerical) == 0x000740, "Member 'UUI_Mana_CustomGuages_C::MP_numerical' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UI_Deco_Cube) == 0x000748, "Member 'UUI_Mana_CustomGuages_C::UI_Deco_Cube' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UI_Deco_Cube_01) == 0x000750, "Member 'UUI_Mana_CustomGuages_C::UI_Deco_Cube_01' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UI_Deco_numericaloutput1) == 0x000758, "Member 'UUI_Mana_CustomGuages_C::UI_Deco_numericaloutput1' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, UI_Deco_numericaloutput2) == 0x000760, "Member 'UUI_Mana_CustomGuages_C::UI_Deco_numericaloutput2' has a wrong offset!");
static_assert(offsetof(UUI_Mana_CustomGuages_C, In_Number) == 0x000768, "Member 'UUI_Mana_CustomGuages_C::In_Number' has a wrong offset!");

}
