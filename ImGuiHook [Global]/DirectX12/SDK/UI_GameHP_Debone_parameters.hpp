#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Debone

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_GameHP_Debone.UI_GameHP_Debone_C.ExecuteUbergraph_UI_GameHP_Debone
// 0x0010 (0x0010 - 0x0000)
struct UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone) == 0x000008, "Wrong alignment on UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone");
static_assert(sizeof(UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone) == 0x000010, "Wrong size on UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone");
static_assert(offsetof(UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone, EntryPoint) == 0x000000, "Member 'UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'UI_GameHP_Debone_C_ExecuteUbergraph_UI_GameHP_Debone::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UI_GameHP_Debone.UI_GameHP_Debone_C.UpdateHPGauge
// 0x0008 (0x0008 - 0x0000)
struct UI_GameHP_Debone_C_UpdateHPGauge final
{
public:
	double                                        HPRate;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameHP_Debone_C_UpdateHPGauge) == 0x000008, "Wrong alignment on UI_GameHP_Debone_C_UpdateHPGauge");
static_assert(sizeof(UI_GameHP_Debone_C_UpdateHPGauge) == 0x000008, "Wrong size on UI_GameHP_Debone_C_UpdateHPGauge");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateHPGauge, HPRate) == 0x000000, "Member 'UI_GameHP_Debone_C_UpdateHPGauge::HPRate' has a wrong offset!");

// Function UI_GameHP_Debone.UI_GameHP_Debone_C.UpdateStaminaGauge
// 0x0030 (0x0030 - 0x0000)
struct UI_GameHP_Debone_C_UpdateStaminaGauge final
{
public:
	double                                        StaminaRage;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameHP_Debone_C_UpdateStaminaGauge) == 0x000008, "Wrong alignment on UI_GameHP_Debone_C_UpdateStaminaGauge");
static_assert(sizeof(UI_GameHP_Debone_C_UpdateStaminaGauge) == 0x000030, "Wrong size on UI_GameHP_Debone_C_UpdateStaminaGauge");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, StaminaRage) == 0x000000, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::StaminaRage' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000020, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast) == 0x000028, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_GameHP_Debone_C_UpdateStaminaGauge, CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast) == 0x00002C, "Member 'UI_GameHP_Debone_C_UpdateStaminaGauge::CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast' has a wrong offset!");

}
