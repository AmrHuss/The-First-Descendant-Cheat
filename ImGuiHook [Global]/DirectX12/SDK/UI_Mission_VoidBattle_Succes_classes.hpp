#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidBattle_Succes

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_VoidBattle_Succes.UI_Mission_VoidBattle_Succes_C
// 0x0020 (0x0728 - 0x0708)
class UUI_Mission_VoidBattle_Succes_C final : public UM1UIChildMissionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_OpenClose;                                    // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Bg;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);
	void Construct();
	void ExecuteUbergraph_UI_Mission_VoidBattle_Succes(int32 EntryPoint);
	void Finished_4F34397543CA282A2EBA3E916F6D0515();
	void PlayAnimOpenClose();
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Succes();

	class UWidgetAnimation* GetEndAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_VoidBattle_Succes_C">();
	}
	static class UUI_Mission_VoidBattle_Succes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_VoidBattle_Succes_C>();
	}
};
static_assert(alignof(UUI_Mission_VoidBattle_Succes_C) == 0x000008, "Wrong alignment on UUI_Mission_VoidBattle_Succes_C");
static_assert(sizeof(UUI_Mission_VoidBattle_Succes_C) == 0x000728, "Wrong size on UUI_Mission_VoidBattle_Succes_C");
static_assert(offsetof(UUI_Mission_VoidBattle_Succes_C, UberGraphFrame) == 0x000708, "Member 'UUI_Mission_VoidBattle_Succes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Succes_C, Anim_OpenClose) == 0x000710, "Member 'UUI_Mission_VoidBattle_Succes_C::Anim_OpenClose' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Succes_C, Text_Bg) == 0x000718, "Member 'UUI_Mission_VoidBattle_Succes_C::Text_Bg' has a wrong offset!");
static_assert(offsetof(UUI_Mission_VoidBattle_Succes_C, Text_Title) == 0x000720, "Member 'UUI_Mission_VoidBattle_Succes_C::Text_Title' has a wrong offset!");

}

