
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/Account.ExternalAccountProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UExternalAccountProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FExternalAccountServiceConfig>)     Services                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Account.OnlineAccountCommon
/// Size: 0x0858 (0x000028 - 0x000880)
class UOnlineAccountCommon : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	SMember(FString)                                   AvailabilityServiceGameName                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bRequireLightswitchAtStartup                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   EulaKey                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           EulaKeys                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TMap<FString, FString>)                    EulaKeyMapping                                              OFFSET(get<T>, {0x70, 80, 0, 0})
	DMember(bool)                                      bEnableWaitingRoom                                          OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(TArray<FWebEnvUrl>)                        WebCreateEpicAccountUrl                                     OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bAllowLocalLogout                                           OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     DefaultLoginStepTimeout                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TMap<FName, float>)                        CustomLoginStepTimeouts                                     OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableDevLoginStepTimeouts                                 OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FString)                                   RedeemAccessUrl                                             OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FString)                                   RequestFreeAccessUrl                                        OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FString)                                   RealGameAccessUrl                                           OFFSET(get<T>, {0x1F0, 16, 0, 0})
	DMember(float)                                     SkipRedeemOfflinePurchasesChance                            OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(bool)                                      bUseFreeAccessInsteadOfGameAccess                           OFFSET(get<bool>, {0x204, 1, 0, 0})
	DMember(bool)                                      bShouldGrantFreeAccess                                      OFFSET(get<bool>, {0x205, 1, 0, 0})
	DMember(bool)                                      bAllowHomeSharingAccess                                     OFFSET(get<bool>, {0x207, 1, 0, 0})
	DMember(bool)                                      bRequireUGCPrivilege                                        OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(float)                                     AccessGrantDelaySeconds                                     OFFSET(get<float>, {0x438, 4, 0, 0})
	CMember(UWaitingRoomState*)                        WaitingRoomState                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(bool)                                      bAutoCreateHeadlessAccount                                  OFFSET(get<bool>, {0x7A8, 1, 0, 0})
};

