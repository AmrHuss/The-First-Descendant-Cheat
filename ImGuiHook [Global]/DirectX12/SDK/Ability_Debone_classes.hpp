#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_Debone

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "GameplayCameras_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_Debone.Ability_Debone_C
// 0x0270 (0x0510 - 0x02A0)
class UAbility_Debone_C final : public UM1Ability
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1MonsterPartsComponent*               DeboneParts;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DeboneTarget;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<EM1CharacterGender, class UAnimMontage*> DeboneAttackHor;                                   // 0x02B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> DeboneAttackVert;                                  // 0x0308(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> DeboneSucceedHor;                                  // 0x0358(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> DeboneSucceedVert;                                 // 0x03A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	EM1CharacterGender                            AnimPresetType;                                    // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        DebonePartsParentMesh;                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bDeboneStarted;                                    // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDeboneSucceeded;                                  // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBossStruggling;                                   // 0x040A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOwnerEnduring;                                    // 0x040B(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bOwnerLocalEnduring;                               // 0x040C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOwnerAttacking;                                   // 0x040D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          bOwnerAttachedCompletely;                          // 0x040E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCheatIgnoreCooltime;                              // 0x040F(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PartsHPRate;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                        CurStamina;                                        // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxStamina;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HangOnReducePerSecond_;                            // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StruggleOnlyModifier;                              // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndureOnlyModifier;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StruggleEndureModifier;                            // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HangOnIncreaseRatioByPartCount_;                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           DeboneBlockStatusEffectID;                         // 0x0450(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UM1AbilityTask_LocalWaitInput*>  WaitInputTasks;                                    // 0x0460(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	double                                        ArriveInterpRotationSpeed;                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ArriveInterpLocationSpeed;                         // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HangOnAccumulateTime;                              // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DeboneWidgetClass;                                 // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDebonePartsWidgetComp_C*               DeboneWidgetComp;                                  // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498[0x8];                                      // 0x0498(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DeboneWidgetOffset;                                // 0x04A0(0x0030)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameHP_Debone_C*                    DeboneWidget;                                      // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bCheatIgnoreStamina;                               // 0x04D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D9[0x1];                                      // 0x04D9(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraAnimationHandle                 HangOnDefenseCameraHandle;                         // 0x04DA(0x0004)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE[0x2];                                      // 0x04DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitAbilityEvent*        WaitBossStruggleEventTask;                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimationSequence*               DefaultStruggleCameraSequence;                     // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DeboneArriveCameraDefault;                         // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DeboneArriveCameraVert;                            // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DeboneArriveCameraHor;                             // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraModifier>            DeboneStartCamera;                                 // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void AbilityEvent_DeboneArrived();
	void AbilityEvent_DeboneEnd();
	void AbilityEvent_DeboneEndureEnd();
	void AbilityEvent_DeboneEndureStart();
	void AbilityEvent_DeboneStart(class UM1MonsterPartsComponent* Parts);
	void AbilityEvent_EpicBossStartStruggle();
	void AbilityEvent_EpicBossStopStruggle();
	void ApplyArriveCamera();
	void ApplyIgnoreLookInput();
	void ApplyStartCamera();
	void ApplyStruggleCamera(bool bApply);
	void AttachToParts();
	void BP_OnActivated();
	void BP_OnDeactivated(bool bCancelled);
	void DeboneAttachedTick(float DeltaSeconds);
	void DeboneAttack();
	void DeboneSuccess();
	void DeboneTargetAttacked();
	void DebugIgnoreDeboneCooltime(const class FString& Args);
	void DebugIgnoreDeboneStamina(const class FString& Args);
	void DebugPrintStamina(float DeltaSeconds);
	void DetachFromParts();
	void ExecuteDeboneAttackOperation();
	void ExecuteUbergraph_Ability_Debone(int32 EntryPoint);
	void GetArriveCameraModifier(class UClass** OutCameraModifier);
	void GetDeboneAttackMontage(class UAnimMontage** Montage);
	void GetDeboneSucceedMontage(class UAnimMontage** Montage);
	void HideDeboneUI();
	void IncrementPartsHangonCount();
	void OnAbilityEvent_1530179148E34C18C2B07C8EA37CF409(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_50AC98084D5FAC1BCBD9EDA054BAAD2B(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_792E32904B35F1C03B854FBCAA6B6319(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_C04518B1422087423B7917B34F50F3BC(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_E8E28EE7440C80A186429789BA43CD6F(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_F7D92B584B0C87393F7FFD97C44B9AC9(const struct FM1AbilityEvent& Event);
	void OnBlendOut_11FB4BDF4B03E32FA2E626B37853433C(const struct FM1AbilityEvent& Event);
	void OnBlendOut_D1EBFD224EC7C71DB2BF95AB4E4FF3AE(const struct FM1AbilityEvent& Event);
	void OnCompleted_11FB4BDF4B03E32FA2E626B37853433C(const struct FM1AbilityEvent& Event);
	void OnCompleted_D1EBFD224EC7C71DB2BF95AB4E4FF3AE(const struct FM1AbilityEvent& Event);
	void OnEventReceived_11FB4BDF4B03E32FA2E626B37853433C(const struct FM1AbilityEvent& Event);
	void OnEventReceived_D1EBFD224EC7C71DB2BF95AB4E4FF3AE(const struct FM1AbilityEvent& Event);
	void OnInput_518A6AE7450A2AC153D6F9B6DA884B21();
	void OnInput_E66959964E8DA03AA895E3870B9C7EBB();
	void OnLoaded_DE97FAB246F4BF4917611E837526426C(class UObject* Loaded);
	void OnLoaded_EFA70D4A40BAE9A5094A22B1E777DFB0(class UObject* Loaded);
	void OnRep_bOwnerAttacking();
	void OnRep_bOwnerEnduring();
	void OnRep_PartsHPRate();
	void ResetCameras();
	void ResetDebone();
	void ServerIgnoreDeboneCooltime(bool bIgnore);
	void ServerIgnoreDeboneStamina(bool bIgnore);
	void ServerOnReceiveAction1Input();
	void ServerOnReceiveCancelInput();
	void SetOwnerLocalEnduring(bool InEnduring);
	void ShowDeboneUI();
	void ShowStamina(int32 IsEnable);
	void StopArriveCameraClamp(bool bStop);
	void TryAbilityEventDeboneEnd();
	void UnapplyIgnoreLookInput();
	void UpdatePositionAndIK(double DeltaSeconds);
	void UpdateStamina(double DeltaSeconds, bool* bRunOutStamina);

	void GetAllCameras(TArray<class UClass*>* OutCameraModifiers) const;
	void IsEnduring(bool* bEnduring) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_Debone_C">();
	}
	static class UAbility_Debone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_Debone_C>();
	}
};
static_assert(alignof(UAbility_Debone_C) == 0x000010, "Wrong alignment on UAbility_Debone_C");
static_assert(sizeof(UAbility_Debone_C) == 0x000510, "Wrong size on UAbility_Debone_C");
static_assert(offsetof(UAbility_Debone_C, UberGraphFrame) == 0x0002A0, "Member 'UAbility_Debone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneParts) == 0x0002A8, "Member 'UAbility_Debone_C::DeboneParts' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneTarget) == 0x0002B0, "Member 'UAbility_Debone_C::DeboneTarget' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneAttackHor) == 0x0002B8, "Member 'UAbility_Debone_C::DeboneAttackHor' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneAttackVert) == 0x000308, "Member 'UAbility_Debone_C::DeboneAttackVert' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneSucceedHor) == 0x000358, "Member 'UAbility_Debone_C::DeboneSucceedHor' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneSucceedVert) == 0x0003A8, "Member 'UAbility_Debone_C::DeboneSucceedVert' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, AnimPresetType) == 0x0003F8, "Member 'UAbility_Debone_C::AnimPresetType' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DebonePartsParentMesh) == 0x000400, "Member 'UAbility_Debone_C::DebonePartsParentMesh' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bDeboneStarted) == 0x000408, "Member 'UAbility_Debone_C::bDeboneStarted' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bDeboneSucceeded) == 0x000409, "Member 'UAbility_Debone_C::bDeboneSucceeded' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bBossStruggling) == 0x00040A, "Member 'UAbility_Debone_C::bBossStruggling' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bOwnerEnduring) == 0x00040B, "Member 'UAbility_Debone_C::bOwnerEnduring' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bOwnerLocalEnduring) == 0x00040C, "Member 'UAbility_Debone_C::bOwnerLocalEnduring' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bOwnerAttacking) == 0x00040D, "Member 'UAbility_Debone_C::bOwnerAttacking' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bOwnerAttachedCompletely) == 0x00040E, "Member 'UAbility_Debone_C::bOwnerAttachedCompletely' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bCheatIgnoreCooltime) == 0x00040F, "Member 'UAbility_Debone_C::bCheatIgnoreCooltime' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, PartsHPRate) == 0x000410, "Member 'UAbility_Debone_C::PartsHPRate' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, CurStamina) == 0x000418, "Member 'UAbility_Debone_C::CurStamina' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, MaxStamina) == 0x000420, "Member 'UAbility_Debone_C::MaxStamina' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, HangOnReducePerSecond_) == 0x000428, "Member 'UAbility_Debone_C::HangOnReducePerSecond_' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, StruggleOnlyModifier) == 0x000430, "Member 'UAbility_Debone_C::StruggleOnlyModifier' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, EndureOnlyModifier) == 0x000438, "Member 'UAbility_Debone_C::EndureOnlyModifier' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, StruggleEndureModifier) == 0x000440, "Member 'UAbility_Debone_C::StruggleEndureModifier' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, HangOnIncreaseRatioByPartCount_) == 0x000448, "Member 'UAbility_Debone_C::HangOnIncreaseRatioByPartCount_' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneBlockStatusEffectID) == 0x000450, "Member 'UAbility_Debone_C::DeboneBlockStatusEffectID' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, WaitInputTasks) == 0x000460, "Member 'UAbility_Debone_C::WaitInputTasks' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, ArriveInterpRotationSpeed) == 0x000470, "Member 'UAbility_Debone_C::ArriveInterpRotationSpeed' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, ArriveInterpLocationSpeed) == 0x000478, "Member 'UAbility_Debone_C::ArriveInterpLocationSpeed' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, HangOnAccumulateTime) == 0x000480, "Member 'UAbility_Debone_C::HangOnAccumulateTime' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneWidgetClass) == 0x000488, "Member 'UAbility_Debone_C::DeboneWidgetClass' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneWidgetComp) == 0x000490, "Member 'UAbility_Debone_C::DeboneWidgetComp' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneWidgetOffset) == 0x0004A0, "Member 'UAbility_Debone_C::DeboneWidgetOffset' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneWidget) == 0x0004D0, "Member 'UAbility_Debone_C::DeboneWidget' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, bCheatIgnoreStamina) == 0x0004D8, "Member 'UAbility_Debone_C::bCheatIgnoreStamina' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, HangOnDefenseCameraHandle) == 0x0004DA, "Member 'UAbility_Debone_C::HangOnDefenseCameraHandle' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, WaitBossStruggleEventTask) == 0x0004E0, "Member 'UAbility_Debone_C::WaitBossStruggleEventTask' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DefaultStruggleCameraSequence) == 0x0004E8, "Member 'UAbility_Debone_C::DefaultStruggleCameraSequence' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneArriveCameraDefault) == 0x0004F0, "Member 'UAbility_Debone_C::DeboneArriveCameraDefault' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneArriveCameraVert) == 0x0004F8, "Member 'UAbility_Debone_C::DeboneArriveCameraVert' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneArriveCameraHor) == 0x000500, "Member 'UAbility_Debone_C::DeboneArriveCameraHor' has a wrong offset!");
static_assert(offsetof(UAbility_Debone_C, DeboneStartCamera) == 0x000508, "Member 'UAbility_Debone_C::DeboneStartCamera' has a wrong offset!");

}

