#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionWave_Start

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_MissionWave_Start.UI_MissionWave_Start_C.ExecuteUbergraph_UI_MissionWave_Start
// 0x0004 (0x0004 - 0x0000)
struct UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start) == 0x000004, "Wrong alignment on UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start");
static_assert(sizeof(UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start) == 0x000004, "Wrong size on UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start");
static_assert(offsetof(UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start, EntryPoint) == 0x000000, "Member 'UI_MissionWave_Start_C_ExecuteUbergraph_UI_MissionWave_Start::EntryPoint' has a wrong offset!");

// Function UI_MissionWave_Start.UI_MissionWave_Start_C.PlayAnimOpenClose
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionWave_Start_C_PlayAnimOpenClose final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionWave_Start_C_PlayAnimOpenClose) == 0x000008, "Wrong alignment on UI_MissionWave_Start_C_PlayAnimOpenClose");
static_assert(sizeof(UI_MissionWave_Start_C_PlayAnimOpenClose) == 0x000008, "Wrong size on UI_MissionWave_Start_C_PlayAnimOpenClose");
static_assert(offsetof(UI_MissionWave_Start_C_PlayAnimOpenClose, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UI_MissionWave_Start_C_PlayAnimOpenClose::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_MissionWave_Start.UI_MissionWave_Start_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionWave_Start_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionWave_Start_C_GetEndAnimation) == 0x000008, "Wrong alignment on UI_MissionWave_Start_C_GetEndAnimation");
static_assert(sizeof(UI_MissionWave_Start_C_GetEndAnimation) == 0x000008, "Wrong size on UI_MissionWave_Start_C_GetEndAnimation");
static_assert(offsetof(UI_MissionWave_Start_C_GetEndAnimation, ReturnValue) == 0x000000, "Member 'UI_MissionWave_Start_C_GetEndAnimation::ReturnValue' has a wrong offset!");

}

