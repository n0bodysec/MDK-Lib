
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/DaySequence.DaySequenceModifierComponent
/// Size: 0x0140 (0x0005B0 - 0x0006F0)
class UDaySequenceModifierComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	CMember(ADaySequenceActor*)                        TargetActor                                                 OFFSET(get<T>, {0x5B0, 8, 0, 0})
	SMember(FComponentReference)                       VolumeShapeComponent                                        OFFSET(get<T>, {0x5B8, 40, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ExternalVolumeBlendTarget                                   OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UDaySequence*)                             UserDaySequence                                             OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UDaySequence*)                             ProceduralDaySequence                                       OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceModifierNamedSequence>) AdditionalNamedDaySequences                            OFFSET(get<T>, {0x5F8, 80, 0, 0})
	DMember(int32_t)                                   Bias                                                        OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(float)                                     DayNightCycleTime                                           OFFSET(get<float>, {0x654, 4, 0, 0})
	DMember(float)                                     BlendAmount                                                 OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(float)                                     CustomVolumeBlendWeight                                     OFFSET(get<float>, {0x660, 4, 0, 0})
	CMember(EDayNightCycleMode)                        DayNightCycle                                               OFFSET(get<T>, {0x664, 1, 0, 0})
	CMember(EDaySequenceModifierBlendMode)             BlendMode                                                   OFFSET(get<T>, {0x665, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostReinitializeSubSequences                              OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostEnableModifier                                        OFFSET(get<T>, {0x678, 16, 0, 0})
	DMember(bool)                                      bIgnoreBias                                                 OFFSET(get<bool>, {0x688, 1, 1, 0})
	DMember(bool)                                      bUseVolume                                                  OFFSET(get<bool>, {0x688, 1, 1, 1})
	DMember(bool)                                      bIsComponentEnabled                                         OFFSET(get<bool>, {0x688, 1, 1, 2})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x688, 1, 1, 3})
	DMember(bool)                                      bPreview                                                    OFFSET(get<bool>, {0x688, 1, 1, 4})
};



	/// Functions
	// Function /Script/DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
	// void UnbindFromDaySequenceActor();                                                                                       // [0x18b8478] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetUserDaySequence
	// void SetUserDaySequence(UDaySequence* InDaySequence);                                                                    // [0x74e8934] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetCustomVolumeBlendWeight
	// void SetCustomVolumeBlendWeight(float Weight);                                                                           // [0x2988f88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.ResetOverrides
	// void ResetOverrides();                                                                                                   // [0x74e850c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.MuteNamedSequence
	// void MuteNamedSequence(FName SequenceKey, bool bState);                                                                  // [0x18b8ca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.GetShapeVolumeComponent
	// UShapeComponent* GetShapeVolumeComponent();                                                                              // [0x27d18b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DaySequence.DaySequenceModifierComponent.GetCurrentBlendWeight
	// float GetCurrentBlendWeight();                                                                                           // [0x2c02fcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableModifier
	// void EnableModifier();                                                                                                   // [0x18b87d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
	// void EnableDistanceVolumeBlends(AActor* InActor);                                                                        // [0x2b502ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableComponent
	// void EnableComponent();                                                                                                  // [0x2fa4108] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableModifier
	// void DisableModifier();                                                                                                  // [0x18b8af0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableComponent
	// void DisableComponent();                                                                                                 // [0x18b848c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
	// void BindToDaySequenceActor(ADaySequenceActor* DaySequenceActor);                                                        // [0x18b888c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
	// void AddVisibilityOverride(UObject* Object, bool bValue);                                                                // [0x74e7e18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVectorOverride
	// void AddVectorOverride(UObject* Object, FName PropertyName, FVector Value);                                              // [0x74e7c44] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddTransformOverride
	// void AddTransformOverride(UObject* Object, FTransform Value);                                                            // [0x74e7a14] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
	// void AddStaticTimeOfDayOverride(ADaySequenceActor* Actor, float Hours);                                                  // [0x74e7950] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarOverride
	// void AddScalarOverride(UObject* Object, FName PropertyName, double Value);                                               // [0x74e7854] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarMaterialParameterOverride
	// void AddScalarMaterialParameterOverride(UObject* Object, int32_t MaterialIndex, FName ParameterName, float Value);       // [0x74e7718] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddMaterialOverride
	// void AddMaterialOverride(UObject* Object, int32_t MaterialIndex, UMaterialInterface* Value);                             // [0x74e7620] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorOverride
	// void AddColorOverride(UObject* Object, FName PropertyName, FLinearColor Value);                                          // [0x74e7454] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorMaterialParameterOverride
	// void AddColorMaterialParameterOverride(UObject* Object, int32_t MaterialIndex, FName ParameterName, FLinearColor Value); // [0x74e7250] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddBoolOverride
	// void AddBoolOverride(UObject* Object, FName PropertyName, bool bValue);                                                  // [0x74e7154] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Class /Script/DaySequence.DaySequence
