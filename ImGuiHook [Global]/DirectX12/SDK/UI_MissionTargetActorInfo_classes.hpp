#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionTargetActorInfo

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionTargetActorInfo.UI_MissionTargetActorInfo_C
// 0x0268 (0x09E0 - 0x0778)
class UUI_MissionTargetActorInfo_C final : public UM1UIMissionTargetActorInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Default;                                           // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Gauge;                                             // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_798[0x8];                                      // 0x0798(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Destruction_Type_Hp;                               // 0x07A0(0x00C0)(Edit, BlueprintVisible)
	struct FSlateBrush                            Defense_Type_Hp;                                   // 0x0860(0x00C0)(Edit, BlueprintVisible)
	struct FSlateBrush                            Escort_Type_Hp;                                    // 0x0920(0x00C0)(Edit, BlueprintVisible)

public:
	void BP_HideBG(bool InNewHidden);
	void BP_SetMissionTargetHpStyleByType(EM1MissionTargetType InType);
	void ExecuteUbergraph_UI_MissionTargetActorInfo(int32 EntryPoint);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionTargetActorInfo_C">();
	}
	static class UUI_MissionTargetActorInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionTargetActorInfo_C>();
	}
};
static_assert(alignof(UUI_MissionTargetActorInfo_C) == 0x000010, "Wrong alignment on UUI_MissionTargetActorInfo_C");
static_assert(sizeof(UUI_MissionTargetActorInfo_C) == 0x0009E0, "Wrong size on UUI_MissionTargetActorInfo_C");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, UberGraphFrame) == 0x000778, "Member 'UUI_MissionTargetActorInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, UIAnim_Open) == 0x000780, "Member 'UUI_MissionTargetActorInfo_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, Default) == 0x000788, "Member 'UUI_MissionTargetActorInfo_C::Default' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, Gauge) == 0x000790, "Member 'UUI_MissionTargetActorInfo_C::Gauge' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, Destruction_Type_Hp) == 0x0007A0, "Member 'UUI_MissionTargetActorInfo_C::Destruction_Type_Hp' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, Defense_Type_Hp) == 0x000860, "Member 'UUI_MissionTargetActorInfo_C::Defense_Type_Hp' has a wrong offset!");
static_assert(offsetof(UUI_MissionTargetActorInfo_C, Escort_Type_Hp) == 0x000920, "Member 'UUI_MissionTargetActorInfo_C::Escort_Type_Hp' has a wrong offset!");

}

