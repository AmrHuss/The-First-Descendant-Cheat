#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Page_Rotation

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Page_Rotation.UI_Page_Rotation_C
// 0x0020 (0x0830 - 0x0810)
class UUI_Page_Rotation_C final : public UM1UIPageControl
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0810(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               ForCollased;                                       // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_KeySymbol_01_C*                     UI_KeySymbol;                                      // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESlateVisibility                              InKeyVisible;                                      // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Page_Rotation(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Page_Rotation_C">();
	}
	static class UUI_Page_Rotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Page_Rotation_C>();
	}
};
static_assert(alignof(UUI_Page_Rotation_C) == 0x000010, "Wrong alignment on UUI_Page_Rotation_C");
static_assert(sizeof(UUI_Page_Rotation_C) == 0x000830, "Wrong size on UUI_Page_Rotation_C");
static_assert(offsetof(UUI_Page_Rotation_C, UberGraphFrame) == 0x000810, "Member 'UUI_Page_Rotation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Page_Rotation_C, ForCollased) == 0x000818, "Member 'UUI_Page_Rotation_C::ForCollased' has a wrong offset!");
static_assert(offsetof(UUI_Page_Rotation_C, UI_KeySymbol) == 0x000820, "Member 'UUI_Page_Rotation_C::UI_KeySymbol' has a wrong offset!");
static_assert(offsetof(UUI_Page_Rotation_C, InKeyVisible) == 0x000828, "Member 'UUI_Page_Rotation_C::InKeyVisible' has a wrong offset!");

}

