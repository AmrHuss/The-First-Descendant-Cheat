#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Quest_Task_Description

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Quest_Task_Description.UI_Quest_Task_Description_C
// 0x0010 (0x0730 - 0x0720)
class UUI_Quest_Task_Description_C final : public UM1UIQuestTrackerDescription
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_98;                                          // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_UI_Quest_Task_Description(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Quest_Task_Description_C">();
	}
	static class UUI_Quest_Task_Description_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Quest_Task_Description_C>();
	}
};
static_assert(alignof(UUI_Quest_Task_Description_C) == 0x000008, "Wrong alignment on UUI_Quest_Task_Description_C");
static_assert(sizeof(UUI_Quest_Task_Description_C) == 0x000730, "Wrong size on UUI_Quest_Task_Description_C");
static_assert(offsetof(UUI_Quest_Task_Description_C, UberGraphFrame) == 0x000720, "Member 'UUI_Quest_Task_Description_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Task_Description_C, Image_98) == 0x000728, "Member 'UUI_Quest_Task_Description_C::Image_98' has a wrong offset!");

}

