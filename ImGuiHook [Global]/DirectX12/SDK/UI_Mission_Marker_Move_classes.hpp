#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Marker_Move

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Marker_Move.UI_Mission_Marker_Move_C
// 0x0020 (0x0768 - 0x0748)
class UUI_Mission_Marker_Move_C final : public UM1UIMissionTaskMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Start;                                        // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DirectionIcon;                                     // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_PlayMarkerAnim();
	void Construct();
	void ExecuteUbergraph_UI_Mission_Marker_Move(int32 EntryPoint);
	void OnShowImpl();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Marker_Move_C">();
	}
	static class UUI_Mission_Marker_Move_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Marker_Move_C>();
	}
};
static_assert(alignof(UUI_Mission_Marker_Move_C) == 0x000008, "Wrong alignment on UUI_Mission_Marker_Move_C");
static_assert(sizeof(UUI_Mission_Marker_Move_C) == 0x000768, "Wrong size on UUI_Mission_Marker_Move_C");
static_assert(offsetof(UUI_Mission_Marker_Move_C, UberGraphFrame) == 0x000748, "Member 'UUI_Mission_Marker_Move_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Marker_Move_C, Anim_Start) == 0x000750, "Member 'UUI_Mission_Marker_Move_C::Anim_Start' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Marker_Move_C, AnimLoop) == 0x000758, "Member 'UUI_Mission_Marker_Move_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Marker_Move_C, DirectionIcon) == 0x000760, "Member 'UUI_Mission_Marker_Move_C::DirectionIcon' has a wrong offset!");

}

