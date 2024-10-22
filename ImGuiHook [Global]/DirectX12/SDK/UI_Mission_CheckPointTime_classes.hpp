#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_CheckPointTime

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_CheckPointTime.UI_Mission_CheckPointTime_C
// 0x0070 (0x07B8 - 0x0748)
class UUI_Mission_CheckPointTime_C final : public UM1UIMissionWaveCheckPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Close;                                      // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Loop_Time;                                  // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_TimeStart;                                  // 0x0760(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Fx;                                             // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_141;                                         // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Common_Fx_01_C*                     UI_Common_Fx_01;                                   // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConsumableItemDetails_C*            UI_ConsumableItemDetails;                          // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_Title_C*                  UI_Deco_Back_Title;                                // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_01_C*                     UI_Deco_Cube_01;                                   // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_04;                              // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Ui_View_Bg;                                        // 0x07B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_SetTimerHighlight(bool bInSet);
	void BP_ShowAsContinueSelected();
	void BP_ShowAsStopSelected();
	void Construct();
	void ExecuteUbergraph_UI_Mission_CheckPointTime(int32 EntryPoint);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_CheckPointTime_C">();
	}
	static class UUI_Mission_CheckPointTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_CheckPointTime_C>();
	}
};
static_assert(alignof(UUI_Mission_CheckPointTime_C) == 0x000008, "Wrong alignment on UUI_Mission_CheckPointTime_C");
static_assert(sizeof(UUI_Mission_CheckPointTime_C) == 0x0007B8, "Wrong size on UUI_Mission_CheckPointTime_C");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UberGraphFrame) == 0x000748, "Member 'UUI_Mission_CheckPointTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UIAnim_Close) == 0x000750, "Member 'UUI_Mission_CheckPointTime_C::UIAnim_Close' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UIAnim_Loop_Time) == 0x000758, "Member 'UUI_Mission_CheckPointTime_C::UIAnim_Loop_Time' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UIAnim_TimeStart) == 0x000760, "Member 'UUI_Mission_CheckPointTime_C::UIAnim_TimeStart' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UIAnim_Open) == 0x000768, "Member 'UUI_Mission_CheckPointTime_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, BG) == 0x000770, "Member 'UUI_Mission_CheckPointTime_C::BG' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, BG_Fx) == 0x000778, "Member 'UUI_Mission_CheckPointTime_C::BG_Fx' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, Image_141) == 0x000780, "Member 'UUI_Mission_CheckPointTime_C::Image_141' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UI_Common_Fx_01) == 0x000788, "Member 'UUI_Mission_CheckPointTime_C::UI_Common_Fx_01' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UI_ConsumableItemDetails) == 0x000790, "Member 'UUI_Mission_CheckPointTime_C::UI_ConsumableItemDetails' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UI_Deco_Back_Title) == 0x000798, "Member 'UUI_Mission_CheckPointTime_C::UI_Deco_Back_Title' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UI_Deco_Cube_01) == 0x0007A0, "Member 'UUI_Mission_CheckPointTime_C::UI_Deco_Cube_01' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, UI_Deco_TitleLine_04) == 0x0007A8, "Member 'UUI_Mission_CheckPointTime_C::UI_Deco_TitleLine_04' has a wrong offset!");
static_assert(offsetof(UUI_Mission_CheckPointTime_C, Ui_View_Bg) == 0x0007B0, "Member 'UUI_Mission_CheckPointTime_C::Ui_View_Bg' has a wrong offset!");

}

