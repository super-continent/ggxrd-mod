/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: GameFramework_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "rev2-mod/include/SdkHeaders.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameAIController::eventGetActionString()
{
	static UFunction* uFnGetActionString = nullptr;

	if (!uFnGetActionString)
	{
		uFnGetActionString = UFunction::FindFunction("Function GameFramework.GameAIController.GetActionString");
	}

	AGameAIController_eventGetActionString_Params GetActionString_Params;
	memset(&GetActionString_Params, 0, sizeof(GetActionString_Params));

	this->ProcessEvent(uFnGetActionString, &GetActionString_Params, nullptr);

	return GetActionString_Params.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                TargetDesiredRotation          (CPF_Parm)
// uint32_t                       InLockDesiredRotation          (CPF_OptionalParm | CPF_Parm)
// uint32_t                       InUnlockWhenReached            (CPF_OptionalParm | CPF_Parm)
// float                          InterpolationTime              (CPF_OptionalParm | CPF_Parm)

void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static UFunction* uFnSetDesiredRotation = nullptr;

	if (!uFnSetDesiredRotation)
	{
		uFnSetDesiredRotation = UFunction::FindFunction("Function GameFramework.GameAIController.SetDesiredRotation");
	}

	AGameAIController_execSetDesiredRotation_Params SetDesiredRotation_Params;
	memset(&SetDesiredRotation_Params, 0, sizeof(SetDesiredRotation_Params));
	memcpy_s(&SetDesiredRotation_Params.TargetDesiredRotation, sizeof(SetDesiredRotation_Params.TargetDesiredRotation), &TargetDesiredRotation, sizeof(TargetDesiredRotation));
	SetDesiredRotation_Params.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Params.InUnlockWhenReached = InUnlockWhenReached;
	memcpy_s(&SetDesiredRotation_Params.InterpolationTime, sizeof(SetDesiredRotation_Params.InterpolationTime), &InterpolationTime, sizeof(InterpolationTime));

	this->ProcessEvent(uFnSetDesiredRotation, &SetDesiredRotation_Params, nullptr);
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] (FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  LogText                        (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FName                    LogCategory                    (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bForce                         (CPF_OptionalParm | CPF_Parm)

void AGameAIController::eventAILog_Internal(const class FString& LogText, const class FName& LogCategory, bool bForce)
{
	static UFunction* uFnAILog_Internal = nullptr;

	if (!uFnAILog_Internal)
	{
		uFnAILog_Internal = UFunction::FindFunction("Function GameFramework.GameAIController.AILog_Internal");
	}

	AGameAIController_eventAILog_Internal_Params AILog_Internal_Params;
	memset(&AILog_Internal_Params, 0, sizeof(AILog_Internal_Params));
	memcpy_s(&AILog_Internal_Params.LogText, sizeof(AILog_Internal_Params.LogText), &LogText, sizeof(LogText));
	memcpy_s(&AILog_Internal_Params.LogCategory, sizeof(AILog_Internal_Params.LogCategory), &LogCategory, sizeof(LogCategory));
	AILog_Internal_Params.bForce = bForce;

	this->ProcessEvent(uFnAILog_Internal, &AILog_Internal_Params, nullptr);
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  LogText                        (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AGameAIController::RecordDemoAILog(const class FString& LogText)
{
	static UFunction* uFnRecordDemoAILog = nullptr;

	if (!uFnRecordDemoAILog)
	{
		uFnRecordDemoAILog = UFunction::FindFunction("Function GameFramework.GameAIController.RecordDemoAILog");
	}

	AGameAIController_execRecordDemoAILog_Params RecordDemoAILog_Params;
	memset(&RecordDemoAILog_Params, 0, sizeof(RecordDemoAILog_Params));
	memcpy_s(&RecordDemoAILog_Params.LogText, sizeof(RecordDemoAILog_Params.LogText), &LogText, sizeof(LogText));

	this->ProcessEvent(uFnRecordDemoAILog, &RecordDemoAILog_Params, nullptr);
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameAIController::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameAIController.Destroyed");
	}

	AGameAIController_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameAIController::ReachedIntermediateMoveGoal()
{
	static UFunction* uFnReachedIntermediateMoveGoal = nullptr;

	if (!uFnReachedIntermediateMoveGoal)
	{
		uFnReachedIntermediateMoveGoal = UFunction::FindFunction("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");
	}

	AGameAIController_execReachedIntermediateMoveGoal_Params ReachedIntermediateMoveGoal_Params;
	memset(&ReachedIntermediateMoveGoal_Params, 0, sizeof(ReachedIntermediateMoveGoal_Params));

	this->ProcessEvent(uFnReachedIntermediateMoveGoal, &ReachedIntermediateMoveGoal_Params, nullptr);
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameAIController::ReachedMoveGoal()
{
	static UFunction* uFnReachedMoveGoal = nullptr;

	if (!uFnReachedMoveGoal)
	{
		uFnReachedMoveGoal = UFunction::FindFunction("Function GameFramework.GameAIController.ReachedMoveGoal");
	}

	AGameAIController_execReachedMoveGoal_Params ReachedMoveGoal_Params;
	memset(&ReachedMoveGoal_Params, 0, sizeof(ReachedMoveGoal_Params));

	this->ProcessEvent(uFnReachedMoveGoal, &ReachedMoveGoal_Params, nullptr);
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameAIController::GetDestinationOffset()
{
	static UFunction* uFnGetDestinationOffset = nullptr;

	if (!uFnGetDestinationOffset)
	{
		uFnGetDestinationOffset = UFunction::FindFunction("Function GameFramework.GameAIController.GetDestinationOffset");
	}

	AGameAIController_execGetDestinationOffset_Params GetDestinationOffset_Params;
	memset(&GetDestinationOffset_Params, 0, sizeof(GetDestinationOffset_Params));

	this->ProcessEvent(uFnGetDestinationOffset, &GetDestinationOffset_Params, nullptr);

	return GetDestinationOffset_Params.ReturnValue;
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34015])
// Parameter Info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  InClass                        (CPF_Const | CPF_Parm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static UFunction* uFnGetAICommandInStack = nullptr;

	if (!uFnGetAICommandInStack)
	{
		uFnGetAICommandInStack = UFunction::FindFunction("Function GameFramework.GameAIController.GetAICommandInStack");
	}

	AGameAIController_execGetAICommandInStack_Params GetAICommandInStack_Params;
	memset(&GetAICommandInStack_Params, 0, sizeof(GetAICommandInStack_Params));
	GetAICommandInStack_Params.InClass = InClass;

	this->ProcessEvent(uFnGetAICommandInStack, &GetAICommandInStack_Params, nullptr);

	return GetAICommandInStack_Params.ReturnValue;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33923])
// Parameter Info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  SearchClass                    (CPF_Parm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static UFunction* uFnFindCommandOfClass = nullptr;

	if (!uFnFindCommandOfClass)
	{
		uFnFindCommandOfClass = UFunction::FindFunction("Function GameFramework.GameAIController.FindCommandOfClass");
	}

	AGameAIController_execFindCommandOfClass_Params FindCommandOfClass_Params;
	memset(&FindCommandOfClass_Params, 0, sizeof(FindCommandOfClass_Params));
	FindCommandOfClass_Params.SearchClass = SearchClass;

	this->ProcessEvent(uFnFindCommandOfClass, &FindCommandOfClass_Params, nullptr);

	return FindCommandOfClass_Params.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33855])
// Parameter Info:

void AGameAIController::DumpCommandStack()
{
	static UFunction* uFnDumpCommandStack = nullptr;

	if (!uFnDumpCommandStack)
	{
		uFnDumpCommandStack = UFunction::FindFunction("Function GameFramework.GameAIController.DumpCommandStack");
	}

	AGameAIController_execDumpCommandStack_Params DumpCommandStack_Params;
	memset(&DumpCommandStack_Params, 0, sizeof(DumpCommandStack_Params));

	this->ProcessEvent(uFnDumpCommandStack, &DumpCommandStack_Params, nullptr);
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33663])
// Parameter Info:

void AGameAIController::CheckCommandCount()
{
	static UFunction* uFnCheckCommandCount = nullptr;

	if (!uFnCheckCommandCount)
	{
		uFnCheckCommandCount = UFunction::FindFunction("Function GameFramework.GameAIController.CheckCommandCount");
	}

	AGameAIController_execCheckCommandCount_Params CheckCommandCount_Params;
	memset(&CheckCommandCount_Params, 0, sizeof(CheckCommandCount_Params));

	this->ProcessEvent(uFnCheckCommandCount, &CheckCommandCount_Params, nullptr);
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34012])
// Parameter Info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static UFunction* uFnGetActiveCommand = nullptr;

	if (!uFnGetActiveCommand)
	{
		uFnGetActiveCommand = UFunction::FindFunction("Function GameFramework.GameAIController.GetActiveCommand");
	}

	AGameAIController_execGetActiveCommand_Params GetActiveCommand_Params;
	memset(&GetActiveCommand_Params, 0, sizeof(GetActiveCommand_Params));

	this->ProcessEvent(uFnGetActiveCommand, &GetActiveCommand_Params, nullptr);

	return GetActiveCommand_Params.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[33221])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGameAICommand*          AbortCmd                       (CPF_Parm)
// class UClass*                  AbortClass                     (CPF_OptionalParm | CPF_Parm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static UFunction* uFnAbortCommand = nullptr;

	if (!uFnAbortCommand)
	{
		uFnAbortCommand = UFunction::FindFunction("Function GameFramework.GameAIController.AbortCommand");
	}

	AGameAIController_execAbortCommand_Params AbortCommand_Params;
	memset(&AbortCommand_Params, 0, sizeof(AbortCommand_Params));
	AbortCommand_Params.AbortCmd = AbortCmd;
	AbortCommand_Params.AbortClass = AbortClass;

	this->ProcessEvent(uFnAbortCommand, &AbortCommand_Params, nullptr);

	return AbortCommand_Params.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34471])
// Parameter Info:
// class UGameAICommand*          ToBePoppedCommand              (CPF_Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static UFunction* uFnPopCommand = nullptr;

	if (!uFnPopCommand)
	{
		uFnPopCommand = UFunction::FindFunction("Function GameFramework.GameAIController.PopCommand");
	}

	AGameAIController_execPopCommand_Params PopCommand_Params;
	memset(&PopCommand_Params, 0, sizeof(PopCommand_Params));
	PopCommand_Params.ToBePoppedCommand = ToBePoppedCommand;

	this->ProcessEvent(uFnPopCommand, &PopCommand_Params, nullptr);
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34513])
// Parameter Info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static UFunction* uFnPushCommand = nullptr;

	if (!uFnPushCommand)
	{
		uFnPushCommand = UFunction::FindFunction("Function GameFramework.GameAIController.PushCommand");
	}

	AGameAIController_execPushCommand_Params PushCommand_Params;
	memset(&PushCommand_Params, 0, sizeof(PushCommand_Params));
	PushCommand_Params.NewCommand = NewCommand;

	this->ProcessEvent(uFnPushCommand, &PushCommand_Params, nullptr);
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] (FUNC_Final | FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[33284])
// Parameter Info:
// class UClass*                  BaseClass                      (CPF_Parm)
// class UGameAICommand*          Cmd                            (CPF_Parm | CPF_OutParm)

void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand*& Cmd)
{
	static UFunction* uFnAllCommands = nullptr;

	if (!uFnAllCommands)
	{
		uFnAllCommands = UFunction::FindFunction("Function GameFramework.GameAIController.AllCommands");
	}

	AGameAIController_execAllCommands_Params AllCommands_Params;
	memset(&AllCommands_Params, 0, sizeof(AllCommands_Params));
	AllCommands_Params.BaseClass = BaseClass;
	AllCommands_Params.Cmd = Cmd;

	this->ProcessEvent(uFnAllCommands, &AllCommands_Params, nullptr);

	Cmd = AllCommands_Params.Cmd;
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICommand::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICommand.HandlePathObstruction");
	}

	UGameAICommand_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memset(&HandlePathObstruction_Params, 0, sizeof(HandlePathObstruction_Params));
	HandlePathObstruction_Params.BlockedBy = BlockedBy;

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 AttemptedDest                  (CPF_Parm)
// class AActor*                  AttemptedTarget                (CPF_Parm)

