
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/NevadaRuntime.FortNevadaVehicle
/// Size: 0x0600 (0x001BC0 - 0x0021C0)
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8640;

public:
	SMember(FNevadaState)                              ServerReplicatedState                                       OFFSET(getStruct<T>, {0x1BB8, 20, 0, 0})
	CMember(UFortNevadaVehicleConfigs*)                FortNevadaVehicleConfigs                                    OFFSET(get<T>, {0x1BD0, 8, 0, 0})
	CMember(UClass*)                                   FortNevadaAudioControllerClass                              OFFSET(get<T>, {0x1BD8, 8, 0, 0})
	CMember(UChildActorComponent*)                     AudioControllerActor                                        OFFSET(get<T>, {0x1BE0, 8, 0, 0})
	CMember(AFortNevadaAudioController*)               FortNevadaAudioController                                   OFFSET(get<T>, {0x1BE8, 8, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  OFFSET(getStruct<T>, {0x1BF0, 8, 0, 0})
	DMember(float)                                     LastBatteryRegenTickTime                                    OFFSET(get<float>, {0x1BF8, 4, 0, 0})
	DMember(bool)                                      bBoostThrust                                                OFFSET(get<bool>, {0x1BFC, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  OFFSET(get<bool>, {0x1BFD, 1, 0, 0})
	DMember(bool)                                      bBoostInputReleased                                         OFFSET(get<bool>, {0x1BFE, 1, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 OFFSET(get<bool>, {0x1BFF, 1, 0, 0})
	DMember(bool)                                      bDeadBattery                                                OFFSET(get<bool>, {0x1C00, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            OFFSET(get<float>, {0x1C04, 4, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           OFFSET(getStruct<T>, {0x1C08, 24, 0, 0})
	DMember(float)                                     BoostStartTime                                              OFFSET(get<float>, {0x1C20, 4, 0, 0})
	DMember(float)                                     BoostPitchAlpha                                             OFFSET(get<float>, {0x1C24, 4, 0, 0})
	DMember(float)                                     BoostChargeProgress                                         OFFSET(get<float>, {0x1C28, 4, 0, 0})
	DMember(int32_t)                                   BoostChargesAvailable                                       OFFSET(get<int32_t>, {0x1C2C, 4, 0, 0})
	SMember(FVector)                                   CachedBoostMoveDir                                          OFFSET(getStruct<T>, {0x1C30, 24, 0, 0})
	DMember(float)                                     CurrentStateStartTime                                       OFFSET(get<float>, {0x1C48, 4, 0, 0})
	DMember(float)                                     HeightAtLandingTime                                         OFFSET(get<float>, {0x1C4C, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTime                                        OFFSET(get<float>, {0x1C50, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      OFFSET(get<float>, {0x1C54, 4, 0, 0})
	DMember(float)                                     AltimeterTraceHitDistance                                   OFFSET(get<float>, {0x1C58, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            OFFSET(get<float>, {0x1C5C, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatLeftRight                                OFFSET(get<float>, {0x1C60, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatForwardBack                              OFFSET(get<float>, {0x1C64, 4, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          OFFSET(get<bool>, {0x1C68, 1, 0, 0})
	DMember(bool)                                      bForcePositiveLift                                          OFFSET(get<bool>, {0x1C69, 1, 0, 0})
	DMember(bool)                                      bInitialLift                                                OFFSET(get<bool>, {0x1C6A, 1, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         OFFSET(get<T>, {0x1C6B, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapeProxy*>)          CachedLandscapeProxy                                        OFFSET(get<T>, {0x1CB8, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass                                    OFFSET(get<T>, {0x1CC0, 8, 0, 0})
	DMember(bool)                                      bTractorBeamChargeStarted                                   OFFSET(get<bool>, {0x1CC8, 1, 0, 0})
	SMember(FTowhookParams)                            TowhookParams                                               OFFSET(getStruct<T>, {0x1CD0, 208, 0, 0})
	CMember(UClass*)                                   AttachedPawnHiddenVehicle                                   OFFSET(get<T>, {0x1DA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TractorBeamAttachedPrimitive                                OFFSET(get<T>, {0x1DA8, 8, 0, 0})
	CMember(AFortAthenaVehicle*)                       SpawnedTractorBeamVictimVehicle                             OFFSET(get<T>, {0x1DB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PreviousTractorBeamAttachedPrimitive                        OFFSET(get<T>, {0x1DB8, 8, 0, 0})
	CMember(TArray<AActor*>)                           TractorBeamTargetedActors                                   OFFSET(get<T>, {0x1DC0, 16, 0, 0})
	CMember(TArray<AActor*>)                           PreviouslyTargetedActors                                    OFFSET(get<T>, {0x1DD0, 16, 0, 0})
	CMember(AActor*)                                   TractorBeamAttachedActor                                    OFFSET(get<T>, {0x1DE0, 8, 0, 0})
	CMember(AActor*)                                   TractorBeamTargetedActor                                    OFFSET(get<T>, {0x1DE8, 8, 0, 0})
	SMember(FVector)                                   TractorBeamTargetPosition                                   OFFSET(getStruct<T>, {0x1DF0, 24, 0, 0})
	DMember(bool)                                      bBeamButtonReleased                                         OFFSET(get<bool>, {0x1E09, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       TractorBeamObjectsTypes                                     OFFSET(get<T>, {0x1E10, 16, 0, 0})
	SMember(FGameplayTagContainer)                     DisallowedBeamTags                                          OFFSET(getStruct<T>, {0x1E20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AlwaysAllowedBeamTags                                       OFFSET(getStruct<T>, {0x1E40, 32, 0, 0})
	CMember(UNiagaraSystem*)                           TractorBeamFX_Unattached                                    OFFSET(get<T>, {0x1EF8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           TractorBeamFX_Attached                                      OFFSET(get<T>, {0x1F00, 8, 0, 0})
	CMember(UNiagaraComponent*)                        BeamPSC                                                     OFFSET(get<T>, {0x1F08, 8, 0, 0})
	CMember(TEnumAsByte<ETractorBeamState>)            TractorBeamState                                            OFFSET(get<T>, {0x1F60, 1, 0, 0})
	DMember(float)                                     TractorBeamDeactivationTimestamp                            OFFSET(get<float>, {0x1F88, 4, 0, 0})
	DMember(float)                                     TractorBeamDisruptedTimestamp                               OFFSET(get<float>, {0x1F8C, 4, 0, 0})
	DMember(float)                                     CockpitHealth                                               OFFSET(get<float>, {0x2010, 4, 0, 0})
	DMember(float)                                     Native_CockpitEnabled                                       OFFSET(get<float>, {0x2014, 4, 0, 0})
	DMember(float)                                     LastCockpitHealthTickTime                                   OFFSET(get<float>, {0x2018, 4, 0, 0})
	DMember(float)                                     LastCockpitDamageTime                                       OFFSET(get<float>, {0x201C, 4, 0, 0})
	DMember(float)                                     CockpitDissolveStartTime                                    OFFSET(get<float>, {0x2020, 4, 0, 0})
	SMember(FScalableFloat)                            CockpitMaxHealth                                            OFFSET(getStruct<T>, {0x2028, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthTickRate                                       OFFSET(getStruct<T>, {0x2050, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthPerTick                                        OFFSET(getStruct<T>, {0x2078, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitRegenDelay                                           OFFSET(getStruct<T>, {0x20A0, 40, 0, 0})
	CMember(UCurveFloat*)                              CockpitHitMaterialWobble                                    OFFSET(get<T>, {0x20C8, 8, 0, 0})
	DMember(float)                                     LastDamageAlpha                                             OFFSET(get<float>, {0x20D0, 4, 0, 0})
	DMember(bool)                                      bDissolvingCockpit                                          OFFSET(get<bool>, {0x20D4, 1, 0, 0})
	DMember(bool)                                      bRestoringCockpit                                           OFFSET(get<bool>, {0x20D5, 1, 0, 0})
	DMember(bool)                                      bCockpitWobble                                              OFFSET(get<bool>, {0x20D6, 1, 0, 0})
	CMember(UStaticMeshComponent*)                     NativeComp_ShieldMesh                                       OFFSET(get<T>, {0x20D8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_CockpitMaterial                                      OFFSET(get<T>, {0x20E0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_EnergyRingMatInstance                                OFFSET(get<T>, {0x20E8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_EnergyFieldMatInstance                               OFFSET(get<T>, {0x20F0, 8, 0, 0})
	CMember(UAudioComponent*)                          NativeComp_DamageStateLastLife                              OFFSET(get<T>, {0x20F8, 8, 0, 0})
	CMember(UAudioComponent*)                          NativeComp_DamageState                                      OFFSET(get<T>, {0x2100, 8, 0, 0})
	SMember(FVector)                                   Native_LastHitLocation                                      OFFSET(getStruct<T>, {0x2108, 24, 0, 0})
	SMember(FVector)                                   Native_LastHitNormal                                        OFFSET(getStruct<T>, {0x2120, 24, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_DamageStateFX                                    OFFSET(get<T>, {0x2138, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_HologramScreen                                   OFFSET(get<T>, {0x2140, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_SpeedLines                                       OFFSET(get<T>, {0x2148, 8, 0, 0})
	CMember(UMaterialInterface*)                       Native_EnergyRingMat                                        OFFSET(get<T>, {0x2150, 8, 0, 0})
	CMember(UMaterialInterface*)                       Native_EnergyFieldMat                                       OFFSET(get<T>, {0x2158, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_DamageStateFX                                     OFFSET(get<T>, {0x2160, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_CockpitDestroyed                                  OFFSET(get<T>, {0x2168, 8, 0, 0})
	CMember(USoundBase*)                               CockpitDamagedSound                                         OFFSET(get<T>, {0x2170, 8, 0, 0})
	CMember(USoundBase*)                               CockpitDestroyedSound                                       OFFSET(get<T>, {0x2178, 8, 0, 0})
	CMember(USoundBase*)                               CockpitRespawnSound                                         OFFSET(get<T>, {0x2180, 8, 0, 0})
	CMember(USoundBase*)                               Native_DamageStateSound                                     OFFSET(get<T>, {0x2188, 8, 0, 0})
	CMember(USoundBase*)                               Native_DamageStateLastLifeSound                             OFFSET(get<T>, {0x2190, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     CockpitDeactivatedForceFeedback                             OFFSET(get<T>, {0x2198, 8, 0, 0})
	CMember(UClass*)                                   CockpitDestroyedCamShake                                    OFFSET(get<T>, {0x21A0, 8, 0, 0})
	CMember(TArray<UClass*>)                           TractorBeamDisallowedClasses                                OFFSET(get<T>, {0x21A8, 16, 0, 0})


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
	// void SetTractorBeamInactive();                                                                                           // [0xa53efa8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
	// void SetTractorBeamEnabled(bool bEnabled);                                                                               // [0x550d6d4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
	// void SetCannonEnabled(bool bEnabled);                                                                                    // [0x550d6d4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
	// void SetAttachedPawnAddedVelocity(FVector& AddedVelocity);                                                               // [0xa53eee4] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
	// void OnTractorBeamDetached(AActor* DetachedActor, FVector& LastBeamPosition);                                            // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(FVector& LastBeamPosition);                                                                // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
	// void OnTargetedActorChanged(AActor* NewTargetedActor);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartDescend
	// void OnStartDescend();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartAscend
	// void OnStartAscend();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
	// void OnRep_TractorBeamState(TEnumAsByte<ETractorBeamState> PreviousState);                                               // [0xa53ee58] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
	// void OnRep_TractorBeamChargeStarted();                                                                                   // [0xa53edfc] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
	// void OnRep_TractorBeamAttached();                                                                                        // [0xa53ede8] Final|Native|Protected 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
	// void OnRep_TargetedActorChanged();                                                                                       // [0xa53edac] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
	// void OnRep_ReplicatedTargetedActors();                                                                                   // [0xa53ed28] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
	// void OnRep_NevadaState(FNevadaState& PrevState);                                                                         // [0xa53ec88] Final|Native|Protected|HasOutParms 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootStarted
	// void OnRebootStarted();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootFinished
	// void OnRebootFinished();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
	// void OnOutOfBattery();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
	// void OnNewVehicleState(ENevadaFlightStates NewVehicleState);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
	// void OnCrashingStarted();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
	// void OnCrashedImpact();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
	// void OnBoostChargeRefilled();                                                                                            // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
	// void OnBatteryRegen(float Newcharge);                                                                                    // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
	// void OnAttachedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa53e7ec] Final|Native|Public|HasDefaults 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(AActor* DestroyedActor);                                                                   // [0xa53e770] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
	// void NativeToggleCockpit(bool bEnable);                                                                                  // [0xa53e6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
	// bool IsTractorBeamDisrupted();                                                                                           // [0xa53e680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
	// bool IsTractorBeamAttached();                                                                                            // [0xa53e65c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
	// bool IsTractorBeamActive();                                                                                              // [0xa53e63c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
	// FVector GetTractorBeamAttachLocation();                                                                                  // [0xa53e584] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
	// int32_t GetNumRebootsAvailable();                                                                                        // [0xa53e56c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
	// float GetEnergyCanonChargePercent();                                                                                     // [0xa53e544] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
	// void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack);                                        // [0xa53e468] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
	// ENevadaFlightStates GetCurrentVehicleState();                                                                            // [0xa53e450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
	// float GetBoostChargeTimeRemaining();                                                                                     // [0xa53e404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
	// int32_t GetBoostChargesAvailable();                                                                                      // [0xa53e438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
	// float GetBoostChargeProgress();                                                                                          // [0xa53e3e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
	// float GetBatteryCharge();                                                                                                // [0xa53e3bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetAudioController
	// AFortNevadaAudioController* GetAudioController();                                                                        // [0xa53e3a4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
	// void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);                                                      // [0x550d6d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
	// void DisruptTractorBeam();                                                                                               // [0xa53e350] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
	// void AddPhysicsImpulseToTractorBeamAttachedActor(FVector& Impulse, FName BoneName, bool bVelChange);                     // [0xa53e0c8] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleAnimInstance
/// Size: 0x00E0 (0x000600 - 0x0006E0)
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(AFortNevadaVehicle*)                       NevadaVehicle                                               OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bTractorBeam_IsAttached                                     OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsCharging                                     OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsActive                                       OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsInactive                                     OFFSET(get<bool>, {0x603, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsOn                                           OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_HasTarget                                      OFFSET(get<bool>, {0x605, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_ShouldApplyCustomAO                            OFFSET(get<bool>, {0x606, 1, 0, 0})
	DMember(float)                                     TractorBeam_LookAtPitch                                     OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     TractorBeam_LookAtYaw                                       OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(float)                                     LeanLeftRight                                               OFFSET(get<float>, {0x610, 4, 0, 0})
	DMember(float)                                     LeanForwardBackward                                         OFFSET(get<float>, {0x614, 4, 0, 0})
	DMember(float)                                     LeanValue                                                   OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(float)                                     PreviousLeanValue                                           OFFSET(get<float>, {0x61C, 4, 0, 0})
	DMember(float)                                     VelocityZValue                                              OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     LeanDelta                                                   OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(bool)                                      bTurnAgain                                                  OFFSET(get<bool>, {0x628, 1, 0, 0})
	DMember(bool)                                      bHadDriver                                                  OFFSET(get<bool>, {0x629, 1, 0, 0})
	DMember(bool)                                      bJustGotDriver                                              OFFSET(get<bool>, {0x62A, 1, 0, 0})
	DMember(bool)                                      bJustLostDriver                                             OFFSET(get<bool>, {0x62B, 1, 0, 0})
	DMember(bool)                                      bWasBoosting                                                OFFSET(get<bool>, {0x62C, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x62D, 1, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          OFFSET(get<int32_t>, {0x630, 4, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  OFFSET(get<int32_t>, {0x634, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            OFFSET(get<bool>, {0x638, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x639, 1, 0, 0})
	DMember(float)                                     WingsPlayRate                                               OFFSET(get<float>, {0x63C, 4, 0, 0})
	DMember(float)                                     TractorBeamAlpha                                            OFFSET(get<float>, {0x640, 4, 0, 0})
	DMember(float)                                     AimPitch                                                    OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(float)                                     AimYaw                                                      OFFSET(get<float>, {0x648, 4, 0, 0})
	DMember(bool)                                      bIsFiringCannon                                             OFFSET(get<bool>, {0x64C, 1, 0, 0})
	DMember(float)                                     DistanceFromGround                                          OFFSET(get<float>, {0x650, 4, 0, 0})
	DMember(bool)                                      bIsLanding                                                  OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      bHasLanded                                                  OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(float)                                     LandingAlpha                                                OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      bNotLandingMode                                             OFFSET(get<bool>, {0x65C, 1, 0, 0})
	DMember(bool)                                      bHadBattery                                                 OFFSET(get<bool>, {0x65D, 1, 0, 0})
	DMember(bool)                                      bOutOfBattery                                               OFFSET(get<bool>, {0x65E, 1, 0, 0})
	DMember(bool)                                      bJustGotBattery                                             OFFSET(get<bool>, {0x65F, 1, 0, 0})
	DMember(bool)                                      bLaunchToDepart                                             OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bLaunchToIdle                                               OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      bIsPartsLanding                                             OFFSET(get<bool>, {0x662, 1, 0, 0})
	SMember(FName)                                     TractorBeamSocketName                                       OFFSET(getStruct<T>, {0x664, 4, 0, 0})
	SMember(FName)                                     TractorBeamAimCurveName                                     OFFSET(getStruct<T>, {0x668, 4, 0, 0})
	SMember(FName)                                     NevadaVehicleInterruptName                                  OFFSET(getStruct<T>, {0x66C, 4, 0, 0})
	SMember(FName)                                     LandingTraceRightName                                       OFFSET(getStruct<T>, {0x670, 4, 0, 0})
	SMember(FName)                                     LandingTraceLeftName                                        OFFSET(getStruct<T>, {0x674, 4, 0, 0})
	DMember(float)                                     MaxLeanDeltaInterruptMagnitude                              OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBeMoving                                   OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPlayWings                                  OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(float)                                     MinWingsPlayRate                                            OFFSET(get<float>, {0x684, 4, 0, 0})
	DMember(float)                                     MaxWingsPlayRate                                            OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(float)                                     WingsPlayRateInterpSpeed                                    OFFSET(get<float>, {0x68C, 4, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             CannonFiringMontage                                         OFFSET(get<T>, {0x690, 32, 0, 0})
	DMember(float)                                     LandingGearTraceLength                                      OFFSET(get<float>, {0x6B0, 4, 0, 0})
};

/// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
/// Size: 0x0180 (0x001820 - 0x0019A0)
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6560;

public:
	CMember(AFortNevadaVehicle*)                       NevadaVehicle                                               OFFSET(get<T>, {0x1820, 8, 0, 0})
	DMember(float)                                     AnimLeftRight                                               OFFSET(get<float>, {0x1828, 4, 0, 0})
	DMember(float)                                     AnimForwardBackward                                         OFFSET(get<float>, {0x182C, 4, 0, 0})
	SMember(FVector)                                   RootAttachmentLoc                                           OFFSET(getStruct<T>, {0x1830, 24, 0, 0})
	SMember(FRotator)                                  RootAttachmentRot                                           OFFSET(getStruct<T>, {0x1848, 24, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  OFFSET(get<int32_t>, {0x1860, 4, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          OFFSET(get<int32_t>, {0x1864, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            OFFSET(get<bool>, {0x1868, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x1869, 1, 0, 0})
	DMember(float)                                     MinVehicleVelocityToBeMoving                                OFFSET(get<float>, {0x186C, 4, 0, 0})
	SMember(FName)                                     DriverSocketName                                            OFFSET(getStruct<T>, {0x1870, 4, 0, 0})
	SMember(FName)                                     RightHandAttachmentSocketName                               OFFSET(getStruct<T>, {0x1874, 4, 0, 0})
	SMember(FName)                                     LeftHandAttachmentSocketName                                OFFSET(getStruct<T>, {0x1878, 4, 0, 0})
	SMember(FName)                                     RightFootAttachmentSocketName                               OFFSET(getStruct<T>, {0x187C, 4, 0, 0})
	SMember(FName)                                     LeftFootAttachementSocketName                               OFFSET(getStruct<T>, {0x1880, 4, 0, 0})
	SMember(FRotator)                                  RightHandRotationOffset                                     OFFSET(getStruct<T>, {0x1888, 24, 0, 0})
	SMember(FRotator)                                  LeftHandRotationOffset                                      OFFSET(getStruct<T>, {0x18A0, 24, 0, 0})
	SMember(FRotator)                                  RightFootRotationOffset                                     OFFSET(getStruct<T>, {0x18B8, 24, 0, 0})
	SMember(FRotator)                                  LeftFootRotationOffset                                      OFFSET(getStruct<T>, {0x18D0, 24, 0, 0})
	SMember(FVector)                                   RootAttachmentOffset                                        OFFSET(getStruct<T>, {0x18E8, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortCameraMode_Nevada
/// Size: 0x0070 (0x001BB0 - 0x001C20)
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7200;

public:
	SMember(FVector)                                   TractorBeamCameraOffset                                     OFFSET(getStruct<T>, {0x1BD0, 24, 0, 0})
	DMember(float)                                     TractorBeamCameraLerpTime                                   OFFSET(get<float>, {0x1BE8, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraExtraPitch                                 OFFSET(get<float>, {0x1BEC, 4, 0, 0})
	DMember(float)                                     TractorBeamInactiveCameraExtraPitch                         OFFSET(get<float>, {0x1BF0, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraPositionResetDelay                         OFFSET(get<float>, {0x1BF4, 4, 0, 0})
	DMember(float)                                     MinPitchForOffset                                           OFFSET(get<float>, {0x1BF8, 4, 0, 0})
	DMember(float)                                     MaxPitchForOffset                                           OFFSET(get<float>, {0x1BFC, 4, 0, 0})
	SMember(FVector)                                   ExtraOffset                                                 OFFSET(getStruct<T>, {0x1C00, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaAudioController
/// Size: 0x00C8 (0x000290 - 0x000358)
class AFortNevadaAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FVector2D)                                 SpeedRangeMap                                               OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FVector2D)                                 TurningRangeMap                                             OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FVector2D)                                 AcceleratingRangeMap                                        OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FVector2D)                                 BrakingRangeMap                                             OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FVector2D)                                 PassByRangeMap                                              OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FVector2D)                                 LFORangeMap                                                 OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	CMember(AFortNevadaVehicle*)                       Vehicle                                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               LayeredAudioComponent                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(float)                                     SpeedParamValue                                             OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     SpeedParamValuePrev                                         OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     AcceleratingParamValue                                      OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     BrakingParamValue                                           OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FVector)                                   ForwardVector                                               OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FVector)                                   ForwardVectorPrev                                           OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	DMember(float)                                     TurningParamValue                                           OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     PassByParamValue                                            OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     LocallyControlledParamValue                                 OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     LFOParamValue                                               OFFSET(get<float>, {0x34C, 4, 0, 0})


	/// Functions
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Update
	// void Update();                                                                                                           // [0xa53efbc] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.Init
	// void Init(AFortNevadaVehicle* InVehicle);                                                                                // [0xa53e5bc] Final|Native|Public  
	// Function /Script/NevadaRuntime.FortNevadaAudioController.GetVehicleActor
	// AFortNevadaVehicle* GetVehicleActor();                                                                                   // [0x9acbe70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.CacheReferences
	// void CacheReferences(UFortLayeredAudioComponent* InLayeredAudioComponent);                                               // [0xa53e2c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Update
	// void BP_Update();                                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Init
	// void BP_Init();                                                                                                          // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleConfigs
/// Size: 0x04A8 (0x0008B0 - 0x000D58)
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3416;

public:
	SMember(FNevadaMoveModeConfig)                     BaseMovement                                                OFFSET(getStruct<T>, {0x8B0, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     BoostMovement                                               OFFSET(getStruct<T>, {0x8C4, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     ChargingMovement                                            OFFSET(getStruct<T>, {0x8D8, 20, 0, 0})
	SMember(FDampedSpringConfig)                       UprightSpringForce                                          OFFSET(getStruct<T>, {0x8EC, 12, 0, 0})
	DMember(float)                                     DebaseLaunchspeed                                           OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     MinHeight                                                   OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     OnEnterPitchAlpha                                           OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     TurningForce                                                OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     ThrustRotationAlpha                                         OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     PitchDrag                                                   OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     YawDrag                                                     OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     RollDrag                                                    OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostThrustDuration                                         OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostDragDuration                                           OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(int32_t)                                   NumBoostCharges                                             OFFSET(get<int32_t>, {0x928, 4, 0, 0})
	DMember(float)                                     BoostChargeDuration                                         OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     BoostChargeDelay                                            OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     BoostDragFinishSpeed                                        OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     TractorBeamRadius                                           OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     TractorBeamWithTargetRadius                                 OFFSET(get<float>, {0x93C, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamSweepLength                                      OFFSET(getStruct<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamChargeTime                                       OFFSET(getStruct<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDurationTime                                     OFFSET(getStruct<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthForward                       OFFSET(getStruct<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthUpward                        OFFSET(getStruct<T>, {0x9E0, 40, 0, 0})
	DMember(float)                                     TractorBeamShutdownTime                                     OFFSET(get<float>, {0xA08, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTurnOffDamage                                    OFFSET(getStruct<T>, {0xA10, 40, 0, 0})
	SMember(FScalableFloat)                            AllowTractorBeamAIPawns                                     OFFSET(getStruct<T>, {0xA38, 40, 0, 0})
	DMember(float)                                     TractorBeamBreakForceMagnitude                              OFFSET(get<float>, {0xA60, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamActive                                           OFFSET(getStruct<T>, {0xA68, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamCooldown                                         OFFSET(getStruct<T>, {0xA90, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDisruptionCooldown                               OFFSET(getStruct<T>, {0xAB8, 40, 0, 0})
	SMember(FName)                                     TractorBeamSocket                                           OFFSET(getStruct<T>, {0xAE0, 4, 0, 0})
	SMember(FVector)                                   TractorBeamAttachPositionOffset                             OFFSET(getStruct<T>, {0xAE8, 24, 0, 0})
	SMember(FRigidBodyErrorCorrection)                 TractorBeamTargetOverridenErrorCorrection                   OFFSET(getStruct<T>, {0xB00, 52, 0, 0})
	DMember(float)                                     VictimPitchDrag                                             OFFSET(get<float>, {0xB34, 4, 0, 0})
	DMember(float)                                     VictimYawDrag                                               OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(float)                                     VictimRollDrag                                              OFFSET(get<float>, {0xB3C, 4, 0, 0})
	SMember(FDampedSpringConfig)                       TractorBeamVictimUprightForce                               OFFSET(getStruct<T>, {0xB40, 12, 0, 0})
	DMember(int32_t)                                   NumReboots                                                  OFFSET(get<int32_t>, {0xB4C, 4, 0, 0})
	DMember(int32_t)                                   NumRebootsDefault                                           OFFSET(get<int32_t>, {0xB50, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             OFFSET(get<float>, {0xB54, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     OFFSET(get<float>, {0xB58, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               OFFSET(get<float>, {0xB5C, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    OFFSET(get<float>, {0xB60, 4, 0, 0})
	SMember(FScalableFloat)                            RebootDuration                                              OFFSET(getStruct<T>, {0xB68, 40, 0, 0})
	SMember(FScalableFloat)                            RebootDelay                                                 OFFSET(getStruct<T>, {0xB90, 40, 0, 0})
	DMember(float)                                     LandingTraceRange                                           OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     DesiredLandingDistance                                      OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     LandingDelay_Max                                            OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     LandingDelay_Min                                            OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     HeightForMinLandingDelay                                    OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     HeightForMaxLandingDelay                                    OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMax                                        OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMin                                        OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     DriverSeatRotationAnimBlendSpeed                            OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(float)                                     CrashingDesiredUpLerpFactor                                 OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     CrashedLinearDrag                                           OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     LandedDragCoef                                              OFFSET(get<float>, {0xBE4, 4, 0, 0})
	DMember(float)                                     LandedDragCoef2                                             OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     LandedMaxDragSpeed                                          OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(float)                                     CrashedAngularDragMultiplier                                OFFSET(get<float>, {0xBF0, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     ExtraTraceInteractRange                                     OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(float)                                     AntiGravityMult                                             OFFSET(get<float>, {0xBFC, 4, 0, 0})
	DMember(float)                                     InitialLiftDuration                                         OFFSET(get<float>, {0xC00, 4, 0, 0})
	SMember(FScalableFloat)                            BatteryCostDuringFlight                                     OFFSET(getStruct<T>, {0xC08, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenDelay                                           OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenTickRate                                        OFFSET(getStruct<T>, {0xC58, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenAmount                                          OFFSET(getStruct<T>, {0xC80, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBattery                                                  OFFSET(getStruct<T>, {0xCA8, 40, 0, 0})
	SMember(FScalableFloat)                            MinBatteryForFlight                                         OFFSET(getStruct<T>, {0xCD0, 40, 0, 0})
	CMember(TArray<FName>)                             CockpitShapeNames                                           OFFSET(get<T>, {0xCF8, 16, 0, 0})
	SMember(FScalableFloat)                            CockpitDamageMult                                           OFFSET(getStruct<T>, {0xD08, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealth                                               OFFSET(getStruct<T>, {0xD30, 40, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaAudioUpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FNevadaAudioUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/NevadaRuntime.NevadaOutContinuous
/// Size: 0x0008 (0x000038 - 0x000040)
class FNevadaOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AltimeterTraceHitDistance                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaOutPersistent
/// Size: 0x0428 (0x000028 - 0x000450)
class FNevadaOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Struct /Script/NevadaRuntime.NevadaState
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ENevadaFlightStates)                       CurrentStatus                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LivesRemaining                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHijackingActive                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bPilotBubbleCollisionEnabled                                OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(float)                                     CurrentBatteryCharge                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCannonEnabled                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bTractorBeamEnabled                                         OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaMoveModeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaMoveModeConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ThrustForce                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxHorizontalSpeed                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxVerticalSpeed                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DragForceMultiplier                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.DampedSpringConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FDampedSpringConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxAccel                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaInPersistent
/// Size: 0x0110 (0x000190 - 0x0002A0)
class FNevadaInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UFortNevadaVehicleConfigs*)                FortNevadaVehicleConfigs                                    OFFSET(get<T>, {0x190, 8, 0, 0})
	DMember(bool)                                      bBoostThrust                                                OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         OFFSET(get<T>, {0x1C0, 1, 0, 0})
};

/// Enum /Script/NevadaRuntime.ETractorBeamState
/// Size: 0x04
enum ETractorBeamState : uint8_t
{
	TBS_Inactive0                                                                    = 0,
	TBS_Charging1                                                                    = 1,
	TBS_Active2                                                                      = 2,
	TBS_MAX3                                                                         = 3
};

/// Enum /Script/NevadaRuntime.ENevadaFlightStates
/// Size: 0x09
enum ENevadaFlightStates : uint8_t
{
	ENevadaFlightStates__FLIGHT0                                                     = 0,
	ENevadaFlightStates__CRASHING1                                                   = 1,
	ENevadaFlightStates__CRASHED2                                                    = 2,
	ENevadaFlightStates__REBOOTING3                                                  = 3,
	ENevadaFlightStates__LANDING4                                                    = 4,
	ENevadaFlightStates__LANDED5                                                     = 5,
	ENevadaFlightStates__IDLE6                                                       = 6,
	ENevadaFlightStates__NONE7                                                       = 7,
	ENevadaFlightStates__ENevadaFlightStates_MAX8                                    = 8
};

