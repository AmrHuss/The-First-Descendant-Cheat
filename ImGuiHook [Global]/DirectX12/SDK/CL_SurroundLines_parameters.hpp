#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CL_SurroundLines

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CL_SurroundLines.CL_SurroundLines_C.ExecuteUbergraph_CL_SurroundLines
// 0x0058 (0x0058 - 0x0000)
struct CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines) == 0x000008, "Wrong alignment on CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines");
static_assert(sizeof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines) == 0x000058, "Wrong size on CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines");
static_assert(offsetof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines, EntryPoint) == 0x000000, "Member 'CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines::EntryPoint' has a wrong offset!");
static_assert(offsetof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines, K2Node_Event_MyGeometry) == 0x000018, "Member 'CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines, K2Node_Event_InDeltaTime) == 0x000050, "Member 'CL_SurroundLines_C_ExecuteUbergraph_CL_SurroundLines::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function CL_SurroundLines.CL_SurroundLines_C.Tick
// 0x003C (0x003C - 0x0000)
struct CL_SurroundLines_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CL_SurroundLines_C_Tick) == 0x000004, "Wrong alignment on CL_SurroundLines_C_Tick");
static_assert(sizeof(CL_SurroundLines_C_Tick) == 0x00003C, "Wrong size on CL_SurroundLines_C_Tick");
static_assert(offsetof(CL_SurroundLines_C_Tick, MyGeometry) == 0x000000, "Member 'CL_SurroundLines_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CL_SurroundLines_C_Tick, InDeltaTime) == 0x000038, "Member 'CL_SurroundLines_C_Tick::InDeltaTime' has a wrong offset!");

}

