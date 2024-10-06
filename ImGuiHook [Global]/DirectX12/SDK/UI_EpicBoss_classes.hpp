#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBoss

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_EpicBoss.UI_EpicBoss_C
// 0x0010 (0x0740 - 0x0730)
class UUI_EpicBoss_C final : public UM1UIGame_EpicMonsterWarning
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   ToastMessageStringKey;                             // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_UI_EpicBoss(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTUI_EpicBoss();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_EpicBoss_C">();
	}
	static class UUI_EpicBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_EpicBoss_C>();
	}
};
static_assert(alignof(UUI_EpicBoss_C) == 0x000008, "Wrong alignment on UUI_EpicBoss_C");
static_assert(sizeof(UUI_EpicBoss_C) == 0x000740, "Wrong size on UUI_EpicBoss_C");
static_assert(offsetof(UUI_EpicBoss_C, UberGraphFrame) == 0x000730, "Member 'UUI_EpicBoss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_EpicBoss_C, ToastMessageStringKey) == 0x000738, "Member 'UUI_EpicBoss_C::ToastMessageStringKey' has a wrong offset!");

}
