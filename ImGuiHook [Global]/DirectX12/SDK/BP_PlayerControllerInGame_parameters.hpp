#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerControllerInGame

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerControllerInGame.BP_PlayerControllerInGame_C.ExecuteUbergraph_BP_PlayerControllerInGame
// 0x0040 (0x0040 - 0x0000)
struct BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_CustomEvent_InArray;                        // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame) == 0x000008, "Wrong alignment on BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame");
static_assert(sizeof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame) == 0x000040, "Wrong size on BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, EntryPoint) == 0x000000, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, K2Node_CustomEvent_InArray) == 0x000008, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::K2Node_CustomEvent_InArray' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PlayerControllerInGame.BP_PlayerControllerInGame_C.SendLargeArray
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerControllerInGame_C_SendLargeArray final
{
public:
	TArray<class FString>                         InArray;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerControllerInGame_C_SendLargeArray) == 0x000008, "Wrong alignment on BP_PlayerControllerInGame_C_SendLargeArray");
static_assert(sizeof(BP_PlayerControllerInGame_C_SendLargeArray) == 0x000010, "Wrong size on BP_PlayerControllerInGame_C_SendLargeArray");
static_assert(offsetof(BP_PlayerControllerInGame_C_SendLargeArray, InArray) == 0x000000, "Member 'BP_PlayerControllerInGame_C_SendLargeArray::InArray' has a wrong offset!");

}
