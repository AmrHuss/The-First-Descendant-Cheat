#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidBattle_Fail

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C
// 0x0028 (0x0730 - 0x0708)
class UUI_Mission_VoidBattle_Fail_C final : public UM1UIChildMissionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOpenClose;                                     // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Bg;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEventMissionFail;                                // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BP_widget_playAkEven();
	void ExecuteUbergraph_UI_Mission_VoidBattle_Fail(int32 EntryPoint);
	void Finished_4AB1BCA24CFA3B30600E85B720EEE308();
	void PlayAnimOpenClose();
	void SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Fail();

	class UWidgetAnimation* GetEndAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_VoidBattle_Fail_C">();
	}
	static class UUI_Mission_VoidBattle_Fail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_VoidBattle_Fail_C>();
	}
};
static_assert(alignof(UUI_Mission_VoidBattle_Fail_C) == 0x000008, "Wrong alignment on UUI_Mission_VoidBattle_Fail_C");
static_assert(sizeof(UUI_Mission_VoidBattle_Fail_C) == 0x000730, "Wrong size on UUI_Mission_VoidBattle_Fail_C");
static_assert(offsetof(UUI_Mission_VoidBattle_Fail_C, UberGraphFrame) == 0x000708, "Member 'UUI_Mission_VoidBattle_Fail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Fail_C, AnimOpenClose) == 0x000710, "Member 'UUI_Mission_VoidBattle_Fail_C::AnimOpenClose' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Fail_C, Text_Bg) == 0x000718, "Member 'UUI_Mission_VoidBattle_Fail_C::Text_Bg' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Fail_C, Text_Title) == 0x000720, "Member 'UUI_Mission_VoidBattle_Fail_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Fail_C, AkEventMissionFail) == 0x000728, "Member 'UUI_Mission_VoidBattle_Fail_C::AkEventMissionFail' has a wrong offset!");

}

