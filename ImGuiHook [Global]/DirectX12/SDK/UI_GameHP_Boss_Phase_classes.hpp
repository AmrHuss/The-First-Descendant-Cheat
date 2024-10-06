#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Boss_Phase

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameHP_Boss_Phase.UI_GameHP_Boss_Phase_C
// 0x0020 (0x0728 - 0x0708)
class UUI_GameHP_Boss_Phase_C final : public UM1UIWidget
{
public:
	class UWidgetAnimation*                       UIAnim_Phase_Empty;                                // 0x0708(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Phase_Fill;                                 // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Phase_Complete;                             // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Effect;                                            // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PlayCompleteAnim();
	void PlayFillOrEmpty(bool bFill);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameHP_Boss_Phase_C">();
	}
	static class UUI_GameHP_Boss_Phase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameHP_Boss_Phase_C>();
	}
};
static_assert(alignof(UUI_GameHP_Boss_Phase_C) == 0x000008, "Wrong alignment on UUI_GameHP_Boss_Phase_C");
static_assert(sizeof(UUI_GameHP_Boss_Phase_C) == 0x000728, "Wrong size on UUI_GameHP_Boss_Phase_C");
static_assert(offsetof(UUI_GameHP_Boss_Phase_C, UIAnim_Phase_Empty) == 0x000708, "Member 'UUI_GameHP_Boss_Phase_C::UIAnim_Phase_Empty' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_Phase_C, UIAnim_Phase_Fill) == 0x000710, "Member 'UUI_GameHP_Boss_Phase_C::UIAnim_Phase_Fill' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_Phase_C, UIAnim_Phase_Complete) == 0x000718, "Member 'UUI_GameHP_Boss_Phase_C::UIAnim_Phase_Complete' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Boss_Phase_C, Effect) == 0x000720, "Member 'UUI_GameHP_Boss_Phase_C::Effect' has a wrong offset!");

}
