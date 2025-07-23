/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int32_t                                            Query;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                      // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0030
struct FFilterKeyToSteamKeyMapping
{
	int32_t                                            KeyId;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            KeyType;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	class FString                                      RawKey;                                        // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SteamKey;                                      // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bReverseFilter : 1;                            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      IgnoreValue;                                   // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x003C
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                      // 0x0000 (0x003C) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int32_t                                            Query;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Response;                                      // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0054
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FServerQueryToRulesResponseMapping> QueryToRulesResponseMap;                       // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FServerQueryToPingResponseMapping> QueryToPingResponseMap;                        // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    ServerListResponse;                            // 0x001C (0x0004) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            CurrentMatchmakingType;                        // 0x0020 (0x0001) [0x0000000000000000]               
	struct FPointer                                    CurrentMatchmakingQuery;                       // 0x0024 (0x0004) [0x0000000000001000] (CPF_Native)  
	class TArray<struct FClientFilterORClause>         ActiveClientsideFilters;                       // 0x0028 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<class UOnlineGameSettings*>           PendingRulesSearchSettings;                    // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UOnlineGameSettings*>           PendingPingSearchSettings;                     // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIgnoreRefreshComplete : 1;                    // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastActivityTimestamp;                         // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyFilter
// 0x0020
struct FLobbyFilter
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Operator;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bNumeric : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbySortFilter
// 0x0010
struct FLobbySortFilter
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TargetValue;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyMetaData
// 0x0018
struct FLobbyMetaData
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.BasicLobbyInfo
// 0x0014
struct FBasicLobbyInfo
{
	struct FUniqueNetId                                LobbyUID;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FLobbyMetaData>                LobbySettings;                                 // 0x0008 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyMember
// 0x0014
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                     // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FLobbyMetaData>                PlayerSettings;                                // 0x0008 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ActiveLobbyInfo
// 0x000C (0x0014 - 0x0020)
struct FActiveLobbyInfo : FBasicLobbyInfo
{
	class TArray<struct FLobbyMember>                  Members;                                       // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                           // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            UpdateType;                                    // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            LeaderboardSize;                               // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            SortType;                                      // 0x0014 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DisplayFormat;                                 // 0x0015 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FLeaderboardHandle                          LeaderboardRef;                                // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bLeaderboardInitializing : 1;                  // 0x0020 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bLeaderboardInitiated : 1;                     // 0x0020 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0024
struct FDeferredLeaderboardRead
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RequestType;                                   // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            Start;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            End;                                           // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<struct FUniqueNetId>                  PlayerList;                                    // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x001C
struct FDeferredLeaderboardWrite
{
	class FString                                      LeaderboardName;                               // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Score;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              LeaderboardData;                               // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x001C
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Rank;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              LeaderboardData;                               // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int32_t                                            ViewId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      LeaderboardName;                               // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	class FString                                      ClanName;                                      // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ClanTag;                                       // 0x000C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadDelegates;                                 // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteDelegates;                                // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ProfileDataChangedDelegates;                   // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x0004 - 0x0005)
struct FLocalTalkerSteam : FLocalTalker
{
	uint8_t                                            MuteType;                                      // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int32_t                                            DeviceID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             DeviceSelectionMulticast;                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeviceSelectionDelegates;                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnlock : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AchievementName;                               // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            ViewId;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressCount;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAutoUnlock : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0020
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                     // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumberOfAttempts;                              // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Size;                                          // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;              // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0018
struct FSteamUserCloudMetadata
{
	class FString                                      UserId;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FEmsFile>                      UserCloudMetadata;                             // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0018
struct FSteamUserCloud
{
	class FString                                      UserId;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTitleFile>                    UserCloudFileData;                             // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int32_t                                            bIsControllerConnected;                        // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            bLastIsControllerConnected;                    // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int32_t                                            StatusId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StatusString;                                  // 0x0004 (0x000C) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0018
struct FPlayerStat
{
	int32_t                                            ViewId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ColumnId;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0008 (0x000C) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bChanged : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0048
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                        // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      PlayerName;                                    // 0x0008 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StatGuid;                                      // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerStat>                   Stats;                                         // 0x0020 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                         // 0x002C (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      Place;                                         // 0x003C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
