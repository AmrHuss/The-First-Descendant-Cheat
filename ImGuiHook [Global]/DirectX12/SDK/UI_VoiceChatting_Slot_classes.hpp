#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VoiceChatting_Slot

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_VoiceChatting_Slot.UI_VoiceChatting_Slot_C
// 0x0008 (0x0728 - 0x0720)
class UUI_VoiceChatting_Slot_C final : public UM1UISimpleVoiceChattingSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_VoiceChatting_Slot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_VoiceChatting_Slot_C">();
	}
	static class UUI_VoiceChatting_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_VoiceChatting_Slot_C>();
	}
};
static_assert(alignof(UUI_VoiceChatting_Slot_C) == 0x000008, "Wrong alignment on UUI_VoiceChatting_Slot_C");
static_assert(sizeof(UUI_VoiceChatting_Slot_C) == 0x000728, "Wrong size on UUI_VoiceChatting_Slot_C");
static_assert(offsetof(UUI_VoiceChatting_Slot_C, UberGraphFrame) == 0x000720, "Member 'UUI_VoiceChatting_Slot_C::UberGraphFrame' has a wrong offset!");

}