/// Size: 0x00C8 (0x000068 - 0x000130)
class UDaySequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FDaySequenceBindingReferences)             BindingReferences                                           OFFSET(get<T>, {0x78, 160, 0, 0})
	CMember(UClass*)                                   DirectorClass                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceActor
/// Size: 0x0140 (0x000290 - 0x0003D0)
class ADaySequenceActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(UDaySequencePlayer*)                       SequencePlayer                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UCurveFloat*)                              DayInterpCurve                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceAssetData>)        DaySequences                                                OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bReplicatePlayback                                          OFFSET(get<bool>, {0x308, 1, 1, 0})
	CMember(UDaySequence*)                             RootSequence                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      bRunDayCycle                                                OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(bool)                                      bUseInterpCurve                                             OFFSET(get<bool>, {0x319, 1, 0, 0})
	SMember(FTimecode)                                 DayLength                                                   OFFSET(get<T>, {0x31C, 20, 0, 0})
	SMember(FTimecode)                                 TimePerCycle                                                OFFSET(get<T>, {0x330, 20, 0, 0})
	SMember(FTimecode)                                 InitialTimeOfDay                                            OFFSET(get<T>, {0x344, 20, 0, 0})
};



	/// Functions
	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDay
	// bool SetTimeOfDay(float InHours);                                                                                        // [0x74e88a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetStaticTimeOfDay
	// void SetStaticTimeOfDay(float InHours);                                                                                  // [0x74e8824] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x74e8790] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetDaySequence
	// void SetDaySequence(FName SequenceName, UDaySequence* InDaySequence);                                                    // [0x74e85e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetBias
	// void SetBias(FName SequenceKey, int32_t Bias);                                                                           // [0x74e8520] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
	// void RemoveStaticTimeOfDay(bool bResumeFromStaticTime);                                                                  // [0x74e848c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Play
	// void Play();                                                                                                             // [0x74e8478] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Pause
	// void Pause();                                                                                                            // [0x74e8464] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.MuteSequence
	// void MuteSequence(FName SequenceKey, bool bState);                                                                       // [0x2d79168] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
	// void Multicast_SetTimePerCycle(float InHours);                                                                           // [0x56b9e24] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DaySequence.DaySequenceActor.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x74e8444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsPaused
	// bool IsPaused();                                                                                                         // [0x74e8424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsMuteSequence
	// bool IsMuteSequence(FName SequenceKey);                                                                                  // [0x74e8398] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.HasStaticTimeOfDay
	// bool HasStaticTimeOfDay();                                                                                               // [0x74e8328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimePerCycle
	// float GetTimePerCycle();                                                                                                 // [0x74e8300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDay
	// float GetTimeOfDay();                                                                                                    // [0x74e82d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetStaticTimeOfDay
	// float GetStaticTimeOfDay();                                                                                              // [0x74e82b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetSequencePlayer
	// UDaySequencePlayer* GetSequencePlayer();                                                                                 // [0x74e8284] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetInitialTimeOfDay
	// float GetInitialTimeOfDay();                                                                                             // [0x74e81fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetFirstDaySequence
	// UDaySequence* GetFirstDaySequence();                                                                                     // [0x74e81d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDaySequence
	// UDaySequence* GetDaySequence(FName SequenceName);                                                                        // [0x74e80dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDayLength
	// float GetDayLength();                                                                                                    // [0x74e80b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetBias
	// int32_t GetBias(FName SequenceKey);                                                                                      // [0x74e8028] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.ContainsDaySequence
	// bool ContainsDaySequence(UDaySequence* InDaySequence);                                                                   // [0x74e7ee0] Final|Native|Public|BlueprintCallable 
