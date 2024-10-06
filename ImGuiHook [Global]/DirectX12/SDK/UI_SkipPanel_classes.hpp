#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkipPanel

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SkipPanel.UI_SkipPanel_C
// 0x0018 (0x0760 - 0x0748)
class UUI_SkipPanel_C final : public UM1UISkipPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_SkipButton;                                   // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_ShowSkipButton();
	void Construct();
	void ExecuteUbergraph_UI_SkipPanel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SkipPanel_C">();
	}
	static class UUI_SkipPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SkipPanel_C>();
	}
};
static_assert(alignof(UUI_SkipPanel_C) == 0x000008, "Wrong alignment on UUI_SkipPanel_C");
static_assert(sizeof(UUI_SkipPanel_C) == 0x000760, "Wrong size on UUI_SkipPanel_C");
static_assert(offsetof(UUI_SkipPanel_C, UberGraphFrame) == 0x000748, "Member 'UUI_SkipPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SkipPanel_C, ANIM_SkipButton) == 0x000750, "Member 'UUI_SkipPanel_C::ANIM_SkipButton' has a wrong offset!");
static_assert(offsetof(UUI_SkipPanel_C, BG) == 0x000758, "Member 'UUI_SkipPanel_C::BG' has a wrong offset!");

}
