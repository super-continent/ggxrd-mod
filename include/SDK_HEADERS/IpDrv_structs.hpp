/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: IpDrv_structs.hpp
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

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int32_t                                            Addr;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Port;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeFile
// 0x0041
struct FMcpClashMobChallengeFile
{
	uint32_t                                           should_keep_post_challenge : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      title_id;                                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      file_name;                                     // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      dl_name;                                       // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      hash_code;                                     // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Type;                                          // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x0040 (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotificationParams
// 0x0004
struct FMcpClashMobPushNotificationParams
{
	int32_t                                            bah;                                           // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotification
// 0x0034
struct FMcpClashMobPushNotification
{
	class TArray<class FString>                        device_tokens;                                 // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      badge_type;                                    // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Sound;                                         // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Message;                                       // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobPushNotificationParams          Params;                                        // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeEvent
// 0x0158
struct FMcpClashMobChallengeEvent
{
	class FString                                      unique_challenge_id;                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      visible_date;                                  // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      start_date;                                    // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      end_date;                                      // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      completed_date;                                // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      purge_date;                                    // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            repeat_after_days;                             // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            repeat_count;                                  // 0x0058 (0x0004) [0x0000000000000000]               
	class FString                                      challenge_type;                                // 0x005C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            num_attempts;                                  // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            num_successful_attempts;                       // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            goal_value;                                    // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            goal_start_value;                              // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            goal_current_value;                            // 0x0078 (0x0004) [0x0000000000000000]               
	uint32_t                                           has_started : 1;                               // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           is_visible : 1;                                // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           has_completed : 1;                             // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           was_successful : 1;                            // 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	class TArray<struct FMcpClashMobChallengeFile>     file_list;                                     // 0x0080 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobPushNotification                start_notification;                            // 0x008C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobPushNotification                end_notification;                              // 0x00C0 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            facebook_likes;                                // 0x00F4 (0x0004) [0x0000000000000000]               
	class FString                                      facebook_comments;                             // 0x00F8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              facebook_like_scaler;                          // 0x0104 (0x0004) [0x0000000000000000]               
	float                                              facebook_comment_scaler;                       // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            facebook_like_goal_progress;                   // 0x010C (0x0004) [0x0000000000000000]               
	int32_t                                            facebook_comment_goal_progress;                // 0x0110 (0x0004) [0x0000000000000000]               
	class FString                                      facebook_id;                                   // 0x0114 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      facebook_post_message;                         // 0x0120 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           wants_facebook_posting : 1;                    // 0x012C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            twitter_retweets;                              // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              twitter_retweets_scaler;                       // 0x0134 (0x0004) [0x0000000000000000]               
	int32_t                                            twitter_goal_progress;                         // 0x0138 (0x0004) [0x0000000000000000]               
	class FString                                      twitter_id;                                    // 0x013C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      twitter_message;                               // 0x0148 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           wants_twitter_posting : 1;                     // 0x0154 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeUserStatus
// 0x0064
struct FMcpClashMobChallengeUserStatus
{
	class FString                                      unique_challenge_id;                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      unique_user_id;                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            num_attempts;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            num_successful_attempts;                       // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            goal_progress;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           did_complete : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      last_update_time;                              // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            user_award_given;                              // 0x0034 (0x0004) [0x0000000000000000]               
	class FString                                      accept_time;                                   // 0x0038 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      facebook_like_time;                            // 0x0044 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           enrolled_via_facebook : 1;                     // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           liked_via_facebook : 1;                        // 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           commented_via_facebook : 1;                    // 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      twitter_retweet_time;                          // 0x0054 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           enrolled_via_twitter : 1;                      // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           retweeted : 1;                                 // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// 0x0010
struct FFileNameToURLMapping
{
	class FName                                        Filename;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        UrlMapping;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x0011 (0x001C - 0x002D)
struct FTitleFileWeb : FTitleFile
{
	class FString                                      StringData;                                    // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            FileCompressionType;                           // 0x002C (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeRequest
// 0x0010
struct FMcpChallengeRequest
{
	class FString                                      UniqueChallengeId;                             // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeUserRequest
// 0x003C
struct FMcpChallengeUserRequest
{
	class FString                                      UniqueUserId;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeStatusRequests;                       // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeAcceptRequests;                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeUpdateProgressRequests;               // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpChallengeRequest>          ChallengeUpdateRewardRequests;                 // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// 0x000D
struct FMcpGroupMember
{
	class FString                                      MemberId;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AcceptState;                                   // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// 0x0034
struct FMcpGroup
{
	class FString                                      OwnerId;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupID;                                       // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupName;                                     // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AccessLevel;                                   // 0x0024 (0x0001) [0x0000000000000000]               
	class TArray<struct FMcpGroupMember>               Members;                                       // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// 0x0018
struct FMcpGroupList
{
	class FString                                      RequesterId;                                   // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpGroup>                     Groups;                                        // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// 0x0024
struct FMcpIdMapping
{
	class FString                                      McpId;                                         // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// 0x0028
struct FAddMappingRequest
{
	class FString                                      McpId;                                         // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// 0x0010
struct FQueryMappingRequest
{
	class FString                                      ExternalType;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpMessageBase.McpMessage
// 0x0055
struct FMcpMessage
{
	class FString                                      MessageId;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TitleId;                                       // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ToUniqueUserId;                                // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                              // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                              // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MessageType;                                   // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                    // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MessageCompressionType;                        // 0x0054 (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// 0x0018
struct FMcpMessageList
{
	class FString                                      ToUniqueUserId;                                // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpMessage>                   Messages;                                      // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// 0x0018
struct FMcpMessageContents
{
	class FString                                      MessageId;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              MessageContents;                               // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// 0x0024
struct FMcpCompressMessageRequest
{
	class TArray<uint8_t>                              SourceBuffer;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              DestBuffer;                                    // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutCompressedSize;                             // 0x0018 (0x0004) [0x0000000000000000]               
	class UHttpRequestInterface*                       Request;                                       // 0x001C (0x0004) [0x0000000000000000]               
	struct FPointer                                    CompressionWorker;                             // 0x0020 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// 0x002C
struct FMcpUncompressMessageRequest
{
	class FString                                      MessageId;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              SourceBuffer;                                  // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              DestBuffer;                                    // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutUncompressedSize;                           // 0x0024 (0x0004) [0x0000000000000000]               
	struct FPointer                                    UncompressionWorker;                           // 0x0028 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x0024 (0x0028 - 0x004C)
struct FMcpUserCloudFileInfo : FEmsFile
{
	class FString                                      CreationDate;                                  // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastUpdateDate;                                // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CompressionType;                               // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// 0x0028
struct FMcpUserCloudFilesEntry
{
	class FString                                      UserId;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTitleFileWeb>                 DownloadedFiles;                               // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpUserCloudFileInfo>         EnumeratedFiles;                               // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestEnumerateFiles;                     // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// 0x0038
struct FMcpUserStatus
{
	class FString                                      McpId;                                         // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UDID;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CountryCode;                                   // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastActiveDate;                                // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DaysInactive;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsBanned : 1;                                 // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.McpUserManager.RegisterUserRequest
// 0x001C
struct FRegisterUserRequest
{
	class FString                                      UDID;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      McpId;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int32_t                                            UpstreamRate;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DownstreamRate;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RoundtripLatency;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0010
struct FPlayerMember
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	uint8_t                                            TestType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentState;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            NumBytesToSendTotal;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentTotal;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentLast;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ElapsedTestTime;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0024
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x0008 (0x0001) [0x0000000000000000]               
	uint32_t                                           bCanHostVs : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<struct FConnectionBandwidthStats>     BandwidthHistory;                              // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0028
struct FClientConnectionBandwidthTestData
{
	uint8_t                                            CurrentState;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            TestType;                                      // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            BytesTotalNeeded;                              // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            BytesReceived;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDouble                                     RequestTestStartTime;                          // 0x000C (0x0008) [0x0000000000000000]               
	struct FDouble                                     TestStartTime;                                 // 0x0014 (0x0008) [0x0000000000000000]               
	struct FConnectionBandwidthStats                   BandwidthStats;                                // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0058
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ElapsedHeartbeatTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x000C (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bConnectionAccepted : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                 // 0x0014 (0x0028) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x003C (0x0001) [0x0000000000000000]               
	uint32_t                                           bCanHostVs : 1;                                // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0044 (0x0004) [0x0000000000000000]               
	class TArray<struct FConnectionBandwidthStats>     BandwidthHistory;                              // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0018
struct FEventUploadConfig
{
	uint8_t                                            UploadType;                                    // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      UploadUrl;                                     // 0x0004 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bUseCompression : 1;                           // 0x0014 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// 0x001C
struct FOnlineImageDownload
{
	class FString                                      URL;                                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            State;                                         // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           bPendingRemoval : 1;                           // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0028
struct FNewsCacheEntry
{
	class FString                                      NewsUrl;                                       // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            ReadState;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            NewsType;                                      // 0x000D (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      NewsItem;                                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsUnicode : 1;                                // 0x0020 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FPointer                                    HttpDownloader;                                // 0x0024 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x0020
struct FConfiguredGameSetting
{
	int32_t                                            GameSettingId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      GameSettingsClassName;                         // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.InventorySwap
// 0x0014
struct FInventorySwap
{
	class FName                                        Original;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SwapTo;                                        // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x0070
struct FPlaylist
{
	class TArray<struct FConfiguredGameSetting>        ConfiguredGames;                               // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            LoadBalanceId;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      LocalizationString;                            // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ContentIds;                                    // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamSize;                                      // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            TeamCount;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPartySize;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	class FString                                      Name;                                          // 0x0038 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0044 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MatchType;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisableDedicatedServerSearches : 1;           // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class FName>                          MapCycle;                                      // 0x0058 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FInventorySwap>                InventorySwaps;                                // 0x0064 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x000C
struct FPlaylistPopulation
{
	int32_t                                            PlaylistId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            WorldwideTotal;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotal;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0004 (0x001C - 0x0020)
struct FTitleFileMcp : FTitleFile
{
	struct FPointer                                    HttpDownloader;                                // 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0024
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            XpLevel;                                       // 0x000C (0x0004) [0x0000000000000000]               
	struct FDouble                                     Mu;                                            // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDouble                                     Sigma;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              ElapsedSessionTime;                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0018
struct FPartyReservation
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeader;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	class TArray<struct FPlayerReservation>            PartyMembers;                                  // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0010
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ElapsedHeartbeatTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x000C (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x0020 (0x001C - 0x003C)
struct FTitleFileCacheEntry : FTitleFile
{
	class FString                                      LogicalName;                                   // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Hash;                                          // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FileOp;                                        // 0x0034 (0x0001) [0x0000000000000000]               
	struct FPointer                                    Ar;                                            // 0x0038 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