/// Class /Script/DaySequence.DaySequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class UDaySequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UDaySequencePlayer*)                       Player                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};



	/// Functions
	// Function /Script/DaySequence.DaySequenceDirector.OnCreated
	// void OnCreated();                                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DaySequence.DaySequenceDirector.GetSequence
	// UMovieSceneSequence* GetSequence();                                                                                      // [0x59922b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x74e8254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x74e8224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x599220c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x599205c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObject
	// UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                       // [0x5991ecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x5991d1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActor
	// AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                         // [0x5991b8c] Final|Native|Public|BlueprintCallable 
/// Class /Script/DaySequence.DaySequencePlayer
/// Size: 0x0008 (0x0004C8 - 0x0004D0)
class UDaySequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
};

/// Class /Script/DaySequence.DaySequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceProvider
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADaySequenceProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<UDaySequence*>)                     DaySequenceAssets                                           OFFSET(get<T>, {0x290, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UDaySequenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DaySequence.DaySequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDaySequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/DaySequence.EnvironmentLightingActor
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class AEnvironmentLightingActor : public ADaySequenceProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(USkyAtmosphereComponent*)                  SkyAtmosphereComponent                                      OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightComponent                                           OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USceneComponent*)                          SunRootComponent                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               SunComponent                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UExponentialHeightFogComponent*)           ExponentialHeightFogComponent                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UVolumetricCloudComponent*)                VolumetricCloudComponent                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceModifierNamedSequence
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceModifierNamedSequence : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDaySequence*)                             Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   BiasOffset                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceAssetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceAssetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDaySequence*)                             Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Bias                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bMuted                                                      OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReference
/// Size: 0x0030 (0x000000 - 0x000030)
class FDaySequenceBindingReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UObject*>)                  ExternalObjectPath                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   ObjectPath                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceBindingReferenceArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FDaySequenceBindingReference>)      References                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDaySequenceBindingReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FGuid, FDaySequenceBindingReferenceArray>) BindingIdToReferences                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Enum /Script/DaySequence.EDayNightCycleMode
/// Size: 0x06
enum EDayNightCycleMode : uint8_t
{
	EDayNightCycleMode__Default0                                                     = 0,
	EDayNightCycleMode__FixedTime1                                                   = 1,
	EDayNightCycleMode__StartAtSpecifiedTime2                                        = 2,
	EDayNightCycleMode__RandomFixedTime3                                             = 3,
	EDayNightCycleMode__RandomStartTime4                                             = 4,
	EDayNightCycleMode__EDayNightCycleMode_MAX5                                      = 5
};

/// Enum /Script/DaySequence.EDaySequenceModifierBlendMode
/// Size: 0x03
enum EDaySequenceModifierBlendMode : uint8_t
{
	EDaySequenceModifierBlendMode__None0                                             = 0,
	EDaySequenceModifierBlendMode__Distance1                                         = 1,
	EDaySequenceModifierBlendMode__EDaySequenceModifierBlendMode_MAX2                = 2
};