bool UGameAICommand::MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget)
{
	static UFunction* uFnMoveUnreachable = nullptr;

	if (!uFnMoveUnreachable)
	{
		uFnMoveUnreachable = UFunction::FindFunction("Function GameFramework.GameAICommand.MoveUnreachable");
	}

	UGameAICommand_execMoveUnreachable_Params MoveUnreachable_Params;
	memset(&MoveUnreachable_Params, 0, sizeof(MoveUnreachable_Params));
	memcpy_s(&MoveUnreachable_Params.AttemptedDest, sizeof(MoveUnreachable_Params.AttemptedDest), &AttemptedDest, sizeof(AttemptedDest));
	MoveUnreachable_Params.AttemptedTarget = AttemptedTarget;

	this->ProcessEvent(uFnMoveUnreachable, &MoveUnreachable_Params, nullptr);

	return MoveUnreachable_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::NotifyNeedRepath()
{
	static UFunction* uFnNotifyNeedRepath = nullptr;

	if (!uFnNotifyNeedRepath)
	{
		uFnNotifyNeedRepath = UFunction::FindFunction("Function GameFramework.GameAICommand.NotifyNeedRepath");
	}

	UGameAICommand_execNotifyNeedRepath_Params NotifyNeedRepath_Params;
	memset(&NotifyNeedRepath_Params, 0, sizeof(NotifyNeedRepath_Params));

	this->ProcessEvent(uFnNotifyNeedRepath, &NotifyNeedRepath_Params, nullptr);
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameAICommand::eventGetDebugVerboseText()
{
	static UFunction* uFnGetDebugVerboseText = nullptr;

	if (!uFnGetDebugVerboseText)
	{
		uFnGetDebugVerboseText = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDebugVerboseText");
	}

	UGameAICommand_eventGetDebugVerboseText_Params GetDebugVerboseText_Params;
	memset(&GetDebugVerboseText_Params, 0, sizeof(GetDebugVerboseText_Params));

	this->ProcessEvent(uFnGetDebugVerboseText, &GetDebugVerboseText_Params, nullptr);

	return GetDebugVerboseText_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class TArray<class FString>    OutText                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, class TArray<class FString>& OutText)
{
	static UFunction* uFnGetDebugOverheadText = nullptr;

	if (!uFnGetDebugOverheadText)
	{
		uFnGetDebugOverheadText = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDebugOverheadText");
	}

	UGameAICommand_execGetDebugOverheadText_Params GetDebugOverheadText_Params;
	memset(&GetDebugOverheadText_Params, 0, sizeof(GetDebugOverheadText_Params));
	GetDebugOverheadText_Params.PC = PC;
	memcpy_s(&GetDebugOverheadText_Params.OutText, sizeof(GetDebugOverheadText_Params.OutText), &OutText, sizeof(OutText));

	this->ProcessEvent(uFnGetDebugOverheadText, &GetDebugOverheadText_Params, nullptr);

	memcpy_s(&OutText, sizeof(OutText), &GetDebugOverheadText_Params.OutText, sizeof(GetDebugOverheadText_Params.OutText));
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    H                              (CPF_Parm)
// class FName                    Category                       (CPF_Parm)

void UGameAICommand::eventDrawDebug(class AHUD* H, const class FName& Category)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameAICommand.DrawDebug");
	}

	UGameAICommand_eventDrawDebug_Params DrawDebug_Params;
	memset(&DrawDebug_Params, 0, sizeof(DrawDebug_Params));
	DrawDebug_Params.H = H;
	memcpy_s(&DrawDebug_Params.Category, sizeof(DrawDebug_Params.Category), &Category, sizeof(Category));

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameAICommand::eventGetDumpString()
{
	static UFunction* uFnGetDumpString = nullptr;

	if (!uFnGetDumpString)
	{
		uFnGetDumpString = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDumpString");
	}

	UGameAICommand_eventGetDumpString_Params GetDumpString_Params;
	memset(&GetDumpString_Params, 0, sizeof(GetDumpString_Params));

	this->ProcessEvent(uFnGetDumpString, &GetDumpString_Params, nullptr);

	return GetDumpString_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    OldCommandName                 (CPF_Parm)

void UGameAICommand::Resumed(const class FName& OldCommandName)
{
	static UFunction* uFnResumed = nullptr;

	if (!uFnResumed)
	{
		uFnResumed = UFunction::FindFunction("Function GameFramework.GameAICommand.Resumed");
	}

	UGameAICommand_execResumed_Params Resumed_Params;
	memset(&Resumed_Params, 0, sizeof(Resumed_Params));
	memcpy_s(&Resumed_Params.OldCommandName, sizeof(Resumed_Params.OldCommandName), &OldCommandName, sizeof(OldCommandName));

	this->ProcessEvent(uFnResumed, &Resumed_Params, nullptr);
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static UFunction* uFnPaused = nullptr;

	if (!uFnPaused)
	{
		uFnPaused = UFunction::FindFunction("Function GameFramework.GameAICommand.Paused");
	}

	UGameAICommand_execPaused_Params Paused_Params;
	memset(&Paused_Params, 0, sizeof(Paused_Params));
	Paused_Params.NewCommand = NewCommand;

	this->ProcessEvent(uFnPaused, &Paused_Params, nullptr);
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.Popped");
	}

	UGameAICommand_execPopped_Params Popped_Params;
	memset(&Popped_Params, 0, sizeof(Popped_Params));

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICommand.Pushed");
	}

	UGameAICommand_execPushed_Params Pushed_Params;
	memset(&Pushed_Params, 0, sizeof(Pushed_Params));

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::PostPopped()
{
	static UFunction* uFnPostPopped = nullptr;

	if (!uFnPostPopped)
	{
		uFnPostPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.PostPopped");
	}

	UGameAICommand_execPostPopped_Params PostPopped_Params;
	memset(&PostPopped_Params, 0, sizeof(PostPopped_Params));

	this->ProcessEvent(uFnPostPopped, &PostPopped_Params, nullptr);
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static UFunction* uFnPrePushed = nullptr;

	if (!uFnPrePushed)
	{
		uFnPrePushed = UFunction::FindFunction("Function GameFramework.GameAICommand.PrePushed");
	}

	UGameAICommand_execPrePushed_Params PrePushed_Params;
	memset(&PrePushed_Params, 0, sizeof(PrePushed_Params));
	PrePushed_Params.AI = AI;

	this->ProcessEvent(uFnPrePushed, &PrePushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    StateName                      (CPF_Parm)

bool UGameAICommand::AllowStateTransitionTo(const class FName& StateName)
{
	static UFunction* uFnAllowStateTransitionTo = nullptr;

	if (!uFnAllowStateTransitionTo)
	{
		uFnAllowStateTransitionTo = UFunction::FindFunction("Function GameFramework.GameAICommand.AllowStateTransitionTo");
	}

	UGameAICommand_execAllowStateTransitionTo_Params AllowStateTransitionTo_Params;
	memset(&AllowStateTransitionTo_Params, 0, sizeof(AllowStateTransitionTo_Params));
	memcpy_s(&AllowStateTransitionTo_Params.StateName, sizeof(AllowStateTransitionTo_Params.StateName), &StateName, sizeof(StateName));

	this->ProcessEvent(uFnAllowStateTransitionTo, &AllowStateTransitionTo_Params, nullptr);

	return AllowStateTransitionTo_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  AttemptCommand                 (CPF_Parm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static UFunction* uFnAllowTransitionTo = nullptr;

	if (!uFnAllowTransitionTo)
	{
		uFnAllowTransitionTo = UFunction::FindFunction("Function GameFramework.GameAICommand.AllowTransitionTo");
	}

	UGameAICommand_execAllowTransitionTo_Params AllowTransitionTo_Params;
	memset(&AllowTransitionTo_Params, 0, sizeof(AllowTransitionTo_Params));
	AllowTransitionTo_Params.AttemptCommand = AttemptCommand;

	this->ProcessEvent(uFnAllowTransitionTo, &AllowTransitionTo_Params, nullptr);

	return AllowTransitionTo_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameAICommand.Tick");
	}

	UGameAICommand_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34660])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static UFunction* uFnShouldIgnoreNotifies = nullptr;

	if (!uFnShouldIgnoreNotifies)
	{
		uFnShouldIgnoreNotifies = UFunction::FindFunction("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");
	}

	UGameAICommand_execShouldIgnoreNotifies_Params ShouldIgnoreNotifies_Params;
	memset(&ShouldIgnoreNotifies_Params, 0, sizeof(ShouldIgnoreNotifies_Params));

	this->ProcessEvent(uFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Params, nullptr);

	return ShouldIgnoreNotifies_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::eventInternalTick(float DeltaTime)
{
	static UFunction* uFnInternalTick = nullptr;

	if (!uFnInternalTick)
	{
		uFnInternalTick = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalTick");
	}

	UGameAICommand_eventInternalTick_Params InternalTick_Params;
	memset(&InternalTick_Params, 0, sizeof(InternalTick_Params));
	memcpy_s(&InternalTick_Params.DeltaTime, sizeof(InternalTick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnInternalTick, &InternalTick_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    OldCommandName                 (CPF_Parm)

void UGameAICommand::eventInternalResumed(const class FName& OldCommandName)
{
	static UFunction* uFnInternalResumed = nullptr;

	if (!uFnInternalResumed)
	{
		uFnInternalResumed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalResumed");
	}

	UGameAICommand_eventInternalResumed_Params InternalResumed_Params;
	memset(&InternalResumed_Params, 0, sizeof(InternalResumed_Params));
	memcpy_s(&InternalResumed_Params.OldCommandName, sizeof(InternalResumed_Params.OldCommandName), &OldCommandName, sizeof(OldCommandName));

	this->ProcessEvent(uFnInternalResumed, &InternalResumed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::eventInternalPaused(class UGameAICommand* NewCommand)
{
	static UFunction* uFnInternalPaused = nullptr;

	if (!uFnInternalPaused)
	{
		uFnInternalPaused = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPaused");
	}

	UGameAICommand_eventInternalPaused_Params InternalPaused_Params;
	memset(&InternalPaused_Params, 0, sizeof(InternalPaused_Params));
	InternalPaused_Params.NewCommand = NewCommand;

	this->ProcessEvent(uFnInternalPaused, &InternalPaused_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::eventInternalPopped()
{
	static UFunction* uFnInternalPopped = nullptr;

	if (!uFnInternalPopped)
	{
		uFnInternalPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPopped");
	}

	UGameAICommand_eventInternalPopped_Params InternalPopped_Params;
	memset(&InternalPopped_Params, 0, sizeof(InternalPopped_Params));

	this->ProcessEvent(uFnInternalPopped, &InternalPopped_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICommand::eventInternalPushed()
{
	static UFunction* uFnInternalPushed = nullptr;

	if (!uFnInternalPushed)
	{
		uFnInternalPushed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPushed");
	}

	UGameAICommand_eventInternalPushed_Params InternalPushed_Params;
	memset(&InternalPushed_Params, 0, sizeof(InternalPushed_Params));

	this->ProcessEvent(uFnInternalPushed, &InternalPushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::eventInternalPrePushed(class AGameAIController* AI)
{
	static UFunction* uFnInternalPrePushed = nullptr;

	if (!uFnInternalPrePushed)
	{
		uFnInternalPrePushed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPrePushed");
	}

	UGameAICommand_eventInternalPrePushed_Params InternalPrePushed_Params;
	memset(&InternalPrePushed_Params, 0, sizeof(InternalPrePushed_Params));
	InternalPrePushed_Params.AI = AI;

	this->ProcessEvent(uFnInternalPrePushed, &InternalPrePushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)

bool UGameAICommand::InitCommand(class AGameAIController* AI)
{
	static UFunction* uFnInitCommand = nullptr;

	if (!uFnInitCommand)
	{
		uFnInitCommand = UFunction::FindFunction("Function GameFramework.GameAICommand.InitCommand");
	}

	UGameAICommand_execInitCommand_Params InitCommand_Params;
	memset(&InitCommand_Params, 0, sizeof(InitCommand_Params));
	InitCommand_Params.AI = AI;

	UGameAICommand::StaticClass()->ProcessEvent(uFnInitCommand, &InitCommand_Params, nullptr);

	return InitCommand_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  UserActor                      (CPF_Parm)

bool UGameAICommand::InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static UFunction* uFnInitCommandUserActor = nullptr;

	if (!uFnInitCommandUserActor)
	{
		uFnInitCommandUserActor = UFunction::FindFunction("Function GameFramework.GameAICommand.InitCommandUserActor");
	}

	UGameAICommand_execInitCommandUserActor_Params InitCommandUserActor_Params;
	memset(&InitCommandUserActor_Params, 0, sizeof(InitCommandUserActor_Params));
	InitCommandUserActor_Params.AI = AI;
	InitCommandUserActor_Params.UserActor = UserActor;

	UGameAICommand::StaticClass()->ProcessEvent(uFnInitCommandUserActor, &InitCommandUserActor_Params, nullptr);

	return InitCommandUserActor_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] (FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  FadeColor                      (CPF_Parm)
// uint8_t                        FromAlpha                      (CPF_Parm)
// uint8_t                        ToAlpha                        (CPF_Parm)
// float                          FadeTime                       (CPF_Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, uint8_t FromAlpha, uint8_t ToAlpha, float FadeTime)
{
	static UFunction* uFnClientColorFade = nullptr;

	if (!uFnClientColorFade)
	{
		uFnClientColorFade = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientColorFade");
	}

	AGamePlayerController_execClientColorFade_Params ClientColorFade_Params;
	memset(&ClientColorFade_Params, 0, sizeof(ClientColorFade_Params));
	memcpy_s(&ClientColorFade_Params.FadeColor, sizeof(ClientColorFade_Params.FadeColor), &FadeColor, sizeof(FadeColor));
	memcpy_s(&ClientColorFade_Params.FromAlpha, sizeof(ClientColorFade_Params.FromAlpha), &FromAlpha, sizeof(FromAlpha));
	memcpy_s(&ClientColorFade_Params.ToAlpha, sizeof(ClientColorFade_Params.ToAlpha), &ToAlpha, sizeof(ToAlpha));
	memcpy_s(&ClientColorFade_Params.FadeTime, sizeof(ClientColorFade_Params.FadeTime), &FadeTime, sizeof(FadeTime));

	this->ProcessEvent(uFnClientColorFade, &ClientColorFade_Params, nullptr);
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bDesiredPauseState             (CPF_Parm)

void AGamePlayerController::eventWarmupPause(bool bDesiredPauseState)
{
	static UFunction* uFnWarmupPause = nullptr;

	if (!uFnWarmupPause)
	{
		uFnWarmupPause = UFunction::FindFunction("Function GameFramework.GamePlayerController.WarmupPause");
	}

	AGamePlayerController_eventWarmupPause_Params WarmupPause_Params;
	memset(&WarmupPause_Params, 0, sizeof(WarmupPause_Params));
	WarmupPause_Params.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent(uFnWarmupPause, &WarmupPause_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static UFunction* uFnCanUnpauseWarmup = nullptr;

	if (!uFnCanUnpauseWarmup)
	{
		uFnCanUnpauseWarmup = UFunction::FindFunction("Function GameFramework.GamePlayerController.CanUnpauseWarmup");
	}

	AGamePlayerController_execCanUnpauseWarmup_Params CanUnpauseWarmup_Params;
	memset(&CanUnpauseWarmup_Params, 0, sizeof(CanUnpauseWarmup_Params));

	this->ProcessEvent(uFnCanUnpauseWarmup, &CanUnpauseWarmup_Params, nullptr);

	return CanUnpauseWarmup_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34020])
// Parameter Info:
// class FString                  MovieName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(class FString& MovieName)
{
	static UFunction* uFnGetCurrentMovie = nullptr;

	if (!uFnGetCurrentMovie)
	{
		uFnGetCurrentMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetCurrentMovie");
	}

	AGamePlayerController_execGetCurrentMovie_Params GetCurrentMovie_Params;
	memset(&GetCurrentMovie_Params, 0, sizeof(GetCurrentMovie_Params));
	memcpy_s(&GetCurrentMovie_Params.MovieName, sizeof(GetCurrentMovie_Params.MovieName), &MovieName, sizeof(MovieName));

	this->ProcessEvent(uFnGetCurrentMovie, &GetCurrentMovie_Params, nullptr);

	memcpy_s(&MovieName, sizeof(MovieName), &GetCurrentMovie_Params.MovieName, sizeof(GetCurrentMovie_Params.MovieName));
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags) (iNative[13067])
// Parameter Info:
// float                          DelayInSeconds                 (CPF_Parm)
// uint32_t                       bAllowMovieToFinish            (CPF_Parm)
// uint32_t                       bForceStopNonSkippable         (CPF_Parm)
// uint32_t                       bForceStopLoadingMovie         (CPF_Parm)

void AGamePlayerController::eventClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static UFunction* uFnClientStopMovie = nullptr;

	if (!uFnClientStopMovie)
	{
		uFnClientStopMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientStopMovie");
	}

	AGamePlayerController_eventClientStopMovie_Params ClientStopMovie_Params;
	memset(&ClientStopMovie_Params, 0, sizeof(ClientStopMovie_Params));
	memcpy_s(&ClientStopMovie_Params.DelayInSeconds, sizeof(ClientStopMovie_Params.DelayInSeconds), &DelayInSeconds, sizeof(DelayInSeconds));
	ClientStopMovie_Params.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Params.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	this->ProcessEvent(uFnClientStopMovie, &ClientStopMovie_Params, nullptr);
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags) (iNative[13066])
// Parameter Info:
// class FString                  MovieName                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        InStartOfRenderingMovieFrame   (CPF_Parm)
// int32_t                        InEndOfRenderingMovieFrame     (CPF_Parm)
// uint32_t                       bRestrictPausing               (CPF_Parm)
// uint32_t                       bPlayOnceFromStream            (CPF_Parm)
// uint32_t                       bOnlyBackButtonSkipsMovie      (CPF_Parm)

void AGamePlayerController::eventClientPlayMovie(const class FString& MovieName, int32_t InStartOfRenderingMovieFrame, int32_t InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static UFunction* uFnClientPlayMovie = nullptr;

	if (!uFnClientPlayMovie)
	{
		uFnClientPlayMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientPlayMovie");
	}

	AGamePlayerController_eventClientPlayMovie_Params ClientPlayMovie_Params;
	memset(&ClientPlayMovie_Params, 0, sizeof(ClientPlayMovie_Params));
	memcpy_s(&ClientPlayMovie_Params.MovieName, sizeof(ClientPlayMovie_Params.MovieName), &MovieName, sizeof(MovieName));
	memcpy_s(&ClientPlayMovie_Params.InStartOfRenderingMovieFrame, sizeof(ClientPlayMovie_Params.InStartOfRenderingMovieFrame), &InStartOfRenderingMovieFrame, sizeof(InStartOfRenderingMovieFrame));
	memcpy_s(&ClientPlayMovie_Params.InEndOfRenderingMovieFrame, sizeof(ClientPlayMovie_Params.InEndOfRenderingMovieFrame), &InEndOfRenderingMovieFrame, sizeof(InEndOfRenderingMovieFrame));
	ClientPlayMovie_Params.bRestrictPausing = bRestrictPausing;
	ClientPlayMovie_Params.bPlayOnceFromStream = bPlayOnceFromStream;
	ClientPlayMovie_Params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	this->ProcessEvent(uFnClientPlayMovie, &ClientPlayMovie_Params, nullptr);
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[34162])
// Parameter Info:

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static UFunction* uFnKeepPlayingLoadingMovie = nullptr;

	if (!uFnKeepPlayingLoadingMovie)
	{
		uFnKeepPlayingLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");
	}

	AGamePlayerController_execKeepPlayingLoadingMovie_Params KeepPlayingLoadingMovie_Params;
	memset(&KeepPlayingLoadingMovie_Params, 0, sizeof(KeepPlayingLoadingMovie_Params));

	AGamePlayerController::StaticClass()->ProcessEvent(uFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Params, nullptr);
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[34664])
// Parameter Info:
// uint32_t                       bShowMovie                     (CPF_Parm)
// uint32_t                       bPauseAfterHide                (CPF_OptionalParm | CPF_Parm)
// float                          PauseDuration                  (CPF_OptionalParm | CPF_Parm)
// float                          KeepPlayingDuration            (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bOverridePreviousDelays        (CPF_OptionalParm | CPF_Parm)

void AGamePlayerController::ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static UFunction* uFnShowLoadingMovie = nullptr;

	if (!uFnShowLoadingMovie)
	{
		uFnShowLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ShowLoadingMovie");
	}

	AGamePlayerController_execShowLoadingMovie_Params ShowLoadingMovie_Params;
	memset(&ShowLoadingMovie_Params, 0, sizeof(ShowLoadingMovie_Params));
	ShowLoadingMovie_Params.bShowMovie = bShowMovie;
	ShowLoadingMovie_Params.bPauseAfterHide = bPauseAfterHide;
	memcpy_s(&ShowLoadingMovie_Params.PauseDuration, sizeof(ShowLoadingMovie_Params.PauseDuration), &PauseDuration, sizeof(PauseDuration));
	memcpy_s(&ShowLoadingMovie_Params.KeepPlayingDuration, sizeof(ShowLoadingMovie_Params.KeepPlayingDuration), &KeepPlayingDuration, sizeof(KeepPlayingDuration));
	ShowLoadingMovie_Params.bOverridePreviousDelays = bOverridePreviousDelays;

	AGamePlayerController::StaticClass()->ProcessEvent(uFnShowLoadingMovie, &ShowLoadingMovie_Params, nullptr);
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    InSoundModeName                (CPF_Parm)

void AGamePlayerController::SetSoundMode(const class FName& InSoundModeName)
{
	static UFunction* uFnSetSoundMode = nullptr;

	if (!uFnSetSoundMode)
	{
		uFnSetSoundMode = UFunction::FindFunction("Function GameFramework.GamePlayerController.SetSoundMode");
	}

	AGamePlayerController_execSetSoundMode_Params SetSoundMode_Params;
	memset(&SetSoundMode_Params, 0, sizeof(SetSoundMode_Params));
	memcpy_s(&SetSoundMode_Params.InSoundModeName, sizeof(SetSoundMode_Params.InSoundModeName), &InSoundModeName, sizeof(InSoundModeName));

	this->ProcessEvent(uFnSetSoundMode, &SetSoundMode_Params, nullptr);
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UCameraShake*            ShakeData                      (CPF_Parm)
// float                          Scale                          (CPF_Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static UFunction* uFnDoForceFeedbackForScreenShake = nullptr;

	if (!uFnDoForceFeedbackForScreenShake)
	{
		uFnDoForceFeedbackForScreenShake = UFunction::FindFunction("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");
	}

	AGamePlayerController_execDoForceFeedbackForScreenShake_Params DoForceFeedbackForScreenShake_Params;
	memset(&DoForceFeedbackForScreenShake_Params, 0, sizeof(DoForceFeedbackForScreenShake_Params));
	DoForceFeedbackForScreenShake_Params.ShakeData = ShakeData;
	memcpy_s(&DoForceFeedbackForScreenShake_Params.Scale, sizeof(DoForceFeedbackForScreenShake_Params.Scale), &Scale, sizeof(Scale));

	this->ProcessEvent(uFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Params, nullptr);
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGamePlayerController::eventNotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnNotifyCrowdAgentInRadius = nullptr;

	if (!uFnNotifyCrowdAgentInRadius)
	{
		uFnNotifyCrowdAgentInRadius = UFunction::FindFunction("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");
	}

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Params NotifyCrowdAgentInRadius_Params;
	memset(&NotifyCrowdAgentInRadius_Params, 0, sizeof(NotifyCrowdAgentInRadius_Params));
	NotifyCrowdAgentInRadius_Params.Agent = Agent;

	this->ProcessEvent(uFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Params, nullptr);
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerController::eventNotifyCrowdAgentRefresh()
{
	static UFunction* uFnNotifyCrowdAgentRefresh = nullptr;

	if (!uFnNotifyCrowdAgentRefresh)
	{
		uFnNotifyCrowdAgentRefresh = UFunction::FindFunction("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");
	}

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Params NotifyCrowdAgentRefresh_Params;
	memset(&NotifyCrowdAgentRefresh_Params, 0, sizeof(NotifyCrowdAgentRefresh_Params));

	this->ProcessEvent(uFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnabled                       (CPF_Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static UFunction* uFnCrowdDebug = nullptr;

	if (!uFnCrowdDebug)
	{
		uFnCrowdDebug = UFunction::FindFunction("Function GameFramework.GamePlayerController.CrowdDebug");
	}

	AGamePlayerController_execCrowdDebug_Params CrowdDebug_Params;
	memset(&CrowdDebug_Params, 0, sizeof(CrowdDebug_Params));
	CrowdDebug_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnCrowdDebug, &CrowdDebug_Params, nullptr);
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34043])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGamePlayerController::GetUIPlayerIndex()
{
	static UFunction* uFnGetUIPlayerIndex = nullptr;

	if (!uFnGetUIPlayerIndex)
	{
		uFnGetUIPlayerIndex = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetUIPlayerIndex");
	}

	AGamePlayerController_execGetUIPlayerIndex_Params GetUIPlayerIndex_Params;
	memset(&GetUIPlayerIndex_Params, 0, sizeof(GetUIPlayerIndex_Params));

	this->ProcessEvent(uFnGetUIPlayerIndex, &GetUIPlayerIndex_Params, nullptr);

	return GetUIPlayerIndex_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleMouseCursor* inAction                       (CPF_Parm)

void AGamePlayerController::OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction)
{
	static UFunction* uFnOnToggleMouseCursor = nullptr;

	if (!uFnOnToggleMouseCursor)
	{
		uFnOnToggleMouseCursor = UFunction::FindFunction("Function GameFramework.GamePlayerController.OnToggleMouseCursor");
	}

	AGamePlayerController_execOnToggleMouseCursor_Params OnToggleMouseCursor_Params;
	memset(&OnToggleMouseCursor_Params, 0, sizeof(OnToggleMouseCursor_Params));
	OnToggleMouseCursor_Params.inAction = inAction;

	this->ProcessEvent(uFnOnToggleMouseCursor, &OnToggleMouseCursor_Params, nullptr);
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UGameCheatManager::OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnRequestComplete = nullptr;

	if (!uFnOnRequestComplete)
	{
		uFnOnRequestComplete = UFunction::FindFunction("Function GameFramework.GameCheatManager.OnRequestComplete");
	}

	UGameCheatManager_execOnRequestComplete_Params OnRequestComplete_Params;
	memset(&OnRequestComplete_Params, 0, sizeof(OnRequestComplete_Params));
	OnRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnRequestComplete_Params.Response = Response;
	OnRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnRequestComplete, &OnRequestComplete_Params, nullptr);
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Verb                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Payload                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bSendParallelRequest           (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::TestHttp(const class FString& Verb, const class FString& Payload, const class FString& URL, bool bSendParallelRequest)
{
	static UFunction* uFnTestHttp = nullptr;

	if (!uFnTestHttp)
	{
		uFnTestHttp = UFunction::FindFunction("Function GameFramework.GameCheatManager.TestHttp");
	}

	UGameCheatManager_execTestHttp_Params TestHttp_Params;
	memset(&TestHttp_Params, 0, sizeof(TestHttp_Params));
	memcpy_s(&TestHttp_Params.Verb, sizeof(TestHttp_Params.Verb), &Verb, sizeof(Verb));
	memcpy_s(&TestHttp_Params.Payload, sizeof(TestHttp_Params.Payload), &Payload, sizeof(Payload));
	memcpy_s(&TestHttp_Params.URL, sizeof(TestHttp_Params.URL), &URL, sizeof(URL));
	TestHttp_Params.bSendParallelRequest = bSendParallelRequest;

	this->ProcessEvent(uFnTestHttp, &TestHttp_Params, nullptr);
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnableDebugText               (CPF_Parm)

void UGameCheatManager::EnableDebugCamera(bool bEnableDebugText)
{
	static UFunction* uFnEnableDebugCamera = nullptr;

	if (!uFnEnableDebugCamera)
	{
		uFnEnableDebugCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.EnableDebugCamera");
	}

	UGameCheatManager_execEnableDebugCamera_Params EnableDebugCamera_Params;
	memset(&EnableDebugCamera_Params, 0, sizeof(EnableDebugCamera_Params));
	EnableDebugCamera_Params.bEnableDebugText = bEnableDebugText;

	this->ProcessEvent(uFnEnableDebugCamera, &EnableDebugCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bToggleDebugCameraOff          (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::TeleportPawnToCamera(bool bToggleDebugCameraOff)
{
	static UFunction* uFnTeleportPawnToCamera = nullptr;

	if (!uFnTeleportPawnToCamera)
	{
		uFnTeleportPawnToCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.TeleportPawnToCamera");
	}

	UGameCheatManager_execTeleportPawnToCamera_Params TeleportPawnToCamera_Params;
	memset(&TeleportPawnToCamera_Params, 0, sizeof(TeleportPawnToCamera_Params));
	TeleportPawnToCamera_Params.bToggleDebugCameraOff = bToggleDebugCameraOff;

	this->ProcessEvent(uFnTeleportPawnToCamera, &TeleportPawnToCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bDrawDebugText                 (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::ToggleDebugCamera(bool bDrawDebugText)
{
	static UFunction* uFnToggleDebugCamera = nullptr;

	if (!uFnToggleDebugCamera)
	{
		uFnToggleDebugCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.ToggleDebugCamera");
	}

	UGameCheatManager_execToggleDebugCamera_Params ToggleDebugCamera_Params;
	memset(&ToggleDebugCamera_Params, 0, sizeof(ToggleDebugCamera_Params));
	ToggleDebugCamera_Params.bDrawDebugText = bDrawDebugText;

	this->ProcessEvent(uFnToggleDebugCamera, &ToggleDebugCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCheatManager::PatchDebugCameraController()
{
	static UFunction* uFnPatchDebugCameraController = nullptr;

	if (!uFnPatchDebugCameraController)
	{
		uFnPatchDebugCameraController = UFunction::FindFunction("Function GameFramework.GameCheatManager.PatchDebugCameraController");
	}

	UGameCheatManager_execPatchDebugCameraController_Params PatchDebugCameraController_Params;
	memset(&PatchDebugCameraController_Params, 0, sizeof(PatchDebugCameraController_Params));

	this->ProcessEvent(uFnPatchDebugCameraController, &PatchDebugCameraController_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::InitDebugColor()
{
	static UFunction* uFnInitDebugColor = nullptr;

	if (!uFnInitDebugColor)
	{
		uFnInitDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitDebugColor");
	}

	AGameCrowdAgent_execInitDebugColor_Params InitDebugColor_Params;
	memset(&InitDebugColor_Params, 0, sizeof(InitDebugColor_Params));

	this->ProcessEvent(uFnInitDebugColor, &InitDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameCrowdAgent::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetBehaviorString");
	}

	AGameCrowdAgent_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameCrowdAgent::GetDestString()
{
	static UFunction* uFnGetDestString = nullptr;

	if (!uFnGetDestString)
	{
		uFnGetDestString = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetDestString");
	}

	AGameCrowdAgent_execGetDestString_Params GetDestString_Params;
	memset(&GetDestString_Params, 0, sizeof(GetDestString_Params));

	this->ProcessEvent(uFnGetDestString, &GetDestString_Params, nullptr);

	return GetDestString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* uFnPostRenderFor = nullptr;

	if (!uFnPostRenderFor)
	{
		uFnPostRenderFor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PostRenderFor");
	}

	AGameCrowdAgent_eventPostRenderFor_Params PostRenderFor_Params;
	memset(&PostRenderFor_Params, 0, sizeof(PostRenderFor_Params));
	PostRenderFor_Params.PC = PC;
	PostRenderFor_Params.Canvas = Canvas;
	memcpy_s(&PostRenderFor_Params.CameraPosition, sizeof(PostRenderFor_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&PostRenderFor_Params.CameraDir, sizeof(PostRenderFor_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	this->ProcessEvent(uFnPostRenderFor, &PostRenderFor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[24468])
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* uFnNativePostRenderFor = nullptr;

	if (!uFnNativePostRenderFor)
	{
		uFnNativePostRenderFor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.NativePostRenderFor");
	}

	AGameCrowdAgent_execNativePostRenderFor_Params NativePostRenderFor_Params;
	memset(&NativePostRenderFor_Params, 0, sizeof(NativePostRenderFor_Params));
	NativePostRenderFor_Params.PC = PC;
	NativePostRenderFor_Params.Canvas = Canvas;
	memcpy_s(&NativePostRenderFor_Params.CameraPosition, sizeof(NativePostRenderFor_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&NativePostRenderFor_Params.CameraDir, sizeof(NativePostRenderFor_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	this->ProcessEvent(uFnNativePostRenderFor, &NativePostRenderFor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Goal                           (CPF_Parm)
// float                          WithinDistance                 (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAllowPartialPath              (CPF_OptionalParm | CPF_Parm)

struct FVector AGameCrowdAgent::eventGeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static UFunction* uFnGeneratePathToActor = nullptr;

	if (!uFnGeneratePathToActor)
	{
		uFnGeneratePathToActor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GeneratePathToActor");
	}

	AGameCrowdAgent_eventGeneratePathToActor_Params GeneratePathToActor_Params;
	memset(&GeneratePathToActor_Params, 0, sizeof(GeneratePathToActor_Params));
	GeneratePathToActor_Params.Goal = Goal;
	memcpy_s(&GeneratePathToActor_Params.WithinDistance, sizeof(GeneratePathToActor_Params.WithinDistance), &WithinDistance, sizeof(WithinDistance));
	GeneratePathToActor_Params.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent(uFnGeneratePathToActor, &GeneratePathToActor_Params, nullptr);

	return GeneratePathToActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventInitNavigationHandle()
{
	static UFunction* uFnInitNavigationHandle = nullptr;

	if (!uFnInitNavigationHandle)
	{
		uFnInitNavigationHandle = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitNavigationHandle");
	}

	AGameCrowdAgent_eventInitNavigationHandle_Params InitNavigationHandle_Params;
	memset(&InitNavigationHandle_Params, 0, sizeof(InitNavigationHandle_Params));

	this->ProcessEvent(uFnInitNavigationHandle, &InitNavigationHandle_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  A                              (CPF_Parm)

void AGameCrowdAgent::eventOverlappedActorEvent(class AActor* A)
{
	static UFunction* uFnOverlappedActorEvent = nullptr;

	if (!uFnOverlappedActorEvent)
	{
		uFnOverlappedActorEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");
	}

	AGameCrowdAgent_eventOverlappedActorEvent_Params OverlappedActorEvent_Params;
	memset(&OverlappedActorEvent_Params, 0, sizeof(OverlappedActorEvent_Params));
	OverlappedActorEvent_Params.A = A;

	this->ProcessEvent(uFnOverlappedActorEvent, &OverlappedActorEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::TakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.TakeDamage");
	}

	AGameCrowdAgent_execTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.DamageAmount, sizeof(TakeDamage_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventFireDeathEvent()
{
	static UFunction* uFnFireDeathEvent = nullptr;

	if (!uFnFireDeathEvent)
	{
		uFnFireDeathEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FireDeathEvent");
	}

	AGameCrowdAgent_eventFireDeathEvent_Params FireDeathEvent_Params;
	memset(&FireDeathEvent_Params, 0, sizeof(FireDeathEvent_Params));

	this->ProcessEvent(uFnFireDeathEvent, &FireDeathEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34460])
// Parameter Info:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlayDeath");
	}

	AGameCrowdAgent_execPlayDeath_Params PlayDeath_Params;
	memset(&PlayDeath_Params, 0, sizeof(PlayDeath_Params));
	memcpy_s(&PlayDeath_Params.KillMomentum, sizeof(PlayDeath_Params.KillMomentum), &KillMomentum, sizeof(KillMomentum));

	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  DestinationActor               (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::eventUpdateIntermediatePoint(class AActor* DestinationActor)
{
	static UFunction* uFnUpdateIntermediatePoint = nullptr;

	if (!uFnUpdateIntermediatePoint)
	{
		uFnUpdateIntermediatePoint = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");
	}

	AGameCrowdAgent_eventUpdateIntermediatePoint_Params UpdateIntermediatePoint_Params;
	memset(&UpdateIntermediatePoint_Params, 0, sizeof(UpdateIntermediatePoint_Params));
	UpdateIntermediatePoint_Params.DestinationActor = DestinationActor;

	this->ProcessEvent(uFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.CalcCamera");
	}

	AGameCrowdAgent_execCalcCamera_Params CalcCamera_Params;
	memset(&CalcCamera_Params, 0, sizeof(CalcCamera_Params));
	memcpy_s(&CalcCamera_Params.fDeltaTime, sizeof(CalcCamera_Params.fDeltaTime), &fDeltaTime, sizeof(fDeltaTime));
	memcpy_s(&CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV));

	return CalcCamera_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34151])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static UFunction* uFnIsIdle = nullptr;

	if (!uFnIsIdle)
	{
		uFnIsIdle = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.IsIdle");
	}

	AGameCrowdAgent_execIsIdle_Params IsIdle_Params;
	memset(&IsIdle_Params, 0, sizeof(IsIdle_Params));

	this->ProcessEvent(uFnIsIdle, &IsIdle_Params, nullptr);

	return IsIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34638])
// Parameter Info:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (CPF_Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static UFunction* uFnSetCurrentBehavior = nullptr;

	if (!uFnSetCurrentBehavior)
	{
		uFnSetCurrentBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");
	}

	AGameCrowdAgent_execSetCurrentBehavior_Params SetCurrentBehavior_Params;
	memset(&SetCurrentBehavior_Params, 0, sizeof(SetCurrentBehavior_Params));
	SetCurrentBehavior_Params.BehaviorArchetype = BehaviorArchetype;

	this->ProcessEvent(uFnSetCurrentBehavior, &SetCurrentBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventStopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.StopBehavior");
	}

	AGameCrowdAgent_eventStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ECrowdBehaviorEvent            EventType                      (CPF_Parm)
// class AActor*                  InInstigator                   (CPF_Parm)
// uint32_t                       bViralCause                    (CPF_Parm)
// uint32_t                       bPropagateViralFlag            (CPF_Parm)

void AGameCrowdAgent::eventHandleBehaviorEvent(ECrowdBehaviorEvent EventType, class AActor* InInstigator, bool bViralCause, bool bPropagateViralFlag)
{
	static UFunction* uFnHandleBehaviorEvent = nullptr;

	if (!uFnHandleBehaviorEvent)
	{
		uFnHandleBehaviorEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");
	}

	AGameCrowdAgent_eventHandleBehaviorEvent_Params HandleBehaviorEvent_Params;
	memset(&HandleBehaviorEvent_Params, 0, sizeof(HandleBehaviorEvent_Params));
	memcpy_s(&HandleBehaviorEvent_Params.EventType, sizeof(HandleBehaviorEvent_Params.EventType), &EventType, sizeof(EventType));
	HandleBehaviorEvent_Params.InInstigator = InInstigator;
	HandleBehaviorEvent_Params.bViralCause = bViralCause;
	HandleBehaviorEvent_Params.bPropagateViralFlag = bPropagateViralFlag;

	this->ProcessEvent(uFnHandleBehaviorEvent, &HandleBehaviorEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (CPF_Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static UFunction* uFnActivateInstancedBehavior = nullptr;

	if (!uFnActivateInstancedBehavior)
	{
		uFnActivateInstancedBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");
	}

	AGameCrowdAgent_execActivateInstancedBehavior_Params ActivateInstancedBehavior_Params;
	memset(&ActivateInstancedBehavior_Params, 0, sizeof(ActivateInstancedBehavior_Params));
	ActivateInstancedBehavior_Params.NewBehaviorObject = NewBehaviorObject;

	this->ProcessEvent(uFnActivateInstancedBehavior, &ActivateInstancedBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::eventActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* uFnActivateBehavior = nullptr;

	if (!uFnActivateBehavior)
	{
		uFnActivateBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ActivateBehavior");
	}

	AGameCrowdAgent_eventActivateBehavior_Params ActivateBehavior_Params;
	memset(&ActivateBehavior_Params, 0, sizeof(ActivateBehavior_Params));
	ActivateBehavior_Params.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Params.LookAtActor = LookAtActor;

	this->ProcessEvent(uFnActivateBehavior, &ActivateBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::ResetSeePlayer()
{
	static UFunction* uFnResetSeePlayer = nullptr;

	if (!uFnResetSeePlayer)
	{
		uFnResetSeePlayer = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ResetSeePlayer");
	}

	AGameCrowdAgent_execResetSeePlayer_Params ResetSeePlayer_Params;
	memset(&ResetSeePlayer_Params, 0, sizeof(ResetSeePlayer_Params));

	this->ProcessEvent(uFnResetSeePlayer, &ResetSeePlayer_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::TryRandomBehavior()
{
	static UFunction* uFnTryRandomBehavior = nullptr;

	if (!uFnTryRandomBehavior)
	{
		uFnTryRandomBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.TryRandomBehavior");
	}

	AGameCrowdAgent_execTryRandomBehavior_Params TryRandomBehavior_Params;
	memset(&TryRandomBehavior_Params, 0, sizeof(TryRandomBehavior_Params));

	this->ProcessEvent(uFnTryRandomBehavior, &TryRandomBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void AGameCrowdAgent::eventNotifySeePlayer(class APlayerController* PC)
{
	static UFunction* uFnNotifySeePlayer = nullptr;

	if (!uFnNotifySeePlayer)
	{
		uFnNotifySeePlayer = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.NotifySeePlayer");
	}

	AGameCrowdAgent_eventNotifySeePlayer_Params NotifySeePlayer_Params;
	memset(&NotifySeePlayer_Params, 0, sizeof(NotifySeePlayer_Params));
	NotifySeePlayer_Params.PC = PC;

	this->ProcessEvent(uFnNotifySeePlayer, &NotifySeePlayer_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static UFunction* uFnPlaySpawnBehavior = nullptr;

	if (!uFnPlaySpawnBehavior)
	{
		uFnPlaySpawnBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");
	}

	AGameCrowdAgent_execPlaySpawnBehavior_Params PlaySpawnBehavior_Params;
	memset(&PlaySpawnBehavior_Params, 0, sizeof(PlaySpawnBehavior_Params));

	this->ProcessEvent(uFnPlaySpawnBehavior, &PlaySpawnBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter()
{
	static UFunction* uFnHandlePotentialAgentEncounter = nullptr;

	if (!uFnHandlePotentialAgentEncounter)
	{
		uFnHandlePotentialAgentEncounter = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");
	}

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Params HandlePotentialAgentEncounter_Params;
	memset(&HandlePotentialAgentEncounter_Params, 0, sizeof(HandlePotentialAgentEncounter_Params));

	this->ProcessEvent(uFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventStopIdleAnimation()
{
	static UFunction* uFnStopIdleAnimation = nullptr;

	if (!uFnStopIdleAnimation)
	{
		uFnStopIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.StopIdleAnimation");
	}

	AGameCrowdAgent_eventStopIdleAnimation_Params StopIdleAnimation_Params;
	memset(&StopIdleAnimation_Params, 0, sizeof(StopIdleAnimation_Params));

	this->ProcessEvent(uFnStopIdleAnimation, &StopIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventPlayIdleAnimation()
{
	static UFunction* uFnPlayIdleAnimation = nullptr;

	if (!uFnPlayIdleAnimation)
	{
		uFnPlayIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");
	}

	AGameCrowdAgent_eventPlayIdleAnimation_Params PlayIdleAnimation_Params;
	memset(&PlayIdleAnimation_Params, 0, sizeof(PlayIdleAnimation_Params));

	this->ProcessEvent(uFnPlayIdleAnimation, &PlayIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* uFnOnPlayAgentAnimation = nullptr;

	if (!uFnOnPlayAgentAnimation)
	{
		uFnOnPlayAgentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");
	}

	AGameCrowdAgent_execOnPlayAgentAnimation_Params OnPlayAgentAnimation_Params;
	memset(&OnPlayAgentAnimation_Params, 0, sizeof(OnPlayAgentAnimation_Params));
	OnPlayAgentAnimation_Params.Action = Action;

	this->ProcessEvent(uFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// float                          AgentWarmupTime                (CPF_Parm)
// uint32_t                       bWarmupPosition                (CPF_Parm)
// uint32_t                       bCheckWarmupVisibility         (CPF_Parm)
// class TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility, class TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnInitializeAgent = nullptr;

	if (!uFnInitializeAgent)
	{
		uFnInitializeAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitializeAgent");
	}

	AGameCrowdAgent_execInitializeAgent_Params InitializeAgent_Params;
	memset(&InitializeAgent_Params, 0, sizeof(InitializeAgent_Params));
	InitializeAgent_Params.SpawnLoc = SpawnLoc;
	InitializeAgent_Params.AgentTemplate = AgentTemplate;
	InitializeAgent_Params.NewGroup = NewGroup;
	memcpy_s(&InitializeAgent_Params.AgentWarmupTime, sizeof(InitializeAgent_Params.AgentWarmupTime), &AgentWarmupTime, sizeof(AgentWarmupTime));
	InitializeAgent_Params.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Params.bCheckWarmupVisibility = bCheckWarmupVisibility;
	memcpy_s(&InitializeAgent_Params.PlayerInfo, sizeof(InitializeAgent_Params.PlayerInfo), &PlayerInfo, sizeof(PlayerInfo));

	this->ProcessEvent(uFnInitializeAgent, &InitializeAgent_Params, nullptr);

	memcpy_s(&PlayerInfo, sizeof(PlayerInfo), &InitializeAgent_Params.PlayerInfo, sizeof(InitializeAgent_Params.PlayerInfo));
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Pct                            (CPF_Parm)
// struct FVector                 CurPos                         (CPF_Parm)
// float                          CurRadius                      (CPF_Parm)
// struct FVector                 DestPos                        (CPF_Parm)
// float                          DestRadius                     (CPF_Parm)

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation(float Pct, const struct FVector& CurPos, float CurRadius, const struct FVector& DestPos, float DestRadius)
{
	static UFunction* uFnGetAttemptedSpawnLocation = nullptr;

	if (!uFnGetAttemptedSpawnLocation)
	{
		uFnGetAttemptedSpawnLocation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");
	}

	AGameCrowdAgent_execGetAttemptedSpawnLocation_Params GetAttemptedSpawnLocation_Params;
	memset(&GetAttemptedSpawnLocation_Params, 0, sizeof(GetAttemptedSpawnLocation_Params));
	memcpy_s(&GetAttemptedSpawnLocation_Params.Pct, sizeof(GetAttemptedSpawnLocation_Params.Pct), &Pct, sizeof(Pct));
	memcpy_s(&GetAttemptedSpawnLocation_Params.CurPos, sizeof(GetAttemptedSpawnLocation_Params.CurPos), &CurPos, sizeof(CurPos));
	memcpy_s(&GetAttemptedSpawnLocation_Params.CurRadius, sizeof(GetAttemptedSpawnLocation_Params.CurRadius), &CurRadius, sizeof(CurRadius));
	memcpy_s(&GetAttemptedSpawnLocation_Params.DestPos, sizeof(GetAttemptedSpawnLocation_Params.DestPos), &DestPos, sizeof(DestPos));
	memcpy_s(&GetAttemptedSpawnLocation_Params.DestRadius, sizeof(GetAttemptedSpawnLocation_Params.DestRadius), &DestRadius, sizeof(DestRadius));

	this->ProcessEvent(uFnGetAttemptedSpawnLocation, &GetAttemptedSpawnLocation_Params, nullptr);

	return GetAttemptedSpawnLocation_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// uint32_t                       bCastShadows                   (CPF_Parm)

void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static UFunction* uFnSetLighting = nullptr;

	if (!uFnSetLighting)
	{
		uFnSetLighting = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetLighting");
	}

	AGameCrowdAgent_execSetLighting_Params SetLighting_Params;
	memset(&SetLighting_Params, 0, sizeof(SetLighting_Params));
	SetLighting_Params.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy_s(&SetLighting_Params.AgentLightingChannel, sizeof(SetLighting_Params.AgentLightingChannel), &AgentLightingChannel, sizeof(AgentLightingChannel));
	SetLighting_Params.bCastShadows = bCastShadows;

	this->ProcessEvent(uFnSetLighting, &SetLighting_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.DisplayDebug");
	}

	AGameCrowdAgent_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.Destroyed");
	}

	AGameCrowdAgent_execDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::ResetPooledAgent()
{
	static UFunction* uFnResetPooledAgent = nullptr;

	if (!uFnResetPooledAgent)
	{
		uFnResetPooledAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ResetPooledAgent");
	}

	AGameCrowdAgent_execResetPooledAgent_Params ResetPooledAgent_Params;
	memset(&ResetPooledAgent_Params, 0, sizeof(ResetPooledAgent_Params));

	this->ProcessEvent(uFnResetPooledAgent, &ResetPooledAgent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventKillAgent()
{
	static UFunction* uFnKillAgent = nullptr;

	if (!uFnKillAgent)
	{
		uFnKillAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.KillAgent");
	}

	AGameCrowdAgent_eventKillAgent_Params KillAgent_Params;
	memset(&KillAgent_Params, 0, sizeof(KillAgent_Params));

	this->ProcessEvent(uFnKillAgent, &KillAgent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PostBeginPlay");
	}

	AGameCrowdAgent_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::SetMaxSpeed()
{
	static UFunction* uFnSetMaxSpeed = nullptr;

	if (!uFnSetMaxSpeed)
	{
		uFnSetMaxSpeed = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetMaxSpeed");
	}

	AGameCrowdAgent_execSetMaxSpeed_Params SetMaxSpeed_Params;
	memset(&SetMaxSpeed_Params, 0, sizeof(SetMaxSpeed_Params));

	this->ProcessEvent(uFnSetMaxSpeed, &SetMaxSpeed_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void AGameCrowdAgent::eventSetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnSetCurrentDestination = nullptr;

	if (!uFnSetCurrentDestination)
	{
		uFnSetCurrentDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetCurrentDestination");
	}

	AGameCrowdAgent_eventSetCurrentDestination_Params SetCurrentDestination_Params;
	memset(&SetCurrentDestination_Params, 0, sizeof(SetCurrentDestination_Params));
	SetCurrentDestination_Params.NewDest = NewDest;

	this->ProcessEvent(uFnSetCurrentDestination, &SetCurrentDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventWaitForGroupMembers()
{
	static UFunction* uFnWaitForGroupMembers = nullptr;

	if (!uFnWaitForGroupMembers)
	{
		uFnWaitForGroupMembers = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");
	}

	AGameCrowdAgent_eventWaitForGroupMembers_Params WaitForGroupMembers_Params;
	memset(&WaitForGroupMembers_Params, 0, sizeof(WaitForGroupMembers_Params));

	this->ProcessEvent(uFnWaitForGroupMembers, &WaitForGroupMembers_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<struct FBehaviorEntry> BehaviorList                   (CPF_Parm | CPF_NeedCtorLink)
// struct FVector                 BestCameraLoc                  (CPF_OptionalParm | CPF_Parm)

bool AGameCrowdAgent::PickBehaviorFrom(const class TArray<struct FBehaviorEntry>& BehaviorList, const struct FVector& BestCameraLoc)
{
	static UFunction* uFnPickBehaviorFrom = nullptr;

	if (!uFnPickBehaviorFrom)
	{
		uFnPickBehaviorFrom = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");
	}

	AGameCrowdAgent_execPickBehaviorFrom_Params PickBehaviorFrom_Params;
	memset(&PickBehaviorFrom_Params, 0, sizeof(PickBehaviorFrom_Params));
	memcpy_s(&PickBehaviorFrom_Params.BehaviorList, sizeof(PickBehaviorFrom_Params.BehaviorList), &BehaviorList, sizeof(BehaviorList));
	memcpy_s(&PickBehaviorFrom_Params.BestCameraLoc, sizeof(PickBehaviorFrom_Params.BestCameraLoc), &BestCameraLoc, sizeof(BestCameraLoc));

	this->ProcessEvent(uFnPickBehaviorFrom, &PickBehaviorFrom_Params, nullptr);

	return PickBehaviorFrom_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34152])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static UFunction* uFnIsPanicked = nullptr;

	if (!uFnIsPanicked)
	{
		uFnIsPanicked = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.IsPanicked");
	}

	AGameCrowdAgent_execIsPanicked_Params IsPanicked_Params;
	memset(&IsPanicked_Params, 0, sizeof(IsPanicked_Params));

	this->ProcessEvent(uFnIsPanicked, &IsPanicked_Params, nullptr);

	return IsPanicked_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameCrowdAgent::eventFellOutOfWorld(class UClass* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FellOutOfWorld");
	}

	AGameCrowdAgent_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memset(&FellOutOfWorld_Params, 0, sizeof(FellOutOfWorld_Params));
	FellOutOfWorld_Params.dmgType = dmgType;

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21666])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector AGameCrowdAgent::GetCollisionExtent()
{
	static UFunction* uFnGetCollisionExtent = nullptr;

	if (!uFnGetCollisionExtent)
	{
		uFnGetCollisionExtent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetCollisionExtent");
	}

	AGameCrowdAgent_execGetCollisionExtent_Params GetCollisionExtent_Params;
	memset(&GetCollisionExtent_Params, 0, sizeof(GetCollisionExtent_Params));

	this->ProcessEvent(uFnGetCollisionExtent, &GetCollisionExtent_Params, nullptr);

	return GetCollisionExtent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static UFunction* uFnCreateAttachments = nullptr;

	if (!uFnCreateAttachments)
	{
		uFnCreateAttachments = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");
	}

	AGameCrowdAgentSkeletal_execCreateAttachments_Params CreateAttachments_Params;
	memset(&CreateAttachments_Params, 0, sizeof(CreateAttachments_Params));

	this->ProcessEvent(uFnCreateAttachments, &CreateAttachments_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AGameCrowdAgentSkeletal::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");
	}

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	OnAnimEnd_Params.SeqNode = SeqNode;
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation()
{
	static UFunction* uFnStopIdleAnimation = nullptr;

	if (!uFnStopIdleAnimation)
	{
		uFnStopIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");
	}

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Params StopIdleAnimation_Params;
	memset(&StopIdleAnimation_Params, 0, sizeof(StopIdleAnimation_Params));

	this->ProcessEvent(uFnStopIdleAnimation, &StopIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation()
{
	static UFunction* uFnPlayIdleAnimation = nullptr;

	if (!uFnPlayIdleAnimation)
	{
		uFnPlayIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");
	}

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Params PlayIdleAnimation_Params;
	memset(&PlayIdleAnimation_Params, 0, sizeof(PlayIdleAnimation_Params));

	this->ProcessEvent(uFnPlayIdleAnimation, &PlayIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation()
{
	static UFunction* uFnClearLatentAnimation = nullptr;

	if (!uFnClearLatentAnimation)
	{
		uFnClearLatentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");
	}

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Params ClearLatentAnimation_Params;
	memset(&ClearLatentAnimation_Params, 0, sizeof(ClearLatentAnimation_Params));

	this->ProcessEvent(uFnClearLatentAnimation, &ClearLatentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* uFnOnPlayAgentAnimation = nullptr;

	if (!uFnOnPlayAgentAnimation)
	{
		uFnOnPlayAgentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");
	}

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Params OnPlayAgentAnimation_Params;
	memset(&OnPlayAgentAnimation_Params, 0, sizeof(OnPlayAgentAnimation_Params));
	OnPlayAgentAnimation_Params.Action = Action;

	this->ProcessEvent(uFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34649])
// Parameter Info:
// uint32_t                       bRootMotionEnabled             (CPF_Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static UFunction* uFnSetRootMotion = nullptr;

	if (!uFnSetRootMotion)
	{
		uFnSetRootMotion = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");
	}

	AGameCrowdAgentSkeletal_execSetRootMotion_Params SetRootMotion_Params;
	memset(&SetRootMotion_Params, 0, sizeof(SetRootMotion_Params));
	SetRootMotion_Params.bRootMotionEnabled = bRootMotionEnabled;

	this->ProcessEvent(uFnSetRootMotion, &SetRootMotion_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34460])
// Parameter Info:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");
	}

	AGameCrowdAgentSkeletal_execPlayDeath_Params PlayDeath_Params;
	memset(&PlayDeath_Params, 0, sizeof(PlayDeath_Params));
	memcpy_s(&PlayDeath_Params.KillMomentum, sizeof(PlayDeath_Params.KillMomentum), &KillMomentum, sizeof(KillMomentum));

	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// uint32_t                       bCastShadows                   (CPF_Parm)

void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static UFunction* uFnSetLighting = nullptr;

	if (!uFnSetLighting)
	{
		uFnSetLighting = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");
	}

	AGameCrowdAgentSkeletal_execSetLighting_Params SetLighting_Params;
	memset(&SetLighting_Params, 0, sizeof(SetLighting_Params));
	SetLighting_Params.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy_s(&SetLighting_Params.AgentLightingChannel, sizeof(SetLighting_Params.AgentLightingChannel), &AgentLightingChannel, sizeof(AgentLightingChannel));
	SetLighting_Params.bCastShadows = bCastShadows;

	this->ProcessEvent(uFnSetLighting, &SetLighting_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");
	}

	AGameCrowdAgentSkeletal_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSM::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.StopBehavior");
	}

	AGameCrowdAgentSM_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgentSM::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* uFnActivateBehavior = nullptr;

	if (!uFnActivateBehavior)
	{
		uFnActivateBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");
	}

	AGameCrowdAgentSM_execActivateBehavior_Params ActivateBehavior_Params;
	memset(&ActivateBehavior_Params, 0, sizeof(ActivateBehavior_Params));
	ActivateBehavior_Params.NewBehaviorArchetype = NewBehaviorArchetype;
	ActivateBehavior_Params.LookAtActor = LookAtActor;

	this->ProcessEvent(uFnActivateBehavior, &ActivateBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  InC                            (CPF_Parm)

void AGameCrowdAgentSM::ChangeDebugColor(const struct FColor& InC)
{
	static UFunction* uFnChangeDebugColor = nullptr;

	if (!uFnChangeDebugColor)
	{
		uFnChangeDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");
	}

	AGameCrowdAgentSM_execChangeDebugColor_Params ChangeDebugColor_Params;
	memset(&ChangeDebugColor_Params, 0, sizeof(ChangeDebugColor_Params));
	memcpy_s(&ChangeDebugColor_Params.InC, sizeof(ChangeDebugColor_Params.InC), &InC, sizeof(InC));

	this->ProcessEvent(uFnChangeDebugColor, &ChangeDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSM::InitDebugColor()
{
	static UFunction* uFnInitDebugColor = nullptr;

	if (!uFnInitDebugColor)
	{
		uFnInitDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.InitDebugColor");
	}

	AGameCrowdAgentSM_execInitDebugColor_Params InitDebugColor_Params;
	memset(&InitDebugColor_Params, 0, sizeof(InitDebugColor_Params));

	this->ProcessEvent(uFnInitDebugColor, &InitDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgentSM::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");
	}

	AGameCrowdAgentSM_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowBehaviorAt = nullptr;

	if (!uFnAllowBehaviorAt)
	{
		uFnAllowBehaviorAt = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");
	}

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Params AllowBehaviorAt_Params;
	memset(&AllowBehaviorAt_Params, 0, sizeof(AllowBehaviorAt_Params));
	AllowBehaviorAt_Params.Destination = Destination;

	this->ProcessEvent(uFnAllowBehaviorAt, &AllowBehaviorAt_Params, nullptr);

	return AllowBehaviorAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowThisDestination = nullptr;

	if (!uFnAllowThisDestination)
	{
		uFnAllowThisDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");
	}

	UGameCrowdAgentBehavior_execAllowThisDestination_Params AllowThisDestination_Params;
	memset(&AllowThisDestination_Params, 0, sizeof(AllowThisDestination_Params));
	AllowThisDestination_Params.Destination = Destination;

	this->ProcessEvent(uFnAllowThisDestination, &AllowThisDestination_Params, nullptr);

	return AllowThisDestination_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         OtherAgent                     (CPF_Parm)

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static UFunction* uFnPropagateViralBehaviorTo = nullptr;

	if (!uFnPropagateViralBehaviorTo)
	{
		uFnPropagateViralBehaviorTo = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");
	}

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Params PropagateViralBehaviorTo_Params;
	memset(&PropagateViralBehaviorTo_Params, 0, sizeof(PropagateViralBehaviorTo_Params));
	PropagateViralBehaviorTo_Params.OtherAgent = OtherAgent;

	this->ProcessEvent(uFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator()
{
	static UFunction* uFnGetBehaviorInstigator = nullptr;

	if (!uFnGetBehaviorInstigator)
	{
		uFnGetBehaviorInstigator = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");
	}

	UGameCrowdAgentBehavior_execGetBehaviorInstigator_Params GetBehaviorInstigator_Params;
	memset(&GetBehaviorInstigator_Params, 0, sizeof(GetBehaviorInstigator_Params));

	this->ProcessEvent(uFnGetBehaviorInstigator, &GetBehaviorInstigator_Params, nullptr);

	return GetBehaviorInstigator_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* uFnActivatedBy = nullptr;

	if (!uFnActivatedBy)
	{
		uFnActivatedBy = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");
	}

	UGameCrowdAgentBehavior_execActivatedBy_Params ActivatedBy_Params;
	memset(&ActivatedBy_Params, 0, sizeof(ActivatedBy_Params));
	ActivatedBy_Params.NewActionTarget = NewActionTarget;

	this->ProcessEvent(uFnActivatedBy, &ActivatedBy_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static UFunction* uFnGetDestinationActor = nullptr;

	if (!uFnGetDestinationActor)
	{
		uFnGetDestinationActor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");
	}

	UGameCrowdAgentBehavior_execGetDestinationActor_Params GetDestinationActor_Params;
	memset(&GetDestinationActor_Params, 0, sizeof(GetDestinationActor_Params));

	this->ProcessEvent(uFnGetDestinationActor, &GetDestinationActor_Params, nullptr);

	return GetDestinationActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnChangingDestination = nullptr;

	if (!uFnChangingDestination)
	{
		uFnChangingDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");
	}

	UGameCrowdAgentBehavior_execChangingDestination_Params ChangingDestination_Params;
	memset(&ChangingDestination_Params, 0, sizeof(ChangingDestination_Params));
	ChangingDestination_Params.NewDest = NewDest;

	this->ProcessEvent(uFnChangingDestination, &ChangingDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");
	}

	UGameCrowdAgentBehavior_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdAgentBehavior::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");
	}

	UGameCrowdAgentBehavior_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	OnAnimEnd_Params.SeqNode = SeqNode;
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdAgentBehavior::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");
	}

	UGameCrowdAgentBehavior_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");
	}

	UGameCrowdAgentBehavior_execInitBehavior_Params InitBehavior_Params;
	memset(&InitBehavior_Params, 0, sizeof(InitBehavior_Params));
	InitBehavior_Params.Agent = Agent;

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34063])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static UFunction* uFnHandleMovement = nullptr;

	if (!uFnHandleMovement)
	{
		uFnHandleMovement = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");
	}

	UGameCrowdAgentBehavior_execHandleMovement_Params HandleMovement_Params;
	memset(&HandleMovement_Params, 0, sizeof(HandleMovement_Params));

	this->ProcessEvent(uFnHandleMovement, &HandleMovement_Params, nullptr);

	return HandleMovement_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation()
{
	static UFunction* uFnFinishedTargetRotation = nullptr;

	if (!uFnFinishedTargetRotation)
	{
		uFnFinishedTargetRotation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");
	}

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Params FinishedTargetRotation_Params;
	memset(&FinishedTargetRotation_Params, 0, sizeof(FinishedTargetRotation_Params));

	this->ProcessEvent(uFnFinishedTargetRotation, &FinishedTargetRotation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 CameraLoc                      (CPF_Parm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc)
{
	static UFunction* uFnCanBeUsedBy = nullptr;

	if (!uFnCanBeUsedBy)
	{
		uFnCanBeUsedBy = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");
	}

	UGameCrowdAgentBehavior_execCanBeUsedBy_Params CanBeUsedBy_Params;
	memset(&CanBeUsedBy_Params, 0, sizeof(CanBeUsedBy_Params));
	CanBeUsedBy_Params.Agent = Agent;
	memcpy_s(&CanBeUsedBy_Params.CameraLoc, sizeof(CanBeUsedBy_Params.CameraLoc), &CameraLoc, sizeof(CameraLoc));

	this->ProcessEvent(uFnCanBeUsedBy, &CanBeUsedBy_Params, nullptr);

	return CanBeUsedBy_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[317])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGameCrowdAgentBehavior::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.Tick");
	}

	UGameCrowdAgentBehavior_eventTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34659])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");
	}

	UGameCrowdAgentBehavior_execShouldEndIdle_Params ShouldEndIdle_Params;
	memset(&ShouldEndIdle_Params, 0, sizeof(ShouldEndIdle_Params));

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] (FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[34809])
// Parameter Info:
// class AGameCrowdBehaviorPoint* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ECrowdBehaviorEvent            EventType                      (CPF_Parm)
// class AActor*                  Instigator                     (CPF_Parm)
// struct FVector                 AtLocation                     (CPF_Parm)
// float                          InRange                        (CPF_Parm)
// float                          InDuration                     (CPF_Parm)
// class AActor*                  BaseActor                      (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bRequireLOS                    (CPF_OptionalParm | CPF_Parm)

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::TriggerCrowdBehavior(ECrowdBehaviorEvent EventType, class AActor* Instigator, const struct FVector& AtLocation, float InRange, float InDuration, class AActor* BaseActor, bool bRequireLOS)
{
	static UFunction* uFnTriggerCrowdBehavior = nullptr;

	if (!uFnTriggerCrowdBehavior)
	{
		uFnTriggerCrowdBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");
	}

	UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Params TriggerCrowdBehavior_Params;
	memset(&TriggerCrowdBehavior_Params, 0, sizeof(TriggerCrowdBehavior_Params));
	memcpy_s(&TriggerCrowdBehavior_Params.EventType, sizeof(TriggerCrowdBehavior_Params.EventType), &EventType, sizeof(EventType));
	TriggerCrowdBehavior_Params.Instigator = Instigator;
	memcpy_s(&TriggerCrowdBehavior_Params.AtLocation, sizeof(TriggerCrowdBehavior_Params.AtLocation), &AtLocation, sizeof(AtLocation));
	memcpy_s(&TriggerCrowdBehavior_Params.InRange, sizeof(TriggerCrowdBehavior_Params.InRange), &InRange, sizeof(InRange));
	memcpy_s(&TriggerCrowdBehavior_Params.InDuration, sizeof(TriggerCrowdBehavior_Params.InDuration), &InDuration, sizeof(InDuration));
	TriggerCrowdBehavior_Params.BaseActor = BaseActor;
	TriggerCrowdBehavior_Params.bRequireLOS = bRequireLOS;

	UGameCrowdAgentBehavior::StaticClass()->ProcessEvent(uFnTriggerCrowdBehavior, &TriggerCrowdBehavior_Params, nullptr);

	return TriggerCrowdBehavior_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");
	}

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");
	}

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static UFunction* uFnPlayAgentAnimationNow = nullptr;

	if (!uFnPlayAgentAnimationNow)
	{
		uFnPlayAgentAnimationNow = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");
	}

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Params PlayAgentAnimationNow_Params;
	memset(&PlayAgentAnimationNow_Params, 0, sizeof(PlayAgentAnimationNow_Params));

	this->ProcessEvent(uFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");
	}

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	OnAnimEnd_Params.SeqNode = SeqNode;
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34652])
// Parameter Info:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static UFunction* uFnSetSequenceOutput = nullptr;

	if (!uFnSetSequenceOutput)
	{
		uFnSetSequenceOutput = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");
	}

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Params SetSequenceOutput_Params;
	memset(&SetSequenceOutput_Params, 0, sizeof(SetSequenceOutput_Params));

	this->ProcessEvent(uFnSetSequenceOutput, &SetSequenceOutput_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation()
{
	static UFunction* uFnFinishedTargetRotation = nullptr;

	if (!uFnFinishedTargetRotation)
	{
		uFnFinishedTargetRotation = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");
	}

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Params FinishedTargetRotation_Params;
	memset(&FinishedTargetRotation_Params, 0, sizeof(FinishedTargetRotation_Params));

	this->ProcessEvent(uFnFinishedTargetRotation, &FinishedTargetRotation_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");
	}

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Params InitBehavior_Params;
	memset(&InitBehavior_Params, 0, sizeof(InitBehavior_Params));
	InitBehavior_Params.Agent = Agent;

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");
	}

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowBehaviorAt = nullptr;

	if (!uFnAllowBehaviorAt)
	{
		uFnAllowBehaviorAt = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");
	}

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Params AllowBehaviorAt_Params;
	memset(&AllowBehaviorAt_Params, 0, sizeof(AllowBehaviorAt_Params));
	AllowBehaviorAt_Params.Destination = Destination;

	this->ProcessEvent(uFnAllowBehaviorAt, &AllowBehaviorAt_Params, nullptr);

	return AllowBehaviorAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowThisDestination = nullptr;

	if (!uFnAllowThisDestination)
	{
		uFnAllowThisDestination = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");
	}

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Params AllowThisDestination_Params;
	memset(&AllowThisDestination_Params, 0, sizeof(AllowThisDestination_Params));
	AllowThisDestination_Params.Destination = Destination;

	this->ProcessEvent(uFnAllowThisDestination, &AllowThisDestination_Params, nullptr);

	return AllowThisDestination_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator()
{
	static UFunction* uFnGetBehaviorInstigator = nullptr;

	if (!uFnGetBehaviorInstigator)
	{
		uFnGetBehaviorInstigator = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");
	}

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Params GetBehaviorInstigator_Params;
	memset(&GetBehaviorInstigator_Params, 0, sizeof(GetBehaviorInstigator_Params));

	this->ProcessEvent(uFnGetBehaviorInstigator, &GetBehaviorInstigator_Params, nullptr);

	return GetBehaviorInstigator_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");
	}

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");
	}

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Params InitBehavior_Params;
	memset(&InitBehavior_Params, 0, sizeof(InitBehavior_Params));
	InitBehavior_Params.Agent = Agent;

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* uFnActivatedBy = nullptr;

	if (!uFnActivatedBy)
	{
		uFnActivatedBy = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");
	}

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Params ActivatedBy_Params;
	memset(&ActivatedBy_Params, 0, sizeof(ActivatedBy_Params));
	ActivatedBy_Params.NewActionTarget = NewActionTarget;

	this->ProcessEvent(uFnActivatedBy, &ActivatedBy_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");
	}

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34659])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");
	}

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Params ShouldEndIdle_Params;
	memset(&ShouldEndIdle_Params, 0, sizeof(ShouldEndIdle_Params));

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");
	}

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");
	}

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Params InitBehavior_Params;
	memset(&InitBehavior_Params, 0, sizeof(InitBehavior_Params));
	InitBehavior_Params.Agent = Agent;

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");
	}

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Params StopBehavior_Params;
	memset(&StopBehavior_Params, 0, sizeof(StopBehavior_Params));

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34659])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");
	}

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Params ShouldEndIdle_Params;
	memset(&ShouldEndIdle_Params, 0, sizeof(ShouldEndIdle_Params));

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");
	}

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Params GetBehaviorString_Params;
	memset(&GetBehaviorString_Params, 0, sizeof(GetBehaviorString_Params));

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static UFunction* uFnGetDestinationActor = nullptr;

	if (!uFnGetDestinationActor)
	{
		uFnGetDestinationActor = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");
	}

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Params GetDestinationActor_Params;
	memset(&GetDestinationActor_Params, 0, sizeof(GetDestinationActor_Params));

	this->ProcessEvent(uFnGetDestinationActor, &GetDestinationActor_Params, nullptr);

	return GetDestinationActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnChangingDestination = nullptr;

	if (!uFnChangingDestination)
	{
		uFnChangingDestination = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");
	}

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Params ChangingDestination_Params;
	memset(&ChangingDestination_Params, 0, sizeof(ChangingDestination_Params));
	ChangingDestination_Params.NewDest = NewDest;

	this->ProcessEvent(uFnChangingDestination, &ChangingDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34063])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static UFunction* uFnHandleMovement = nullptr;

	if (!uFnHandleMovement)
	{
		uFnHandleMovement = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");
	}

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Params HandleMovement_Params;
	memset(&HandleMovement_Params, 0, sizeof(HandleMovement_Params));

	this->ProcessEvent(uFnHandleMovement, &HandleMovement_Params, nullptr);

	return HandleMovement_Params.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   NewDestination                 (CPF_Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static UFunction* uFnUpdateDestinations = nullptr;

	if (!uFnUpdateDestinations)
	{
		uFnUpdateDestinations = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.UpdateDestinations");
	}

	UGameCrowdGroup_execUpdateDestinations_Params UpdateDestinations_Params;
	memset(&UpdateDestinations_Params, 0, sizeof(UpdateDestinations_Params));
	UpdateDestinations_Params.NewDestination = NewDestination;

	this->ProcessEvent(uFnUpdateDestinations, &UpdateDestinations_Params, nullptr);
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnRemoveMember = nullptr;

	if (!uFnRemoveMember)
	{
		uFnRemoveMember = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.RemoveMember");
	}

	UGameCrowdGroup_execRemoveMember_Params RemoveMember_Params;
	memset(&RemoveMember_Params, 0, sizeof(RemoveMember_Params));
	RemoveMember_Params.Agent = Agent;

	this->ProcessEvent(uFnRemoveMember, &RemoveMember_Params, nullptr);
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAddMember = nullptr;

	if (!uFnAddMember)
	{
		uFnAddMember = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.AddMember");
	}

	UGameCrowdGroup_execAddMember_Params AddMember_Params;
	memset(&AddMember_Params, 0, sizeof(AddMember_Params));
	AddMember_Params.Agent = Agent;

	this->ProcessEvent(uFnAddMember, &AddMember_Params, nullptr);
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AGameCrowdInfoVolume::UnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdInfoVolume.UnTouch");
	}

	AGameCrowdInfoVolume_execUnTouch_Params UnTouch_Params;
	memset(&UnTouch_Params, 0, sizeof(UnTouch_Params));
	UnTouch_Params.Other = Other;

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdInfoVolume.Touch");
	}

	AGameCrowdInfoVolume_execTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	Touch_Params.Other = Other;
	Touch_Params.OtherComp = OtherComp;
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.OnToggle");
	}

	AGameCrowdInteractionPoint_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params.Action = Action;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdBehaviorPoint::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.Touch");
	}

	AGameCrowdBehaviorPoint_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	Touch_Params.Other = Other;
	Touch_Params.OtherComp = OtherComp;
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdBehaviorPoint::DestroySelf()
{
	static UFunction* uFnDestroySelf = nullptr;

	if (!uFnDestroySelf)
	{
		uFnDestroySelf = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");
	}

	AGameCrowdBehaviorPoint_execDestroySelf_Params DestroySelf_Params;
	memset(&DestroySelf_Params, 0, sizeof(DestroySelf_Params));

	this->ProcessEvent(uFnDestroySelf, &DestroySelf_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdBehaviorPoint::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");
	}

	AGameCrowdBehaviorPoint_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] (FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bPresistent                    (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdDestination::DrawDebug(bool bPresistent, class TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.DrawDebug");
	}

	AGameCrowdDestination_execDrawDebug_Params DrawDebug_Params;
	memset(&DrawDebug_Params, 0, sizeof(DrawDebug_Params));
	DrawDebug_Params.bPresistent = bPresistent;
	memcpy_s(&DrawDebug_Params.PlayerInfo, sizeof(DrawDebug_Params.PlayerInfo), &PlayerInfo, sizeof(PlayerInfo));

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);

	memcpy_s(&PlayerInfo, sizeof(PlayerInfo), &DrawDebug_Params.PlayerInfo, sizeof(DrawDebug_Params.PlayerInfo));
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameCrowdDestination::GetDestinationRadius()
{
	static UFunction* uFnGetDestinationRadius = nullptr;

	if (!uFnGetDestinationRadius)
	{
		uFnGetDestinationRadius = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetDestinationRadius");
	}

	AGameCrowdDestination_execGetDestinationRadius_Params GetDestinationRadius_Params;
	memset(&GetDestinationRadius_Params, 0, sizeof(GetDestinationRadius_Params));

	this->ProcessEvent(uFnGetDestinationRadius, &GetDestinationRadius_Params, nullptr);

	return GetDestinationRadius_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          MaxSpawnDist                   (CPF_Parm)
// class TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdDestination::PrioritizeSpawnPoint(float MaxSpawnDist, class TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnPrioritizeSpawnPoint = nullptr;

	if (!uFnPrioritizeSpawnPoint)
	{
		uFnPrioritizeSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");
	}

	AGameCrowdDestination_execPrioritizeSpawnPoint_Params PrioritizeSpawnPoint_Params;
	memset(&PrioritizeSpawnPoint_Params, 0, sizeof(PrioritizeSpawnPoint_Params));
	memcpy_s(&PrioritizeSpawnPoint_Params.MaxSpawnDist, sizeof(PrioritizeSpawnPoint_Params.MaxSpawnDist), &MaxSpawnDist, sizeof(MaxSpawnDist));
	memcpy_s(&PrioritizeSpawnPoint_Params.PlayerInfo, sizeof(PrioritizeSpawnPoint_Params.PlayerInfo), &PlayerInfo, sizeof(PlayerInfo));

	this->ProcessEvent(uFnPrioritizeSpawnPoint, &PrioritizeSpawnPoint_Params, nullptr);

	memcpy_s(&PlayerInfo, sizeof(PlayerInfo), &PrioritizeSpawnPoint_Params.PlayerInfo, sizeof(PrioritizeSpawnPoint_Params.PlayerInfo));
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxSpawnDistSq                 (CPF_Parm)
// uint32_t                       bForceNavMeshPathing           (CPF_Parm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// class TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdDestination::AnalyzeSpawnPoint(float MaxSpawnDistSq, bool bForceNavMeshPathing, class UNavigationHandle* NavHandle, class TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnAnalyzeSpawnPoint = nullptr;

	if (!uFnAnalyzeSpawnPoint)
	{
		uFnAnalyzeSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");
	}

	AGameCrowdDestination_execAnalyzeSpawnPoint_Params AnalyzeSpawnPoint_Params;
	memset(&AnalyzeSpawnPoint_Params, 0, sizeof(AnalyzeSpawnPoint_Params));
	memcpy_s(&AnalyzeSpawnPoint_Params.MaxSpawnDistSq, sizeof(AnalyzeSpawnPoint_Params.MaxSpawnDistSq), &MaxSpawnDistSq, sizeof(MaxSpawnDistSq));
	AnalyzeSpawnPoint_Params.bForceNavMeshPathing = bForceNavMeshPathing;
	AnalyzeSpawnPoint_Params.NavHandle = NavHandle;
	memcpy_s(&AnalyzeSpawnPoint_Params.PlayerInfo, sizeof(AnalyzeSpawnPoint_Params.PlayerInfo), &PlayerInfo, sizeof(PlayerInfo));

	this->ProcessEvent(uFnAnalyzeSpawnPoint, &AnalyzeSpawnPoint_Params, nullptr);

	memcpy_s(&PlayerInfo, sizeof(PlayerInfo), &AnalyzeSpawnPoint_Params.PlayerInfo, sizeof(AnalyzeSpawnPoint_Params.PlayerInfo));

	return AnalyzeSpawnPoint_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm | CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm | CPF_OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& SpawnPos, struct FRotator& SpawnRot)
{
	static UFunction* uFnGetSpawnPosition = nullptr;

	if (!uFnGetSpawnPosition)
	{
		uFnGetSpawnPosition = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetSpawnPosition");
	}

	AGameCrowdDestination_execGetSpawnPosition_Params GetSpawnPosition_Params;
	memset(&GetSpawnPosition_Params, 0, sizeof(GetSpawnPosition_Params));
	GetSpawnPosition_Params.Spawner = Spawner;
	memcpy_s(&GetSpawnPosition_Params.SpawnPos, sizeof(GetSpawnPosition_Params.SpawnPos), &SpawnPos, sizeof(SpawnPos));
	memcpy_s(&GetSpawnPosition_Params.SpawnRot, sizeof(GetSpawnPosition_Params.SpawnRot), &SpawnRot, sizeof(SpawnRot));

	this->ProcessEvent(uFnGetSpawnPosition, &GetSpawnPosition_Params, nullptr);

	memcpy_s(&SpawnPos, sizeof(SpawnPos), &GetSpawnPosition_Params.SpawnPos, sizeof(GetSpawnPosition_Params.SpawnPos));
	memcpy_s(&SpawnRot, sizeof(SpawnRot), &GetSpawnPosition_Params.SpawnRot, sizeof(GetSpawnPosition_Params.SpawnRot));
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameCrowdDestination::GetSpawnRadius()
{
	static UFunction* uFnGetSpawnRadius = nullptr;

	if (!uFnGetSpawnRadius)
	{
		uFnGetSpawnRadius = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetSpawnRadius");
	}

	AGameCrowdDestination_execGetSpawnRadius_Params GetSpawnRadius_Params;
	memset(&GetSpawnRadius_Params, 0, sizeof(GetSpawnRadius_Params));

	this->ProcessEvent(uFnGetSpawnRadius, &GetSpawnRadius_Params, nullptr);

	return GetSpawnRadius_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

bool AGameCrowdDestination::eventAllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAllowableDestinationFor = nullptr;

	if (!uFnAllowableDestinationFor)
	{
		uFnAllowableDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");
	}

	AGameCrowdDestination_eventAllowableDestinationFor_Params AllowableDestinationFor_Params;
	memset(&AllowableDestinationFor_Params, 0, sizeof(AllowableDestinationFor_Params));
	AllowableDestinationFor_Params.Agent = Agent;

	this->ProcessEvent(uFnAllowableDestinationFor, &AllowableDestinationFor_Params, nullptr);

	return AllowableDestinationFor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] (FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        CheckCnt                       (CPF_OptionalParm | CPF_Parm)

bool AGameCrowdDestination::AtCapacity(uint8_t CheckCnt)
{
	static UFunction* uFnAtCapacity = nullptr;

	if (!uFnAtCapacity)
	{
		uFnAtCapacity = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AtCapacity");
	}

	AGameCrowdDestination_execAtCapacity_Params AtCapacity_Params;
	memset(&AtCapacity_Params, 0, sizeof(AtCapacity_Params));
	memcpy_s(&AtCapacity_Params.CheckCnt, sizeof(AtCapacity_Params.CheckCnt), &CheckCnt, sizeof(CheckCnt));

	this->ProcessEvent(uFnAtCapacity, &AtCapacity_Params, nullptr);

	return AtCapacity_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         ArrivingAgent                  (CPF_Parm)

void AGameCrowdDestination::eventIncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static UFunction* uFnIncrementCustomerCount = nullptr;

	if (!uFnIncrementCustomerCount)
	{
		uFnIncrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");
	}

	AGameCrowdDestination_eventIncrementCustomerCount_Params IncrementCustomerCount_Params;
	memset(&IncrementCustomerCount_Params, 0, sizeof(IncrementCustomerCount_Params));
	IncrementCustomerCount_Params.ArrivingAgent = ArrivingAgent;

	this->ProcessEvent(uFnIncrementCustomerCount, &IncrementCustomerCount_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         DepartingAgent                 (CPF_Parm)

void AGameCrowdDestination::eventDecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static UFunction* uFnDecrementCustomerCount = nullptr;

	if (!uFnDecrementCustomerCount)
	{
		uFnDecrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");
	}

	AGameCrowdDestination_eventDecrementCustomerCount_Params DecrementCustomerCount_Params;
	memset(&DecrementCustomerCount_Params, 0, sizeof(DecrementCustomerCount_Params));
	DecrementCustomerCount_Params.DepartingAgent = DepartingAgent;

	this->ProcessEvent(uFnDecrementCustomerCount, &DecrementCustomerCount_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// uint32_t                       bIgnoreRestrictions            (CPF_Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static UFunction* uFnPickNewDestinationFor = nullptr;

	if (!uFnPickNewDestinationFor)
	{
		uFnPickNewDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");
	}

	AGameCrowdDestination_execPickNewDestinationFor_Params PickNewDestinationFor_Params;
	memset(&PickNewDestinationFor_Params, 0, sizeof(PickNewDestinationFor_Params));
	PickNewDestinationFor_Params.Agent = Agent;
	PickNewDestinationFor_Params.bIgnoreRestrictions = bIgnoreRestrictions;

	this->ProcessEvent(uFnPickNewDestinationFor, &PickNewDestinationFor_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestination::eventReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnReachedDestination = nullptr;

	if (!uFnReachedDestination)
	{
		uFnReachedDestination = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedDestination");
	}

	AGameCrowdDestination_eventReachedDestination_Params ReachedDestination_Params;
	memset(&ReachedDestination_Params, 0, sizeof(ReachedDestination_Params));
	ReachedDestination_Params.Agent = Agent;

	this->ProcessEvent(uFnReachedDestination, &ReachedDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdDestination::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.Destroyed");
	}

	AGameCrowdDestination_execDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdDestination::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PostBeginPlay");
	}

	AGameCrowdDestination_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34539])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)
// uint32_t                       bTestExactly                   (CPF_Parm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static UFunction* uFnReachedByAgent = nullptr;

	if (!uFnReachedByAgent)
	{
		uFnReachedByAgent = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedByAgent");
	}

	AGameCrowdDestination_execReachedByAgent_Params ReachedByAgent_Params;
	memset(&ReachedByAgent_Params, 0, sizeof(ReachedByAgent_Params));
	ReachedByAgent_Params.Agent = Agent;
	memcpy_s(&ReachedByAgent_Params.TestPosition, sizeof(ReachedByAgent_Params.TestPosition), &TestPosition, sizeof(TestPosition));
	ReachedByAgent_Params.bTestExactly = bTestExactly;

	this->ProcessEvent(uFnReachedByAgent, &ReachedByAgent_Params, nullptr);

	return ReachedByAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static UFunction* uFnHasCustomer = nullptr;

	if (!uFnHasCustomer)
	{
		uFnHasCustomer = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");
	}

	AGameCrowdDestinationQueuePoint_execHasCustomer_Params HasCustomer_Params;
	memset(&HasCustomer_Params, 0, sizeof(HasCustomer_Params));

	this->ProcessEvent(uFnHasCustomer, &HasCustomer_Params, nullptr);

	return HasCustomer_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         OldCustomer                    (CPF_Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static UFunction* uFnClearQueue = nullptr;

	if (!uFnClearQueue)
	{
		uFnClearQueue = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");
	}

	AGameCrowdDestinationQueuePoint_execClearQueue_Params ClearQueue_Params;
	memset(&ClearQueue_Params, 0, sizeof(ClearQueue_Params));
	ClearQueue_Params.OldCustomer = OldCustomer;

	this->ProcessEvent(uFnClearQueue, &ClearQueue_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         NewCustomer                    (CPF_Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static UFunction* uFnAddCustomer = nullptr;

	if (!uFnAddCustomer)
	{
		uFnAddCustomer = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");
	}

	AGameCrowdDestinationQueuePoint_execAddCustomer_Params AddCustomer_Params;
	memset(&AddCustomer_Params, 0, sizeof(AddCustomer_Params));
	AddCustomer_Params.NewCustomer = NewCustomer;
	AddCustomer_Params.PreviousPosition = PreviousPosition;

	this->ProcessEvent(uFnAddCustomer, &AddCustomer_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static UFunction* uFnActuallyAdvance = nullptr;

	if (!uFnActuallyAdvance)
	{
		uFnActuallyAdvance = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");
	}

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Params ActuallyAdvance_Params;
	memset(&ActuallyAdvance_Params, 0, sizeof(ActuallyAdvance_Params));

	this->ProcessEvent(uFnActuallyAdvance, &ActuallyAdvance_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdInteractionPoint* FrontPosition                  (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static UFunction* uFnAdvanceCustomerTo = nullptr;

	if (!uFnAdvanceCustomerTo)
	{
		uFnAdvanceCustomerTo = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");
	}

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Params AdvanceCustomerTo_Params;
	memset(&AdvanceCustomerTo_Params, 0, sizeof(AdvanceCustomerTo_Params));
	AdvanceCustomerTo_Params.FrontPosition = FrontPosition;

	this->ProcessEvent(uFnAdvanceCustomerTo, &AdvanceCustomerTo_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestinationQueuePoint::eventReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnReachedDestination = nullptr;

	if (!uFnReachedDestination)
	{
		uFnReachedDestination = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");
	}

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Params ReachedDestination_Params;
	memset(&ReachedDestination_Params, 0, sizeof(ReachedDestination_Params));
	ReachedDestination_Params.Agent = Agent;

	this->ProcessEvent(uFnReachedDestination, &ReachedDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static UFunction* uFnHasSpace = nullptr;

	if (!uFnHasSpace)
	{
		uFnHasSpace = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");
	}

	AGameCrowdDestinationQueuePoint_execHasSpace_Params HasSpace_Params;
	memset(&HasSpace_Params, 0, sizeof(HasSpace_Params));

	this->ProcessEvent(uFnHasSpace, &HasSpace_Params, nullptr);

	return HasSpace_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34525])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static UFunction* uFnQueueReachedBy = nullptr;

	if (!uFnQueueReachedBy)
	{
		uFnQueueReachedBy = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");
	}

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Params QueueReachedBy_Params;
	memset(&QueueReachedBy_Params, 0, sizeof(QueueReachedBy_Params));
	QueueReachedBy_Params.Agent = Agent;
	memcpy_s(&QueueReachedBy_Params.TestPosition, sizeof(QueueReachedBy_Params.TestPosition), &TestPosition, sizeof(TestPosition));

	this->ProcessEvent(uFnQueueReachedBy, &QueueReachedBy_Params, nullptr);

	return QueueReachedBy_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdAgent* AGameCrowdPopulationManager::eventCreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnCreateNewAgent = nullptr;

	if (!uFnCreateNewAgent)
	{
		uFnCreateNewAgent = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");
	}

	AGameCrowdPopulationManager_eventCreateNewAgent_Params CreateNewAgent_Params;
	memset(&CreateNewAgent_Params, 0, sizeof(CreateNewAgent_Params));
	CreateNewAgent_Params.SpawnLoc = SpawnLoc;
	CreateNewAgent_Params.AgentTemplate = AgentTemplate;
	CreateNewAgent_Params.NewGroup = NewGroup;
	memcpy_s(&CreateNewAgent_Params.Item, sizeof(CreateNewAgent_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnCreateNewAgent, &CreateNewAgent_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &CreateNewAgent_Params.Item, sizeof(CreateNewAgent_Params.Item));

	return CreateNewAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34880])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        WarmupNum                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::Warmup(int32_t WarmupNum, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnWarmup = nullptr;

	if (!uFnWarmup)
	{
		uFnWarmup = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.Warmup");
	}

	AGameCrowdPopulationManager_execWarmup_Params Warmup_Params;
	memset(&Warmup_Params, 0, sizeof(Warmup_Params));
	memcpy_s(&Warmup_Params.WarmupNum, sizeof(Warmup_Params.WarmupNum), &WarmupNum, sizeof(WarmupNum));
	memcpy_s(&Warmup_Params.Item, sizeof(Warmup_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnWarmup, &Warmup_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &Warmup_Params.Item, sizeof(Warmup_Params.Item));

	return Warmup_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34677])
// Parameter Info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnSpawnAgent = nullptr;

	if (!uFnSpawnAgent)
	{
		uFnSpawnAgent = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");
	}

	AGameCrowdPopulationManager_execSpawnAgent_Params SpawnAgent_Params;
	memset(&SpawnAgent_Params, 0, sizeof(SpawnAgent_Params));
	SpawnAgent_Params.SpawnLoc = SpawnLoc;
	memcpy_s(&SpawnAgent_Params.Item, sizeof(SpawnAgent_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnSpawnAgent, &SpawnAgent_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &SpawnAgent_Params.Item, sizeof(SpawnAgent_Params.Item));

	return SpawnAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34678])
// Parameter Info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SpawnerIdx                     (CPF_Parm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx(int32_t SpawnerIdx, class AGameCrowdDestination* SpawnLoc)
{
	static UFunction* uFnSpawnAgentByIdx = nullptr;

	if (!uFnSpawnAgentByIdx)
	{
		uFnSpawnAgentByIdx = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");
	}

	AGameCrowdPopulationManager_execSpawnAgentByIdx_Params SpawnAgentByIdx_Params;
	memset(&SpawnAgentByIdx_Params, 0, sizeof(SpawnAgentByIdx_Params));
	memcpy_s(&SpawnAgentByIdx_Params.SpawnerIdx, sizeof(SpawnAgentByIdx_Params.SpawnerIdx), &SpawnerIdx, sizeof(SpawnerIdx));
	SpawnAgentByIdx_Params.SpawnLoc = SpawnLoc;

	this->ProcessEvent(uFnSpawnAgentByIdx, &SpawnAgentByIdx_Params, nullptr);

	return SpawnAgentByIdx_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Candidate                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnValidateSpawnAt = nullptr;

	if (!uFnValidateSpawnAt)
	{
		uFnValidateSpawnAt = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");
	}

	AGameCrowdPopulationManager_execValidateSpawnAt_Params ValidateSpawnAt_Params;
	memset(&ValidateSpawnAt_Params, 0, sizeof(ValidateSpawnAt_Params));
	ValidateSpawnAt_Params.Candidate = Candidate;
	memcpy_s(&ValidateSpawnAt_Params.Item, sizeof(ValidateSpawnAt_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnValidateSpawnAt, &ValidateSpawnAt_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &ValidateSpawnAt_Params.Item, sizeof(ValidateSpawnAt_Params.Item));

	return ValidateSpawnAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnAddPrioritizedSpawnPoint = nullptr;

	if (!uFnAddPrioritizedSpawnPoint)
	{
		uFnAddPrioritizedSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");
	}

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Params AddPrioritizedSpawnPoint_Params;
	memset(&AddPrioritizedSpawnPoint_Params, 0, sizeof(AddPrioritizedSpawnPoint_Params));
	AddPrioritizedSpawnPoint_Params.GCD = GCD;
	memcpy_s(&AddPrioritizedSpawnPoint_Params.Item, sizeof(AddPrioritizedSpawnPoint_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &AddPrioritizedSpawnPoint_Params.Item, sizeof(AddPrioritizedSpawnPoint_Params.Item));
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        StartIndex                     (CPF_Parm)
// int32_t                        NumToUpdate                    (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int32_t StartIndex, int32_t NumToUpdate, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnAnalyzeSpawnPoints = nullptr;

	if (!uFnAnalyzeSpawnPoints)
	{
		uFnAnalyzeSpawnPoints = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");
	}

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Params AnalyzeSpawnPoints_Params;
	memset(&AnalyzeSpawnPoints_Params, 0, sizeof(AnalyzeSpawnPoints_Params));
	memcpy_s(&AnalyzeSpawnPoints_Params.StartIndex, sizeof(AnalyzeSpawnPoints_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&AnalyzeSpawnPoints_Params.NumToUpdate, sizeof(AnalyzeSpawnPoints_Params.NumToUpdate), &NumToUpdate, sizeof(NumToUpdate));
	memcpy_s(&AnalyzeSpawnPoints_Params.Item, sizeof(AnalyzeSpawnPoints_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &AnalyzeSpawnPoints_Params.Item, sizeof(AnalyzeSpawnPoints_Params.Item));
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::eventPrioritizeSpawnPoints(float DeltaTime, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnPrioritizeSpawnPoints = nullptr;

	if (!uFnPrioritizeSpawnPoints)
	{
		uFnPrioritizeSpawnPoints = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");
	}

	AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Params PrioritizeSpawnPoints_Params;
	memset(&PrioritizeSpawnPoints_Params, 0, sizeof(PrioritizeSpawnPoints_Params));
	memcpy_s(&PrioritizeSpawnPoints_Params.DeltaTime, sizeof(PrioritizeSpawnPoints_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&PrioritizeSpawnPoints_Params.Item, sizeof(PrioritizeSpawnPoints_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &PrioritizeSpawnPoints_Params.Item, sizeof(PrioritizeSpawnPoints_Params.Item));
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] (FUNC_Simulated | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34718])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<struct FCrowdSpawnerPlayerInfo> out_PlayerInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::StaticGetPlayerInfo(class TArray<struct FCrowdSpawnerPlayerInfo>& out_PlayerInfo)
{
	static UFunction* uFnStaticGetPlayerInfo = nullptr;

	if (!uFnStaticGetPlayerInfo)
	{
		uFnStaticGetPlayerInfo = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");
	}

	AGameCrowdPopulationManager_execStaticGetPlayerInfo_Params StaticGetPlayerInfo_Params;
	memset(&StaticGetPlayerInfo_Params, 0, sizeof(StaticGetPlayerInfo_Params));
	memcpy_s(&StaticGetPlayerInfo_Params.out_PlayerInfo, sizeof(StaticGetPlayerInfo_Params.out_PlayerInfo), &out_PlayerInfo, sizeof(out_PlayerInfo));

	AGameCrowdPopulationManager::StaticClass()->ProcessEvent(uFnStaticGetPlayerInfo, &StaticGetPlayerInfo_Params, nullptr);

	memcpy_s(&out_PlayerInfo, sizeof(out_PlayerInfo), &StaticGetPlayerInfo_Params.out_PlayerInfo, sizeof(StaticGetPlayerInfo_Params.out_PlayerInfo));

	return StaticGetPlayerInfo_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34038])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::GetPlayerInfo()
{
	static UFunction* uFnGetPlayerInfo = nullptr;

	if (!uFnGetPlayerInfo)
	{
		uFnGetPlayerInfo = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");
	}

	AGameCrowdPopulationManager_execGetPlayerInfo_Params GetPlayerInfo_Params;
	memset(&GetPlayerInfo_Params, 0, sizeof(GetPlayerInfo_Params));

	this->ProcessEvent(uFnGetPlayerInfo, &GetPlayerInfo_Params, nullptr);

	return GetPlayerInfo_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdDestination* AGameCrowdPopulationManager::eventPickSpawnPoint(struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnPickSpawnPoint = nullptr;

	if (!uFnPickSpawnPoint)
	{
		uFnPickSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");
	}

	AGameCrowdPopulationManager_eventPickSpawnPoint_Params PickSpawnPoint_Params;
	memset(&PickSpawnPoint_Params, 0, sizeof(PickSpawnPoint_Params));
	memcpy_s(&PickSpawnPoint_Params.Item, sizeof(PickSpawnPoint_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnPickSpawnPoint, &PickSpawnPoint_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &PickSpawnPoint_Params.Item, sizeof(PickSpawnPoint_Params.Item));

	return PickSpawnPoint_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::eventUpdateSpawner(float DeltaTime, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnUpdateSpawner = nullptr;

	if (!uFnUpdateSpawner)
	{
		uFnUpdateSpawner = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");
	}

	AGameCrowdPopulationManager_eventUpdateSpawner_Params UpdateSpawner_Params;
	memset(&UpdateSpawner_Params, 0, sizeof(UpdateSpawner_Params));
	memcpy_s(&UpdateSpawner_Params.DeltaTime, sizeof(UpdateSpawner_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateSpawner_Params.Item, sizeof(UpdateSpawner_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnUpdateSpawner, &UpdateSpawner_Params, nullptr);

	memcpy_s(&Item, sizeof(Item), &UpdateSpawner_Params.Item, sizeof(UpdateSpawner_Params.Item));

	return UpdateSpawner_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34832])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::UpdateAllSpawners(float DeltaTime)
{
	static UFunction* uFnUpdateAllSpawners = nullptr;

	if (!uFnUpdateAllSpawners)
	{
		uFnUpdateAllSpawners = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");
	}

	AGameCrowdPopulationManager_execUpdateAllSpawners_Params UpdateAllSpawners_Params;
	memset(&UpdateAllSpawners_Params, 0, sizeof(UpdateAllSpawners_Params));
	memcpy_s(&UpdateAllSpawners_Params.DeltaTime, sizeof(UpdateAllSpawners_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdateAllSpawners, &UpdateAllSpawners_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.Tick");
	}

	AGameCrowdPopulationManager_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::ShouldDebugDestinations()
{
	static UFunction* uFnShouldDebugDestinations = nullptr;

	if (!uFnShouldDebugDestinations)
	{
		uFnShouldDebugDestinations = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");
	}

	AGameCrowdPopulationManager_execShouldDebugDestinations_Params ShouldDebugDestinations_Params;
	memset(&ShouldDebugDestinations_Params, 0, sizeof(ShouldDebugDestinations_Params));

	this->ProcessEvent(uFnShouldDebugDestinations, &ShouldDebugDestinations_Params, nullptr);

	return ShouldDebugDestinations_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static UFunction* uFnIsSpawningActive = nullptr;

	if (!uFnIsSpawningActive)
	{
		uFnIsSpawningActive = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");
	}

	AGameCrowdPopulationManager_execIsSpawningActive_Params IsSpawningActive_Params;
	memset(&IsSpawningActive_Params, 0, sizeof(IsSpawningActive_Params));

	this->ProcessEvent(uFnIsSpawningActive, &IsSpawningActive_Params, nullptr);

	return IsSpawningActive_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");
	}

	AGameCrowdPopulationManager_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");
	}

	AGameCrowdPopulationManager_execAgentDestroyed_Params AgentDestroyed_Params;
	memset(&AgentDestroyed_Params, 0, sizeof(AgentDestroyed_Params));
	AgentDestroyed_Params.Agent = Agent;

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdPopulationManager::eventFlushAllAgents()
{
	static UFunction* uFnFlushAllAgents = nullptr;

	if (!uFnFlushAllAgents)
	{
		uFnFlushAllAgents = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");
	}

	AGameCrowdPopulationManager_eventFlushAllAgents_Params FlushAllAgents_Params;
	memset(&FlushAllAgents_Params, 0, sizeof(FlushAllAgents_Params));

	this->ProcessEvent(uFnFlushAllAgents, &FlushAllAgents_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::eventFlushAgents(const struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnFlushAgents = nullptr;

	if (!uFnFlushAgents)
	{
		uFnFlushAgents = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.FlushAgents");
	}

	AGameCrowdPopulationManager_eventFlushAgents_Params FlushAgents_Params;
	memset(&FlushAgents_Params, 0, sizeof(FlushAgents_Params));
	memcpy_s(&FlushAgents_Params.Item, sizeof(FlushAgents_Params.Item), &Item, sizeof(Item));

	this->ProcessEvent(uFnFlushAgents, &FlushAgents_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (CPF_Parm)

int32_t AGameCrowdPopulationManager::eventCreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static UFunction* uFnCreateSpawner = nullptr;

	if (!uFnCreateSpawner)
	{
		uFnCreateSpawner = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");
	}

	AGameCrowdPopulationManager_eventCreateSpawner_Params CreateSpawner_Params;
	memset(&CreateSpawner_Params, 0, sizeof(CreateSpawner_Params));
	CreateSpawner_Params.inAction = inAction;

	this->ProcessEvent(uFnCreateSpawner, &CreateSpawner_Params, nullptr);

	return CreateSpawner_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdInfoVolume*    Vol                            (CPF_Parm)

void AGameCrowdPopulationManager::SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol)
{
	static UFunction* uFnSetCrowdInfoVolume = nullptr;

	if (!uFnSetCrowdInfoVolume)
	{
		uFnSetCrowdInfoVolume = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");
	}

	AGameCrowdPopulationManager_execSetCrowdInfoVolume_Params SetCrowdInfoVolume_Params;
	memset(&SetCrowdInfoVolume_Params, 0, sizeof(SetCrowdInfoVolume_Params));
	SetCrowdInfoVolume_Params.Vol = Vol;

	this->ProcessEvent(uFnSetCrowdInfoVolume, &SetCrowdInfoVolume_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* uFnRemoveSpawnPoint = nullptr;

	if (!uFnRemoveSpawnPoint)
	{
		uFnRemoveSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");
	}

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Params RemoveSpawnPoint_Params;
	memset(&RemoveSpawnPoint_Params, 0, sizeof(RemoveSpawnPoint_Params));
	RemoveSpawnPoint_Params.GCD = GCD;

	this->ProcessEvent(uFnRemoveSpawnPoint, &RemoveSpawnPoint_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* uFnAddSpawnPoint = nullptr;

	if (!uFnAddSpawnPoint)
	{
		uFnAddSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");
	}

	AGameCrowdPopulationManager_execAddSpawnPoint_Params AddSpawnPoint_Params;
	memset(&AddSpawnPoint_Params, 0, sizeof(AddSpawnPoint_Params));
	AddSpawnPoint_Params.GCD = GCD;

	this->ProcessEvent(uFnAddSpawnPoint, &AddSpawnPoint_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdPopulationManager::eventNotifyPathChanged()
{
	static UFunction* uFnNotifyPathChanged = nullptr;

	if (!uFnNotifyPathChanged)
	{
		uFnNotifyPathChanged = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");
	}

	AGameCrowdPopulationManager_eventNotifyPathChanged_Params NotifyPathChanged_Params;
	memset(&NotifyPathChanged_Params, 0, sizeof(NotifyPathChanged_Params));

	this->ProcessEvent(uFnNotifyPathChanged, &NotifyPathChanged_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");
	}

	AGameCrowdPopulationManager_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    VarName                        (CPF_Parm)

void AGameCrowdReplicationActor::eventReplicatedEvent(const class FName& VarName)
{
	static UFunction* uFnReplicatedEvent = nullptr;

	if (!uFnReplicatedEvent)
	{
		uFnReplicatedEvent = UFunction::FindFunction("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");
	}

	AGameCrowdReplicationActor_eventReplicatedEvent_Params ReplicatedEvent_Params;
	memset(&ReplicatedEvent_Params, 0, sizeof(ReplicatedEvent_Params));
	memcpy_s(&ReplicatedEvent_Params.VarName, sizeof(ReplicatedEvent_Params.VarName), &VarName, sizeof(VarName));

	this->ProcessEvent(uFnReplicatedEvent, &ReplicatedEvent_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UCameraShake*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Epicenter                      (CPF_Parm)
// class APlayerController*       PC                             (CPF_Parm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static UFunction* uFnChooseCameraShake = nullptr;

	if (!uFnChooseCameraShake)
	{
		uFnChooseCameraShake = UFunction::FindFunction("Function GameFramework.GameExplosionActor.ChooseCameraShake");
	}

	AGameExplosionActor_execChooseCameraShake_Params ChooseCameraShake_Params;
	memset(&ChooseCameraShake_Params, 0, sizeof(ChooseCameraShake_Params));
	memcpy_s(&ChooseCameraShake_Params.Epicenter, sizeof(ChooseCameraShake_Params.Epicenter), &Epicenter, sizeof(Epicenter));
	ChooseCameraShake_Params.PC = PC;

	this->ProcessEvent(uFnChooseCameraShake, &ChooseCameraShake_Params, nullptr);

	return ChooseCameraShake_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::SpawnCameraLensEffects()
{
	static UFunction* uFnSpawnCameraLensEffects = nullptr;

	if (!uFnSpawnCameraLensEffects)
	{
		uFnSpawnCameraLensEffects = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");
	}

	AGameExplosionActor_execSpawnCameraLensEffects_Params SpawnCameraLensEffects_Params;
	memset(&SpawnCameraLensEffects_Params, 0, sizeof(SpawnCameraLensEffects_Params));

	this->ProcessEvent(uFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static UFunction* uFnDoExplosionCameraEffects = nullptr;

	if (!uFnDoExplosionCameraEffects)
	{
		uFnDoExplosionCameraEffects = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");
	}

	AGameExplosionActor_execDoExplosionCameraEffects_Params DoExplosionCameraEffects_Params;
	memset(&DoExplosionCameraEffects_Params, 0, sizeof(DoExplosionCameraEffects_Params));

	this->ProcessEvent(uFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::DrawDebug()
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DrawDebug");
	}

	AGameExplosionActor_execDrawDebug_Params DrawDebug_Params;
	memset(&DrawDebug_Params, 0, sizeof(DrawDebug_Params));

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::DelayedExplosionDamage()
{
	static UFunction* uFnDelayedExplosionDamage = nullptr;

	if (!uFnDelayedExplosionDamage)
	{
		uFnDelayedExplosionDamage = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");
	}

	AGameExplosionActor_execDelayedExplosionDamage_Params DelayedExplosionDamage_Params;
	memset(&DelayedExplosionDamage_Params, 0, sizeof(DelayedExplosionDamage_Params));

	this->ProcessEvent(uFnDelayedExplosionDamage, &DelayedExplosionDamage_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] (FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameExplosion*          NewExplosionTemplate           (CPF_Parm)
// struct FVector                 Direction                      (CPF_OptionalParm | CPF_Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static UFunction* uFnExplode = nullptr;

	if (!uFnExplode)
	{
		uFnExplode = UFunction::FindFunction("Function GameFramework.GameExplosionActor.Explode");
	}

	AGameExplosionActor_execExplode_Params Explode_Params;
	memset(&Explode_Params, 0, sizeof(Explode_Params));
	Explode_Params.NewExplosionTemplate = NewExplosionTemplate;
	memcpy_s(&Explode_Params.Direction, sizeof(Explode_Params.Direction), &Direction, sizeof(Direction));

	this->ProcessEvent(uFnExplode, &Explode_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static UFunction* uFnSpawnExplosionFogVolume = nullptr;

	if (!uFnSpawnExplosionFogVolume)
	{
		uFnSpawnExplosionFogVolume = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");
	}

	AGameExplosionActor_execSpawnExplosionFogVolume_Params SpawnExplosionFogVolume_Params;
	memset(&SpawnExplosionFogVolume_Params, 0, sizeof(SpawnExplosionFogVolume_Params));

	this->ProcessEvent(uFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::SpawnExplosionDecal()
{
	static UFunction* uFnSpawnExplosionDecal = nullptr;

	if (!uFnSpawnExplosionDecal)
	{
		uFnSpawnExplosionDecal = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");
	}

	AGameExplosionActor_execSpawnExplosionDecal_Params SpawnExplosionDecal_Params;
	memset(&SpawnExplosionDecal_Params, 0, sizeof(SpawnExplosionDecal_Params));

	this->ProcessEvent(uFnSpawnExplosionDecal, &SpawnExplosionDecal_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystem*         Template                       (CPF_Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static UFunction* uFnSpawnExplosionParticleSystem = nullptr;

	if (!uFnSpawnExplosionParticleSystem)
	{
		uFnSpawnExplosionParticleSystem = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");
	}

	AGameExplosionActor_execSpawnExplosionParticleSystem_Params SpawnExplosionParticleSystem_Params;
	memset(&SpawnExplosionParticleSystem_Params, 0, sizeof(SpawnExplosionParticleSystem_Params));
	SpawnExplosionParticleSystem_Params.Template = Template;

	this->ProcessEvent(uFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] (FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UPhysicalMaterial*       PhysMaterial                   (CPF_Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static UFunction* uFnUpdateExplosionTemplateWithPerMaterialFX = nullptr;

	if (!uFnUpdateExplosionTemplateWithPerMaterialFX)
	{
		uFnUpdateExplosionTemplateWithPerMaterialFX = UFunction::FindFunction("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");
	}

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Params UpdateExplosionTemplateWithPerMaterialFX_Params;
	memset(&UpdateExplosionTemplateWithPerMaterialFX_Params, 0, sizeof(UpdateExplosionTemplateWithPerMaterialFX_Params));
	UpdateExplosionTemplateWithPerMaterialFX_Params.PhysMaterial = PhysMaterial;

	this->ProcessEvent(uFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Victim                         (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialCringeEffectsFor(class AActor* Victim, float VictimDist)
{
	static UFunction* uFnSpecialCringeEffectsFor = nullptr;

	if (!uFnSpecialCringeEffectsFor)
	{
		uFnSpecialCringeEffectsFor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");
	}

	AGameExplosionActor_execSpecialCringeEffectsFor_Params SpecialCringeEffectsFor_Params;
	memset(&SpecialCringeEffectsFor_Params, 0, sizeof(SpecialCringeEffectsFor_Params));
	SpecialCringeEffectsFor_Params.Victim = Victim;
	memcpy_s(&SpecialCringeEffectsFor_Params.VictimDist, sizeof(SpecialCringeEffectsFor_Params.VictimDist), &VictimDist, sizeof(VictimDist));

	this->ProcessEvent(uFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class AGamePawn*               VictimPawn                     (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static UFunction* uFnSpecialPawnEffectsFor = nullptr;

	if (!uFnSpecialPawnEffectsFor)
	{
		uFnSpecialPawnEffectsFor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");
	}

	AGameExplosionActor_execSpecialPawnEffectsFor_Params SpecialPawnEffectsFor_Params;
	memset(&SpecialPawnEffectsFor_Params, 0, sizeof(SpecialPawnEffectsFor_Params));
	SpecialPawnEffectsFor_Params.VictimPawn = VictimPawn;
	memcpy_s(&SpecialPawnEffectsFor_Params.VictimDist, sizeof(SpecialPawnEffectsFor_Params.VictimDist), &VictimDist, sizeof(VictimDist));

	this->ProcessEvent(uFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bCauseDamage                   (CPF_Parm)
// uint32_t                       bCauseFractureEffects          (CPF_Parm)
// uint32_t                       bCauseEffects                  (CPF_Parm)

float AGameExplosionActor::GetEffectCheckRadius(bool bCauseDamage, bool bCauseFractureEffects, bool bCauseEffects)
{
	static UFunction* uFnGetEffectCheckRadius = nullptr;

	if (!uFnGetEffectCheckRadius)
	{
		uFnGetEffectCheckRadius = UFunction::FindFunction("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");
	}

	AGameExplosionActor_execGetEffectCheckRadius_Params GetEffectCheckRadius_Params;
	memset(&GetEffectCheckRadius_Params, 0, sizeof(GetEffectCheckRadius_Params));
	GetEffectCheckRadius_Params.bCauseDamage = bCauseDamage;
	GetEffectCheckRadius_Params.bCauseFractureEffects = bCauseFractureEffects;
	GetEffectCheckRadius_Params.bCauseEffects = bCauseEffects;

	this->ProcessEvent(uFnGetEffectCheckRadius, &GetEffectCheckRadius_Params, nullptr);

	return GetEffectCheckRadius_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bCauseDamage                   (CPF_Parm)
// uint32_t                       bCauseEffects                  (CPF_Parm)

bool AGameExplosionActor::DoExplosionDamage(bool bCauseDamage, bool bCauseEffects)
{
	static UFunction* uFnDoExplosionDamage = nullptr;

	if (!uFnDoExplosionDamage)
	{
		uFnDoExplosionDamage = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoExplosionDamage");
	}

	AGameExplosionActor_execDoExplosionDamage_Params DoExplosionDamage_Params;
	memset(&DoExplosionDamage_Params, 0, sizeof(DoExplosionDamage_Params));
	DoExplosionDamage_Params.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Params.bCauseEffects = bCauseEffects;

	this->ProcessEvent(uFnDoExplosionDamage, &DoExplosionDamage_Params, nullptr);

	return DoExplosionDamage_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[33519])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Start                          (CPF_Parm)
// struct FBox                    BBox                           (CPF_Parm)

float AGameExplosionActor::BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox)
{
	static UFunction* uFnBoxDistanceToPoint = nullptr;

	if (!uFnBoxDistanceToPoint)
	{
		uFnBoxDistanceToPoint = UFunction::FindFunction("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");
	}

	AGameExplosionActor_execBoxDistanceToPoint_Params BoxDistanceToPoint_Params;
	memset(&BoxDistanceToPoint_Params, 0, sizeof(BoxDistanceToPoint_Params));
	memcpy_s(&BoxDistanceToPoint_Params.Start, sizeof(BoxDistanceToPoint_Params.Start), &Start, sizeof(Start));
	memcpy_s(&BoxDistanceToPoint_Params.BBox, sizeof(BoxDistanceToPoint_Params.BBox), &BBox, sizeof(BBox));

	AGameExplosionActor::StaticClass()->ProcessEvent(uFnBoxDistanceToPoint, &BoxDistanceToPoint_Params, nullptr);

	return BoxDistanceToPoint_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  A                              (CPF_Parm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static UFunction* uFnIsBehindExplosion = nullptr;

	if (!uFnIsBehindExplosion)
	{
		uFnIsBehindExplosion = UFunction::FindFunction("Function GameFramework.GameExplosionActor.IsBehindExplosion");
	}

	AGameExplosionActor_execIsBehindExplosion_Params IsBehindExplosion_Params;
	memset(&IsBehindExplosion_Params, 0, sizeof(IsBehindExplosion_Params));
	IsBehindExplosion_Params.A = A;

	this->ProcessEvent(uFnIsBehindExplosion, &IsBehindExplosion_Params, nullptr);

	return IsBehindExplosion_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Victim                         (CPF_Parm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static UFunction* uFnDoFullDamageToActor = nullptr;

	if (!uFnDoFullDamageToActor)
	{
		uFnDoFullDamageToActor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoFullDamageToActor");
	}

	AGameExplosionActor_execDoFullDamageToActor_Params DoFullDamageToActor_Params;
	memset(&DoFullDamageToActor_Params, 0, sizeof(DoFullDamageToActor_Params));
	DoFullDamageToActor_Params.Victim = Victim;

	this->ProcessEvent(uFnDoFullDamageToActor, &DoFullDamageToActor_Params, nullptr);

	return DoFullDamageToActor_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UPhysicalMaterial*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static UFunction* uFnGetPhysicalMaterial = nullptr;

	if (!uFnGetPhysicalMaterial)
	{
		uFnGetPhysicalMaterial = UFunction::FindFunction("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");
	}

	AGameExplosionActor_execGetPhysicalMaterial_Params GetPhysicalMaterial_Params;
	memset(&GetPhysicalMaterial_Params, 0, sizeof(GetPhysicalMaterial_Params));

	this->ProcessEvent(uFnGetPhysicalMaterial, &GetPhysicalMaterial_Params, nullptr);

	return GetPhysicalMaterial_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameExplosionActor::eventPreBeginPlay()
{
	static UFunction* uFnPreBeginPlay = nullptr;

	if (!uFnPreBeginPlay)
	{
		uFnPreBeginPlay = UFunction::FindFunction("Function GameFramework.GameExplosionActor.PreBeginPlay");
	}

	AGameExplosionActor_eventPreBeginPlay_Params PreBeginPlay_Params;
	memset(&PreBeginPlay_Params, 0, sizeof(PreBeginPlay_Params));

	this->ProcessEvent(uFnPreBeginPlay, &PreBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static UFunction* uFnReattachMeshWithoutBeingSeen = nullptr;

	if (!uFnReattachMeshWithoutBeingSeen)
	{
		uFnReattachMeshWithoutBeingSeen = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");
	}

	AGamePawn_execReattachMeshWithoutBeingSeen_Params ReattachMeshWithoutBeingSeen_Params;
	memset(&ReattachMeshWithoutBeingSeen_Params, 0, sizeof(ReattachMeshWithoutBeingSeen_Params));

	this->ProcessEvent(uFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePawn::ReattachMesh()
{
	static UFunction* uFnReattachMesh = nullptr;

	if (!uFnReattachMesh)
	{
		uFnReattachMesh = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMesh");
	}

	AGamePawn_execReattachMesh_Params ReattachMesh_Params;
	memset(&ReattachMesh_Params, 0, sizeof(ReattachMesh_Params));

	this->ProcessEvent(uFnReattachMesh, &ReattachMesh_Params, nullptr);
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bInWantShadow                  (CPF_Parm)

void AGamePawn::eventUpdateShadowSettings(bool bInWantShadow)
{
	static UFunction* uFnUpdateShadowSettings = nullptr;

	if (!uFnUpdateShadowSettings)
	{
		uFnUpdateShadowSettings = UFunction::FindFunction("Function GameFramework.GamePawn.UpdateShadowSettings");
	}

	AGamePawn_eventUpdateShadowSettings_Params UpdateShadowSettings_Params;
	memset(&UpdateShadowSettings_Params, 0, sizeof(UpdateShadowSettings_Params));
	UpdateShadowSettings_Params.bInWantShadow = bInWantShadow;

	this->ProcessEvent(uFnUpdateShadowSettings, &UpdateShadowSettings_Params, nullptr);
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[18834])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWriteToLog                    (CPF_OptionalParm | CPF_Parm)

class FString ADebugCameraController::ConsoleCommand(const class FString& Command, bool bWriteToLog)
{
	static UFunction* uFnConsoleCommand = nullptr;

	if (!uFnConsoleCommand)
	{
		uFnConsoleCommand = UFunction::FindFunction("Function GameFramework.DebugCameraController.ConsoleCommand");
	}

	ADebugCameraController_execConsoleCommand_Params ConsoleCommand_Params;
	memset(&ConsoleCommand_Params, 0, sizeof(ConsoleCommand_Params));
	memcpy_s(&ConsoleCommand_Params.Command, sizeof(ConsoleCommand_Params.Command), &Command, sizeof(Command));
	ConsoleCommand_Params.bWriteToLog = bWriteToLog;

	this->ProcessEvent(uFnConsoleCommand, &ConsoleCommand_Params, nullptr);

	return ConsoleCommand_Params.ReturnValue;
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::ShowDebugSelectedInfo()
{
	static UFunction* uFnShowDebugSelectedInfo = nullptr;

	if (!uFnShowDebugSelectedInfo)
	{
		uFnShowDebugSelectedInfo = UFunction::FindFunction("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");
	}

	ADebugCameraController_execShowDebugSelectedInfo_Params ShowDebugSelectedInfo_Params;
	memset(&ShowDebugSelectedInfo_Params, 0, sizeof(ShowDebugSelectedInfo_Params));

	this->ProcessEvent(uFnShowDebugSelectedInfo, &ShowDebugSelectedInfo_Params, nullptr);
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// class FName                    Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool ADebugCameraController::NativeInputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* uFnNativeInputKey = nullptr;

	if (!uFnNativeInputKey)
	{
		uFnNativeInputKey = UFunction::FindFunction("Function GameFramework.DebugCameraController.NativeInputKey");
	}

	ADebugCameraController_execNativeInputKey_Params NativeInputKey_Params;
	memset(&NativeInputKey_Params, 0, sizeof(NativeInputKey_Params));
	memcpy_s(&NativeInputKey_Params.ControllerId, sizeof(NativeInputKey_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&NativeInputKey_Params.Key, sizeof(NativeInputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&NativeInputKey_Params.Event, sizeof(NativeInputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&NativeInputKey_Params.AmountDepressed, sizeof(NativeInputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));
	NativeInputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnNativeInputKey, &NativeInputKey_Params, nullptr);

	return NativeInputKey_Params.ReturnValue;
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::InitDebugInputSystem()
{
	static UFunction* uFnInitDebugInputSystem = nullptr;

	if (!uFnInitDebugInputSystem)
	{
		uFnInitDebugInputSystem = UFunction::FindFunction("Function GameFramework.DebugCameraController.InitDebugInputSystem");
	}

	ADebugCameraController_execInitDebugInputSystem_Params InitDebugInputSystem_Params;
	memset(&InitDebugInputSystem_Params, 0, sizeof(InitDebugInputSystem_Params));

	this->ProcessEvent(uFnInitDebugInputSystem, &InitDebugInputSystem_Params, nullptr);
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::DisableDebugCamera()
{
	static UFunction* uFnDisableDebugCamera = nullptr;

	if (!uFnDisableDebugCamera)
	{
		uFnDisableDebugCamera = UFunction::FindFunction("Function GameFramework.DebugCameraController.DisableDebugCamera");
	}

	ADebugCameraController_execDisableDebugCamera_Params DisableDebugCamera_Params;
	memset(&DisableDebugCamera_Params, 0, sizeof(DisableDebugCamera_Params));

	this->ProcessEvent(uFnDisableDebugCamera, &DisableDebugCamera_Params, nullptr);
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::NormalSpeed()
{
	static UFunction* uFnNormalSpeed = nullptr;

	if (!uFnNormalSpeed)
	{
		uFnNormalSpeed = UFunction::FindFunction("Function GameFramework.DebugCameraController.NormalSpeed");
	}

	ADebugCameraController_execNormalSpeed_Params NormalSpeed_Params;
	memset(&NormalSpeed_Params, 0, sizeof(NormalSpeed_Params));

	this->ProcessEvent(uFnNormalSpeed, &NormalSpeed_Params, nullptr);
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::MoreSpeed()
{
	static UFunction* uFnMoreSpeed = nullptr;

	if (!uFnMoreSpeed)
	{
		uFnMoreSpeed = UFunction::FindFunction("Function GameFramework.DebugCameraController.MoreSpeed");
	}

	ADebugCameraController_execMoreSpeed_Params MoreSpeed_Params;
	memset(&MoreSpeed_Params, 0, sizeof(MoreSpeed_Params));

	this->ProcessEvent(uFnMoreSpeed, &MoreSpeed_Params, nullptr);
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::SetFreezeRendering()
{
	static UFunction* uFnSetFreezeRendering = nullptr;

	if (!uFnSetFreezeRendering)
	{
		uFnSetFreezeRendering = UFunction::FindFunction("Function GameFramework.DebugCameraController.SetFreezeRendering");
	}

	ADebugCameraController_execSetFreezeRendering_Params SetFreezeRendering_Params;
	memset(&SetFreezeRendering_Params, 0, sizeof(SetFreezeRendering_Params));

	this->ProcessEvent(uFnSetFreezeRendering, &SetFreezeRendering_Params, nullptr);
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* uFnOnDeactivate = nullptr;

	if (!uFnOnDeactivate)
	{
		uFnOnDeactivate = UFunction::FindFunction("Function GameFramework.DebugCameraController.OnDeactivate");
	}

	ADebugCameraController_execOnDeactivate_Params OnDeactivate_Params;
	memset(&OnDeactivate_Params, 0, sizeof(OnDeactivate_Params));
	OnDeactivate_Params.PC = PC;

	this->ProcessEvent(uFnOnDeactivate, &OnDeactivate_Params, nullptr);
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* uFnOnActivate = nullptr;

	if (!uFnOnActivate)
	{
		uFnOnActivate = UFunction::FindFunction("Function GameFramework.DebugCameraController.OnActivate");
	}

	ADebugCameraController_execOnActivate_Params OnActivate_Params;
	memset(&OnActivate_Params, 0, sizeof(OnActivate_Params));
	OnActivate_Params.PC = PC;

	this->ProcessEvent(uFnOnActivate, &OnActivate_Params, nullptr);
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraController::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.DebugCameraController.PostBeginPlay");
	}

	ADebugCameraController_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34831])
// Parameter Info:

void ADebugCameraController::Unselect()
{
	static UFunction* uFnUnselect = nullptr;

	if (!uFnUnselect)
	{
		uFnUnselect = UFunction::FindFunction("Function GameFramework.DebugCameraController.Unselect");
	}

	ADebugCameraController_execUnselect_Params Unselect_Params;
	memset(&Unselect_Params, 0, sizeof(Unselect_Params));

	this->ProcessEvent(uFnUnselect, &Unselect_Params, nullptr);
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34616])
// Parameter Info:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::SecondarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static UFunction* uFnSecondarySelect = nullptr;

	if (!uFnSecondarySelect)
	{
		uFnSecondarySelect = UFunction::FindFunction("Function GameFramework.DebugCameraController.SecondarySelect");
	}

	ADebugCameraController_execSecondarySelect_Params SecondarySelect_Params;
	memset(&SecondarySelect_Params, 0, sizeof(SecondarySelect_Params));
	memcpy_s(&SecondarySelect_Params.HitLoc, sizeof(SecondarySelect_Params.HitLoc), &HitLoc, sizeof(HitLoc));
	memcpy_s(&SecondarySelect_Params.HitNormal, sizeof(SecondarySelect_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	memcpy_s(&SecondarySelect_Params.HitInfo, sizeof(SecondarySelect_Params.HitInfo), &HitInfo, sizeof(HitInfo));

	this->ProcessEvent(uFnSecondarySelect, &SecondarySelect_Params, nullptr);
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34500])
// Parameter Info:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::PrimarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static UFunction* uFnPrimarySelect = nullptr;

	if (!uFnPrimarySelect)
	{
		uFnPrimarySelect = UFunction::FindFunction("Function GameFramework.DebugCameraController.PrimarySelect");
	}

	ADebugCameraController_execPrimarySelect_Params PrimarySelect_Params;
	memset(&PrimarySelect_Params, 0, sizeof(PrimarySelect_Params));
	memcpy_s(&PrimarySelect_Params.HitLoc, sizeof(PrimarySelect_Params.HitLoc), &HitLoc, sizeof(HitLoc));
	memcpy_s(&PrimarySelect_Params.HitNormal, sizeof(PrimarySelect_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	memcpy_s(&PrimarySelect_Params.HitInfo, sizeof(PrimarySelect_Params.HitInfo), &HitInfo, sizeof(HitInfo));

	this->ProcessEvent(uFnPrimarySelect, &PrimarySelect_Params, nullptr);
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::RenderKismetHud()
{
	static UFunction* uFnRenderKismetHud = nullptr;

	if (!uFnRenderKismetHud)
	{
		uFnRenderKismetHud = UFunction::FindFunction("Function GameFramework.MobileHUD.RenderKismetHud");
	}

	AMobileHUD_execRenderKismetHud_Params RenderKismetHud_Params;
	memset(&RenderKismetHud_Params, 0, sizeof(RenderKismetHud_Params));

	this->ProcessEvent(uFnRenderKismetHud, &RenderKismetHud_Params, nullptr);
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqEvent_HudRender*     NewEvent                       (CPF_Parm)

void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static UFunction* uFnAddKismetRenderEvent = nullptr;

	if (!uFnAddKismetRenderEvent)
	{
		uFnAddKismetRenderEvent = UFunction::FindFunction("Function GameFramework.MobileHUD.AddKismetRenderEvent");
	}

	AMobileHUD_execAddKismetRenderEvent_Params AddKismetRenderEvent_Params;
	memset(&AddKismetRenderEvent_Params, 0, sizeof(AddKismetRenderEvent_Params));
	AddKismetRenderEvent_Params.NewEvent = NewEvent;

	this->ProcessEvent(uFnAddKismetRenderEvent, &AddKismetRenderEvent_Params, nullptr);
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::RefreshKismetLinks()
{
	static UFunction* uFnRefreshKismetLinks = nullptr;

	if (!uFnRefreshKismetLinks)
	{
		uFnRefreshKismetLinks = UFunction::FindFunction("Function GameFramework.MobileHUD.RefreshKismetLinks");
	}

	AMobileHUD_execRefreshKismetLinks_Params RefreshKismetLinks_Params;
	memset(&RefreshKismetLinks_Params, 0, sizeof(RefreshKismetLinks_Params));

	this->ProcessEvent(uFnRefreshKismetLinks, &RefreshKismetLinks_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Slider = nullptr;

	if (!uFnDrawMobileZone_Slider)
	{
		uFnDrawMobileZone_Slider = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Slider");
	}

	AMobileHUD_execDrawMobileZone_Slider_Params DrawMobileZone_Slider_Params;
	memset(&DrawMobileZone_Slider_Params, 0, sizeof(DrawMobileZone_Slider_Params));
	DrawMobileZone_Slider_Params.Zone = Zone;

	this->ProcessEvent(uFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      MobileInput                    (CPF_Parm)

void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static UFunction* uFnDrawMobileTilt = nullptr;

	if (!uFnDrawMobileTilt)
	{
		uFnDrawMobileTilt = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileTilt");
	}

	AMobileHUD_execDrawMobileTilt_Params DrawMobileTilt_Params;
	memset(&DrawMobileTilt_Params, 0, sizeof(DrawMobileTilt_Params));
	DrawMobileTilt_Params.MobileInput = MobileInput;

	this->ProcessEvent(uFnDrawMobileTilt, &DrawMobileTilt_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Trackball = nullptr;

	if (!uFnDrawMobileZone_Trackball)
	{
		uFnDrawMobileZone_Trackball = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");
	}

	AMobileHUD_execDrawMobileZone_Trackball_Params DrawMobileZone_Trackball_Params;
	memset(&DrawMobileZone_Trackball_Params, 0, sizeof(DrawMobileZone_Trackball_Params));
	DrawMobileZone_Trackball_Params.Zone = Zone;

	this->ProcessEvent(uFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Joystick = nullptr;

	if (!uFnDrawMobileZone_Joystick)
	{
		uFnDrawMobileZone_Joystick = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");
	}

	AMobileHUD_execDrawMobileZone_Joystick_Params DrawMobileZone_Joystick_Params;
	memset(&DrawMobileZone_Joystick_Params, 0, sizeof(DrawMobileZone_Joystick_Params));
	DrawMobileZone_Joystick_Params.Zone = Zone;

	this->ProcessEvent(uFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Button = nullptr;

	if (!uFnDrawMobileZone_Button)
	{
		uFnDrawMobileZone_Button = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Button");
	}

	AMobileHUD_execDrawMobileZone_Button_Params DrawMobileZone_Button_Params;
	memset(&DrawMobileZone_Button_Params, 0, sizeof(DrawMobileZone_Button_Params));
	DrawMobileZone_Button_Params.Zone = Zone;

	this->ProcessEvent(uFnDrawMobileZone_Button, &DrawMobileZone_Button_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::DrawInputZoneOverlays()
{
	static UFunction* uFnDrawInputZoneOverlays = nullptr;

	if (!uFnDrawInputZoneOverlays)
	{
		uFnDrawInputZoneOverlays = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawInputZoneOverlays");
	}

	AMobileHUD_execDrawInputZoneOverlays_Params DrawInputZoneOverlays_Params;
	memset(&DrawInputZoneOverlays_Params, 0, sizeof(DrawInputZoneOverlays_Params));

	this->ProcessEvent(uFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Params, nullptr);
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::RenderMobileMenu()
{
	static UFunction* uFnRenderMobileMenu = nullptr;

	if (!uFnRenderMobileMenu)
	{
		uFnRenderMobileMenu = UFunction::FindFunction("Function GameFramework.MobileHUD.RenderMobileMenu");
	}

	AMobileHUD_execRenderMobileMenu_Params RenderMobileMenu_Params;
	memset(&RenderMobileMenu_Params, 0, sizeof(RenderMobileMenu_Params));

	this->ProcessEvent(uFnRenderMobileMenu, &RenderMobileMenu_Params, nullptr);
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AMobileHUD::ShowMobileHud()
{
	static UFunction* uFnShowMobileHud = nullptr;

	if (!uFnShowMobileHud)
	{
		uFnShowMobileHud = UFunction::FindFunction("Function GameFramework.MobileHUD.ShowMobileHud");
	}

	AMobileHUD_execShowMobileHud_Params ShowMobileHud_Params;
	memset(&ShowMobileHud_Params, 0, sizeof(ShowMobileHud_Params));

	this->ProcessEvent(uFnShowMobileHud, &ShowMobileHud_Params, nullptr);

	return ShowMobileHud_Params.ReturnValue;
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          XPos                           (CPF_Parm)
// float                          YPos                           (CPF_Parm)
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)

void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, const class FString& Str)
{
	static UFunction* uFnDrawMobileDebugString = nullptr;

	if (!uFnDrawMobileDebugString)
	{
		uFnDrawMobileDebugString = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileDebugString");
	}

	AMobileHUD_execDrawMobileDebugString_Params DrawMobileDebugString_Params;
	memset(&DrawMobileDebugString_Params, 0, sizeof(DrawMobileDebugString_Params));
	memcpy_s(&DrawMobileDebugString_Params.XPos, sizeof(DrawMobileDebugString_Params.XPos), &XPos, sizeof(XPos));
	memcpy_s(&DrawMobileDebugString_Params.YPos, sizeof(DrawMobileDebugString_Params.YPos), &YPos, sizeof(YPos));
	memcpy_s(&DrawMobileDebugString_Params.Str, sizeof(DrawMobileDebugString_Params.Str), &Str, sizeof(Str));

	this->ProcessEvent(uFnDrawMobileDebugString, &DrawMobileDebugString_Params, nullptr);
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::PostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileHUD.PostRender");
	}

	AMobileHUD_execPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUD::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.MobileHUD.PostBeginPlay");
	}

	AMobileHUD_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqEvent_MobileZoneBase* NewHandler                     (CPF_Parm)

void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static UFunction* uFnAddKismetEventHandler = nullptr;

	if (!uFnAddKismetEventHandler)
	{
		uFnAddKismetEventHandler = UFunction::FindFunction("Function GameFramework.MobileInputZone.AddKismetEventHandler");
	}

	UMobileInputZone_execAddKismetEventHandler_Params AddKismetEventHandler_Params;
	memset(&AddKismetEventHandler_Params, 0, sizeof(AddKismetEventHandler_Params));
	AddKismetEventHandler_Params.NewHandler = NewHandler;

	this->ProcessEvent(uFnAddKismetEventHandler, &AddKismetEventHandler_Params, nullptr);
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* uFnOnPostDrawZone = nullptr;

	if (!uFnOnPostDrawZone)
	{
		uFnOnPostDrawZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnPostDrawZone");
	}

	UMobileInputZone_execOnPostDrawZone_Params OnPostDrawZone_Params;
	memset(&OnPostDrawZone_Params, 0, sizeof(OnPostDrawZone_Params));
	OnPostDrawZone_Params.Zone = Zone;
	OnPostDrawZone_Params.Canvas = Canvas;

	this->ProcessEvent(uFnOnPostDrawZone, &OnPostDrawZone_Params, nullptr);
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)

bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* uFnOnPreDrawZone = nullptr;

	if (!uFnOnPreDrawZone)
	{
		uFnOnPreDrawZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnPreDrawZone");
	}

	UMobileInputZone_execOnPreDrawZone_Params OnPreDrawZone_Params;
	memset(&OnPreDrawZone_Params, 0, sizeof(OnPreDrawZone_Params));
	OnPreDrawZone_Params.Zone = Zone;
	OnPreDrawZone_Params.Canvas = Canvas;

	this->ProcessEvent(uFnOnPreDrawZone, &OnPreDrawZone_Params, nullptr);

	return OnPreDrawZone_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// int32_t                        SlideValue                     (CPF_Parm)
// struct FVector2D               ViewportSize                   (CPF_Parm)

bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, ETouchType EventType, int32_t SlideValue, const struct FVector2D& ViewportSize)
{
	static UFunction* uFnOnProcessSlide = nullptr;

	if (!uFnOnProcessSlide)
	{
		uFnOnProcessSlide = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnProcessSlide");
	}

	UMobileInputZone_execOnProcessSlide_Params OnProcessSlide_Params;
	memset(&OnProcessSlide_Params, 0, sizeof(OnProcessSlide_Params));
	OnProcessSlide_Params.Zone = Zone;
	memcpy_s(&OnProcessSlide_Params.EventType, sizeof(OnProcessSlide_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnProcessSlide_Params.SlideValue, sizeof(OnProcessSlide_Params.SlideValue), &SlideValue, sizeof(SlideValue));
	memcpy_s(&OnProcessSlide_Params.ViewportSize, sizeof(OnProcessSlide_Params.ViewportSize), &ViewportSize, sizeof(ViewportSize));

	this->ProcessEvent(uFnOnProcessSlide, &OnProcessSlide_Params, nullptr);

	return OnProcessSlide_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* uFnOnDoubleTapDelegate = nullptr;

	if (!uFnOnDoubleTapDelegate)
	{
		uFnOnDoubleTapDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");
	}

	UMobileInputZone_execOnDoubleTapDelegate_Params OnDoubleTapDelegate_Params;
	memset(&OnDoubleTapDelegate_Params, 0, sizeof(OnDoubleTapDelegate_Params));
	OnDoubleTapDelegate_Params.Zone = Zone;
	memcpy_s(&OnDoubleTapDelegate_Params.EventType, sizeof(OnDoubleTapDelegate_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnDoubleTapDelegate_Params.TouchLocation, sizeof(OnDoubleTapDelegate_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Params, nullptr);

	return OnDoubleTapDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* uFnOnTapDelegate = nullptr;

	if (!uFnOnTapDelegate)
	{
		uFnOnTapDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnTapDelegate");
	}

	UMobileInputZone_execOnTapDelegate_Params OnTapDelegate_Params;
	memset(&OnTapDelegate_Params, 0, sizeof(OnTapDelegate_Params));
	OnTapDelegate_Params.Zone = Zone;
	memcpy_s(&OnTapDelegate_Params.EventType, sizeof(OnTapDelegate_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTapDelegate_Params.TouchLocation, sizeof(OnTapDelegate_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnOnTapDelegate, &OnTapDelegate_Params, nullptr);

	return OnTapDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        Handle                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int32_t Handle, ETouchType EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* uFnOnProcessInputDelegate = nullptr;

	if (!uFnOnProcessInputDelegate)
	{
		uFnOnProcessInputDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnProcessInputDelegate");
	}

	UMobileInputZone_execOnProcessInputDelegate_Params OnProcessInputDelegate_Params;
	memset(&OnProcessInputDelegate_Params, 0, sizeof(OnProcessInputDelegate_Params));
	OnProcessInputDelegate_Params.Zone = Zone;
	memcpy_s(&OnProcessInputDelegate_Params.DeltaTime, sizeof(OnProcessInputDelegate_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&OnProcessInputDelegate_Params.Handle, sizeof(OnProcessInputDelegate_Params.Handle), &Handle, sizeof(Handle));
	memcpy_s(&OnProcessInputDelegate_Params.EventType, sizeof(OnProcessInputDelegate_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnProcessInputDelegate_Params.TouchLocation, sizeof(OnProcessInputDelegate_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnOnProcessInputDelegate, &OnProcessInputDelegate_Params, nullptr);

	return OnProcessInputDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33742])
// Parameter Info:

void UMobileInputZone::DeactivateZone()
{
	static UFunction* uFnDeactivateZone = nullptr;

	if (!uFnDeactivateZone)
	{
		uFnDeactivateZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.DeactivateZone");
	}

	UMobileInputZone_execDeactivateZone_Params DeactivateZone_Params;
	memset(&DeactivateZone_Params, 0, sizeof(DeactivateZone_Params));

	this->ProcessEvent(uFnDeactivateZone, &DeactivateZone_Params, nullptr);
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33230])
// Parameter Info:

void UMobileInputZone::ActivateZone()
{
	static UFunction* uFnActivateZone = nullptr;

	if (!uFnActivateZone)
	{
		uFnActivateZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.ActivateZone");
	}

	UMobileInputZone_execActivateZone_Params ActivateZone_Params;
	memset(&ActivateZone_Params, 0, sizeof(ActivateZone_Params));

	this->ProcessEvent(uFnActivateZone, &ActivateZone_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObject::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuObject.RenderObject");
	}

	UMobileMenuObject_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          OffsetX                        (CPF_OptionalParm | CPF_Parm)
// float                          OffsetY                        (CPF_OptionalParm | CPF_Parm)

void UMobileMenuObject::SetCanvasPos(class UCanvas* Canvas, float OffsetX, float OffsetY)
{
	static UFunction* uFnSetCanvasPos = nullptr;

	if (!uFnSetCanvasPos)
	{
		uFnSetCanvasPos = UFunction::FindFunction("Function GameFramework.MobileMenuObject.SetCanvasPos");
	}

	UMobileMenuObject_execSetCanvasPos_Params SetCanvasPos_Params;
	memset(&SetCanvasPos_Params, 0, sizeof(SetCanvasPos_Params));
	SetCanvasPos_Params.Canvas = Canvas;
	memcpy_s(&SetCanvasPos_Params.OffsetX, sizeof(SetCanvasPos_Params.OffsetX), &OffsetX, sizeof(OffsetX));
	memcpy_s(&SetCanvasPos_Params.OffsetY, sizeof(SetCanvasPos_Params.OffsetY), &OffsetY, sizeof(OffsetY));

	this->ProcessEvent(uFnSetCanvasPos, &SetCanvasPos_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuObject.InitMenuObject");
	}

	UMobileMenuObject_execInitMenuObject_Params InitMenuObject_Params;
	memset(&InitMenuObject_Params, 0, sizeof(InitMenuObject_Params));
	InitMenuObject_Params.PlayerInput = PlayerInput;
	InitMenuObject_Params.Scene = Scene;
	memcpy_s(&InitMenuObject_Params.ScreenWidth, sizeof(InitMenuObject_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuObject_Params.ScreenHeight, sizeof(InitMenuObject_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          PosX                           (CPF_Parm | CPF_OutParm)
// float                          PosY                           (CPF_Parm | CPF_OutParm)

void UMobileMenuObject::eventGetRealPosition(float& PosX, float& PosY)
{
	static UFunction* uFnGetRealPosition = nullptr;

	if (!uFnGetRealPosition)
	{
		uFnGetRealPosition = UFunction::FindFunction("Function GameFramework.MobileMenuObject.GetRealPosition");
	}

	UMobileMenuObject_eventGetRealPosition_Params GetRealPosition_Params;
	memset(&GetRealPosition_Params, 0, sizeof(GetRealPosition_Params));
	memcpy_s(&GetRealPosition_Params.PosX, sizeof(GetRealPosition_Params.PosX), &PosX, sizeof(PosX));
	memcpy_s(&GetRealPosition_Params.PosY, sizeof(GetRealPosition_Params.PosY), &PosY, sizeof(PosY));

	this->ProcessEvent(uFnGetRealPosition, &GetRealPosition_Params, nullptr);

	memcpy_s(&PosX, sizeof(PosX), &GetRealPosition_Params.PosX, sizeof(GetRealPosition_Params.PosX));
	memcpy_s(&PosY, sizeof(PosY), &GetRealPosition_Params.PosY, sizeof(GetRealPosition_Params.PosY));
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuObject::eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuObject.OnTouch");
	}

	UMobileMenuObject_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouch_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuImage::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuImage.RenderObject");
	}

	UMobileMenuImage_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

bool UMobileMenuScene::MobileMenuCommand(const class FString& Command)
{
	static UFunction* uFnMobileMenuCommand = nullptr;

	if (!uFnMobileMenuCommand)
	{
		uFnMobileMenuCommand = UFunction::FindFunction("Function GameFramework.MobileMenuScene.MobileMenuCommand");
	}

	UMobileMenuScene_execMobileMenuCommand_Params MobileMenuCommand_Params;
	memset(&MobileMenuCommand_Params, 0, sizeof(MobileMenuCommand_Params));
	memcpy_s(&MobileMenuCommand_Params.Command, sizeof(MobileMenuCommand_Params.Command), &Command, sizeof(Command));

	this->ProcessEvent(uFnMobileMenuCommand, &MobileMenuCommand_Params, nullptr);

	return MobileMenuCommand_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Tag                            (CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuObject* UMobileMenuScene::FindMenuObject(const class FString& Tag)
{
	static UFunction* uFnFindMenuObject = nullptr;

	if (!uFnFindMenuObject)
	{
		uFnFindMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuScene.FindMenuObject");
	}

	UMobileMenuScene_execFindMenuObject_Params FindMenuObject_Params;
	memset(&FindMenuObject_Params, 0, sizeof(FindMenuObject_Params));
	memcpy_s(&FindMenuObject_Params.Tag, sizeof(FindMenuObject_Params.Tag), &Tag, sizeof(Tag));

	this->ProcessEvent(uFnFindMenuObject, &FindMenuObject_Params, nullptr);

	return FindMenuObject_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33673])
// Parameter Info:

void UMobileMenuScene::CleanUpScene()
{
	static UFunction* uFnCleanUpScene = nullptr;

	if (!uFnCleanUpScene)
	{
		uFnCleanUpScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.CleanUpScene");
	}

	UMobileMenuScene_execCleanUpScene_Params CleanUpScene_Params;
	memset(&CleanUpScene_Params, 0, sizeof(CleanUpScene_Params));

	this->ProcessEvent(uFnCleanUpScene, &CleanUpScene_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuScene::Closed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Closed");
	}

	UMobileMenuScene_execClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMobileMenuScene::Closing()
{
	static UFunction* uFnClosing = nullptr;

	if (!uFnClosing)
	{
		uFnClosing = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Closing");
	}

	UMobileMenuScene_execClosing_Params Closing_Params;
	memset(&Closing_Params, 0, sizeof(Closing_Params));

	this->ProcessEvent(uFnClosing, &Closing_Params, nullptr);

	return Closing_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuScene::MadeTopMenu()
{
	static UFunction* uFnMadeTopMenu = nullptr;

	if (!uFnMadeTopMenu)
	{
		uFnMadeTopMenu = UFunction::FindFunction("Function GameFramework.MobileMenuScene.MadeTopMenu");
	}

	UMobileMenuScene_execMadeTopMenu_Params MadeTopMenu_Params;
	memset(&MadeTopMenu_Params, 0, sizeof(MadeTopMenu_Params));

	this->ProcessEvent(uFnMadeTopMenu, &MadeTopMenu_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Mode                           (CPF_Parm | CPF_NeedCtorLink)

void UMobileMenuScene::Opened(const class FString& Mode)
{
	static UFunction* uFnOpened = nullptr;

	if (!uFnOpened)
	{
		uFnOpened = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Opened");
	}

	UMobileMenuScene_execOpened_Params Opened_Params;
	memset(&Opened_Params, 0, sizeof(Opened_Params));
	memcpy_s(&Opened_Params.Mode, sizeof(Opened_Params.Mode), &Mode, sizeof(Mode));

	this->ProcessEvent(uFnOpened, &Opened_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// uint32_t                       bInside                        (CPF_Parm)

bool UMobileMenuScene::eventOnSceneTouch(ETouchType EventType, float TouchX, float TouchY, bool bInside)
{
	static UFunction* uFnOnSceneTouch = nullptr;

	if (!uFnOnSceneTouch)
	{
		uFnOnSceneTouch = UFunction::FindFunction("Function GameFramework.MobileMenuScene.OnSceneTouch");
	}

	UMobileMenuScene_eventOnSceneTouch_Params OnSceneTouch_Params;
	memset(&OnSceneTouch_Params, 0, sizeof(OnSceneTouch_Params));
	memcpy_s(&OnSceneTouch_Params.EventType, sizeof(OnSceneTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnSceneTouch_Params.TouchX, sizeof(OnSceneTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnSceneTouch_Params.TouchY, sizeof(OnSceneTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnSceneTouch_Params.bInside = bInside;

	this->ProcessEvent(uFnOnSceneTouch, &OnSceneTouch_Params, nullptr);

	return OnSceneTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuScene::eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuScene.OnTouch");
	}

	UMobileMenuScene_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	OnTouch_Params.Sender = Sender;
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       MenuObject                     (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuScene::PreRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnPreRenderMenuObject = nullptr;

	if (!uFnPreRenderMenuObject)
	{
		uFnPreRenderMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuScene.PreRenderMenuObject");
	}

	UMobileMenuScene_execPreRenderMenuObject_Params PreRenderMenuObject_Params;
	memset(&PreRenderMenuObject_Params, 0, sizeof(PreRenderMenuObject_Params));
	PreRenderMenuObject_Params.MenuObject = MenuObject;
	PreRenderMenuObject_Params.Canvas = Canvas;
	memcpy_s(&PreRenderMenuObject_Params.RenderDelta, sizeof(PreRenderMenuObject_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnPreRenderMenuObject, &PreRenderMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderScene = nullptr;

	if (!uFnRenderScene)
	{
		uFnRenderScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.RenderScene");
	}

	UMobileMenuScene_execRenderScene_Params RenderScene_Params;
	memset(&RenderScene_Params, 0, sizeof(RenderScene_Params));
	RenderScene_Params.Canvas = Canvas;
	memcpy_s(&RenderScene_Params.RenderDelta, sizeof(RenderScene_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnRenderScene, &RenderScene_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UFont*                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UFont* UMobileMenuScene::GetSceneFont()
{
	static UFunction* uFnGetSceneFont = nullptr;

	if (!uFnGetSceneFont)
	{
		uFnGetSceneFont = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetSceneFont");
	}

	UMobileMenuScene_execGetSceneFont_Params GetSceneFont_Params;
	memset(&GetSceneFont_Params, 0, sizeof(GetSceneFont_Params));

	this->ProcessEvent(uFnGetSceneFont, &GetSceneFont_Params, nullptr);

	return GetSceneFont_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuScene::eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuScene = nullptr;

	if (!uFnInitMenuScene)
	{
		uFnInitMenuScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.InitMenuScene");
	}

	UMobileMenuScene_eventInitMenuScene_Params InitMenuScene_Params;
	memset(&InitMenuScene_Params, 0, sizeof(InitMenuScene_Params));
	InitMenuScene_Params.PlayerInput = PlayerInput;
	memcpy_s(&InitMenuScene_Params.ScreenWidth, sizeof(InitMenuScene_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuScene_Params.ScreenHeight, sizeof(InitMenuScene_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuScene_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuScene, &InitMenuScene_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[34031])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UMobileMenuScene::GetGlobalScaleY()
{
	static UFunction* uFnGetGlobalScaleY = nullptr;

	if (!uFnGetGlobalScaleY)
	{
		uFnGetGlobalScaleY = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetGlobalScaleY");
	}

	UMobileMenuScene_execGetGlobalScaleY_Params GetGlobalScaleY_Params;
	memset(&GetGlobalScaleY_Params, 0, sizeof(GetGlobalScaleY_Params));

	UMobileMenuScene::StaticClass()->ProcessEvent(uFnGetGlobalScaleY, &GetGlobalScaleY_Params, nullptr);

	return GetGlobalScaleY_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[34030])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UMobileMenuScene::GetGlobalScaleX()
{
	static UFunction* uFnGetGlobalScaleX = nullptr;

	if (!uFnGetGlobalScaleX)
	{
		uFnGetGlobalScaleX = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetGlobalScaleX");
	}

	UMobileMenuScene_execGetGlobalScaleX_Params GetGlobalScaleX_Params;
	memset(&GetGlobalScaleX_Params, 0, sizeof(GetGlobalScaleX_Params));

	UMobileMenuScene::StaticClass()->ProcessEvent(uFnGetGlobalScaleX, &GetGlobalScaleX_Params, nullptr);

	return GetGlobalScaleX_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MenuClassName                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Mode                           (CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode(const class FString& MenuClassName, const class FString& Mode)
{
	static UFunction* uFnOpenMobileMenuMode = nullptr;

	if (!uFnOpenMobileMenuMode)
	{
		uFnOpenMobileMenuMode = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");
	}

	UMobilePlayerInput_execOpenMobileMenuMode_Params OpenMobileMenuMode_Params;
	memset(&OpenMobileMenuMode_Params, 0, sizeof(OpenMobileMenuMode_Params));
	memcpy_s(&OpenMobileMenuMode_Params.MenuClassName, sizeof(OpenMobileMenuMode_Params.MenuClassName), &MenuClassName, sizeof(MenuClassName));
	memcpy_s(&OpenMobileMenuMode_Params.Mode, sizeof(OpenMobileMenuMode_Params.Mode), &Mode, sizeof(Mode));

	this->ProcessEvent(uFnOpenMobileMenuMode, &OpenMobileMenuMode_Params, nullptr);

	return OpenMobileMenuMode_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MenuClassName                  (CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu(const class FString& MenuClassName)
{
	static UFunction* uFnOpenMobileMenu = nullptr;

	if (!uFnOpenMobileMenu)
	{
		uFnOpenMobileMenu = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMobileMenu");
	}

	UMobilePlayerInput_execOpenMobileMenu_Params OpenMobileMenu_Params;
	memset(&OpenMobileMenu_Params, 0, sizeof(OpenMobileMenu_Params));
	memcpy_s(&OpenMobileMenu_Params.MenuClassName, sizeof(OpenMobileMenu_Params.MenuClassName), &MenuClassName, sizeof(MenuClassName));

	this->ProcessEvent(uFnOpenMobileMenu, &OpenMobileMenu_Params, nullptr);

	return OpenMobileMenu_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  MenuCommand                    (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::MobileMenuCommand(const class FString& MenuCommand)
{
	static UFunction* uFnMobileMenuCommand = nullptr;

	if (!uFnMobileMenuCommand)
	{
		uFnMobileMenuCommand = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.MobileMenuCommand");
	}

	UMobilePlayerInput_execMobileMenuCommand_Params MobileMenuCommand_Params;
	memset(&MobileMenuCommand_Params, 0, sizeof(MobileMenuCommand_Params));
	memcpy_s(&MobileMenuCommand_Params.MenuCommand, sizeof(MobileMenuCommand_Params.MenuCommand), &MenuCommand, sizeof(MenuCommand));

	this->ProcessEvent(uFnMobileMenuCommand, &MobileMenuCommand_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::SceneRenderToggle()
{
	static UFunction* uFnSceneRenderToggle = nullptr;

	if (!uFnSceneRenderToggle)
	{
		uFnSceneRenderToggle = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SceneRenderToggle");
	}

	UMobilePlayerInput_execSceneRenderToggle_Params SceneRenderToggle_Params;
	memset(&SceneRenderToggle_Params, 0, sizeof(SceneRenderToggle_Params));

	this->ProcessEvent(uFnSceneRenderToggle, &SceneRenderToggle_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  PendingURL                     (CPF_Parm | CPF_NeedCtorLink)
// ETravelType                    TravelType                     (CPF_Parm)
// uint32_t                       bIsSeamlessTravel              (CPF_Parm)

void UMobilePlayerInput::PreClientTravel(const class FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel)
{
	static UFunction* uFnPreClientTravel = nullptr;

	if (!uFnPreClientTravel)
	{
		uFnPreClientTravel = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.PreClientTravel");
	}

	UMobilePlayerInput_execPreClientTravel_Params PreClientTravel_Params;
	memset(&PreClientTravel_Params, 0, sizeof(PreClientTravel_Params));
	memcpy_s(&PreClientTravel_Params.PendingURL, sizeof(PreClientTravel_Params.PendingURL), &PendingURL, sizeof(PendingURL));
	memcpy_s(&PreClientTravel_Params.TravelType, sizeof(PreClientTravel_Params.TravelType), &TravelType, sizeof(TravelType));
	PreClientTravel_Params.bIsSeamlessTravel = bIsSeamlessTravel;

	this->ProcessEvent(uFnPreClientTravel, &PreClientTravel_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobilePlayerInput::eventRenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderMenus = nullptr;

	if (!uFnRenderMenus)
	{
		uFnRenderMenus = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.RenderMenus");
	}

	UMobilePlayerInput_eventRenderMenus_Params RenderMenus_Params;
	memset(&RenderMenus_Params, 0, sizeof(RenderMenus_Params));
	RenderMenus_Params.Canvas = Canvas;
	memcpy_s(&RenderMenus_Params.RenderDelta, sizeof(RenderMenus_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnRenderMenus, &RenderMenus_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::eventCloseAllMenus()
{
	static UFunction* uFnCloseAllMenus = nullptr;

	if (!uFnCloseAllMenus)
	{
		uFnCloseAllMenus = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CloseAllMenus");
	}

	UMobilePlayerInput_eventCloseAllMenus_Params CloseAllMenus_Params;
	memset(&CloseAllMenus_Params, 0, sizeof(CloseAllMenus_Params));

	this->ProcessEvent(uFnCloseAllMenus, &CloseAllMenus_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuScene*        SceneToClose                   (CPF_Parm)

void UMobilePlayerInput::eventCloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static UFunction* uFnCloseMenuScene = nullptr;

	if (!uFnCloseMenuScene)
	{
		uFnCloseMenuScene = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CloseMenuScene");
	}

	UMobilePlayerInput_eventCloseMenuScene_Params CloseMenuScene_Params;
	memset(&CloseMenuScene_Params, 0, sizeof(CloseMenuScene_Params));
	CloseMenuScene_Params.SceneToClose = SceneToClose;

	this->ProcessEvent(uFnCloseMenuScene, &CloseMenuScene_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  SceneClass                     (CPF_Parm)
// class FString                  Mode                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuScene* UMobilePlayerInput::eventOpenMenuScene(class UClass* SceneClass, const class FString& Mode)
{
	static UFunction* uFnOpenMenuScene = nullptr;

	if (!uFnOpenMenuScene)
	{
		uFnOpenMenuScene = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMenuScene");
	}

	UMobilePlayerInput_eventOpenMenuScene_Params OpenMenuScene_Params;
	memset(&OpenMenuScene_Params, 0, sizeof(OpenMenuScene_Params));
	OpenMenuScene_Params.SceneClass = SceneClass;
	memcpy_s(&OpenMenuScene_Params.Mode, sizeof(OpenMenuScene_Params.Mode), &Mode, sizeof(Mode));

	this->ProcessEvent(uFnOpenMenuScene, &OpenMenuScene_Params, nullptr);

	return OpenMenuScene_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::SetMobileInputConfig(const class FString& GroupName)
{
	static UFunction* uFnSetMobileInputConfig = nullptr;

	if (!uFnSetMobileInputConfig)
	{
		uFnSetMobileInputConfig = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");
	}

	UMobilePlayerInput_execSetMobileInputConfig_Params SetMobileInputConfig_Params;
	memset(&SetMobileInputConfig_Params, 0, sizeof(SetMobileInputConfig_Params));
	memcpy_s(&SetMobileInputConfig_Params.GroupName, sizeof(SetMobileInputConfig_Params.GroupName), &GroupName, sizeof(GroupName));

	this->ProcessEvent(uFnSetMobileInputConfig, &SetMobileInputConfig_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::ActivateInputGroup(const class FString& GroupName)
{
	static UFunction* uFnActivateInputGroup = nullptr;

	if (!uFnActivateInputGroup)
	{
		uFnActivateInputGroup = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ActivateInputGroup");
	}

	UMobilePlayerInput_execActivateInputGroup_Params ActivateInputGroup_Params;
	memset(&ActivateInputGroup_Params, 0, sizeof(ActivateInputGroup_Params));
	memcpy_s(&ActivateInputGroup_Params.GroupName, sizeof(ActivateInputGroup_Params.GroupName), &GroupName, sizeof(GroupName));

	this->ProcessEvent(uFnActivateInputGroup, &ActivateInputGroup_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class UMobileInputZone*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static UFunction* uFnGetCurrentZones = nullptr;

	if (!uFnGetCurrentZones)
	{
		uFnGetCurrentZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.GetCurrentZones");
	}

	UMobilePlayerInput_execGetCurrentZones_Params GetCurrentZones_Params;
	memset(&GetCurrentZones_Params, 0, sizeof(GetCurrentZones_Params));

	this->ProcessEvent(uFnGetCurrentZones, &GetCurrentZones_Params, nullptr);

	return GetCurrentZones_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMobilePlayerInput::HasZones()
{
	static UFunction* uFnHasZones = nullptr;

	if (!uFnHasZones)
	{
		uFnHasZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.HasZones");
	}

	UMobilePlayerInput_execHasZones_Params HasZones_Params;
	memset(&HasZones_Params, 0, sizeof(HasZones_Params));

	this->ProcessEvent(uFnHasZones, &HasZones_Params, nullptr);

	return HasZones_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ZoneName                       (CPF_Parm | CPF_NeedCtorLink)

class UMobileInputZone* UMobilePlayerInput::FindorAddZone(const class FString& ZoneName)
{
	static UFunction* uFnFindorAddZone = nullptr;

	if (!uFnFindorAddZone)
	{
		uFnFindorAddZone = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.FindorAddZone");
	}

	UMobilePlayerInput_execFindorAddZone_Params FindorAddZone_Params;
	memset(&FindorAddZone_Params, 0, sizeof(FindorAddZone_Params));
	memcpy_s(&FindorAddZone_Params.ZoneName, sizeof(FindorAddZone_Params.ZoneName), &ZoneName, sizeof(ZoneName));

	this->ProcessEvent(uFnFindorAddZone, &FindorAddZone_Params, nullptr);

	return FindorAddZone_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ZoneName                       (CPF_Parm | CPF_NeedCtorLink)

class UMobileInputZone* UMobilePlayerInput::FindZone(const class FString& ZoneName)
{
	static UFunction* uFnFindZone = nullptr;

	if (!uFnFindZone)
	{
		uFnFindZone = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.FindZone");
	}

	UMobilePlayerInput_execFindZone_Params FindZone_Params;
	memset(&FindZone_Params, 0, sizeof(FindZone_Params));
	memcpy_s(&FindZone_Params.ZoneName, sizeof(FindZone_Params.ZoneName), &ZoneName, sizeof(ZoneName));

	this->ProcessEvent(uFnFindZone, &FindZone_Params, nullptr);

	return FindZone_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqEvent_MobileRawInput* NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static UFunction* uFnAddKismetRawInputEventHandler = nullptr;

	if (!uFnAddKismetRawInputEventHandler)
	{
		uFnAddKismetRawInputEventHandler = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");
	}

	UMobilePlayerInput_execAddKismetRawInputEventHandler_Params AddKismetRawInputEventHandler_Params;
	memset(&AddKismetRawInputEventHandler_Params, 0, sizeof(AddKismetRawInputEventHandler_Params));
	AddKismetRawInputEventHandler_Params.NewHandler = NewHandler;

	this->ProcessEvent(uFnAddKismetRawInputEventHandler, &AddKismetRawInputEventHandler_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqEvent_MobileBase*    NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static UFunction* uFnAddKismetEventHandler = nullptr;

	if (!uFnAddKismetEventHandler)
	{
		uFnAddKismetEventHandler = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");
	}

	UMobilePlayerInput_execAddKismetEventHandler_Params AddKismetEventHandler_Params;
	memset(&AddKismetEventHandler_Params, 0, sizeof(AddKismetEventHandler_Params));
	AddKismetEventHandler_Params.NewHandler = NewHandler;

	this->ProcessEvent(uFnAddKismetEventHandler, &AddKismetEventHandler_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::eventRefreshKismetLinks()
{
	static UFunction* uFnRefreshKismetLinks = nullptr;

	if (!uFnRefreshKismetLinks)
	{
		uFnRefreshKismetLinks = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");
	}

	UMobilePlayerInput_eventRefreshKismetLinks_Params RefreshKismetLinks_Params;
	memset(&RefreshKismetLinks_Params, 0, sizeof(RefreshKismetLinks_Params));

	this->ProcessEvent(uFnRefreshKismetLinks, &RefreshKismetLinks_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::SwapZoneOwners()
{
	static UFunction* uFnSwapZoneOwners = nullptr;

	if (!uFnSwapZoneOwners)
	{
		uFnSwapZoneOwners = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SwapZoneOwners");
	}

	UMobilePlayerInput_execSwapZoneOwners_Params SwapZoneOwners_Params;
	memset(&SwapZoneOwners_Params, 0, sizeof(SwapZoneOwners_Params));

	this->ProcessEvent(uFnSwapZoneOwners, &SwapZoneOwners_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::InitializeInputZones()
{
	static UFunction* uFnInitializeInputZones = nullptr;

	if (!uFnInitializeInputZones)
	{
		uFnInitializeInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitializeInputZones");
	}

	UMobilePlayerInput_execInitializeInputZones_Params InitializeInputZones_Params;
	memset(&InitializeInputZones_Params, 0, sizeof(InitializeInputZones_Params));

	this->ProcessEvent(uFnInitializeInputZones, &InitializeInputZones_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::InitTouchSystem()
{
	static UFunction* uFnInitTouchSystem = nullptr;

	if (!uFnInitTouchSystem)
	{
		uFnInitTouchSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitTouchSystem");
	}

	UMobilePlayerInput_execInitTouchSystem_Params InitTouchSystem_Params;
	memset(&InitTouchSystem_Params, 0, sizeof(InitTouchSystem_Params));

	this->ProcessEvent(uFnInitTouchSystem, &InitTouchSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::ClientInitInputSystem()
{
	static UFunction* uFnClientInitInputSystem = nullptr;

	if (!uFnClientInitInputSystem)
	{
		uFnClientInitInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");
	}

	UMobilePlayerInput_execClientInitInputSystem_Params ClientInitInputSystem_Params;
	memset(&ClientInitInputSystem_Params, 0, sizeof(ClientInitInputSystem_Params));

	this->ProcessEvent(uFnClientInitInputSystem, &ClientInitInputSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::InitInputSystem()
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitInputSystem");
	}

	UMobilePlayerInput_execInitInputSystem_Params InitInputSystem_Params;
	memset(&InitInputSystem_Params, 0, sizeof(InitInputSystem_Params));

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34506])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobilePlayerInput::ProcessWorldTouch(class UMobileInputZone* Zone, ETouchType EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* uFnProcessWorldTouch = nullptr;

	if (!uFnProcessWorldTouch)
	{
		uFnProcessWorldTouch = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ProcessWorldTouch");
	}

	UMobilePlayerInput_execProcessWorldTouch_Params ProcessWorldTouch_Params;
	memset(&ProcessWorldTouch_Params, 0, sizeof(ProcessWorldTouch_Params));
	ProcessWorldTouch_Params.Zone = Zone;
	memcpy_s(&ProcessWorldTouch_Params.EventType, sizeof(ProcessWorldTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&ProcessWorldTouch_Params.TouchLocation, sizeof(ProcessWorldTouch_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnProcessWorldTouch, &ProcessWorldTouch_Params, nullptr);

	return ProcessWorldTouch_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34626])
// Parameter Info:
// class FName                    Key                            (CPF_Parm)
// float                          Delta                          (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::SendInputAxis(const class FName& Key, float Delta, float DeltaTime)
{
	static UFunction* uFnSendInputAxis = nullptr;

	if (!uFnSendInputAxis)
	{
		uFnSendInputAxis = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SendInputAxis");
	}

	UMobilePlayerInput_execSendInputAxis_Params SendInputAxis_Params;
	memset(&SendInputAxis_Params, 0, sizeof(SendInputAxis_Params));
	memcpy_s(&SendInputAxis_Params.Key, sizeof(SendInputAxis_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SendInputAxis_Params.Delta, sizeof(SendInputAxis_Params.Delta), &Delta, sizeof(Delta));
	memcpy_s(&SendInputAxis_Params.DeltaTime, sizeof(SendInputAxis_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnSendInputAxis, &SendInputAxis_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34627])
// Parameter Info:
// class FName                    Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)

void UMobilePlayerInput::SendInputKey(const class FName& Key, EInputEvent Event, float AmountDepressed)
{
	static UFunction* uFnSendInputKey = nullptr;

	if (!uFnSendInputKey)
	{
		uFnSendInputKey = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SendInputKey");
	}

	UMobilePlayerInput_execSendInputKey_Params SendInputKey_Params;
	memset(&SendInputKey_Params, 0, sizeof(SendInputKey_Params));
	memcpy_s(&SendInputKey_Params.Key, sizeof(SendInputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SendInputKey_Params.Event, sizeof(SendInputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&SendInputKey_Params.AmountDepressed, sizeof(SendInputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));

	this->ProcessEvent(uFnSendInputKey, &SendInputKey_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33686])
// Parameter Info:
// int32_t                        NewViewportX                   (CPF_Parm)
// int32_t                        NewViewportY                   (CPF_Parm)
// int32_t                        NewViewportSizeX               (CPF_Parm)
// int32_t                        NewViewportSizeY               (CPF_Parm)

void UMobilePlayerInput::ConditionalUpdateInputZones(int32_t NewViewportX, int32_t NewViewportY, int32_t NewViewportSizeX, int32_t NewViewportSizeY)
{
	static UFunction* uFnConditionalUpdateInputZones = nullptr;

	if (!uFnConditionalUpdateInputZones)
	{
		uFnConditionalUpdateInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");
	}

	UMobilePlayerInput_execConditionalUpdateInputZones_Params ConditionalUpdateInputZones_Params;
	memset(&ConditionalUpdateInputZones_Params, 0, sizeof(ConditionalUpdateInputZones_Params));
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportX, sizeof(ConditionalUpdateInputZones_Params.NewViewportX), &NewViewportX, sizeof(NewViewportX));
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportY, sizeof(ConditionalUpdateInputZones_Params.NewViewportY), &NewViewportY, sizeof(NewViewportY));
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportSizeX, sizeof(ConditionalUpdateInputZones_Params.NewViewportSizeX), &NewViewportSizeX, sizeof(NewViewportSizeX));
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportSizeY, sizeof(ConditionalUpdateInputZones_Params.NewViewportSizeY), &NewViewportSizeY, sizeof(NewViewportSizeY));

	this->ProcessEvent(uFnConditionalUpdateInputZones, &ConditionalUpdateInputZones_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34342])
// Parameter Info:
// uint32_t                       bIsFirstInitialize             (CPF_Parm)

void UMobilePlayerInput::NativeInitializeInputZones(bool bIsFirstInitialize)
{
	static UFunction* uFnNativeInitializeInputZones = nullptr;

	if (!uFnNativeInitializeInputZones)
	{
		uFnNativeInitializeInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");
	}

	UMobilePlayerInput_execNativeInitializeInputZones_Params NativeInitializeInputZones_Params;
	memset(&NativeInitializeInputZones_Params, 0, sizeof(NativeInitializeInputZones_Params));
	NativeInitializeInputZones_Params.bIsFirstInitialize = bIsFirstInitialize;

	this->ProcessEvent(uFnNativeInitializeInputZones, &NativeInitializeInputZones_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34341])
// Parameter Info:

void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static UFunction* uFnNativeInitializeInputSystem = nullptr;

	if (!uFnNativeInitializeInputSystem)
	{
		uFnNativeInitializeInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");
	}

	UMobilePlayerInput_execNativeInitializeInputSystem_Params NativeInitializeInputSystem_Params;
	memset(&NativeInitializeInputSystem_Params, 0, sizeof(NativeInitializeInputSystem_Params));

	this->ProcessEvent(uFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Handle                         (CPF_Parm)
// ETouchType                     Type                           (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// float                          DeviceTimestamp                (CPF_Parm)
// int32_t                        TouchpadIndex                  (CPF_Parm)

void UMobilePlayerInput::OnInputTouch(int32_t Handle, ETouchType Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int32_t TouchpadIndex)
{
	static UFunction* uFnOnInputTouch = nullptr;

	if (!uFnOnInputTouch)
	{
		uFnOnInputTouch = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnInputTouch");
	}

	UMobilePlayerInput_execOnInputTouch_Params OnInputTouch_Params;
	memset(&OnInputTouch_Params, 0, sizeof(OnInputTouch_Params));
	memcpy_s(&OnInputTouch_Params.Handle, sizeof(OnInputTouch_Params.Handle), &Handle, sizeof(Handle));
	memcpy_s(&OnInputTouch_Params.Type, sizeof(OnInputTouch_Params.Type), &Type, sizeof(Type));
	memcpy_s(&OnInputTouch_Params.TouchLocation, sizeof(OnInputTouch_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));
	memcpy_s(&OnInputTouch_Params.DeviceTimestamp, sizeof(OnInputTouch_Params.DeviceTimestamp), &DeviceTimestamp, sizeof(DeviceTimestamp));
	memcpy_s(&OnInputTouch_Params.TouchpadIndex, sizeof(OnInputTouch_Params.TouchpadIndex), &TouchpadIndex, sizeof(TouchpadIndex));

	this->ProcessEvent(uFnOnInputTouch, &OnInputTouch_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// int32_t                        TouchpadIndex                  (CPF_Parm)

bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int32_t TouchpadIndex)
{
	static UFunction* uFnOnPreviewTouch = nullptr;

	if (!uFnOnPreviewTouch)
	{
		uFnOnPreviewTouch = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnPreviewTouch");
	}

	UMobilePlayerInput_execOnPreviewTouch_Params OnPreviewTouch_Params;
	memset(&OnPreviewTouch_Params, 0, sizeof(OnPreviewTouch_Params));
	memcpy_s(&OnPreviewTouch_Params.X, sizeof(OnPreviewTouch_Params.X), &X, sizeof(X));
	memcpy_s(&OnPreviewTouch_Params.Y, sizeof(OnPreviewTouch_Params.Y), &Y, sizeof(Y));
	memcpy_s(&OnPreviewTouch_Params.TouchpadIndex, sizeof(OnPreviewTouch_Params.TouchpadIndex), &TouchpadIndex, sizeof(TouchpadIndex));

	this->ProcessEvent(uFnOnPreviewTouch, &OnPreviewTouch_Params, nullptr);

	return OnPreviewTouch_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static UFunction* uFnOnTouchNotHandledInMenu = nullptr;

	if (!uFnOnTouchNotHandledInMenu)
	{
		uFnOnTouchNotHandledInMenu = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");
	}

	UMobilePlayerInput_execOnTouchNotHandledInMenu_Params OnTouchNotHandledInMenu_Params;
	memset(&OnTouchNotHandledInMenu_Params, 0, sizeof(OnTouchNotHandledInMenu_Params));

	this->ProcessEvent(uFnOnTouchNotHandledInMenu, &OnTouchNotHandledInMenu_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::eventPlayerInput(float DeltaTime)
{
	static UFunction* uFnPlayerInput = nullptr;

	if (!uFnPlayerInput)
	{
		uFnPlayerInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.PlayerInput");
	}

	UMobilePlayerInput_eventPlayerInput_Params PlayerInput_Params;
	memset(&PlayerInput_Params, 0, sizeof(PlayerInput_Params));
	memcpy_s(&PlayerInput_Params.DeltaTime, sizeof(PlayerInput_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPlayerInput, &PlayerInput_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18101])
// Parameter Info:

void UMobilePlayerInput::CancelMobileInput()
{
	static UFunction* uFnCancelMobileInput = nullptr;

	if (!uFnCancelMobileInput)
	{
		uFnCancelMobileInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CancelMobileInput");
	}

	UMobilePlayerInput_execCancelMobileInput_Params CancelMobileInput_Params;
	memset(&CancelMobileInput_Params, 0, sizeof(CancelMobileInput_Params));

	this->ProcessEvent(uFnCancelMobileInput, &CancelMobileInput_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34505])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::ProcessMobileInput(float DeltaTime)
{
	static UFunction* uFnProcessMobileInput = nullptr;

	if (!uFnProcessMobileInput)
	{
		uFnProcessMobileInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ProcessMobileInput");
	}

	UMobilePlayerInput_execProcessMobileInput_Params ProcessMobileInput_Params;
	memset(&ProcessMobileInput_Params, 0, sizeof(ProcessMobileInput_Params));
	memcpy_s(&ProcessMobileInput_Params.DeltaTime, sizeof(ProcessMobileInput_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnProcessMobileInput, &ProcessMobileInput_Params, nullptr);
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InOutOfViewLocation            (CPF_Parm)

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static UFunction* uFnMustBeHiddenFromThisPoint = nullptr;

	if (!uFnMustBeHiddenFromThisPoint)
	{
		uFnMustBeHiddenFromThisPoint = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");
	}

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Params MustBeHiddenFromThisPoint_Params;
	memset(&MustBeHiddenFromThisPoint_Params, 0, sizeof(MustBeHiddenFromThisPoint_Params));
	MustBeHiddenFromThisPoint_Params.NavHandle = NavHandle;
	memcpy_s(&MustBeHiddenFromThisPoint_Params.InOutOfViewLocation, sizeof(MustBeHiddenFromThisPoint_Params.InOutOfViewLocation), &InOutOfViewLocation, sizeof(InOutOfViewLocation));

	UNavMeshGoal_OutOfViewFrom::StaticClass()->ProcessEvent(uFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Params, nullptr);

	return MustBeHiddenFromThisPoint_Params.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26955])
// Parameter Info:

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static UFunction* uFnRecycleNative = nullptr;

	if (!uFnRecycleNative)
	{
		uFnRecycleNative = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Params RecycleNative_Params;
	memset(&RecycleNative_Params, 0, sizeof(RecycleNative_Params));

	this->ProcessEvent(uFnRecycleNative, &RecycleNative_Params, nullptr);
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");
	}

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InLocation                     (CPF_Const | CPF_Parm)
// struct FRotator                InRotation                     (CPF_Const | CPF_Parm)
// float                          InDistanceToCheck              (CPF_Const | CPF_Parm)
// class TArray<struct FVector>   InLocationsToCheck             (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, const class TArray<struct FVector>& InLocationsToCheck)
{
	static UFunction* uFnBiasAgainstPolysWithinDistanceOfLocations = nullptr;

	if (!uFnBiasAgainstPolysWithinDistanceOfLocations)
	{
		uFnBiasAgainstPolysWithinDistanceOfLocations = UFunction::FindFunction("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");
	}

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Params BiasAgainstPolysWithinDistanceOfLocations_Params;
	memset(&BiasAgainstPolysWithinDistanceOfLocations_Params, 0, sizeof(BiasAgainstPolysWithinDistanceOfLocations_Params));
	BiasAgainstPolysWithinDistanceOfLocations_Params.NavHandle = NavHandle;
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InLocation, sizeof(BiasAgainstPolysWithinDistanceOfLocations_Params.InLocation), &InLocation, sizeof(InLocation));
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InRotation, sizeof(BiasAgainstPolysWithinDistanceOfLocations_Params.InRotation), &InRotation, sizeof(InRotation));
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InDistanceToCheck, sizeof(BiasAgainstPolysWithinDistanceOfLocations_Params.InDistanceToCheck), &InDistanceToCheck, sizeof(InDistanceToCheck));
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InLocationsToCheck, sizeof(BiasAgainstPolysWithinDistanceOfLocations_Params.InLocationsToCheck), &InLocationsToCheck, sizeof(InLocationsToCheck));

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::StaticClass()->ProcessEvent(uFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Params, nullptr);

	return BiasAgainstPolysWithinDistanceOfLocations_Params.ReturnValue;
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void USecondaryViewportClient::eventPostRender(class UCanvas* Canvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.SecondaryViewportClient.PostRender");
	}

	USecondaryViewportClient_eventPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));
	PostRender_Params.Canvas = Canvas;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileSecondaryViewportClient::eventPostRender(class UCanvas* Canvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileSecondaryViewportClient.PostRender");
	}

	UMobileSecondaryViewportClient_eventPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));
	PostRender_Params.Canvas = Canvas;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");
	}

	USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Params AgentDestroyed_Params;
	memset(&AgentDestroyed_Params, 0, sizeof(AgentDestroyed_Params));
	AgentDestroyed_Params.Agent = Agent;

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist()
{
	static UFunction* uFnGetMaxSpawnDist = nullptr;

	if (!uFnGetMaxSpawnDist)
	{
		uFnGetMaxSpawnDist = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");
	}

	USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Params GetMaxSpawnDist_Params;
	memset(&GetMaxSpawnDist_Params, 0, sizeof(GetMaxSpawnDist_Params));

	this->ProcessEvent(uFnGetMaxSpawnDist, &GetMaxSpawnDist_Params, nullptr);

	return GetMaxSpawnDist_Params.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdPopulationManager* PopMgr                         (CPF_Parm)
// struct FCrowdSpawnInfoItem     out_Item                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void USeqAct_GameCrowdPopulationManagerToggle::eventFillCrowdSpawnInfoItem(class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem& out_Item)
{
	static UFunction* uFnFillCrowdSpawnInfoItem = nullptr;

	if (!uFnFillCrowdSpawnInfoItem)
	{
		uFnFillCrowdSpawnInfoItem = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");
	}

	USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Params FillCrowdSpawnInfoItem_Params;
	memset(&FillCrowdSpawnInfoItem_Params, 0, sizeof(FillCrowdSpawnInfoItem_Params));
	FillCrowdSpawnInfoItem_Params.PopMgr = PopMgr;
	memcpy_s(&FillCrowdSpawnInfoItem_Params.out_Item, sizeof(FillCrowdSpawnInfoItem_Params.out_Item), &out_Item, sizeof(out_Item));

	this->ProcessEvent(uFnFillCrowdSpawnInfoItem, &FillCrowdSpawnInfoItem_Params, nullptr);

	memcpy_s(&out_Item, sizeof(out_Item), &FillCrowdSpawnInfoItem_Params.out_Item, sizeof(FillCrowdSpawnInfoItem_Params.out_Item));
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");
	}

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqAct_GameCrowdPopulationManagerToggle::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_GameCrowdSpawner::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");
	}

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqAct_GameCrowdSpawner::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_MobileSaveLoadValue::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");
	}

	USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqAct_MobileSaveLoadValue::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgentSkeletal* Agent                          (CPF_Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static UFunction* uFnSetCurrentAnimationActionFor = nullptr;

	if (!uFnSetCurrentAnimationActionFor)
	{
		uFnSetCurrentAnimationActionFor = UFunction::FindFunction("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");
	}

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Params SetCurrentAnimationActionFor_Params;
	memset(&SetCurrentAnimationActionFor_Params, 0, sizeof(SetCurrentAnimationActionFor_Params));
	SetCurrentAnimationActionFor_Params.Agent = Agent;

	this->ProcessEvent(uFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Params, nullptr);
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_PlayAgentAnimation::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");
	}

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqAct_PlayAgentAnimation::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRender.Render");
	}

	USeqEvent_HudRender_execRender_Params Render_Params;
	memset(&Render_Params, 0, sizeof(Render_Params));
	Render_Params.TargetCanvas = TargetCanvas;
	Render_Params.TargetHud = TargetHud;

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void USeqEvent_HudRender::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRender.RegisterEvent");
	}

	USeqEvent_HudRender_eventRegisterEvent_Params RegisterEvent_Params;
	memset(&RegisterEvent_Params, 0, sizeof(RegisterEvent_Params));

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileBase::eventAddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* uFnAddToMobileInput = nullptr;

	if (!uFnAddToMobileInput)
	{
		uFnAddToMobileInput = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");
	}

	USeqEvent_MobileBase_eventAddToMobileInput_Params AddToMobileInput_Params;
	memset(&AddToMobileInput_Params, 0, sizeof(AddToMobileInput_Params));
	AddToMobileInput_Params.MPI = MPI;

	this->ProcessEvent(uFnAddToMobileInput, &AddToMobileInput_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void USeqEvent_MobileBase::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");
	}

	USeqEvent_MobileBase_eventRegisterEvent_Params RegisterEvent_Params;
	memset(&RegisterEvent_Params, 0, sizeof(RegisterEvent_Params));

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqEvent_MobileMotion::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");
	}

	USeqEvent_MobileMotion_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqEvent_MobileMotion::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileZoneBase::eventAddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* uFnAddToMobileInput = nullptr;

	if (!uFnAddToMobileInput)
	{
		uFnAddToMobileInput = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");
	}

	USeqEvent_MobileZoneBase_eventAddToMobileInput_Params AddToMobileInput_Params;
	memset(&AddToMobileInput_Params, 0, sizeof(AddToMobileInput_Params));
	AddToMobileInput_Params.MPI = MPI;

	this->ProcessEvent(uFnAddToMobileInput, &AddToMobileInput_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void USeqEvent_MobileRawInput::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");
	}

	USeqEvent_MobileRawInput_eventRegisterEvent_Params RegisterEvent_Params;
	memset(&RegisterEvent_Params, 0, sizeof(RegisterEvent_Params));

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameCameraBase::eventModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");
	}

	UGameCameraBase_eventModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memset(&ModifyPostProcessSettings_Params, 0, sizeof(ModifyPostProcessSettings_Params));
	memcpy_s(&ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP), &PP, sizeof(PP));

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, sizeof(PP), &ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP));
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCameraBase::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameCameraBase.Init");
	}

	UGameCameraBase_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] (FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UGameCameraBase::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCameraBase.DisplayDebug");
	}

	UGameCameraBase_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ProcessViewRotation");
	}

	UGameCameraBase_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameCameraBase.UpdateCamera");
	}

	UGameCameraBase_execUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCameraBase::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ResetInterpolation");
	}

	UGameCameraBase_execResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         NewCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeInActive");
	}

	UGameCameraBase_execOnBecomeInActive_Params OnBecomeInActive_Params;
	memset(&OnBecomeInActive_Params, 0, sizeof(OnBecomeInActive_Params));
	OnBecomeInActive_Params.NewCamera = NewCamera;

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeActive");
	}

	UGameCameraBase_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");
	}

	UGameThirdPersonCamera_execResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameThirdPersonCamera::eventModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");
	}

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memset(&ModifyPostProcessSettings_Params, 0, sizeof(ModifyPostProcessSettings_Params));
	memcpy_s(&ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP), &PP, sizeof(PP));

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, sizeof(PP), &ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP));
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");
	}

	UGameThirdPersonCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");
	}

	UGameThirdPersonCamera_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] (FUNC_Final | FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static UFunction* uFnUpdateCameraMode = nullptr;

	if (!uFnUpdateCameraMode)
	{
		uFnUpdateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");
	}

	UGameThirdPersonCamera_execUpdateCameraMode_Params UpdateCameraMode_Params;
	memset(&UpdateCameraMode_Params, 0, sizeof(UpdateCameraMode_Params));
	UpdateCameraMode_Params.P = P;

	this->ProcessEvent(uFnUpdateCameraMode, &UpdateCameraMode_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static UFunction* uFnFindBestCameraMode = nullptr;

	if (!uFnFindBestCameraMode)
	{
		uFnFindBestCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");
	}

	UGameThirdPersonCamera_execFindBestCameraMode_Params FindBestCameraMode_Params;
	memset(&FindBestCameraMode_Params, 0, sizeof(FindBestCameraMode_Params));
	FindBestCameraMode_Params.P = P;

	this->ProcessEvent(uFnFindBestCameraMode, &FindBestCameraMode_Params, nullptr);

	return FindBestCameraMode_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                Delta                          (CPF_Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static UFunction* uFnAdjustFocusPointInterpolation = nullptr;

	if (!uFnAdjustFocusPointInterpolation)
	{
		uFnAdjustFocusPointInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");
	}

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Params AdjustFocusPointInterpolation_Params;
	memset(&AdjustFocusPointInterpolation_Params, 0, sizeof(AdjustFocusPointInterpolation_Params));
	memcpy_s(&AdjustFocusPointInterpolation_Params.Delta, sizeof(AdjustFocusPointInterpolation_Params.Delta), &Delta, sizeof(Delta));

	this->ProcessEvent(uFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] (FUNC_Defined | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static UFunction* uFnGetActualFocusLocation = nullptr;

	if (!uFnGetActualFocusLocation)
	{
		uFnGetActualFocusLocation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");
	}

	UGameThirdPersonCamera_execGetActualFocusLocation_Params GetActualFocusLocation_Params;
	memset(&GetActualFocusLocation_Params, 0, sizeof(GetActualFocusLocation_Params));

	this->ProcessEvent(uFnGetActualFocusLocation, &GetActualFocusLocation_Params, nullptr);

	return GetActualFocusLocation_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] (FUNC_Defined | FUNC_Event | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::eventUpdateFocusPoint(class APawn* P)
{
	static UFunction* uFnUpdateFocusPoint = nullptr;

	if (!uFnUpdateFocusPoint)
	{
		uFnUpdateFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");
	}

	UGameThirdPersonCamera_eventUpdateFocusPoint_Params UpdateFocusPoint_Params;
	memset(&UpdateFocusPoint_Params, 0, sizeof(UpdateFocusPoint_Params));
	UpdateFocusPoint_Params.P = P;

	this->ProcessEvent(uFnUpdateFocusPoint, &UpdateFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bLeaveCameraRotation           (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static UFunction* uFnClearFocusPoint = nullptr;

	if (!uFnClearFocusPoint)
	{
		uFnClearFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");
	}

	UGameThirdPersonCamera_execClearFocusPoint_Params ClearFocusPoint_Params;
	memset(&ClearFocusPoint_Params, 0, sizeof(ClearFocusPoint_Params));
	ClearFocusPoint_Params.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent(uFnClearFocusPoint, &ClearFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static UFunction* uFnGetFocusActor = nullptr;

	if (!uFnGetFocusActor)
	{
		uFnGetFocusActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetFocusActor");
	}

	UGameThirdPersonCamera_execGetFocusActor_Params GetFocusActor_Params;
	memset(&GetFocusActor_Params, 0, sizeof(GetFocusActor_Params));

	this->ProcessEvent(uFnGetFocusActor, &GetFocusActor_Params, nullptr);

	return GetFocusActor_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  FocusActor                     (CPF_Parm)
// class FName                    FocusBoneName                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const class FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnActor = nullptr;

	if (!uFnSetFocusOnActor)
	{
		uFnSetFocusOnActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");
	}

	UGameThirdPersonCamera_execSetFocusOnActor_Params SetFocusOnActor_Params;
	memset(&SetFocusOnActor_Params, 0, sizeof(SetFocusOnActor_Params));
	SetFocusOnActor_Params.FocusActor = FocusActor;
	memcpy_s(&SetFocusOnActor_Params.FocusBoneName, sizeof(SetFocusOnActor_Params.FocusBoneName), &FocusBoneName, sizeof(FocusBoneName));
	memcpy_s(&SetFocusOnActor_Params.InterpSpeedRange, sizeof(SetFocusOnActor_Params.InterpSpeedRange), &InterpSpeedRange, sizeof(InterpSpeedRange));
	memcpy_s(&SetFocusOnActor_Params.InFocusFOV, sizeof(SetFocusOnActor_Params.InFocusFOV), &InFocusFOV, sizeof(InFocusFOV));
	memcpy_s(&SetFocusOnActor_Params.CameraFOV, sizeof(SetFocusOnActor_Params.CameraFOV), &CameraFOV, sizeof(CameraFOV));
	SetFocusOnActor_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnActor_Params.FocusPitchOffsetDeg, sizeof(SetFocusOnActor_Params.FocusPitchOffsetDeg), &FocusPitchOffsetDeg, sizeof(FocusPitchOffsetDeg));

	this->ProcessEvent(uFnSetFocusOnActor, &SetFocusOnActor_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 FocusWorldLoc                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnLoc = nullptr;

	if (!uFnSetFocusOnLoc)
	{
		uFnSetFocusOnLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");
	}

	UGameThirdPersonCamera_execSetFocusOnLoc_Params SetFocusOnLoc_Params;
	memset(&SetFocusOnLoc_Params, 0, sizeof(SetFocusOnLoc_Params));
	memcpy_s(&SetFocusOnLoc_Params.FocusWorldLoc, sizeof(SetFocusOnLoc_Params.FocusWorldLoc), &FocusWorldLoc, sizeof(FocusWorldLoc));
	memcpy_s(&SetFocusOnLoc_Params.InterpSpeedRange, sizeof(SetFocusOnLoc_Params.InterpSpeedRange), &InterpSpeedRange, sizeof(InterpSpeedRange));
	memcpy_s(&SetFocusOnLoc_Params.InFocusFOV, sizeof(SetFocusOnLoc_Params.InFocusFOV), &InFocusFOV, sizeof(InFocusFOV));
	memcpy_s(&SetFocusOnLoc_Params.CameraFOV, sizeof(SetFocusOnLoc_Params.CameraFOV), &CameraFOV, sizeof(CameraFOV));
	SetFocusOnLoc_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnLoc_Params.FocusPitchOffsetDeg, sizeof(SetFocusOnLoc_Params.FocusPitchOffsetDeg), &FocusPitchOffsetDeg, sizeof(FocusPitchOffsetDeg));

	this->ProcessEvent(uFnSetFocusOnLoc, &SetFocusOnLoc_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        AngleOffset                    (CPF_Parm)

void UGameThirdPersonCamera::AdjustTurn(int32_t AngleOffset)
{
	static UFunction* uFnAdjustTurn = nullptr;

	if (!uFnAdjustTurn)
	{
		uFnAdjustTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustTurn");
	}

	UGameThirdPersonCamera_execAdjustTurn_Params AdjustTurn_Params;
	memset(&AdjustTurn_Params, 0, sizeof(AdjustTurn_Params));
	memcpy_s(&AdjustTurn_Params.AngleOffset, sizeof(AdjustTurn_Params.AngleOffset), &AngleOffset, sizeof(AngleOffset));

	this->ProcessEvent(uFnAdjustTurn, &AdjustTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33872])
// Parameter Info:

void UGameThirdPersonCamera::EndTurn()
{
	static UFunction* uFnEndTurn = nullptr;

	if (!uFnEndTurn)
	{
		uFnEndTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.EndTurn");
	}

	UGameThirdPersonCamera_execEndTurn_Params EndTurn_Params;
	memset(&EndTurn_Params, 0, sizeof(EndTurn_Params));

	this->ProcessEvent(uFnEndTurn, &EndTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        StartAngle                     (CPF_Parm)
// int32_t                        EndAngle                       (CPF_Parm)
// float                          TimeSec                        (CPF_Parm)
// float                          DelaySec                       (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlignTargetWhenFinished       (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::BeginTurn(int32_t StartAngle, int32_t EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static UFunction* uFnBeginTurn = nullptr;

	if (!uFnBeginTurn)
	{
		uFnBeginTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.BeginTurn");
	}

	UGameThirdPersonCamera_execBeginTurn_Params BeginTurn_Params;
	memset(&BeginTurn_Params, 0, sizeof(BeginTurn_Params));
	memcpy_s(&BeginTurn_Params.StartAngle, sizeof(BeginTurn_Params.StartAngle), &StartAngle, sizeof(StartAngle));
	memcpy_s(&BeginTurn_Params.EndAngle, sizeof(BeginTurn_Params.EndAngle), &EndAngle, sizeof(EndAngle));
	memcpy_s(&BeginTurn_Params.TimeSec, sizeof(BeginTurn_Params.TimeSec), &TimeSec, sizeof(TimeSec));
	memcpy_s(&BeginTurn_Params.DelaySec, sizeof(BeginTurn_Params.DelaySec), &DelaySec, sizeof(DelaySec));
	BeginTurn_Params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent(uFnBeginTurn, &BeginTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] (FUNC_Native | FUNC_Protected | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34468])
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnPlayerUpdateCamera = nullptr;

	if (!uFnPlayerUpdateCamera)
	{
		uFnPlayerUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");
	}

	UGameThirdPersonCamera_execPlayerUpdateCamera_Params PlayerUpdateCamera_Params;
	memset(&PlayerUpdateCamera_Params, 0, sizeof(PlayerUpdateCamera_Params));
	PlayerUpdateCamera_Params.P = P;
	PlayerUpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&PlayerUpdateCamera_Params.DeltaTime, sizeof(PlayerUpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&PlayerUpdateCamera_Params.OutVT, sizeof(PlayerUpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnPlayerUpdateCamera, &PlayerUpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &PlayerUpdateCamera_Params.OutVT, sizeof(PlayerUpdateCamera_Params.OutVT));
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCamera");
	}

	UGameThirdPersonCamera_execUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCamera::eventGetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");
	}

	UGameThirdPersonCamera_eventGetDesiredFOV_Params GetDesiredFOV_Params;
	memset(&GetDesiredFOV_Params, 0, sizeof(GetDesiredFOV_Params));
	GetDesiredFOV_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Init");
	}

	UGameThirdPersonCamera_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Reset");
	}

	UGameThirdPersonCamera_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  ModeClass                      (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static UFunction* uFnCreateCameraMode = nullptr;

	if (!uFnCreateCameraMode)
	{
		uFnCreateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");
	}

	UGameThirdPersonCamera_execCreateCameraMode_Params CreateCameraMode_Params;
	memset(&CreateCameraMode_Params, 0, sizeof(CreateCameraMode_Params));
	CreateCameraMode_Params.ModeClass = ModeClass;

	this->ProcessEvent(uFnCreateCameraMode, &CreateCameraMode_Params, nullptr);

	return CreateCameraMode_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags) (iNative[33252])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inHorizFOV                     (CPF_Parm)
// class APawn*                   CameraTargetPawn               (CPF_Parm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static UFunction* uFnAdjustFOVForViewport = nullptr;

	if (!uFnAdjustFOVForViewport)
	{
		uFnAdjustFOVForViewport = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");
	}

	AGamePlayerCamera_execAdjustFOVForViewport_Params AdjustFOVForViewport_Params;
	memset(&AdjustFOVForViewport_Params, 0, sizeof(AdjustFOVForViewport_Params));
	memcpy_s(&AdjustFOVForViewport_Params.inHorizFOV, sizeof(AdjustFOVForViewport_Params.inHorizFOV), &inHorizFOV, sizeof(inHorizFOV));
	AdjustFOVForViewport_Params.CameraTargetPawn = CameraTargetPawn;

	this->ProcessEvent(uFnAdjustFOVForViewport, &AdjustFOVForViewport_Params, nullptr);

	return AdjustFOVForViewport_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ProcessViewRotation");
	}

	AGamePlayerCamera_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ResetInterpolation");
	}

	AGamePlayerCamera_execResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewColorScale                  (CPF_Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static UFunction* uFnSetColorScale = nullptr;

	if (!uFnSetColorScale)
	{
		uFnSetColorScale = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.SetColorScale");
	}

	AGamePlayerCamera_execSetColorScale_Params SetColorScale_Params;
	memset(&SetColorScale_Params, 0, sizeof(SetColorScale_Params));
	memcpy_s(&SetColorScale_Params.NewColorScale, sizeof(SetColorScale_Params.NewColorScale), &NewColorScale, sizeof(NewColorScale));

	this->ProcessEvent(uFnSetColorScale, &SetColorScale_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.DisplayDebug");
	}

	AGamePlayerCamera_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FTViewTarget            OutVT                          (CPF_Const | CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCameraLensEffects = nullptr;

	if (!uFnUpdateCameraLensEffects)
	{
		uFnUpdateCameraLensEffects = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");
	}

	AGamePlayerCamera_execUpdateCameraLensEffects_Params UpdateCameraLensEffects_Params;
	memset(&UpdateCameraLensEffects_Params, 0, sizeof(UpdateCameraLensEffects_Params));
	memcpy_s(&UpdateCameraLensEffects_Params.OutVT, sizeof(UpdateCameraLensEffects_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCameraLensEffects_Params.OutVT, sizeof(UpdateCameraLensEffects_Params.OutVT));
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateViewTarget = nullptr;

	if (!uFnUpdateViewTarget)
	{
		uFnUpdateViewTarget = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.UpdateViewTarget");
	}

	AGamePlayerCamera_execUpdateViewTarget_Params UpdateViewTarget_Params;
	memset(&UpdateViewTarget_Params, 0, sizeof(UpdateViewTarget_Params));
	memcpy_s(&UpdateViewTarget_Params.DeltaTime, sizeof(UpdateViewTarget_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateViewTarget_Params.OutVT, sizeof(UpdateViewTarget_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateViewTarget, &UpdateViewTarget_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateViewTarget_Params.OutVT, sizeof(UpdateViewTarget_Params.OutVT));
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static UFunction* uFnShouldConstrainAspectRatio = nullptr;

	if (!uFnShouldConstrainAspectRatio)
	{
		uFnShouldConstrainAspectRatio = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");
	}

	AGamePlayerCamera_execShouldConstrainAspectRatio_Params ShouldConstrainAspectRatio_Params;
	memset(&ShouldConstrainAspectRatio_Params, 0, sizeof(ShouldConstrainAspectRatio_Params));

	this->ProcessEvent(uFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Params, nullptr);

	return ShouldConstrainAspectRatio_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  CameraTarget                   (CPF_Parm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static UFunction* uFnFindBestCameraType = nullptr;

	if (!uFnFindBestCameraType)
	{
		uFnFindBestCameraType = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.FindBestCameraType");
	}

	AGamePlayerCamera_execFindBestCameraType_Params FindBestCameraType_Params;
	memset(&FindBestCameraType_Params, 0, sizeof(FindBestCameraType_Params));
	FindBestCameraType_Params.CameraTarget = CameraTarget;

	this->ProcessEvent(uFnFindBestCameraType, &FindBestCameraType_Params, nullptr);

	return FindBestCameraType_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.Reset");
	}

	AGamePlayerCamera_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.PostBeginPlay");
	}

	AGamePlayerCamera_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags) (iNative[33609])
// Parameter Info:
// class AActor*                  TargetBase                     (CPF_Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static UFunction* uFnCacheLastTargetBaseInfo = nullptr;

	if (!uFnCacheLastTargetBaseInfo)
	{
		uFnCacheLastTargetBaseInfo = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");
	}

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Params CacheLastTargetBaseInfo_Params;
	memset(&CacheLastTargetBaseInfo_Params, 0, sizeof(CacheLastTargetBaseInfo_Params));
	CacheLastTargetBaseInfo_Params.TargetBase = TargetBase;

	this->ProcessEvent(uFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  CameraClass                    (CPF_Parm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static UFunction* uFnCreateCamera = nullptr;

	if (!uFnCreateCamera)
	{
		uFnCreateCamera = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CreateCamera");
	}

	AGamePlayerCamera_execCreateCamera_Params CreateCamera_Params;
	memset(&CreateCamera_Params, 0, sizeof(CreateCamera_Params));
	CreateCamera_Params.CameraClass = CameraClass;

	this->ProcessEvent(uFnCreateCamera, &CreateCamera_Params, nullptr);

	return CreateCamera_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34654])
// Parameter Info:
// struct FViewOffsetData         NewViewOffset                  (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData& NewViewOffset)
{
	static UFunction* uFnSetViewOffset = nullptr;

	if (!uFnSetViewOffset)
	{
		uFnSetViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");
	}

	UGameThirdPersonCameraMode_execSetViewOffset_Params SetViewOffset_Params;
	memset(&SetViewOffset_Params, 0, sizeof(SetViewOffset_Params));
	memcpy_s(&SetViewOffset_Params.NewViewOffset, sizeof(SetViewOffset_Params.NewViewOffset), &NewViewOffset, sizeof(NewViewOffset));

	this->ProcessEvent(uFnSetViewOffset, &SetViewOffset_Params, nullptr);

	memcpy_s(&NewViewOffset, sizeof(NewViewOffset), &SetViewOffset_Params.NewViewOffset, sizeof(SetViewOffset_Params.NewViewOffset));
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");
	}

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memset(&ModifyPostProcessSettings_Params, 0, sizeof(ModifyPostProcessSettings_Params));
	memcpy_s(&ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP), &PP, sizeof(PP));

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, sizeof(PP), &ModifyPostProcessSettings_Params.PP, sizeof(ModifyPostProcessSettings_Params.PP));
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            VT                             (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget& VT)
{
	static UFunction* uFnUpdatePostProcess = nullptr;

	if (!uFnUpdatePostProcess)
	{
		uFnUpdatePostProcess = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");
	}

	UGameThirdPersonCameraMode_execUpdatePostProcess_Params UpdatePostProcess_Params;
	memset(&UpdatePostProcess_Params, 0, sizeof(UpdatePostProcess_Params));
	memcpy_s(&UpdatePostProcess_Params.DeltaTime, sizeof(UpdatePostProcess_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdatePostProcess_Params.VT, sizeof(UpdatePostProcess_Params.VT), &VT, sizeof(VT));

	this->ProcessEvent(uFnUpdatePostProcess, &UpdatePostProcess_Params, nullptr);

	memcpy_s(&VT, sizeof(VT), &UpdatePostProcess_Params.VT, sizeof(UpdatePostProcess_Params.VT));
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* uFnDOFTrace = nullptr;

	if (!uFnDOFTrace)
	{
		uFnDOFTrace = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");
	}

	UGameThirdPersonCameraMode_execDOFTrace_Params DOFTrace_Params;
	memset(&DOFTrace_Params, 0, sizeof(DOFTrace_Params));
	DOFTrace_Params.TraceOwner = TraceOwner;
	memcpy_s(&DOFTrace_Params.StartTrace, sizeof(DOFTrace_Params.StartTrace), &StartTrace, sizeof(StartTrace));
	memcpy_s(&DOFTrace_Params.EndTrace, sizeof(DOFTrace_Params.EndTrace), &EndTrace, sizeof(EndTrace));

	this->ProcessEvent(uFnDOFTrace, &DOFTrace_Params, nullptr);

	return DOFTrace_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* uFnGetDOFFocusLoc = nullptr;

	if (!uFnGetDOFFocusLoc)
	{
		uFnGetDOFFocusLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");
	}

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Params GetDOFFocusLoc_Params;
	memset(&GetDOFFocusLoc_Params, 0, sizeof(GetDOFFocusLoc_Params));
	GetDOFFocusLoc_Params.TraceOwner = TraceOwner;
	memcpy_s(&GetDOFFocusLoc_Params.StartTrace, sizeof(GetDOFFocusLoc_Params.StartTrace), &StartTrace, sizeof(StartTrace));
	memcpy_s(&GetDOFFocusLoc_Params.EndTrace, sizeof(GetDOFFocusLoc_Params.EndTrace), &EndTrace, sizeof(EndTrace));

	this->ProcessEvent(uFnGetDOFFocusLoc, &GetDOFFocusLoc_Params, nullptr);

	return GetDOFFocusLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] (FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");
	}

	UGameThirdPersonCameraMode_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static UFunction* uFnSetFocusPoint = nullptr;

	if (!uFnSetFocusPoint)
	{
		uFnSetFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");
	}

	UGameThirdPersonCameraMode_execSetFocusPoint_Params SetFocusPoint_Params;
	memset(&SetFocusPoint_Params, 0, sizeof(SetFocusPoint_Params));
	SetFocusPoint_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnSetFocusPoint, &SetFocusPoint_Params, nullptr);

	return SetFocusPoint_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TargetPawn                     (CPF_Parm)
// struct FTViewTarget            CurrentViewTarget              (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget)
{
	static UFunction* uFnGetCameraWorstCaseLoc = nullptr;

	if (!uFnGetCameraWorstCaseLoc)
	{
		uFnGetCameraWorstCaseLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");
	}

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Params GetCameraWorstCaseLoc_Params;
	memset(&GetCameraWorstCaseLoc_Params, 0, sizeof(GetCameraWorstCaseLoc_Params));
	GetCameraWorstCaseLoc_Params.TargetPawn = TargetPawn;
	memcpy_s(&GetCameraWorstCaseLoc_Params.CurrentViewTarget, sizeof(GetCameraWorstCaseLoc_Params.CurrentViewTarget), &CurrentViewTarget, sizeof(CurrentViewTarget));

	this->ProcessEvent(uFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Params, nullptr);

	return GetCameraWorstCaseLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");
	}

	UGameThirdPersonCameraMode_execGetDesiredFOV_Params GetDesiredFOV_Params;
	memset(&GetDesiredFOV_Params, 0, sizeof(GetDesiredFOV_Params));
	GetDesiredFOV_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)
// struct FVector                 offset                         (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset(class APawn* P, const struct FVector& offset)
{
	static UFunction* uFnAdjustViewOffset = nullptr;

	if (!uFnAdjustViewOffset)
	{
		uFnAdjustViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");
	}

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Params AdjustViewOffset_Params;
	memset(&AdjustViewOffset_Params, 0, sizeof(AdjustViewOffset_Params));
	AdjustViewOffset_Params.P = P;
	memcpy_s(&AdjustViewOffset_Params.offset, sizeof(AdjustViewOffset_Params.offset), &offset, sizeof(offset));

	this->ProcessEvent(uFnAdjustViewOffset, &AdjustViewOffset_Params, nullptr);

	return AdjustViewOffset_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* NewMode                        (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeInActive_Params OnBecomeInActive_Params;
	memset(&OnBecomeInActive_Params, 0, sizeof(OnBecomeInActive_Params));
	OnBecomeInActive_Params.TargetPawn = TargetPawn;
	OnBecomeInActive_Params.NewMode = NewMode;

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.TargetPawn = TargetPawn;
	OnBecomeActive_Params.PrevMode = PrevMode;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCameraMode::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.Init");
	}

	UGameThirdPersonCameraMode_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34561])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 RelativeSpaceOffset            (CPF_Parm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static UFunction* uFnRelativeToWorldOffset = nullptr;

	if (!uFnRelativeToWorldOffset)
	{
		uFnRelativeToWorldOffset = UFunction::FindFunction("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");
	}

	UGameSpecialMove_execRelativeToWorldOffset_Params RelativeToWorldOffset_Params;
	memset(&RelativeToWorldOffset_Params, 0, sizeof(RelativeToWorldOffset_Params));
	memcpy_s(&RelativeToWorldOffset_Params.InRotation, sizeof(RelativeToWorldOffset_Params.InRotation), &InRotation, sizeof(InRotation));
	memcpy_s(&RelativeToWorldOffset_Params.RelativeSpaceOffset, sizeof(RelativeToWorldOffset_Params.RelativeSpaceOffset), &RelativeSpaceOffset, sizeof(RelativeSpaceOffset));

	this->ProcessEvent(uFnRelativeToWorldOffset, &RelativeToWorldOffset_Params, nullptr);

	return RelativeToWorldOffset_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34889])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 WorldSpaceOffset               (CPF_Parm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static UFunction* uFnWorldToRelativeOffset = nullptr;

	if (!uFnWorldToRelativeOffset)
	{
		uFnWorldToRelativeOffset = UFunction::FindFunction("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");
	}

	UGameSpecialMove_execWorldToRelativeOffset_Params WorldToRelativeOffset_Params;
	memset(&WorldToRelativeOffset_Params, 0, sizeof(WorldToRelativeOffset_Params));
	memcpy_s(&WorldToRelativeOffset_Params.InRotation, sizeof(WorldToRelativeOffset_Params.InRotation), &InRotation, sizeof(InRotation));
	memcpy_s(&WorldToRelativeOffset_Params.WorldSpaceOffset, sizeof(WorldToRelativeOffset_Params.WorldSpaceOffset), &WorldSpaceOffset, sizeof(WorldSpaceOffset));

	this->ProcessEvent(uFnWorldToRelativeOffset, &WorldToRelativeOffset_Params, nullptr);

	return WorldToRelativeOffset_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[33952])
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// struct FRotator                NewRotation                    (CPF_Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static UFunction* uFnForcePawnRotation = nullptr;

	if (!uFnForcePawnRotation)
	{
		uFnForcePawnRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ForcePawnRotation");
	}

	UGameSpecialMove_execForcePawnRotation_Params ForcePawnRotation_Params;
	memset(&ForcePawnRotation_Params, 0, sizeof(ForcePawnRotation_Params));
	ForcePawnRotation_Params.P = P;
	memcpy_s(&ForcePawnRotation_Params.NewRotation, sizeof(ForcePawnRotation_Params.NewRotation), &NewRotation, sizeof(NewRotation));

	this->ProcessEvent(uFnForcePawnRotation, &ForcePawnRotation_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    EventName                      (CPF_Parm)
// class UObject*                 Sender                         (CPF_Parm)

bool UGameSpecialMove::MessageEvent(const class FName& EventName, class UObject* Sender)
{
	static UFunction* uFnMessageEvent = nullptr;

	if (!uFnMessageEvent)
	{
		uFnMessageEvent = UFunction::FindFunction("Function GameFramework.GameSpecialMove.MessageEvent");
	}

	UGameSpecialMove_execMessageEvent_Params MessageEvent_Params;
	memset(&MessageEvent_Params, 0, sizeof(MessageEvent_Params));
	memcpy_s(&MessageEvent_Params.EventName, sizeof(MessageEvent_Params.EventName), &EventName, sizeof(EventName));
	MessageEvent_Params.Sender = Sender;

	this->ProcessEvent(uFnMessageEvent, &MessageEvent_Params, nullptr);

	return MessageEvent_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34576])
// Parameter Info:

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static UFunction* uFnResetFacePreciseRotation = nullptr;

	if (!uFnResetFacePreciseRotation)
	{
		uFnResetFacePreciseRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");
	}

	UGameSpecialMove_execResetFacePreciseRotation_Params ResetFacePreciseRotation_Params;
	memset(&ResetFacePreciseRotation_Params, 0, sizeof(ResetFacePreciseRotation_Params));

	this->ProcessEvent(uFnResetFacePreciseRotation, &ResetFacePreciseRotation_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameSpecialMove::eventReachedPrecisePosition()
{
	static UFunction* uFnReachedPrecisePosition = nullptr;

	if (!uFnReachedPrecisePosition)
	{
		uFnReachedPrecisePosition = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");
	}

	UGameSpecialMove_eventReachedPrecisePosition_Params ReachedPrecisePosition_Params;
	memset(&ReachedPrecisePosition_Params, 0, sizeof(ReachedPrecisePosition_Params));

	this->ProcessEvent(uFnReachedPrecisePosition, &ReachedPrecisePosition_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[34639])
// Parameter Info:
// struct FRotator                RotationToFace                 (CPF_Parm)
// float                          InterpolationTime              (CPF_Parm)

void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static UFunction* uFnSetFacePreciseRotation = nullptr;

	if (!uFnSetFacePreciseRotation)
	{
		uFnSetFacePreciseRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");
	}

	UGameSpecialMove_execSetFacePreciseRotation_Params SetFacePreciseRotation_Params;
	memset(&SetFacePreciseRotation_Params, 0, sizeof(SetFacePreciseRotation_Params));
	memcpy_s(&SetFacePreciseRotation_Params.RotationToFace, sizeof(SetFacePreciseRotation_Params.RotationToFace), &RotationToFace, sizeof(RotationToFace));
	memcpy_s(&SetFacePreciseRotation_Params.InterpolationTime, sizeof(SetFacePreciseRotation_Params.InterpolationTime), &InterpolationTime, sizeof(InterpolationTime));

	this->ProcessEvent(uFnSetFacePreciseRotation, &SetFacePreciseRotation_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[34648])
// Parameter Info:
// struct FVector                 DestinationToReach             (CPF_Parm)
// uint32_t                       bCancel                        (CPF_OptionalParm | CPF_Parm)

void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static UFunction* uFnSetReachPreciseDestination = nullptr;

	if (!uFnSetReachPreciseDestination)
	{
		uFnSetReachPreciseDestination = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");
	}

	UGameSpecialMove_execSetReachPreciseDestination_Params SetReachPreciseDestination_Params;
	memset(&SetReachPreciseDestination_Params, 0, sizeof(SetReachPreciseDestination_Params));
	memcpy_s(&SetReachPreciseDestination_Params.DestinationToReach, sizeof(SetReachPreciseDestination_Params.DestinationToReach), &DestinationToReach, sizeof(DestinationToReach));
	SetReachPreciseDestination_Params.bCancel = bCancel;

	this->ProcessEvent(uFnSetReachPreciseDestination, &SetReachPreciseDestination_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static UFunction* uFnShouldReplicate = nullptr;

	if (!uFnShouldReplicate)
	{
		uFnShouldReplicate = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ShouldReplicate");
	}

	UGameSpecialMove_execShouldReplicate_Params ShouldReplicate_Params;
	memset(&ShouldReplicate_Params, 0, sizeof(ShouldReplicate_Params));

	this->ProcessEvent(uFnShouldReplicate, &ShouldReplicate_Params, nullptr);

	return ShouldReplicate_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static UFunction* uFnSpecialMoveFlagsUpdated = nullptr;

	if (!uFnSpecialMoveFlagsUpdated)
	{
		uFnSpecialMoveFlagsUpdated = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");
	}

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Params SpecialMoveFlagsUpdated_Params;
	memset(&SpecialMoveFlagsUpdated_Params, 0, sizeof(SpecialMoveFlagsUpdated_Params));

	this->ProcessEvent(uFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameSpecialMove.Tick");
	}

	UGameSpecialMove_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    PrevMove                       (CPF_Parm)
// class FName                    NextMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveEnded(const class FName& PrevMove, const class FName& NextMove)
{
	static UFunction* uFnSpecialMoveEnded = nullptr;

	if (!uFnSpecialMoveEnded)
	{
		uFnSpecialMoveEnded = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveEnded");
	}

	UGameSpecialMove_execSpecialMoveEnded_Params SpecialMoveEnded_Params;
	memset(&SpecialMoveEnded_Params, 0, sizeof(SpecialMoveEnded_Params));
	memcpy_s(&SpecialMoveEnded_Params.PrevMove, sizeof(SpecialMoveEnded_Params.PrevMove), &PrevMove, sizeof(PrevMove));
	memcpy_s(&SpecialMoveEnded_Params.NextMove, sizeof(SpecialMoveEnded_Params.NextMove), &NextMove, sizeof(NextMove));

	this->ProcessEvent(uFnSpecialMoveEnded, &SpecialMoveEnded_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bForced                        (CPF_Parm)
// class FName                    PrevMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveStarted(bool bForced, const class FName& PrevMove)
{
	static UFunction* uFnSpecialMoveStarted = nullptr;

	if (!uFnSpecialMoveStarted)
	{
		uFnSpecialMoveStarted = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveStarted");
	}

	UGameSpecialMove_execSpecialMoveStarted_Params SpecialMoveStarted_Params;
	memset(&SpecialMoveStarted_Params, 0, sizeof(SpecialMoveStarted_Params));
	SpecialMoveStarted_Params.bForced = bForced;
	memcpy_s(&SpecialMoveStarted_Params.PrevMove, sizeof(SpecialMoveStarted_Params.PrevMove), &PrevMove, sizeof(PrevMove));

	this->ProcessEvent(uFnSpecialMoveStarted, &SpecialMoveStarted_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static UFunction* uFnInternalCanDoSpecialMove = nullptr;

	if (!uFnInternalCanDoSpecialMove)
	{
		uFnInternalCanDoSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");
	}

	UGameSpecialMove_execInternalCanDoSpecialMove_Params InternalCanDoSpecialMove_Params;
	memset(&InternalCanDoSpecialMove_Params, 0, sizeof(InternalCanDoSpecialMove_Params));

	this->ProcessEvent(uFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Params, nullptr);

	return InternalCanDoSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] (FUNC_Final | FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bForceCheck                    (CPF_OptionalParm | CPF_Parm)

bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static UFunction* uFnCanDoSpecialMove = nullptr;

	if (!uFnCanDoSpecialMove)
	{
		uFnCanDoSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanDoSpecialMove");
	}

	UGameSpecialMove_execCanDoSpecialMove_Params CanDoSpecialMove_Params;
	memset(&CanDoSpecialMove_Params, 0, sizeof(CanDoSpecialMove_Params));
	CanDoSpecialMove_Params.bForceCheck = bForceCheck;

	this->ProcessEvent(uFnCanDoSpecialMove, &CanDoSpecialMove_Params, nullptr);

	return CanDoSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    InMove                         (CPF_Parm)

bool UGameSpecialMove::CanOverrideSpecialMove(const class FName& InMove)
{
	static UFunction* uFnCanOverrideSpecialMove = nullptr;

	if (!uFnCanOverrideSpecialMove)
	{
		uFnCanOverrideSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");
	}

	UGameSpecialMove_execCanOverrideSpecialMove_Params CanOverrideSpecialMove_Params;
	memset(&CanOverrideSpecialMove_Params, 0, sizeof(CanOverrideSpecialMove_Params));
	memcpy_s(&CanOverrideSpecialMove_Params.InMove, sizeof(CanOverrideSpecialMove_Params.InMove), &InMove, sizeof(InMove));

	this->ProcessEvent(uFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Params, nullptr);

	return CanOverrideSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    NewMove                        (CPF_Parm)

bool UGameSpecialMove::CanOverrideMoveWith(const class FName& NewMove)
{
	static UFunction* uFnCanOverrideMoveWith = nullptr;

	if (!uFnCanOverrideMoveWith)
	{
		uFnCanOverrideMoveWith = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");
	}

	UGameSpecialMove_execCanOverrideMoveWith_Params CanOverrideMoveWith_Params;
	memset(&CanOverrideMoveWith_Params, 0, sizeof(CanOverrideMoveWith_Params));
	memcpy_s(&CanOverrideMoveWith_Params.NewMove, sizeof(CanOverrideMoveWith_Params.NewMove), &NewMove, sizeof(NewMove));

	this->ProcessEvent(uFnCanOverrideMoveWith, &CanOverrideMoveWith_Params, nullptr);

	return CanOverrideMoveWith_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    NextMove                       (CPF_Parm)

bool UGameSpecialMove::CanChainMove(const class FName& NextMove)
{
	static UFunction* uFnCanChainMove = nullptr;

	if (!uFnCanChainMove)
	{
		uFnCanChainMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanChainMove");
	}

	UGameSpecialMove_execCanChainMove_Params CanChainMove_Params;
	memset(&CanChainMove_Params, 0, sizeof(CanChainMove_Params));
	memcpy_s(&CanChainMove_Params.NextMove, sizeof(CanChainMove_Params.NextMove), &NextMove, sizeof(NextMove));

	this->ProcessEvent(uFnCanChainMove, &CanChainMove_Params, nullptr);

	return CanChainMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Flags                          (CPF_Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int32_t Flags)
{
	static UFunction* uFnExtractSpecialMoveFlags = nullptr;

	if (!uFnExtractSpecialMoveFlags)
	{
		uFnExtractSpecialMoveFlags = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");
	}

	UGameSpecialMove_execExtractSpecialMoveFlags_Params ExtractSpecialMoveFlags_Params;
	memset(&ExtractSpecialMoveFlags_Params, 0, sizeof(ExtractSpecialMoveFlags_Params));
	memcpy_s(&ExtractSpecialMoveFlags_Params.Flags, sizeof(ExtractSpecialMoveFlags_Params.Flags), &Flags, sizeof(Flags));

	this->ProcessEvent(uFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        out_Flags                      (CPF_Parm | CPF_OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int32_t& out_Flags)
{
	static UFunction* uFnInitSpecialMoveFlags = nullptr;

	if (!uFnInitSpecialMoveFlags)
	{
		uFnInitSpecialMoveFlags = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");
	}

	UGameSpecialMove_execInitSpecialMoveFlags_Params InitSpecialMoveFlags_Params;
	memset(&InitSpecialMoveFlags_Params, 0, sizeof(InitSpecialMoveFlags_Params));
	memcpy_s(&InitSpecialMoveFlags_Params.out_Flags, sizeof(InitSpecialMoveFlags_Params.out_Flags), &out_Flags, sizeof(out_Flags));

	this->ProcessEvent(uFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Params, nullptr);

	memcpy_s(&out_Flags, sizeof(out_Flags), &InitSpecialMoveFlags_Params.out_Flags, sizeof(InitSpecialMoveFlags_Params.out_Flags));
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGamePawn*               inPawn                         (CPF_Parm)
// class FName                    InHandle                       (CPF_Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const class FName& InHandle)
{
	static UFunction* uFnInitSpecialMove = nullptr;

	if (!uFnInitSpecialMove)
	{
		uFnInitSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InitSpecialMove");
	}

	UGameSpecialMove_execInitSpecialMove_Params InitSpecialMove_Params;
	memset(&InitSpecialMove_Params, 0, sizeof(InitSpecialMove_Params));
	InitSpecialMove_Params.inPawn = inPawn;
	memcpy_s(&InitSpecialMove_Params.InHandle, sizeof(InitSpecialMove_Params.InHandle), &InHandle, sizeof(InHandle));

	this->ProcessEvent(uFnInitSpecialMove, &InitSpecialMove_Params, nullptr);
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[12929])
// Parameter Info:

void UGameStateObject::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameStateObject.Reset");
	}

	UGameStateObject_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[12897])
// Parameter Info:

void UGameStateObject::eventPreProcessStream()
{
	static UFunction* uFnPreProcessStream = nullptr;

	if (!uFnPreProcessStream)
	{
		uFnPreProcessStream = UFunction::FindFunction("Function GameFramework.GameStateObject.PreProcessStream");
	}

	UGameStateObject_eventPreProcessStream_Params PreProcessStream_Params;
	memset(&PreProcessStream_Params, 0, sizeof(PreProcessStream_Params));

	this->ProcessEvent(uFnPreProcessStream, &PreProcessStream_Params, nullptr);
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34014])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        EventID                        (CPF_Parm)
// int32_t                        AggregateID                    (CPF_Parm | CPF_OutParm)
// int32_t                        TargetAggregateID              (CPF_Parm | CPF_OutParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int32_t EventID, int32_t& AggregateID, int32_t& TargetAggregateID)
{
	static UFunction* uFnGetAggregateMappingIDs = nullptr;

	if (!uFnGetAggregateMappingIDs)
	{
		uFnGetAggregateMappingIDs = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");
	}

	UGameStatsAggregator_execGetAggregateMappingIDs_Params GetAggregateMappingIDs_Params;
	memset(&GetAggregateMappingIDs_Params, 0, sizeof(GetAggregateMappingIDs_Params));
	memcpy_s(&GetAggregateMappingIDs_Params.EventID, sizeof(GetAggregateMappingIDs_Params.EventID), &EventID, sizeof(EventID));
	memcpy_s(&GetAggregateMappingIDs_Params.AggregateID, sizeof(GetAggregateMappingIDs_Params.AggregateID), &AggregateID, sizeof(AggregateID));
	memcpy_s(&GetAggregateMappingIDs_Params.TargetAggregateID, sizeof(GetAggregateMappingIDs_Params.TargetAggregateID), &TargetAggregateID, sizeof(TargetAggregateID));

	this->ProcessEvent(uFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Params, nullptr);

	memcpy_s(&AggregateID, sizeof(AggregateID), &GetAggregateMappingIDs_Params.AggregateID, sizeof(GetAggregateMappingIDs_Params.AggregateID));
	memcpy_s(&TargetAggregateID, sizeof(TargetAggregateID), &GetAggregateMappingIDs_Params.TargetAggregateID, sizeof(GetAggregateMappingIDs_Params.TargetAggregateID));

	return GetAggregateMappingIDs_Params.ReturnValue;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[12929])
// Parameter Info:

void UGameStatsAggregator::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.Reset");
	}

	UGameStatsAggregator_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[12888])
// Parameter Info:

void UGameStatsAggregator::eventPostProcessStream()
{
	static UFunction* uFnPostProcessStream = nullptr;

	if (!uFnPostProcessStream)
	{
		uFnPostProcessStream = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.PostProcessStream");
	}

	UGameStatsAggregator_eventPostProcessStream_Params PostProcessStream_Params;
	memset(&PostProcessStream_Params, 0, sizeof(PostProcessStream_Params));

	this->ProcessEvent(uFnPostProcessStream, &PostProcessStream_Params, nullptr);
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[12897])
// Parameter Info:

void UGameStatsAggregator::eventPreProcessStream()
{
	static UFunction* uFnPreProcessStream = nullptr;

	if (!uFnPreProcessStream)
	{
		uFnPreProcessStream = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.PreProcessStream");
	}

	UGameStatsAggregator_eventPreProcessStream_Params PreProcessStream_Params;
	memset(&PreProcessStream_Params, 0, sizeof(PreProcessStream_Params));

	this->ProcessEvent(uFnPreProcessStream, &PreProcessStream_Params, nullptr);
};

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraHUD::eventPostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.PostRender");
	}

	ADebugCameraHUD_eventPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm | CPF_EditInline)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool ADebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& Y)
{
	static UFunction* uFnDisplayMaterials = nullptr;

	if (!uFnDisplayMaterials)
	{
		uFnDisplayMaterials = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.DisplayMaterials");
	}

	ADebugCameraHUD_execDisplayMaterials_Params DisplayMaterials_Params;
	memset(&DisplayMaterials_Params, 0, sizeof(DisplayMaterials_Params));
	memcpy_s(&DisplayMaterials_Params.X, sizeof(DisplayMaterials_Params.X), &X, sizeof(X));
	memcpy_s(&DisplayMaterials_Params.DY, sizeof(DisplayMaterials_Params.DY), &DY, sizeof(DY));
	DisplayMaterials_Params.MeshComp = MeshComp;
	memcpy_s(&DisplayMaterials_Params.Y, sizeof(DisplayMaterials_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnDisplayMaterials, &DisplayMaterials_Params, nullptr);

	memcpy_s(&Y, sizeof(Y), &DisplayMaterials_Params.Y, sizeof(DisplayMaterials_Params.Y));

	return DisplayMaterials_Params.ReturnValue;
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ADebugCameraHUD::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.PostBeginPlay");
	}

	ADebugCameraHUD_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// class FName                    Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool UDebugCameraInput::InputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function GameFramework.DebugCameraInput.InputKey");
	}

	UDebugCameraInput_execInputKey_Params InputKey_Params;
	memset(&InputKey_Params, 0, sizeof(InputKey_Params));
	memcpy_s(&InputKey_Params.ControllerId, sizeof(InputKey_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&InputKey_Params.Key, sizeof(InputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&InputKey_Params.Event, sizeof(InputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&InputKey_Params.AmountDepressed, sizeof(InputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));
	InputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);

	return InputKey_Params.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static UFunction* uFnGetMaxSpawnDist = nullptr;

	if (!uFnGetMaxSpawnDist)
	{
		uFnGetMaxSpawnDist = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");
	}

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Params GetMaxSpawnDist_Params;
	memset(&GetMaxSpawnDist_Params, 0, sizeof(GetMaxSpawnDist_Params));

	this->ProcessEvent(uFnGetMaxSpawnDist, &GetMaxSpawnDist_Params, nullptr);

	return GetMaxSpawnDist_Params.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");
	}

	UGameCrowdSpawnerInterface_execAgentDestroyed_Params AgentDestroyed_Params;
	memset(&AgentDestroyed_Params, 0, sizeof(AgentDestroyed_Params));
	AgentDestroyed_Params.Agent = Agent;

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm | CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm | CPF_OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& SpawnPos, struct FRotator& SpawnRot)
{
	static UFunction* uFnGetSpawnPosition = nullptr;

	if (!uFnGetSpawnPosition)
	{
		uFnGetSpawnPosition = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");
	}

	UGameCrowdSpawnInterface_execGetSpawnPosition_Params GetSpawnPosition_Params;
	memset(&GetSpawnPosition_Params, 0, sizeof(GetSpawnPosition_Params));
	GetSpawnPosition_Params.Spawner = Spawner;
	memcpy_s(&GetSpawnPosition_Params.SpawnPos, sizeof(GetSpawnPosition_Params.SpawnPos), &SpawnPos, sizeof(SpawnPos));
	memcpy_s(&GetSpawnPosition_Params.SpawnRot, sizeof(GetSpawnPosition_Params.SpawnRot), &SpawnRot, sizeof(SpawnRot));

	this->ProcessEvent(uFnGetSpawnPosition, &GetSpawnPosition_Params, nullptr);

	memcpy_s(&SpawnPos, sizeof(SpawnPos), &GetSpawnPosition_Params.SpawnPos, sizeof(GetSpawnPosition_Params.SpawnPos));
	memcpy_s(&SpawnRot, sizeof(SpawnRot), &GetSpawnPosition_Params.SpawnRot, sizeof(GetSpawnPosition_Params.SpawnRot));
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   InEnemy                        (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* uFnIsEnemyBasedOnInterpActor = nullptr;

	if (!uFnIsEnemyBasedOnInterpActor)
	{
		uFnIsEnemyBasedOnInterpActor = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");
	}

	UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Params IsEnemyBasedOnInterpActor_Params;
	memset(&IsEnemyBasedOnInterpActor_Params, 0, sizeof(IsEnemyBasedOnInterpActor_Params));
	IsEnemyBasedOnInterpActor_Params.InEnemy = InEnemy;

	this->ProcessEvent(uFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Params, nullptr);

	return IsEnemyBasedOnInterpActor_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");
	}

	UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memset(&HandlePathObstruction_Params, 0, sizeof(HandlePathObstruction_Params));
	HandlePathObstruction_Params.BlockedBy = BlockedBy;

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");
	}

	UGameAICmd_Hover_MoveToGoal_execPushed_Params Pushed_Params;
	memset(&Pushed_Params, 0, sizeof(Pushed_Params));

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnMoveToGoal = nullptr;

	if (!uFnMoveToGoal)
	{
		uFnMoveToGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");
	}

	UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Params MoveToGoal_Params;
	memset(&MoveToGoal_Params, 0, sizeof(MoveToGoal_Params));
	MoveToGoal_Params.AI = AI;
	MoveToGoal_Params.InGoal = InGoal;
	memcpy_s(&MoveToGoal_Params.InGoalDistance, sizeof(MoveToGoal_Params.InGoalDistance), &InGoalDistance, sizeof(InGoalDistance));
	memcpy_s(&MoveToGoal_Params.InHoverHeight, sizeof(MoveToGoal_Params.InHoverHeight), &InHoverHeight, sizeof(InHoverHeight));

	UGameAICmd_Hover_MoveToGoal::StaticClass()->ProcessEvent(uFnMoveToGoal, &MoveToGoal_Params, nullptr);

	return MoveToGoal_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    H                              (CPF_Parm)
// class FName                    Category                       (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::eventDrawDebug(class AHUD* H, const class FName& Category)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Params DrawDebug_Params;
	memset(&DrawDebug_Params, 0, sizeof(DrawDebug_Params));
	DrawDebug_Params.H = H;
	memcpy_s(&DrawDebug_Params.Category, sizeof(DrawDebug_Params.Category), &Category, sizeof(Category));

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   InEnemy                        (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* uFnIsEnemyBasedOnInterpActor = nullptr;

	if (!uFnIsEnemyBasedOnInterpActor)
	{
		uFnIsEnemyBasedOnInterpActor = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Params IsEnemyBasedOnInterpActor_Params;
	memset(&IsEnemyBasedOnInterpActor_Params, 0, sizeof(IsEnemyBasedOnInterpActor_Params));
	IsEnemyBasedOnInterpActor_Params.InEnemy = InEnemy;

	this->ProcessEvent(uFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Params, nullptr);

	return IsEnemyBasedOnInterpActor_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs()
{
	static UFunction* uFnShouldUpdateBreadCrumbs = nullptr;

	if (!uFnShouldUpdateBreadCrumbs)
	{
		uFnShouldUpdateBreadCrumbs = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Params ShouldUpdateBreadCrumbs_Params;
	memset(&ShouldUpdateBreadCrumbs_Params, 0, sizeof(ShouldUpdateBreadCrumbs_Params));

	this->ProcessEvent(uFnShouldUpdateBreadCrumbs, &ShouldUpdateBreadCrumbs_Params, nullptr);

	return ShouldUpdateBreadCrumbs_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static UFunction* uFnHasReachedGoal = nullptr;

	if (!uFnHasReachedGoal)
	{
		uFnHasReachedGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Params HasReachedGoal_Params;
	memset(&HasReachedGoal_Params, 0, sizeof(HasReachedGoal_Params));

	this->ProcessEvent(uFnHasReachedGoal, &HasReachedGoal_Params, nullptr);

	return HasReachedGoal_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static UFunction* uFnReEvaluatePath = nullptr;

	if (!uFnReEvaluatePath)
	{
		uFnReEvaluatePath = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Params ReEvaluatePath_Params;
	memset(&ReEvaluatePath_Params, 0, sizeof(ReEvaluatePath_Params));

	this->ProcessEvent(uFnReEvaluatePath, &ReEvaluatePath_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memset(&HandlePathObstruction_Params, 0, sizeof(HandlePathObstruction_Params));
	HandlePathObstruction_Params.BlockedBy = BlockedBy;

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Params Popped_Params;
	memset(&Popped_Params, 0, sizeof(Popped_Params));

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Params Pushed_Params;
	memset(&Pushed_Params, 0, sizeof(Pushed_Params));

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh(class AGameAIController* AI)
{
	static UFunction* uFnHoverBackToMesh = nullptr;

	if (!uFnHoverBackToMesh)
	{
		uFnHoverBackToMesh = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Params HoverBackToMesh_Params;
	memset(&HoverBackToMesh_Params, 0, sizeof(HoverBackToMesh_Params));
	HoverBackToMesh_Params.AI = AI;

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverBackToMesh, &HoverBackToMesh_Params, nullptr);

	return HoverBackToMesh_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// struct FVector                 InPoint                        (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnHoverToPoint = nullptr;

	if (!uFnHoverToPoint)
	{
		uFnHoverToPoint = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Params HoverToPoint_Params;
	memset(&HoverToPoint_Params, 0, sizeof(HoverToPoint_Params));
	HoverToPoint_Params.AI = AI;
	memcpy_s(&HoverToPoint_Params.InPoint, sizeof(HoverToPoint_Params.InPoint), &InPoint, sizeof(InPoint));
	memcpy_s(&HoverToPoint_Params.InGoalDistance, sizeof(HoverToPoint_Params.InGoalDistance), &InGoalDistance, sizeof(InGoalDistance));
	memcpy_s(&HoverToPoint_Params.InHoverHeight, sizeof(HoverToPoint_Params.InHoverHeight), &InHoverHeight, sizeof(InHoverHeight));

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverToPoint, &HoverToPoint_Params, nullptr);

	return HoverToPoint_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnHoverToGoal = nullptr;

	if (!uFnHoverToGoal)
	{
		uFnHoverToGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Params HoverToGoal_Params;
	memset(&HoverToGoal_Params, 0, sizeof(HoverToGoal_Params));
	HoverToGoal_Params.AI = AI;
	HoverToGoal_Params.InGoal = InGoal;
	memcpy_s(&HoverToGoal_Params.InGoalDistance, sizeof(HoverToGoal_Params.InGoalDistance), &InGoalDistance, sizeof(InGoalDistance));
	memcpy_s(&HoverToGoal_Params.InHoverHeight, sizeof(HoverToGoal_Params.InHoverHeight), &InHoverHeight, sizeof(InHoverHeight));

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverToGoal, &HoverToGoal_Params, nullptr);

	return HoverToGoal_Params.ReturnValue;
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameFixedCamera.OnBecomeActive");
	}

	UGameFixedCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameFixedCamera.UpdateCamera");
	}

	UGameFixedCamera_execUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameKActorSpawnableEffect::StartScalingDown()
{
	static UFunction* uFnStartScalingDown = nullptr;

	if (!uFnStartScalingDown)
	{
		uFnStartScalingDown = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");
	}

	AGameKActorSpawnableEffect_execStartScalingDown_Params StartScalingDown_Params;
	memset(&StartScalingDown_Params, 0, sizeof(StartScalingDown_Params));

	this->ProcessEvent(uFnStartScalingDown, &StartScalingDown_Params, nullptr);
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameKActorSpawnableEffect::eventFellOutOfWorld(class UClass* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");
	}

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memset(&FellOutOfWorld_Params, 0, sizeof(FellOutOfWorld_Params));
	FellOutOfWorld_Params.dmgType = dmgType;

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameKActorSpawnableEffect::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");
	}

	AGameKActorSpawnableEffect_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AMobileDebugCameraController::SetupDebugZones()
{
	static UFunction* uFnSetupDebugZones = nullptr;

	if (!uFnSetupDebugZones)
	{
		uFnSetupDebugZones = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.SetupDebugZones");
	}

	AMobileDebugCameraController_execSetupDebugZones_Params SetupDebugZones_Params;
	memset(&SetupDebugZones_Params, 0, sizeof(SetupDebugZones_Params));

	this->ProcessEvent(uFnSetupDebugZones, &SetupDebugZones_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileDebugCameraController::eventInitInputSystem()
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.InitInputSystem");
	}

	AMobileDebugCameraController_eventInitInputSystem_Params InitInputSystem_Params;
	memset(&InitInputSystem_Params, 0, sizeof(InitInputSystem_Params));

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* uFnOnDeactivate = nullptr;

	if (!uFnOnDeactivate)
	{
		uFnOnDeactivate = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.OnDeactivate");
	}

	AMobileDebugCameraController_execOnDeactivate_Params OnDeactivate_Params;
	memset(&OnDeactivate_Params, 0, sizeof(OnDeactivate_Params));
	OnDeactivate_Params.PC = PC;

	this->ProcessEvent(uFnOnDeactivate, &OnDeactivate_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileDebugCameraController::InitDebugInputSystem()
{
	static UFunction* uFnInitDebugInputSystem = nullptr;

	if (!uFnInitDebugInputSystem)
	{
		uFnInitDebugInputSystem = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");
	}

	AMobileDebugCameraController_execInitDebugInputSystem_Params InitDebugInputSystem_Params;
	memset(&InitDebugInputSystem_Params, 0, sizeof(InitDebugInputSystem_Params));

	this->ProcessEvent(uFnInitDebugInputSystem, &InitDebugInputSystem_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* uFnOnActivate = nullptr;

	if (!uFnOnActivate)
	{
		uFnOnActivate = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.OnActivate");
	}

	AMobileDebugCameraController_execOnActivate_Params OnActivate_Params;
	memset(&OnActivate_Params, 0, sizeof(OnActivate_Params));
	OnActivate_Params.PC = PC;

	this->ProcessEvent(uFnOnActivate, &OnActivate_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// class FName                    Key                            (CPF_Parm)
// EInputEvent                    Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool UMobileDebugCameraInput::InputKey(int32_t ControllerId, const class FName& Key, EInputEvent Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function GameFramework.MobileDebugCameraInput.InputKey");
	}

	UMobileDebugCameraInput_execInputKey_Params InputKey_Params;
	memset(&InputKey_Params, 0, sizeof(InputKey_Params));
	memcpy_s(&InputKey_Params.ControllerId, sizeof(InputKey_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	memcpy_s(&InputKey_Params.Key, sizeof(InputKey_Params.Key), &Key, sizeof(Key));
	memcpy_s(&InputKey_Params.Event, sizeof(InputKey_Params.Event), &Event, sizeof(Event));
	memcpy_s(&InputKey_Params.AmountDepressed, sizeof(InputKey_Params.AmountDepressed), &AmountDepressed, sizeof(AmountDepressed));
	InputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);

	return InputKey_Params.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AMobileDebugCameraHUD::eventPostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.PostRender");
	}

	AMobileDebugCameraHUD_eventPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm | CPF_EditInline)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool AMobileDebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& Y)
{
	static UFunction* uFnDisplayMaterials = nullptr;

	if (!uFnDisplayMaterials)
	{
		uFnDisplayMaterials = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");
	}

	AMobileDebugCameraHUD_execDisplayMaterials_Params DisplayMaterials_Params;
	memset(&DisplayMaterials_Params, 0, sizeof(DisplayMaterials_Params));
	memcpy_s(&DisplayMaterials_Params.X, sizeof(DisplayMaterials_Params.X), &X, sizeof(X));
	memcpy_s(&DisplayMaterials_Params.DY, sizeof(DisplayMaterials_Params.DY), &DY, sizeof(DY));
	DisplayMaterials_Params.MeshComp = MeshComp;
	memcpy_s(&DisplayMaterials_Params.Y, sizeof(DisplayMaterials_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnDisplayMaterials, &DisplayMaterials_Params, nullptr);

	memcpy_s(&Y, sizeof(Y), &DisplayMaterials_Params.Y, sizeof(DisplayMaterials_Params.Y));

	return DisplayMaterials_Params.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileDebugCameraHUD::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");
	}

	AMobileDebugCameraHUD_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuBar::UpdateItemViewports()
{
	static UFunction* uFnUpdateItemViewports = nullptr;

	if (!uFnUpdateItemViewports)
	{
		uFnUpdateItemViewports = UFunction::FindFunction("Function GameFramework.MobileMenuBar.UpdateItemViewports");
	}

	UMobileMenuBar_execUpdateItemViewports_Params UpdateItemViewports_Params;
	memset(&UpdateItemViewports_Params, 0, sizeof(UpdateItemViewports_Params));

	this->ProcessEvent(uFnUpdateItemViewports, &UpdateItemViewports_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.SetFirstItem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        first                          (CPF_Parm)

void UMobileMenuBar::SetFirstItem(int32_t first)
{
	static UFunction* uFnSetFirstItem = nullptr;

	if (!uFnSetFirstItem)
	{
		uFnSetFirstItem = UFunction::FindFunction("Function GameFramework.MobileMenuBar.SetFirstItem");
	}

	UMobileMenuBar_execSetFirstItem_Params SetFirstItem_Params;
	memset(&SetFirstItem_Params, 0, sizeof(SetFirstItem_Params));
	memcpy_s(&SetFirstItem_Params.first, sizeof(SetFirstItem_Params.first), &first, sizeof(first));

	this->ProcessEvent(uFnSetFirstItem, &SetFirstItem_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.RenderItem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        ItemIndex                      (CPF_Parm)

void UMobileMenuBar::RenderItem(class UCanvas* Canvas, float DeltaTime, int32_t ItemIndex)
{
	static UFunction* uFnRenderItem = nullptr;

	if (!uFnRenderItem)
	{
		uFnRenderItem = UFunction::FindFunction("Function GameFramework.MobileMenuBar.RenderItem");
	}

	UMobileMenuBar_execRenderItem_Params RenderItem_Params;
	memset(&RenderItem_Params, 0, sizeof(RenderItem_Params));
	RenderItem_Params.Canvas = Canvas;
	memcpy_s(&RenderItem_Params.DeltaTime, sizeof(RenderItem_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&RenderItem_Params.ItemIndex, sizeof(RenderItem_Params.ItemIndex), &ItemIndex, sizeof(ItemIndex));

	this->ProcessEvent(uFnRenderItem, &RenderItem_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.RenderObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuBar::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuBar.RenderObject");
	}

	UMobileMenuBar_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuBar::eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuBar.OnTouch");
	}

	UMobileMenuBar_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouch_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuBar.GetSelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuBarItem*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMobileMenuBarItem* UMobileMenuBar::GetSelected()
{
	static UFunction* uFnGetSelected = nullptr;

	if (!uFnGetSelected)
	{
		uFnGetSelected = UFunction::FindFunction("Function GameFramework.MobileMenuBar.GetSelected");
	}

	UMobileMenuBar_execGetSelected_Params GetSelected_Params;
	memset(&GetSelected_Params, 0, sizeof(GetSelected_Params));

	this->ProcessEvent(uFnGetSelected, &GetSelected_Params, nullptr);

	return GetSelected_Params.ReturnValue;
};

// Function GameFramework.MobileMenuBar.Num
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UMobileMenuBar::Num()
{
	static UFunction* uFnNum = nullptr;

	if (!uFnNum)
	{
		uFnNum = UFunction::FindFunction("Function GameFramework.MobileMenuBar.Num");
	}

	UMobileMenuBar_execNum_Params Num_Params;
	memset(&Num_Params, 0, sizeof(Num_Params));

	this->ProcessEvent(uFnNum, &Num_Params, nullptr);

	return Num_Params.ReturnValue;
};

// Function GameFramework.MobileMenuBar.AddItem
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuBarItem*      Item                           (CPF_Parm)
// int32_t                        Index                          (CPF_OptionalParm | CPF_Parm)

void UMobileMenuBar::AddItem(class UMobileMenuBarItem* Item, int32_t Index)
{
	static UFunction* uFnAddItem = nullptr;

	if (!uFnAddItem)
	{
		uFnAddItem = UFunction::FindFunction("Function GameFramework.MobileMenuBar.AddItem");
	}

	UMobileMenuBar_execAddItem_Params AddItem_Params;
	memset(&AddItem_Params, 0, sizeof(AddItem_Params));
	AddItem_Params.Item = Item;
	memcpy_s(&AddItem_Params.Index, sizeof(AddItem_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnAddItem, &AddItem_Params, nullptr);
};

// Function GameFramework.MobileMenuBar.InitMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuBar::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuBar.InitMenuObject");
	}

	UMobileMenuBar_execInitMenuObject_Params InitMenuObject_Params;
	memset(&InitMenuObject_Params, 0, sizeof(InitMenuObject_Params));
	InitMenuObject_Params.PlayerInput = PlayerInput;
	InitMenuObject_Params.Scene = Scene;
	memcpy_s(&InitMenuObject_Params.ScreenWidth, sizeof(InitMenuObject_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuObject_Params.ScreenHeight, sizeof(InitMenuObject_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuBarItem.RenderItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuBar*          Bar                            (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuBarItem::RenderItem(class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderItem = nullptr;

	if (!uFnRenderItem)
	{
		uFnRenderItem = UFunction::FindFunction("Function GameFramework.MobileMenuBarItem.RenderItem");
	}

	UMobileMenuBarItem_execRenderItem_Params RenderItem_Params;
	memset(&RenderItem_Params, 0, sizeof(RenderItem_Params));
	RenderItem_Params.Bar = Bar;
	RenderItem_Params.Canvas = Canvas;
	memcpy_s(&RenderItem_Params.DeltaTime, sizeof(RenderItem_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderItem, &RenderItem_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static UFunction* uFnRenderCaption = nullptr;

	if (!uFnRenderCaption)
	{
		uFnRenderCaption = UFunction::FindFunction("Function GameFramework.MobileMenuButton.RenderCaption");
	}

	UMobileMenuButton_execRenderCaption_Params RenderCaption_Params;
	memset(&RenderCaption_Params, 0, sizeof(RenderCaption_Params));
	RenderCaption_Params.Canvas = Canvas;

	this->ProcessEvent(uFnRenderCaption, &RenderCaption_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuButton::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuButton.RenderObject");
	}

	UMobileMenuButton_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuButton.InitMenuObject");
	}

	UMobileMenuButton_execInitMenuObject_Params InitMenuObject_Params;
	memset(&InitMenuObject_Params, 0, sizeof(InitMenuObject_Params));
	InitMenuObject_Params.PlayerInput = PlayerInput;
	InitMenuObject_Params.Scene = Scene;
	memcpy_s(&InitMenuObject_Params.ScreenWidth, sizeof(InitMenuObject_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuObject_Params.ScreenHeight, sizeof(InitMenuObject_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuElement.RenderElement
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Owner                          (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          Opacity                        (CPF_Parm)

void UMobileMenuElement::RenderElement(class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity)
{
	static UFunction* uFnRenderElement = nullptr;

	if (!uFnRenderElement)
	{
		uFnRenderElement = UFunction::FindFunction("Function GameFramework.MobileMenuElement.RenderElement");
	}

	UMobileMenuElement_execRenderElement_Params RenderElement_Params;
	memset(&RenderElement_Params, 0, sizeof(RenderElement_Params));
	RenderElement_Params.Owner = Owner;
	RenderElement_Params.Canvas = Canvas;
	memcpy_s(&RenderElement_Params.DeltaTime, sizeof(RenderElement_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&RenderElement_Params.Opacity, sizeof(RenderElement_Params.Opacity), &Opacity, sizeof(Opacity));

	this->ProcessEvent(uFnRenderElement, &RenderElement_Params, nullptr);
};

// Function GameFramework.MobileMenuElement.OnTouch
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuElement::OnTouch(ETouchType EventType, float TouchX, float TouchY, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuElement.OnTouch");
	}

	UMobileMenuElement_execOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AController*             NewPlayer                      (CPF_Parm)

void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* uFnRestartPlayer = nullptr;

	if (!uFnRestartPlayer)
	{
		uFnRestartPlayer = UFunction::FindFunction("Function GameFramework.MobileMenuGame.RestartPlayer");
	}

	AMobileMenuGame_execRestartPlayer_Params RestartPlayer_Params;
	memset(&RestartPlayer_Params, 0, sizeof(RestartPlayer_Params));
	RestartPlayer_Params.NewPlayer = NewPlayer;

	this->ProcessEvent(uFnRestartPlayer, &RestartPlayer_Params, nullptr);
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileMenuGame::StartMatch()
{
	static UFunction* uFnStartMatch = nullptr;

	if (!uFnStartMatch)
	{
		uFnStartMatch = UFunction::FindFunction("Function GameFramework.MobileMenuGame.StartMatch");
	}

	AMobileMenuGame_execStartMatch_Params StartMatch_Params;
	memset(&StartMatch_Params, 0, sizeof(StartMatch_Params));

	this->ProcessEvent(uFnStartMatch, &StartMatch_Params, nullptr);
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       NewPlayer                      (CPF_Parm)

void AMobileMenuGame::eventPostLogin(class APlayerController* NewPlayer)
{
	static UFunction* uFnPostLogin = nullptr;

	if (!uFnPostLogin)
	{
		uFnPostLogin = UFunction::FindFunction("Function GameFramework.MobileMenuGame.PostLogin");
	}

	AMobileMenuGame_eventPostLogin_Params PostLogin_Params;
	memset(&PostLogin_Params, 0, sizeof(PostLogin_Params));
	PostLogin_Params.NewPlayer = NewPlayer;

	this->ProcessEvent(uFnPostLogin, &PostLogin_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuInventory::RenderDragItem(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderDragItem = nullptr;

	if (!uFnRenderDragItem)
	{
		uFnRenderDragItem = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.RenderDragItem");
	}

	UMobileMenuInventory_execRenderDragItem_Params RenderDragItem_Params;
	memset(&RenderDragItem_Params, 0, sizeof(RenderDragItem_Params));
	RenderDragItem_Params.Canvas = Canvas;
	memcpy_s(&RenderDragItem_Params.DeltaTime, sizeof(RenderDragItem_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderDragItem, &RenderDragItem_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.RenderObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuInventory::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.RenderObject");
	}

	UMobileMenuInventory_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuElement*      Item                           (CPF_Parm)

int32_t UMobileMenuInventory::GetIndexOfItem(class UMobileMenuElement* Item)
{
	static UFunction* uFnGetIndexOfItem = nullptr;

	if (!uFnGetIndexOfItem)
	{
		uFnGetIndexOfItem = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.GetIndexOfItem");
	}

	UMobileMenuInventory_execGetIndexOfItem_Params GetIndexOfItem_Params;
	memset(&GetIndexOfItem_Params, 0, sizeof(GetIndexOfItem_Params));
	GetIndexOfItem_Params.Item = Item;

	this->ProcessEvent(uFnGetIndexOfItem, &GetIndexOfItem_Params, nullptr);

	return GetIndexOfItem_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

int32_t UMobileMenuInventory::FindSlotIndexAt(float X, float Y)
{
	static UFunction* uFnFindSlotIndexAt = nullptr;

	if (!uFnFindSlotIndexAt)
	{
		uFnFindSlotIndexAt = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.FindSlotIndexAt");
	}

	UMobileMenuInventory_execFindSlotIndexAt_Params FindSlotIndexAt_Params;
	memset(&FindSlotIndexAt_Params, 0, sizeof(FindSlotIndexAt_Params));
	memcpy_s(&FindSlotIndexAt_Params.X, sizeof(FindSlotIndexAt_Params.X), &X, sizeof(X));
	memcpy_s(&FindSlotIndexAt_Params.Y, sizeof(FindSlotIndexAt_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnFindSlotIndexAt, &FindSlotIndexAt_Params, nullptr);

	return FindSlotIndexAt_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitDragAt
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TouchX                         (CPF_Parm)
// int32_t                        TouchY                         (CPF_Parm)

void UMobileMenuInventory::InitDragAt(int32_t TouchX, int32_t TouchY)
{
	static UFunction* uFnInitDragAt = nullptr;

	if (!uFnInitDragAt)
	{
		uFnInitDragAt = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.InitDragAt");
	}

	UMobileMenuInventory_execInitDragAt_Params InitDragAt_Params;
	memset(&InitDragAt_Params, 0, sizeof(InitDragAt_Params));
	memcpy_s(&InitDragAt_Params.TouchX, sizeof(InitDragAt_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&InitDragAt_Params.TouchY, sizeof(InitDragAt_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnInitDragAt, &InitDragAt_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// int32_t                        InSlot                         (CPF_Parm)

void UMobileMenuInventory::UpdateItemInSlot(int32_t InSlot)
{
	static UFunction* uFnUpdateItemInSlot = nullptr;

	if (!uFnUpdateItemInSlot)
	{
		uFnUpdateItemInSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.UpdateItemInSlot");
	}

	UMobileMenuInventory_execUpdateItemInSlot_Params UpdateItemInSlot_Params;
	memset(&UpdateItemInSlot_Params, 0, sizeof(UpdateItemInSlot_Params));
	memcpy_s(&UpdateItemInSlot_Params.InSlot, sizeof(UpdateItemInSlot_Params.InSlot), &InSlot, sizeof(InSlot));

	this->ProcessEvent(uFnUpdateItemInSlot, &UpdateItemInSlot_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuElement*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuElement*      Element                        (CPF_Parm)
// int32_t                        ToSlot                         (CPF_Parm)

class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot(class UMobileMenuElement* Element, int32_t ToSlot)
{
	static UFunction* uFnAddItemToSlot = nullptr;

	if (!uFnAddItemToSlot)
	{
		uFnAddItemToSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.AddItemToSlot");
	}

	UMobileMenuInventory_execAddItemToSlot_Params AddItemToSlot_Params;
	memset(&AddItemToSlot_Params, 0, sizeof(AddItemToSlot_Params));
	AddItemToSlot_Params.Element = Element;
	memcpy_s(&AddItemToSlot_Params.ToSlot, sizeof(AddItemToSlot_Params.ToSlot), &ToSlot, sizeof(ToSlot));

	this->ProcessEvent(uFnAddItemToSlot, &AddItemToSlot_Params, nullptr);

	return AddItemToSlot_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Slot0                          (CPF_Parm)
// int32_t                        Slot1                          (CPF_Parm)

bool UMobileMenuInventory::SwapItemsInSlots(int32_t Slot0, int32_t Slot1)
{
	static UFunction* uFnSwapItemsInSlots = nullptr;

	if (!uFnSwapItemsInSlots)
	{
		uFnSwapItemsInSlots = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.SwapItemsInSlots");
	}

	UMobileMenuInventory_execSwapItemsInSlots_Params SwapItemsInSlots_Params;
	memset(&SwapItemsInSlots_Params, 0, sizeof(SwapItemsInSlots_Params));
	memcpy_s(&SwapItemsInSlots_Params.Slot0, sizeof(SwapItemsInSlots_Params.Slot0), &Slot0, sizeof(Slot0));
	memcpy_s(&SwapItemsInSlots_Params.Slot1, sizeof(SwapItemsInSlots_Params.Slot1), &Slot1, sizeof(Slot1));

	this->ProcessEvent(uFnSwapItemsInSlots, &SwapItemsInSlots_Params, nullptr);

	return SwapItemsInSlots_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnTouch
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuInventory::eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.OnTouch");
	}

	UMobileMenuInventory_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouch_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuElement*      Item                           (CPF_Parm)
// class UMobileMenuElement*      ToSlot                         (CPF_Parm)
// int32_t                        ToIdx                          (CPF_Parm)
// int32_t                        FromIdx                        (CPF_OptionalParm | CPF_Parm)

bool UMobileMenuInventory::CanPutItemInSlot(class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int32_t ToIdx, int32_t FromIdx)
{
	static UFunction* uFnCanPutItemInSlot = nullptr;

	if (!uFnCanPutItemInSlot)
	{
		uFnCanPutItemInSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.CanPutItemInSlot");
	}

	UMobileMenuInventory_execCanPutItemInSlot_Params CanPutItemInSlot_Params;
	memset(&CanPutItemInSlot_Params, 0, sizeof(CanPutItemInSlot_Params));
	CanPutItemInSlot_Params.Item = Item;
	CanPutItemInSlot_Params.ToSlot = ToSlot;
	memcpy_s(&CanPutItemInSlot_Params.ToIdx, sizeof(CanPutItemInSlot_Params.ToIdx), &ToIdx, sizeof(ToIdx));
	memcpy_s(&CanPutItemInSlot_Params.FromIdx, sizeof(CanPutItemInSlot_Params.FromIdx), &FromIdx, sizeof(FromIdx));

	this->ProcessEvent(uFnCanPutItemInSlot, &CanPutItemInSlot_Params, nullptr);

	return CanPutItemInSlot_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuElement*      Slot                           (CPF_Parm)

void UMobileMenuInventory::ScaleSlot(class UMobileMenuElement* Slot)
{
	static UFunction* uFnScaleSlot = nullptr;

	if (!uFnScaleSlot)
	{
		uFnScaleSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.ScaleSlot");
	}

	UMobileMenuInventory_execScaleSlot_Params ScaleSlot_Params;
	memset(&ScaleSlot_Params, 0, sizeof(ScaleSlot_Params));
	ScaleSlot_Params.Slot = Slot;

	this->ProcessEvent(uFnScaleSlot, &ScaleSlot_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.AddSlot
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuElement*      Slot                           (CPF_Parm)

int32_t UMobileMenuInventory::AddSlot(class UMobileMenuElement* Slot)
{
	static UFunction* uFnAddSlot = nullptr;

	if (!uFnAddSlot)
	{
		uFnAddSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.AddSlot");
	}

	UMobileMenuInventory_execAddSlot_Params AddSlot_Params;
	memset(&AddSlot_Params, 0, sizeof(AddSlot_Params));
	AddSlot_Params.Slot = Slot;

	this->ProcessEvent(uFnAddSlot, &AddSlot_Params, nullptr);

	return AddSlot_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuInventory::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.InitMenuObject");
	}

	UMobileMenuInventory_execInitMenuObject_Params InitMenuObject_Params;
	memset(&InitMenuObject_Params, 0, sizeof(InitMenuObject_Params));
	InitMenuObject_Params.PlayerInput = PlayerInput;
	InitMenuObject_Params.Scene = Scene;
	memcpy_s(&InitMenuObject_Params.ScreenWidth, sizeof(InitMenuObject_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuObject_Params.ScreenHeight, sizeof(InitMenuObject_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FDragElementInfo        Before                         (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FDragElementInfo        After                          (CPF_Const | CPF_Parm | CPF_OutParm)

void UMobileMenuInventory::OnUpdateDrag(struct FDragElementInfo& Before, struct FDragElementInfo& After)
{
	static UFunction* uFnOnUpdateDrag = nullptr;

	if (!uFnOnUpdateDrag)
	{
		uFnOnUpdateDrag = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.OnUpdateDrag");
	}

	UMobileMenuInventory_execOnUpdateDrag_Params OnUpdateDrag_Params;
	memset(&OnUpdateDrag_Params, 0, sizeof(OnUpdateDrag_Params));
	memcpy_s(&OnUpdateDrag_Params.Before, sizeof(OnUpdateDrag_Params.Before), &Before, sizeof(Before));
	memcpy_s(&OnUpdateDrag_Params.After, sizeof(OnUpdateDrag_Params.After), &After, sizeof(After));

	this->ProcessEvent(uFnOnUpdateDrag, &OnUpdateDrag_Params, nullptr);

	memcpy_s(&Before, sizeof(Before), &OnUpdateDrag_Params.Before, sizeof(OnUpdateDrag_Params.Before));
	memcpy_s(&After, sizeof(After), &OnUpdateDrag_Params.After, sizeof(OnUpdateDrag_Params.After));
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuInventory*    FromInv                        (CPF_Parm)
// class UMobileMenuElement*      Item                           (CPF_Parm)
// class UMobileMenuElement*      ToSlot                         (CPF_Parm)
// int32_t                        ToIdx                          (CPF_Parm)
// int32_t                        FromIdx                        (CPF_Parm)

bool UMobileMenuInventory::DoCanPutItemInSlot(class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int32_t ToIdx, int32_t FromIdx)
{
	static UFunction* uFnDoCanPutItemInSlot = nullptr;

	if (!uFnDoCanPutItemInSlot)
	{
		uFnDoCanPutItemInSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot");
	}

	UMobileMenuInventory_execDoCanPutItemInSlot_Params DoCanPutItemInSlot_Params;
	memset(&DoCanPutItemInSlot_Params, 0, sizeof(DoCanPutItemInSlot_Params));
	DoCanPutItemInSlot_Params.FromInv = FromInv;
	DoCanPutItemInSlot_Params.Item = Item;
	DoCanPutItemInSlot_Params.ToSlot = ToSlot;
	memcpy_s(&DoCanPutItemInSlot_Params.ToIdx, sizeof(DoCanPutItemInSlot_Params.ToIdx), &ToIdx, sizeof(ToIdx));
	memcpy_s(&DoCanPutItemInSlot_Params.FromIdx, sizeof(DoCanPutItemInSlot_Params.FromIdx), &FromIdx, sizeof(FromIdx));

	this->ProcessEvent(uFnDoCanPutItemInSlot, &DoCanPutItemInSlot_Params, nullptr);

	return DoCanPutItemInSlot_Params.ReturnValue;
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuInventory*    FromInv                        (CPF_Parm)
// int32_t                        SlotIndex                      (CPF_Parm)

void UMobileMenuInventory::OnUpdateItemInSlot(class UMobileMenuInventory* FromInv, int32_t SlotIndex)
{
	static UFunction* uFnOnUpdateItemInSlot = nullptr;

	if (!uFnOnUpdateItemInSlot)
	{
		uFnOnUpdateItemInSlot = UFunction::FindFunction("Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot");
	}

	UMobileMenuInventory_execOnUpdateItemInSlot_Params OnUpdateItemInSlot_Params;
	memset(&OnUpdateItemInSlot_Params, 0, sizeof(OnUpdateItemInSlot_Params));
	OnUpdateItemInSlot_Params.FromInv = FromInv;
	memcpy_s(&OnUpdateItemInSlot_Params.SlotIndex, sizeof(OnUpdateItemInSlot_Params.SlotIndex), &SlotIndex, sizeof(SlotIndex));

	this->ProcessEvent(uFnOnUpdateItemInSlot, &OnUpdateItemInSlot_Params, nullptr);
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuLabel::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuLabel.RenderObject");
	}

	UMobileMenuLabel_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuList.ItemScrollSize
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuListItem*     Item                           (CPF_Parm)

int32_t UMobileMenuList::ItemScrollSize(class UMobileMenuListItem* Item)
{
	static UFunction* uFnItemScrollSize = nullptr;

	if (!uFnItemScrollSize)
	{
		uFnItemScrollSize = UFunction::FindFunction("Function GameFramework.MobileMenuList.ItemScrollSize");
	}

	UMobileMenuList_execItemScrollSize_Params ItemScrollSize_Params;
	memset(&ItemScrollSize_Params, 0, sizeof(ItemScrollSize_Params));
	ItemScrollSize_Params.Item = Item;

	this->ProcessEvent(uFnItemScrollSize, &ItemScrollSize_Params, nullptr);

	return ItemScrollSize_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.RenderObject
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuList::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuList.RenderObject");
	}

	UMobileMenuList_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuList.UpdateScroll
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuList::UpdateScroll(float DeltaTime)
{
	static UFunction* uFnUpdateScroll = nullptr;

	if (!uFnUpdateScroll)
	{
		uFnUpdateScroll = UFunction::FindFunction("Function GameFramework.MobileMenuList.UpdateScroll");
	}

	UMobileMenuList_execUpdateScroll_Params UpdateScroll_Params;
	memset(&UpdateScroll_Params, 0, sizeof(UpdateScroll_Params));
	memcpy_s(&UpdateScroll_Params.DeltaTime, sizeof(UpdateScroll_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdateScroll, &UpdateScroll_Params, nullptr);
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          ScrollAmount                   (CPF_Parm)
// uint32_t                       bForceZeroAdjustment           (CPF_Parm)
// struct FSelectedMenuItem       Selected                       (CPF_Parm | CPF_OutParm)

float UMobileMenuList::CalculateSelectedItem(float ScrollAmount, bool bForceZeroAdjustment, struct FSelectedMenuItem& Selected)
{
	static UFunction* uFnCalculateSelectedItem = nullptr;

	if (!uFnCalculateSelectedItem)
	{
		uFnCalculateSelectedItem = UFunction::FindFunction("Function GameFramework.MobileMenuList.CalculateSelectedItem");
	}

	UMobileMenuList_execCalculateSelectedItem_Params CalculateSelectedItem_Params;
	memset(&CalculateSelectedItem_Params, 0, sizeof(CalculateSelectedItem_Params));
	memcpy_s(&CalculateSelectedItem_Params.ScrollAmount, sizeof(CalculateSelectedItem_Params.ScrollAmount), &ScrollAmount, sizeof(ScrollAmount));
	CalculateSelectedItem_Params.bForceZeroAdjustment = bForceZeroAdjustment;
	memcpy_s(&CalculateSelectedItem_Params.Selected, sizeof(CalculateSelectedItem_Params.Selected), &Selected, sizeof(Selected));

	this->ProcessEvent(uFnCalculateSelectedItem, &CalculateSelectedItem_Params, nullptr);

	memcpy_s(&Selected, sizeof(Selected), &CalculateSelectedItem_Params.Selected, sizeof(CalculateSelectedItem_Params.Selected));

	return CalculateSelectedItem_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuListItem*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MouseX                         (CPF_Parm | CPF_OutParm)
// float                          MouseY                         (CPF_Parm | CPF_OutParm)

class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition(float& MouseX, float& MouseY)
{
	static UFunction* uFnGetItemClickPosition = nullptr;

	if (!uFnGetItemClickPosition)
	{
		uFnGetItemClickPosition = UFunction::FindFunction("Function GameFramework.MobileMenuList.GetItemClickPosition");
	}

	UMobileMenuList_execGetItemClickPosition_Params GetItemClickPosition_Params;
	memset(&GetItemClickPosition_Params, 0, sizeof(GetItemClickPosition_Params));
	memcpy_s(&GetItemClickPosition_Params.MouseX, sizeof(GetItemClickPosition_Params.MouseX), &MouseX, sizeof(MouseX));
	memcpy_s(&GetItemClickPosition_Params.MouseY, sizeof(GetItemClickPosition_Params.MouseY), &MouseY, sizeof(MouseY));

	this->ProcessEvent(uFnGetItemClickPosition, &GetItemClickPosition_Params, nullptr);

	memcpy_s(&MouseX, sizeof(MouseX), &GetItemClickPosition_Params.MouseX, sizeof(GetItemClickPosition_Params.MouseX));
	memcpy_s(&MouseY, sizeof(MouseY), &GetItemClickPosition_Params.MouseY, sizeof(GetItemClickPosition_Params.MouseY));

	return GetItemClickPosition_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuList::eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuList.OnTouch");
	}

	UMobileMenuList_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouch_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedItem
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ItemIndex                      (CPF_Parm)
// uint32_t                       bForceAll                      (CPF_OptionalParm | CPF_Parm)

bool UMobileMenuList::SetSelectedItem(int32_t ItemIndex, bool bForceAll)
{
	static UFunction* uFnSetSelectedItem = nullptr;

	if (!uFnSetSelectedItem)
	{
		uFnSetSelectedItem = UFunction::FindFunction("Function GameFramework.MobileMenuList.SetSelectedItem");
	}

	UMobileMenuList_execSetSelectedItem_Params SetSelectedItem_Params;
	memset(&SetSelectedItem_Params, 0, sizeof(SetSelectedItem_Params));
	memcpy_s(&SetSelectedItem_Params.ItemIndex, sizeof(SetSelectedItem_Params.ItemIndex), &ItemIndex, sizeof(ItemIndex));
	SetSelectedItem_Params.bForceAll = bForceAll;

	this->ProcessEvent(uFnSetSelectedItem, &SetSelectedItem_Params, nullptr);

	return SetSelectedItem_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetNumVisible
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UMobileMenuList::GetNumVisible()
{
	static UFunction* uFnGetNumVisible = nullptr;

	if (!uFnGetNumVisible)
	{
		uFnGetNumVisible = UFunction::FindFunction("Function GameFramework.MobileMenuList.GetNumVisible");
	}

	UMobileMenuList_execGetNumVisible_Params GetNumVisible_Params;
	memset(&GetNumVisible_Params, 0, sizeof(GetNumVisible_Params));

	this->ProcessEvent(uFnGetNumVisible, &GetNumVisible_Params, nullptr);

	return GetNumVisible_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        VisibleIndex                   (CPF_Parm)

int32_t UMobileMenuList::SetSelectedToVisibleIndex(int32_t VisibleIndex)
{
	static UFunction* uFnSetSelectedToVisibleIndex = nullptr;

	if (!uFnSetSelectedToVisibleIndex)
	{
		uFnSetSelectedToVisibleIndex = UFunction::FindFunction("Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex");
	}

	UMobileMenuList_execSetSelectedToVisibleIndex_Params SetSelectedToVisibleIndex_Params;
	memset(&SetSelectedToVisibleIndex_Params, 0, sizeof(SetSelectedToVisibleIndex_Params));
	memcpy_s(&SetSelectedToVisibleIndex_Params.VisibleIndex, sizeof(SetSelectedToVisibleIndex_Params.VisibleIndex), &VisibleIndex, sizeof(VisibleIndex));

	this->ProcessEvent(uFnSetSelectedToVisibleIndex, &SetSelectedToVisibleIndex_Params, nullptr);

	return SetSelectedToVisibleIndex_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UMobileMenuList::GetVisibleIndexOfSelected()
{
	static UFunction* uFnGetVisibleIndexOfSelected = nullptr;

	if (!uFnGetVisibleIndexOfSelected)
	{
		uFnGetVisibleIndexOfSelected = UFunction::FindFunction("Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected");
	}

	UMobileMenuList_execGetVisibleIndexOfSelected_Params GetVisibleIndexOfSelected_Params;
	memset(&GetVisibleIndexOfSelected_Params, 0, sizeof(GetVisibleIndexOfSelected_Params));

	this->ProcessEvent(uFnGetVisibleIndexOfSelected, &GetVisibleIndexOfSelected_Params, nullptr);

	return GetVisibleIndexOfSelected_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetAmountSelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuListItem*     Item                           (CPF_Parm)

float UMobileMenuList::GetAmountSelected(class UMobileMenuListItem* Item)
{
	static UFunction* uFnGetAmountSelected = nullptr;

	if (!uFnGetAmountSelected)
	{
		uFnGetAmountSelected = UFunction::FindFunction("Function GameFramework.MobileMenuList.GetAmountSelected");
	}

	UMobileMenuList_execGetAmountSelected_Params GetAmountSelected_Params;
	memset(&GetAmountSelected_Params, 0, sizeof(GetAmountSelected_Params));
	GetAmountSelected_Params.Item = Item;

	this->ProcessEvent(uFnGetAmountSelected, &GetAmountSelected_Params, nullptr);

	return GetAmountSelected_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.GetSelected
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuListItem*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UMobileMenuListItem* UMobileMenuList::GetSelected()
{
	static UFunction* uFnGetSelected = nullptr;

	if (!uFnGetSelected)
	{
		uFnGetSelected = UFunction::FindFunction("Function GameFramework.MobileMenuList.GetSelected");
	}

	UMobileMenuList_execGetSelected_Params GetSelected_Params;
	memset(&GetSelected_Params, 0, sizeof(GetSelected_Params));

	this->ProcessEvent(uFnGetSelected, &GetSelected_Params, nullptr);

	return GetSelected_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.Num
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UMobileMenuList::Num()
{
	static UFunction* uFnNum = nullptr;

	if (!uFnNum)
	{
		uFnNum = UFunction::FindFunction("Function GameFramework.MobileMenuList.Num");
	}

	UMobileMenuList_execNum_Params Num_Params;
	memset(&Num_Params, 0, sizeof(Num_Params));

	this->ProcessEvent(uFnNum, &Num_Params, nullptr);

	return Num_Params.ReturnValue;
};

// Function GameFramework.MobileMenuList.AddItem
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuListItem*     Item                           (CPF_Parm)
// int32_t                        Index                          (CPF_OptionalParm | CPF_Parm)

void UMobileMenuList::AddItem(class UMobileMenuListItem* Item, int32_t Index)
{
	static UFunction* uFnAddItem = nullptr;

	if (!uFnAddItem)
	{
		uFnAddItem = UFunction::FindFunction("Function GameFramework.MobileMenuList.AddItem");
	}

	UMobileMenuList_execAddItem_Params AddItem_Params;
	memset(&AddItem_Params, 0, sizeof(AddItem_Params));
	AddItem_Params.Item = Item;
	memcpy_s(&AddItem_Params.Index, sizeof(AddItem_Params.Index), &Index, sizeof(Index));

	this->ProcessEvent(uFnAddItem, &AddItem_Params, nullptr);
};

// Function GameFramework.MobileMenuList.InitMenuObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// uint32_t                       bIsFirstInitialization         (CPF_Parm)

void UMobileMenuList::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuList.InitMenuObject");
	}

	UMobileMenuList_execInitMenuObject_Params InitMenuObject_Params;
	memset(&InitMenuObject_Params, 0, sizeof(InitMenuObject_Params));
	InitMenuObject_Params.PlayerInput = PlayerInput;
	InitMenuObject_Params.Scene = Scene;
	memcpy_s(&InitMenuObject_Params.ScreenWidth, sizeof(InitMenuObject_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuObject_Params.ScreenHeight, sizeof(InitMenuObject_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuListItem.RenderItem
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuList*         List                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuListItem::RenderItem(class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderItem = nullptr;

	if (!uFnRenderItem)
	{
		uFnRenderItem = UFunction::FindFunction("Function GameFramework.MobileMenuListItem.RenderItem");
	}

	UMobileMenuListItem_execRenderItem_Params RenderItem_Params;
	memset(&RenderItem_Params, 0, sizeof(RenderItem_Params));
	RenderItem_Params.List = List;
	RenderItem_Params.Canvas = Canvas;
	memcpy_s(&RenderItem_Params.DeltaTime, sizeof(RenderItem_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderItem, &RenderItem_Params, nullptr);
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObjectProxy::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuObjectProxy.RenderObject");
	}

	UMobileMenuObjectProxy_execRenderObject_Params RenderObject_Params;
	memset(&RenderObject_Params, 0, sizeof(RenderObject_Params));
	RenderObject_Params.Canvas = Canvas;
	memcpy_s(&RenderObject_Params.DeltaTime, sizeof(RenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuObjectProxy::eventOnTouch(ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuObjectProxy.OnTouch");
	}

	UMobileMenuObjectProxy_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouch_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouch_Params.DeltaTime, sizeof(OnTouch_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObjectProxy*  Proxy                          (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObjectProxy::OnRenderObject(class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnOnRenderObject = nullptr;

	if (!uFnOnRenderObject)
	{
		uFnOnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuObjectProxy.OnRenderObject");
	}

	UMobileMenuObjectProxy_execOnRenderObject_Params OnRenderObject_Params;
	memset(&OnRenderObject_Params, 0, sizeof(OnRenderObject_Params));
	OnRenderObject_Params.Proxy = Proxy;
	OnRenderObject_Params.Canvas = Canvas;
	memcpy_s(&OnRenderObject_Params.DeltaTime, sizeof(OnRenderObject_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnRenderObject, &OnRenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileMenuObjectProxy*  Proxy                          (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuObjectProxy::OnTouchEvent(class UMobileMenuObjectProxy* Proxy, ETouchType EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouchEvent = nullptr;

	if (!uFnOnTouchEvent)
	{
		uFnOnTouchEvent = UFunction::FindFunction("Function GameFramework.MobileMenuObjectProxy.OnTouchEvent");
	}

	UMobileMenuObjectProxy_execOnTouchEvent_Params OnTouchEvent_Params;
	memset(&OnTouchEvent_Params, 0, sizeof(OnTouchEvent_Params));
	OnTouchEvent_Params.Proxy = Proxy;
	memcpy_s(&OnTouchEvent_Params.EventType, sizeof(OnTouchEvent_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouchEvent_Params.TouchX, sizeof(OnTouchEvent_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouchEvent_Params.TouchY, sizeof(OnTouchEvent_Params.TouchY), &TouchY, sizeof(TouchY));
	OnTouchEvent_Params.ObjectOver = ObjectOver;
	memcpy_s(&OnTouchEvent_Params.DeltaTime, sizeof(OnTouchEvent_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnTouchEvent, &OnTouchEvent_Params, nullptr);

	return OnTouchEvent_Params.ReturnValue;
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileTouchInputVolume::HandleDragOver()
{
	static UFunction* uFnHandleDragOver = nullptr;

	if (!uFnHandleDragOver)
	{
		uFnHandleDragOver = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleDragOver");
	}

	AMobileTouchInputVolume_execHandleDragOver_Params HandleDragOver_Params;
	memset(&HandleDragOver_Params, 0, sizeof(HandleDragOver_Params));

	this->ProcessEvent(uFnHandleDragOver, &HandleDragOver_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileTouchInputVolume::HandleDoubleClick()
{
	static UFunction* uFnHandleDoubleClick = nullptr;

	if (!uFnHandleDoubleClick)
	{
		uFnHandleDoubleClick = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");
	}

	AMobileTouchInputVolume_execHandleDoubleClick_Params HandleDoubleClick_Params;
	memset(&HandleDoubleClick_Params, 0, sizeof(HandleDoubleClick_Params));

	this->ProcessEvent(uFnHandleDoubleClick, &HandleDoubleClick_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileTouchInputVolume::HandleClick()
{
	static UFunction* uFnHandleClick = nullptr;

	if (!uFnHandleClick)
	{
		uFnHandleClick = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleClick");
	}

	AMobileTouchInputVolume_execHandleClick_Params HandleClick_Params;
	memset(&HandleClick_Params, 0, sizeof(HandleClick_Params));

	this->ProcessEvent(uFnHandleClick, &HandleClick_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          inAction                       (CPF_Parm)

void AMobileTouchInputVolume::OnToggle(class USeqAct_Toggle* inAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.OnToggle");
	}

	AMobileTouchInputVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params.inAction = inAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UTouchableElement3D::HandleDragOver()
{
	static UFunction* uFnHandleDragOver = nullptr;

	if (!uFnHandleDragOver)
	{
		uFnHandleDragOver = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleDragOver");
	}

	UTouchableElement3D_execHandleDragOver_Params HandleDragOver_Params;
	memset(&HandleDragOver_Params, 0, sizeof(HandleDragOver_Params));

	this->ProcessEvent(uFnHandleDragOver, &HandleDragOver_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UTouchableElement3D::HandleDoubleClick()
{
	static UFunction* uFnHandleDoubleClick = nullptr;

	if (!uFnHandleDoubleClick)
	{
		uFnHandleDoubleClick = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleDoubleClick");
	}

	UTouchableElement3D_execHandleDoubleClick_Params HandleDoubleClick_Params;
	memset(&HandleDoubleClick_Params, 0, sizeof(HandleDoubleClick_Params));

	this->ProcessEvent(uFnHandleDoubleClick, &HandleDoubleClick_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UTouchableElement3D::HandleClick()
{
	static UFunction* uFnHandleClick = nullptr;

	if (!uFnHandleClick)
	{
		uFnHandleClick = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleClick");
	}

	UTouchableElement3D_execHandleClick_Params HandleClick_Params;
	memset(&HandleClick_Params, 0, sizeof(HandleClick_Params));

	this->ProcessEvent(uFnHandleClick, &HandleClick_Params, nullptr);
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bToEntry                       (CPF_Parm)
// class TArray<class AActor*>    ActorList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void APlayerCollectorGame::eventGetSeamlessTravelActorList(bool bToEntry, class TArray<class AActor*>& ActorList)
{
	static UFunction* uFnGetSeamlessTravelActorList = nullptr;

	if (!uFnGetSeamlessTravelActorList)
	{
		uFnGetSeamlessTravelActorList = UFunction::FindFunction("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");
	}

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Params GetSeamlessTravelActorList_Params;
	memset(&GetSeamlessTravelActorList_Params, 0, sizeof(GetSeamlessTravelActorList_Params));
	GetSeamlessTravelActorList_Params.bToEntry = bToEntry;
	memcpy_s(&GetSeamlessTravelActorList_Params.ActorList, sizeof(GetSeamlessTravelActorList_Params.ActorList), &ActorList, sizeof(ActorList));

	this->ProcessEvent(uFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Params, nullptr);

	memcpy_s(&ActorList, sizeof(ActorList), &GetSeamlessTravelActorList_Params.ActorList, sizeof(GetSeamlessTravelActorList_Params.ActorList));
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Portal                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Options                        (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (CPF_Const | CPF_Parm)
// class FString                  ErrorMessage                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class APlayerController* APlayerCollectorGame::eventLogin(const class FString& Portal, const class FString& Options, const struct FUniqueNetId& UniqueId, class FString& ErrorMessage)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function GameFramework.PlayerCollectorGame.Login");
	}

	APlayerCollectorGame_eventLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	memcpy_s(&Login_Params.Portal, sizeof(Login_Params.Portal), &Portal, sizeof(Portal));
	memcpy_s(&Login_Params.Options, sizeof(Login_Params.Options), &Options, sizeof(Options));
	memcpy_s(&Login_Params.UniqueId, sizeof(Login_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&Login_Params.ErrorMessage, sizeof(Login_Params.ErrorMessage), &ErrorMessage, sizeof(ErrorMessage));

	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);

	memcpy_s(&ErrorMessage, sizeof(ErrorMessage), &Login_Params.ErrorMessage, sizeof(Login_Params.ErrorMessage));

	return Login_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderImage.Render");
	}

	USeqEvent_HudRenderImage_execRender_Params Render_Params;
	memset(&Render_Params, 0, sizeof(Render_Params));
	Render_Params.TargetCanvas = TargetCanvas;
	Render_Params.TargetHud = TargetHud;

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqEvent_HudRenderText::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");
	}

	USeqEvent_HudRenderText_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqEvent_HudRenderText::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderText.Render");
	}

	USeqEvent_HudRenderText_execRender_Params Render_Params;
	memset(&Render_Params, 0, sizeof(Render_Params));
	Render_Params.TargetCanvas = TargetCanvas;
	Render_Params.TargetHud = TargetHud;

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
