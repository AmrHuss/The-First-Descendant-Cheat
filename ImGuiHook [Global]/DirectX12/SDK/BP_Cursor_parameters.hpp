#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cursor

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Cursor.BP_Cursor_C.BP_ScaleCursorSize
// 0x0004 (0x0004 - 0x0000)
struct BP_Cursor_C_BP_ScaleCursorSize final
{
public:
	float                                         Factor;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cursor_C_BP_ScaleCursorSize) == 0x000004, "Wrong alignment on BP_Cursor_C_BP_ScaleCursorSize");
static_assert(sizeof(BP_Cursor_C_BP_ScaleCursorSize) == 0x000004, "Wrong size on BP_Cursor_C_BP_ScaleCursorSize");
static_assert(offsetof(BP_Cursor_C_BP_ScaleCursorSize, Factor) == 0x000000, "Member 'BP_Cursor_C_BP_ScaleCursorSize::Factor' has a wrong offset!");

// Function BP_Cursor.BP_Cursor_C.BP_SetCursorState
// 0x0001 (0x0001 - 0x0000)
struct BP_Cursor_C_BP_SetCursorState final
{
public:
	EM1MouseCursorState                           InState;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cursor_C_BP_SetCursorState) == 0x000001, "Wrong alignment on BP_Cursor_C_BP_SetCursorState");
static_assert(sizeof(BP_Cursor_C_BP_SetCursorState) == 0x000001, "Wrong size on BP_Cursor_C_BP_SetCursorState");
static_assert(offsetof(BP_Cursor_C_BP_SetCursorState, InState) == 0x000000, "Member 'BP_Cursor_C_BP_SetCursorState::InState' has a wrong offset!");

// Function BP_Cursor.BP_Cursor_C.ExecuteUbergraph_BP_Cursor
// 0x0030 (0x0030 - 0x0000)
struct BP_Cursor_C_ExecuteUbergraph_BP_Cursor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Factor;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MouseCursorState                           K2Node_Event_InState;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor) == 0x000008, "Wrong alignment on BP_Cursor_C_ExecuteUbergraph_BP_Cursor");
static_assert(sizeof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor) == 0x000030, "Wrong size on BP_Cursor_C_ExecuteUbergraph_BP_Cursor");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, EntryPoint) == 0x000000, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, K2Node_Event_Factor) == 0x000004, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::K2Node_Event_Factor' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, K2Node_Event_InState) == 0x000008, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::K2Node_Event_InState' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, CallFunc_MakeVector2D_ReturnValue) == 0x00000C, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000020, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Cursor_C_ExecuteUbergraph_BP_Cursor, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x000028, "Member 'BP_Cursor_C_ExecuteUbergraph_BP_Cursor::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

}
