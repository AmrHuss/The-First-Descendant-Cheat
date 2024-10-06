#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_InstanceDungeonScore

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C
// 0x0018 (0x0730 - 0x0718)
class UUI_Game_InstanceDungeonScore_C final : public UM1UIInstanceDungeonScore
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_AddScore;                                     // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_Game_InstanceDungeonScore_Item_C*   UI_AddScore;                                       // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_SetAddScore(const class FText& InAddScoreText);
	void Construct();
	void ExecuteUbergraph_UI_Game_InstanceDungeonScore(int32 EntryPoint);
	void WidgetAnimationEvt_ANIM_AddScore_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_InstanceDungeonScore_C">();
	}
	static class UUI_Game_InstanceDungeonScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_InstanceDungeonScore_C>();
	}
};
static_assert(alignof(UUI_Game_InstanceDungeonScore_C) == 0x000008, "Wrong alignment on UUI_Game_InstanceDungeonScore_C");
static_assert(sizeof(UUI_Game_InstanceDungeonScore_C) == 0x000730, "Wrong size on UUI_Game_InstanceDungeonScore_C");
static_assert(offsetof(UUI_Game_InstanceDungeonScore_C, UberGraphFrame) == 0x000718, "Member 'UUI_Game_InstanceDungeonScore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_InstanceDungeonScore_C, ANIM_AddScore) == 0x000720, "Member 'UUI_Game_InstanceDungeonScore_C::ANIM_AddScore' has a wrong offset!");
static_assert(offsetof(UUI_Game_InstanceDungeonScore_C, UI_AddScore) == 0x000728, "Member 'UUI_Game_InstanceDungeonScore_C::UI_AddScore' has a wrong offset!");

}

