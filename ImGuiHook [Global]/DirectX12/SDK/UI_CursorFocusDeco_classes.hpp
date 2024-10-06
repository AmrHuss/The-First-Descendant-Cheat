#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CursorFocusDeco

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CursorFocusDeco.UI_CursorFocusDeco_C
// 0x0010 (0x0728 - 0x0718)
class UUI_CursorFocusDeco_C final : public UM1UIFocusDeco
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          UISelected;                                        // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UIFocused;                                         // 0x0721(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_CursorFocusDeco(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CursorFocusDeco_C">();
	}
	static class UUI_CursorFocusDeco_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CursorFocusDeco_C>();
	}
};
static_assert(alignof(UUI_CursorFocusDeco_C) == 0x000008, "Wrong alignment on UUI_CursorFocusDeco_C");
static_assert(sizeof(UUI_CursorFocusDeco_C) == 0x000728, "Wrong size on UUI_CursorFocusDeco_C");
static_assert(offsetof(UUI_CursorFocusDeco_C, UberGraphFrame) == 0x000718, "Member 'UUI_CursorFocusDeco_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDeco_C, UISelected) == 0x000720, "Member 'UUI_CursorFocusDeco_C::UISelected' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDeco_C, UIFocused) == 0x000721, "Member 'UUI_CursorFocusDeco_C::UIFocused' has a wrong offset!");

}
