#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MailboxNpcIcon

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MailboxNpcIcon.UI_MailboxNpcIcon_C
// 0x0028 (0x0738 - 0x0710)
class UUI_MailboxNpcIcon_C final : public UM1UIMailboxNpcIcon
{
public:
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 MI_CircleEdge;                                     // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_Flicker;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_MainQuestIcon;                                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_MainQuestIcon_1;                                // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MailboxNpcIcon_C">();
	}
	static class UUI_MailboxNpcIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MailboxNpcIcon_C>();
	}
};
static_assert(alignof(UUI_MailboxNpcIcon_C) == 0x000008, "Wrong alignment on UUI_MailboxNpcIcon_C");
static_assert(sizeof(UUI_MailboxNpcIcon_C) == 0x000738, "Wrong size on UUI_MailboxNpcIcon_C");
static_assert(offsetof(UUI_MailboxNpcIcon_C, AnimLoop) == 0x000710, "Member 'UUI_MailboxNpcIcon_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UUI_MailboxNpcIcon_C, MI_CircleEdge) == 0x000718, "Member 'UUI_MailboxNpcIcon_C::MI_CircleEdge' has a wrong offset!");
static_assert(offsetof(UUI_MailboxNpcIcon_C, MI_Flicker) == 0x000720, "Member 'UUI_MailboxNpcIcon_C::MI_Flicker' has a wrong offset!");
static_assert(offsetof(UUI_MailboxNpcIcon_C, UI_MainQuestIcon) == 0x000728, "Member 'UUI_MailboxNpcIcon_C::UI_MainQuestIcon' has a wrong offset!");
static_assert(offsetof(UUI_MailboxNpcIcon_C, UI_MainQuestIcon_1) == 0x000730, "Member 'UUI_MailboxNpcIcon_C::UI_MainQuestIcon_1' has a wrong offset!");

}

