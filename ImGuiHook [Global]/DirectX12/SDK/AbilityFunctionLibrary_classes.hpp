#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AbilityFunctionLibrary.AbilityFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAbilityFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CalcSummonsFireStartEndLocation(class AActor* InOwner, const struct FVector& InTargetLoc, const struct FVector& InFireSocketLoc, const struct FVector& InAxisSocketLoc, int32 InSpreadSize, class UObject* __WorldContext, struct FVector* FireLoc, struct FVector* EndLoc);
	static class UM1AOECollisionManager_C* CreateAOEActorManager(class UObject* Outer_0, class UPrimitiveComponent* PrimitiveComp, EM1RelationsCheckType RelationsType, const struct FGameplayTagContainer& SEForwardingContextTags, const struct FGameplayTagContainer& SEInvokeTags, float Period, const struct FGameplayTagContainer& PeriodOpTags, class FName PeriodHitFXName, bool bStartOverlap, bool bNeedEndSE, class UObject* __WorldContext);
	static void FindRandomTeleportLocationFromSpawnTransformMaker(class AActor* WorldContext, class FName InMakerName, class UObject* __WorldContext, struct FVector* RandomLocation);
	static void GetAIHomeLocation(class UM1Ability* Ability, class UObject* __WorldContext, struct FVector* HomeLocation);
	static struct FTransform GetTransformForAbilityActor(class UM1Ability* InAbility, class FName InSocketName, class UObject* __WorldContext);
	static void InvokeDotDamageStatusEffect(TScriptInterface<class IM1AbilityBase> InAbility, const struct FGameplayTagContainer& ForwardingOperationTags, const struct FGameplayTagContainer& InTags, const struct FM1ScaledInteger& Damage, class AActor* TargetActor, class UObject* __WorldContext);
	static void MakeDecalParams(double Duration, double Size, double Height, bool UseScaledSize, class UObject* __WorldContext, TArray<struct FM1FXScalarParam>* ReturnParams);
	static void MakeMaxHpAbilityParam(double MaxHPRatio, class UObject* __WorldContext, struct FM1AbilityParamData* Result);
	static void MakeMaxHpOperationParam(double MaxHPRatio, class UObject* __WorldContext, struct FM1AbilityOperationParam* Result);
	static void SummonMonster(class AM1Monster* Master, class FName MonsterRowName, int32 Level, const struct FTransform& TargetTransform, class UObject* __WorldContext, class AM1Monster** SpawnedMonster);
	static void TryLoadAnimSequence(class FName AssetPath, class UObject* __WorldContext, class UAnimSequence** AnimSequence);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilityFunctionLibrary_C">();
	}
	static class UAbilityFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityFunctionLibrary_C>();
	}
};
static_assert(alignof(UAbilityFunctionLibrary_C) == 0x000008, "Wrong alignment on UAbilityFunctionLibrary_C");
static_assert(sizeof(UAbilityFunctionLibrary_C) == 0x000028, "Wrong size on UAbilityFunctionLibrary_C");

}

