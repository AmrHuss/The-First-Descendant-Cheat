#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NPC_NameTag

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_NPC_NameTag.UI_NPC_NameTag_C
// 0x0008 (0x0790 - 0x0788)
class UUI_NPC_NameTag_C final : public UM1UINpcNameTag
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_UI_NPC_NameTag(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_NPC_NameTag_C">();
	}
	static class UUI_NPC_NameTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_NPC_NameTag_C>();
	}
};
static_assert(alignof(UUI_NPC_NameTag_C) == 0x000008, "Wrong alignment on UUI_NPC_NameTag_C");
static_assert(sizeof(UUI_NPC_NameTag_C) == 0x000790, "Wrong size on UUI_NPC_NameTag_C");
static_assert(offsetof(UUI_NPC_NameTag_C, UberGraphFrame) == 0x000788, "Member 'UUI_NPC_NameTag_C::UberGraphFrame' has a wrong offset!");

}

