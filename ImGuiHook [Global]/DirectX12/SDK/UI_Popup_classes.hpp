#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Popup

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Popup.UI_Popup_C
// 0x0030 (0x07D0 - 0x07A0)
class UUI_Popup_C final : public UM1UIPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Close;                                      // 0x07A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x07B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                Spacer_5;                                          // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_Line_01_C*                UI_Deco_Cube_Line_01;                              // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PopupTitleBG_C*                     UI_PopupTitleBG;                                   // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_playakEvent(class UAkAudioEvent* AkEvent);
	void BP_SetButtonCountImpl(int32 InCount);
	void ExecuteUbergraph_UI_Popup(int32 EntryPoint);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void SequenceEvent__ENTRYPOINTUI_Popup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Popup_C">();
	}
	static class UUI_Popup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Popup_C>();
	}
};
static_assert(alignof(UUI_Popup_C) == 0x000008, "Wrong alignment on UUI_Popup_C");
static_assert(sizeof(UUI_Popup_C) == 0x0007D0, "Wrong size on UUI_Popup_C");
static_assert(offsetof(UUI_Popup_C, UberGraphFrame) == 0x0007A0, "Member 'UUI_Popup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Popup_C, UIAnim_Close) == 0x0007A8, "Member 'UUI_Popup_C::UIAnim_Close' has a wrong offset!");
static_assert(offsetof(UUI_Popup_C, UIAnim_Open) == 0x0007B0, "Member 'UUI_Popup_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Popup_C, Spacer_5) == 0x0007B8, "Member 'UUI_Popup_C::Spacer_5' has a wrong offset!");
static_assert(offsetof(UUI_Popup_C, UI_Deco_Cube_Line_01) == 0x0007C0, "Member 'UUI_Popup_C::UI_Deco_Cube_Line_01' has a wrong offset!");
static_assert(offsetof(UUI_Popup_C, UI_PopupTitleBG) == 0x0007C8, "Member 'UUI_Popup_C::UI_PopupTitleBG' has a wrong offset!");

}