/// Class /Script/Account.WaitingRoomState
/// Size: 0x0060 (0x000028 - 0x000088)
class UWaitingRoomState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   GracePeriodMins                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Struct /Script/Account.WebEnvUrl
/// Size: 0x0030 (0x000000 - 0x000030)
class FWebEnvUrl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   URL                                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RedirectUrl                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Environment                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Account.ExternalAccountServiceConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FExternalAccountServiceConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EExternalAccountType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ExternalServiceName                                         OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Account.ExchangeAccessParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FExchangeAccessParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   EntitlementId                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   VendorReceipt                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   AppStore                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Account.GiftMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGiftMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   GiftCode                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SenderName                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts_FailedLoginConsole
/// Size: 0x0168 (0x000000 - 0x000168)
class FOnlineAccountTexts_FailedLoginConsole : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FText)                                     AgeRestriction                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Generic                                                     OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     MissingAuthAssociation                                      OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     NeedPremiumAccount                                          OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     OnlinePlayRestriction                                       OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     PatchAvailable                                              OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Default                           OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Xbox                              OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     PleaseSignIn                                                OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     SystemUpdateAvailable                                       OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     UI                                                          OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     UnableToComplete                                            OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     UnableToSignIn                                              OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     UnableToStartPrivCheck                                      OFFSET(get<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     UnexpectedError                                             OFFSET(get<T>, {0x150, 24, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts
/// Size: 0x0A08 (0x000000 - 0x000A08)
class FOnlineAccountTexts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FText)                                     AllGiftCodesUsed                                            OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     AssociateConsoleAuth                                        OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailed                                             OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailedMobile                                       OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     BannedFromGame                                              OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     CheckEntitledToPlay                                         OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     CheckingRejoin                                              OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     CheckServiceAvailability                                    OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     ConsolePrivileges                                           OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     CreateAccountCompleted                                      OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     CreateAccountFailure                                        OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     CreateHeadless                                              OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     DoQosPingTests                                              OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     DowntimeMinutesWarningText                                  OFFSET(get<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     DowntimeSecondsWarningText                                  OFFSET(get<T>, {0x150, 24, 0, 0})
	SMember(FText)                                     DuplicateAuthAssociaton                                     OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FText)                                     EulaCheck                                                   OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FText)                                     ExchangeConsoleGiftsForAccess                               OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     FailedAccountCreate                                         OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_EulaAcceptanceFailed                        OFFSET(get<T>, {0x1C8, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_MustAcceptEula                              OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FText)                                     FailedLoginCredentialsMsg                                   OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FText)                                     FailedLoginAgeVerificationIncomplete                        OFFSET(get<T>, {0x210, 24, 0, 0})
	SMember(FText)                                     FailedLoginParentalLock                                     OFFSET(get<T>, {0x228, 24, 0, 0})
	SMember(FText)                                     FailedLoginNoRealId                                         OFFSET(get<T>, {0x240, 24, 0, 0})
	SMember(FText)                                     FailedLoginLockoutMsg                                       OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresMFA                                      OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresAuthAppMFA                               OFFSET(get<T>, {0x288, 24, 0, 0})
	SMember(FText)                                     FailedInvalidMFA                                            OFFSET(get<T>, {0x2A0, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresCorrectiveAction                         OFFSET(get<T>, {0x2B8, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg                                              OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg_InvalidRefreshToken                          OFFSET(get<T>, {0x2E8, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_UnableToSignIn                           OFFSET(get<T>, {0x300, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_NotSignedInToWeGame                      OFFSET(get<T>, {0x318, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_FailedToInitializeWeGame                 OFFSET(get<T>, {0x330, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_WeGameSystemOffline                      OFFSET(get<T>, {0x348, 24, 0, 0})
	SMember(FText)                                     Tencent_ExitByAntiAddiction                                 OFFSET(get<T>, {0x360, 24, 0, 0})
	SMember(FText)                                     FailedStartLogin                                            OFFSET(get<T>, {0x378, 24, 0, 0})
	SMember(FText)                                     FounderChatExitedText                                       OFFSET(get<T>, {0x390, 24, 0, 0})
	SMember(FText)                                     FounderChatJoinedText                                       OFFSET(get<T>, {0x3A8, 24, 0, 0})
	SMember(FText)                                     GameDisplayName                                             OFFSET(get<T>, {0x3C0, 24, 0, 0})
	SMember(FText)                                     GeneralLoginFailure                                         OFFSET(get<T>, {0x3D8, 24, 0, 0})
	SMember(FText)                                     GlobalChatExitedText                                        OFFSET(get<T>, {0x3F0, 24, 0, 0})
	SMember(FText)                                     GlobalChatJoinedText                                        OFFSET(get<T>, {0x408, 24, 0, 0})
	SMember(FText)                                     HeadlessAccountFailed                                       OFFSET(get<T>, {0x420, 24, 0, 0})
	SMember(FText)                                     InMatchShutdownTimeWarningText                              OFFSET(get<T>, {0x438, 24, 0, 0})
	SMember(FText)                                     InvalidUser                                                 OFFSET(get<T>, {0x450, 24, 0, 0})
	SMember(FText)                                     LoggedOutofMCP                                              OFFSET(get<T>, {0x468, 24, 0, 0})
	SMember(FText)                                     DisconnectedFromMCP                                         OFFSET(get<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     LoggedOutReturnedToTitle                                    OFFSET(get<T>, {0x498, 24, 0, 0})
	SMember(FText)                                     LoggedOutSwitchedProfile                                    OFFSET(get<T>, {0x4B0, 24, 0, 0})
	SMember(FText)                                     LoggingIn                                                   OFFSET(get<T>, {0x4C8, 24, 0, 0})
	SMember(FText)                                     LoggingInConsoleAuth                                        OFFSET(get<T>, {0x4E0, 24, 0, 0})
	SMember(FText)                                     LoggingOut                                                  OFFSET(get<T>, {0x4F8, 24, 0, 0})
	SMember(FText)                                     LoginConsole                                                OFFSET(get<T>, {0x510, 24, 0, 0})
	SMember(FText)                                     LoginFailure                                                OFFSET(get<T>, {0x528, 24, 0, 0})
	SMember(FText)                                     Logout_Unlink                                               OFFSET(get<T>, {0x540, 24, 0, 0})
	SMember(FText)                                     LogoutCompleted                                             OFFSET(get<T>, {0x558, 24, 0, 0})
	SMember(FText)                                     LostConnection                                              OFFSET(get<T>, {0x570, 24, 0, 0})
	SMember(FText)                                     LoginStepTimeout                                            OFFSET(get<T>, {0x588, 24, 0, 0})
	SMember(FText)                                     MCPTimeout                                                  OFFSET(get<T>, {0x5A0, 24, 0, 0})
	SMember(FText)                                     LightswitchCheckNetworkFailureMsg                           OFFSET(get<T>, {0x5B8, 24, 0, 0})
	SMember(FText)                                     NetworkConnectionUnavailable                                OFFSET(get<T>, {0x5D0, 24, 0, 0})
	SMember(FText)                                     NoPlayEntitlement                                           OFFSET(get<T>, {0x5E8, 24, 0, 0})
	SMember(FText)                                     NoServerAccess                                              OFFSET(get<T>, {0x600, 24, 0, 0})
	SMember(FText)                                     PlayAccessRevoked                                           OFFSET(get<T>, {0x618, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Default                                  OFFSET(get<T>, {0x630, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Sony                                     OFFSET(get<T>, {0x648, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Switch                                   OFFSET(get<T>, {0x660, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_XboxOne                                  OFFSET(get<T>, {0x678, 24, 0, 0})
	SMember(FText)                                     RedeemOfflinePurchases                                      OFFSET(get<T>, {0x690, 24, 0, 0})
	SMember(FText)                                     ServiceDowntime                                             OFFSET(get<T>, {0x6A8, 24, 0, 0})
	SMember(FText)                                     SignInCompleting                                            OFFSET(get<T>, {0x6C0, 24, 0, 0})
	SMember(FText)                                     SignIntoConsoleServices                                     OFFSET(get<T>, {0x6D8, 24, 0, 0})
	SMember(FText)                                     TokenExpired                                                OFFSET(get<T>, {0x6F0, 24, 0, 0})
	SMember(FText)                                     UnableToConnect                                             OFFSET(get<T>, {0x708, 24, 0, 0})
	SMember(FText)                                     UnableToJoinWaitingRoomLoginQueue                           OFFSET(get<T>, {0x720, 24, 0, 0})
	SMember(FText)                                     UnexpectedConsoleAuthFailure                                OFFSET(get<T>, {0x738, 24, 0, 0})
	SMember(FText)                                     UnlinkConsoleFailed                                         OFFSET(get<T>, {0x750, 24, 0, 0})
	SMember(FText)                                     UserLoginFailed                                             OFFSET(get<T>, {0x768, 24, 0, 0})
	SMember(FText)                                     WaitingRoom                                                 OFFSET(get<T>, {0x780, 24, 0, 0})
	SMember(FText)                                     WaitingRoomError                                            OFFSET(get<T>, {0x798, 24, 0, 0})
	SMember(FText)                                     WaitingRoomFailure                                          OFFSET(get<T>, {0x7B0, 24, 0, 0})
	SMember(FText)                                     WaitingRoomWaiting                                          OFFSET(get<T>, {0x7C8, 24, 0, 0})
	SMember(FOnlineAccountTexts_FailedLoginConsole)    FailedLoginConsole                                          OFFSET(get<T>, {0x7E0, 360, 0, 0})
	SMember(FText)                                     LoggingInExternalAuth                                       OFFSET(get<T>, {0x948, 24, 0, 0})
	SMember(FText)                                     CreateDeviceAuth                                            OFFSET(get<T>, {0x960, 24, 0, 0})
	SMember(FText)                                     ExtAuthCanceled                                             OFFSET(get<T>, {0x978, 24, 0, 0})
	SMember(FText)                                     ExtAuthFailure                                              OFFSET(get<T>, {0x990, 24, 0, 0})
	SMember(FText)                                     ExtAuthAssociationFailure                                   OFFSET(get<T>, {0x9A8, 24, 0, 0})
	SMember(FText)                                     ExtAuthTimeout                                              OFFSET(get<T>, {0x9C0, 24, 0, 0})
	SMember(FText)                                     ExtAuthMissingAuthAssociation                               OFFSET(get<T>, {0x9D8, 24, 0, 0})
	SMember(FText)                                     UnableToQueryReceipts                                       OFFSET(get<T>, {0x9F0, 24, 0, 0})
};

/// Enum /Script/Account.EExternalAccountType
/// Size: 0x11
enum EExternalAccountType : uint8_t
{
	EExternalAccountType__None0                                                      = 0,
	EExternalAccountType__Facebook1                                                  = 1,
	EExternalAccountType__Google2                                                    = 2,
	EExternalAccountType__Epic_PSN3                                                  = 3,
	EExternalAccountType__Epic_XBL4                                                  = 4,
	EExternalAccountType__Epic_Erebus5                                               = 5,
	EExternalAccountType__Epic_Facebook6                                             = 6,
	EExternalAccountType__Epic_Google7                                               = 7,
	EExternalAccountType__Epic_Portal8                                               = 8,
	EExternalAccountType__Epic_Portal_Kairos9                                        = 9,
	EExternalAccountType__EExternalAccountType_MAX10                                 = 10
};

/// Enum /Script/Account.EConsoleAuthLinkState
/// Size: 0x09
enum EConsoleAuthLinkState : uint8_t
{
	EConsoleAuthLinkState__NotOnConsole0                                             = 0,
	EConsoleAuthLinkState__ConsoleNotLoggedIn1                                       = 1,
	EConsoleAuthLinkState__EpicNotLoggedIn2                                          = 2,
	EConsoleAuthLinkState__ThisEpicAccountLinked3                                    = 3,
	EConsoleAuthLinkState__OtherEpicAccountLinked4                                   = 4,
	EConsoleAuthLinkState__NoEpicAccountLinked5                                      = 5,
	EConsoleAuthLinkState__PrimaryIdNotLinked6                                       = 6,
	EConsoleAuthLinkState__SecondaryIdNotLinked7                                     = 7,
	EConsoleAuthLinkState__EConsoleAuthLinkState_MAX8                                = 8
};

/// Enum /Script/Account.ELoginResult
/// Size: 0x50
enum ELoginResult : uint8_t
{
	ELoginResult__NotStarted0                                                        = 0,
	ELoginResult__Pending1                                                           = 1,
	ELoginResult__Success2                                                           = 2,
	ELoginResult__Console_LoginFailed3                                               = 3,
	ELoginResult__Console_AuthFailed4                                                = 4,
	ELoginResult__Console_MissingAuthAssociation5                                    = 5,
	ELoginResult__Console_DuplicateAuthAssociation6                                  = 6,
	ELoginResult__Console_AddedAuthAssociation7                                      = 7,
	ELoginResult__Console_AuthAssociationFailure8                                    = 8,
	ELoginResult__Console_NotEntitled9                                               = 9,
	ELoginResult__Console_EntitlementCheckFailed10                                   = 10,
	ELoginResult__Console_PrivilegeCheck11                                           = 11,
	ELoginResult__Console_PatchOrUpdateRequired12                                    = 12,
	ELoginResult__AuthFailed13                                                       = 13,
	ELoginResult__AuthFailed_RefreshInvalid14                                        = 14,
	ELoginResult__AuthFailed_InvalidMFA15                                            = 15,
	ELoginResult__AuthFailed_RequiresMFA16                                           = 16,
	ELoginResult__AuthFailed_AgeVerificationIncomplete17                             = 17,
	ELoginResult__AuthFailed_LoginLockout18                                          = 18,
	ELoginResult__AuthFailed_InvalidCredentials19                                    = 19,
	ELoginResult__AuthFailed_CorrectiveActionRequired20                              = 20,
	ELoginResult__AuthParentalLock21                                                 = 21,
	ELoginResult__PlatformNotAllowed22                                               = 22,
	ELoginResult__NotEntitled23                                                      = 23,
	ELoginResult__Banned24                                                           = 24,
	ELoginResult__EULACheckFailed25                                                  = 25,
	ELoginResult__WaitingRoomFailed26                                                = 26,
	ELoginResult__ServiceUnavailable27                                               = 27,
	ELoginResult__GenericError28                                                     = 28,
	ELoginResult__RegisterSecondaryPlayerInPrimaryPartyFailed29                      = 29,
	ELoginResult__RejoinCheckFailure30                                               = 30,
	ELoginResult__ConnectionFailed31                                                 = 31,
	ELoginResult__NetworkConnectionUnavailable32                                     = 32,
	ELoginResult__AlreadyLoggingIn33                                                 = 33,
	ELoginResult__ExternalAuth_AddedAuthAssociation34                                = 34,
	ELoginResult__ExternalAuth_ConnectionTimeout35                                   = 35,
	ELoginResult__ExternalAuth_AuthFailure36                                         = 36,
	ELoginResult__ExternalAuth_AssociationFailure37                                  = 37,
	ELoginResult__ExternalAuth_MissingAuthAssociation38                              = 38,
	ELoginResult__ExternalAuth_Canceled39                                            = 39,
	ELoginResult__FailedToCreateParty40                                              = 40,
	ELoginResult__ProfileQueryFailed41                                               = 41,
	ELoginResult__QueryKeychainFailed42                                              = 42,
	ELoginResult__ClientSettingsDownloadFailed43                                     = 43,
	ELoginResult__SupervisedSettingsDownloadFailed44                                 = 44,
	ELoginResult__PinGrantFailure45                                                  = 45,
	ELoginResult__PinGrantTimeout46                                                  = 46,
	ELoginResult__PinGrantCanceled47                                                 = 47,
	ELoginResult__LoginStepTimeout48                                                 = 48,
	ELoginResult__ELoginResult_MAX49                                                 = 49
};

/// Enum /Script/Account.ECreateAccountResult
/// Size: 0x08
enum ECreateAccountResult : uint8_t
{
	ECreateAccountResult__NotStarted0                                                = 0,
	ECreateAccountResult__Pending1                                                   = 1,
	ECreateAccountResult__Success2                                                   = 2,
	ECreateAccountResult__Console_LoginFailed3                                       = 3,
	ECreateAccountResult__Console_DuplicateAuthAssociation4                          = 4,
	ECreateAccountResult__DuplicateAccount5                                          = 5,
	ECreateAccountResult__GenericError6                                              = 6,
	ECreateAccountResult__ECreateAccountResult_MAX7                                  = 7
};

