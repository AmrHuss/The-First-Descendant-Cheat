#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ReloadMark

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ReloadMark.UI_ReloadMark_C.ExecuteUbergraph_UI_ReloadMark
// 0x0010 (0x0010 - 0x0000)
struct UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark) == 0x000008, "Wrong alignment on UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark");
static_assert(sizeof(UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark) == 0x000010, "Wrong size on UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark");
static_assert(offsetof(UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark, EntryPoint) == 0x000000, "Member 'UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
