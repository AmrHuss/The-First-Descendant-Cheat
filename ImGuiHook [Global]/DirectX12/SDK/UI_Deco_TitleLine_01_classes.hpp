#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_TitleLine_01

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Deco_TitleLine_01.UI_Deco_TitleLine_01_C
// 0x0010 (0x0718 - 0x0708)
class UUI_Deco_TitleLine_01_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Deco_TitleLine_01(int32 EntryPoint);
	void PlaySetOpenUI();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Deco_TitleLine_01_C">();
	}
	static class UUI_Deco_TitleLine_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Deco_TitleLine_01_C>();
	}
};
static_assert(alignof(UUI_Deco_TitleLine_01_C) == 0x000008, "Wrong alignment on UUI_Deco_TitleLine_01_C");
static_assert(sizeof(UUI_Deco_TitleLine_01_C) == 0x000718, "Wrong size on UUI_Deco_TitleLine_01_C");
static_assert(offsetof(UUI_Deco_TitleLine_01_C, UberGraphFrame) == 0x000708, "Member 'UUI_Deco_TitleLine_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_01_C, UIAnim_Open) == 0x000710, "Member 'UUI_Deco_TitleLine_01_C::UIAnim_Open' has a wrong offset!");

}

