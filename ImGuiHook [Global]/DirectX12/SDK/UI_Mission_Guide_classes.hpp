#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Guide

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Guide.UI_Mission_Guide_C
// 0x0050 (0x0770 - 0x0720)
class UUI_Mission_Guide_C final : public UM1UIMissionGuide
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_FieldContents_Fail_C*               UI_FieldContents_Fail;                             // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FieldContents_Start_C*              UI_FieldContents_Start;                            // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FieldContents_Success_C*            UI_FieldContents_Success;                          // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Fail_C*                     UI_Mission_Fail;                                   // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Start_C*                    UI_Mission_Start;                                  // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Succes_C*                   UI_Mission_Succes;                                 // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_VoidBattle_Fail_C*          UI_Mission_VoidBattle_Fail;                        // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_VoidBattle_Succes_C*        UI_Mission_VoidBattle_Succes;                      // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_MissionStatus;                                  // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_PlayFieldContentsFailAnim(EM1MissionSubType InSubType);
	void BP_PlayFieldContentsStartAnim(EM1MissionSubType InSubType);
	void BP_PlayFieldContentsSuccessAnim(EM1MissionSubType InSubType);
	void BP_PlayMissionFailAnim();
	void BP_PlayMissionStartAnim(class FName InMissionName, class FName InMissionTypeName);
	void BP_PlayMissionSuccessAnim();
	void BP_PlayVoidBattleFailAnim();
	void BP_PlayVoidBattleSuccessAnim();
	void ExecuteUbergraph_UI_Mission_Guide(int32 EntryPoint);
	TArray<class UM1UIChildMissionGuide*> GetChildMissionWidgets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Guide_C">();
	}
	static class UUI_Mission_Guide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Guide_C>();
	}
};
static_assert(alignof(UUI_Mission_Guide_C) == 0x000008, "Wrong alignment on UUI_Mission_Guide_C");
static_assert(sizeof(UUI_Mission_Guide_C) == 0x000770, "Wrong size on UUI_Mission_Guide_C");
static_assert(offsetof(UUI_Mission_Guide_C, UberGraphFrame) == 0x000720, "Member 'UUI_Mission_Guide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_FieldContents_Fail) == 0x000728, "Member 'UUI_Mission_Guide_C::UI_FieldContents_Fail' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_FieldContents_Start) == 0x000730, "Member 'UUI_Mission_Guide_C::UI_FieldContents_Start' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_FieldContents_Success) == 0x000738, "Member 'UUI_Mission_Guide_C::UI_FieldContents_Success' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_Mission_Fail) == 0x000740, "Member 'UUI_Mission_Guide_C::UI_Mission_Fail' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_Mission_Start) == 0x000748, "Member 'UUI_Mission_Guide_C::UI_Mission_Start' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_Mission_Succes) == 0x000750, "Member 'UUI_Mission_Guide_C::UI_Mission_Succes' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_Mission_VoidBattle_Fail) == 0x000758, "Member 'UUI_Mission_Guide_C::UI_Mission_VoidBattle_Fail' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, UI_Mission_VoidBattle_Succes) == 0x000760, "Member 'UUI_Mission_Guide_C::UI_Mission_VoidBattle_Succes' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Guide_C, WS_MissionStatus) == 0x000768, "Member 'UUI_Mission_Guide_C::WS_MissionStatus' has a wrong offset!");

}

