/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Nodes/NevarokMLIndexSequenceNode.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "Containers/EnumAsByte.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "EditorCategoryUtils.h"
#include "K2Node_AssignmentStatement.h"
#include "K2Node_CallFunction.h"
#include "K2Node_ExecutionSequence.h"
#include "K2Node_TemporaryVariable.h"
#include "HAL/PlatformCrt.h"
#include "HAL/PlatformMath.h"
#include "Internationalization/Internationalization.h"
#include "Kismet2/CompilerResultsLog.h"
#include "KismetCompiler.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Misc/AssertionMacros.h"
#include "Styling/AppStyle.h"
#include "Templates/Casts.h"
#include "UObject/Class.h"

#define LOCTEXT_NAMESPACE "NevarokMLIndexSequenceNode"

const FName UNevarokMLIndexSequenceNode::IndexOffsetPinName(TEXT("IndexOffset"));
const FName UNevarokMLIndexSequenceNode::IndexStepPinName(TEXT("IndexStep"));
const FName UNevarokMLIndexSequenceNode::CompleteIndexPinName(TEXT("CompleteIndex"));

UEdGraphPin* UNevarokMLIndexSequenceNode::GetExecPinBy(int index) const
{
    return FindPinChecked(GetExecPinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetIndexPinBy(int index) const
{
    return FindPinChecked(GetIndexPinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetInLimitPinBy(int index) const
{
    return FindPinChecked(GetInLimitPinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetInNamePinBy(int index) const
{
    return FindPinChecked(GetInNamePinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetOutNamePinBy(int index) const
{
    return FindPinChecked(GetOutNamePinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetOutLimitPinBy(int index) const
{
    return FindPinChecked(GetOutLimitPinNameGivenIndex(index));
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetIndexOffsetPin(void) const
{
    return FindPinChecked(IndexOffsetPinName);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetIndexStepPin(void) const
{
    return FindPinChecked(IndexStepPinName);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetCompleteIndexPin(void) const
{
    return FindPinChecked(CompleteIndexPinName);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::GetCompletePin(void) const
{
    return FindPinChecked(UEdGraphSchema_K2::PN_Completed);
}

void UNevarokMLIndexSequenceNode::CreateIndexOffsetPin()
{
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Int, IndexOffsetPinName);
}

void UNevarokMLIndexSequenceNode::CreateIndexStepPin()
{
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Int, IndexStepPinName);
}

void UNevarokMLIndexSequenceNode::CreateCompleteIndexPin()
{
    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Int, CompleteIndexPinName);
}

void UNevarokMLIndexSequenceNode::AllocateDefaultPins()
{
    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
    CreateIndexOffsetPin();
    CreateIndexStepPin();

    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Completed);
    CreateCompleteIndexPin();
    
    CreateNameInPin();
    CreateLimitInPin();
    CreateExecOutPin();
    CreateNameOutPin();
    CreateIndexOutPin();
    CreateLimitOutPin();

    Super::AllocateDefaultPins();
}

FText UNevarokMLIndexSequenceNode::GetNodeTitle(ENodeTitleType::Type titleType) const
{
    return NSLOCTEXT("NevarokML", "IndexSequence", "IndexSequence");
}

FSlateIcon UNevarokMLIndexSequenceNode::GetIconAndTint(FLinearColor& outColor) const
{
    static FSlateIcon Icon(FAppStyle::GetAppStyleSetName(), "GraphEditor.Sequence_16x");
    return Icon;
}

FLinearColor UNevarokMLIndexSequenceNode::GetNodeTitleColor() const
{
    return FLinearColor::White;
}

FText UNevarokMLIndexSequenceNode::GetTooltipText() const
{
    return NSLOCTEXT("K2Node", "ExecutePinInOrder_Tooltip", "Executes a series of pins in order");
}

FName UNevarokMLIndexSequenceNode::GetUniquePinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetExecPinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

int UNevarokMLIndexSequenceNode::GetThenPinsCount() const
{
    int32 i = 0;
    while (true)
    {
        if (!FindPin(GetExecPinNameGivenIndex(i++)))
        {
            break;
        }
    }

    return i - 1;
}

FName UNevarokMLIndexSequenceNode::GetUniqueIndexPinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetIndexPinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

FName UNevarokMLIndexSequenceNode::GetUniqueInNamePinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetInNamePinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

FName UNevarokMLIndexSequenceNode::GetUniqueOutNamePinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetOutNamePinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

FName UNevarokMLIndexSequenceNode::GetUniqueInLimitPinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetInLimitPinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

FName UNevarokMLIndexSequenceNode::GetUniqueOutLimitPinName() const
{
    FName NewPinName;
    int32 i = 0;
    while (true)
    {
        NewPinName = GetOutLimitPinNameGivenIndex(i++);
        if (!FindPin(NewPinName))
        {
            break;
        }
    }

    return NewPinName;
}

void UNevarokMLIndexSequenceNode::AddInputPin()
{
    Modify();
    CreateNameInPin();
    CreateLimitInPin();
    CreateExecOutPin();
    CreateNameOutPin();
    CreateIndexOutPin();
    CreateLimitOutPin();
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateExecOutPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, GetUniquePinName(), params);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateIndexOutPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Int, GetUniqueIndexPinName(), params);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateNameInPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, GetUniqueInNamePinName(), params);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateNameOutPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Name, GetUniqueOutNamePinName(), params);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateLimitInPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Int64, GetUniqueInLimitPinName(), params);
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateLimitOutPin(FCreatePinParams params)
{
    return CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Int64, GetUniqueOutLimitPinName(), params);
}

void UNevarokMLIndexSequenceNode::RemoveLastPin(FName targetPinName)
{
    const auto targetPin = FindPin(targetPinName);
    const auto owner = Cast<UNevarokMLIndexSequenceNode>(targetPin->GetOwningNode());

    if (!owner)
    {
        return;
    }

    const auto count = GetThenPinsCount();
    const auto index = count - 1;
    const auto execPin = GetExecPinBy(index);
    const auto indexPin = GetIndexPinBy(index);
    const auto nameInPin = GetInNamePinBy(index);
    const auto nameOutPin = GetOutNamePinBy(index);
    const auto limitInPin = GetInLimitPinBy(index);
    const auto limitOutPin = GetOutLimitPinBy(index);

    owner->Pins.Remove(execPin);
    owner->Pins.Remove(indexPin);
    owner->Pins.Remove(nameInPin);
    owner->Pins.Remove(nameOutPin);
    owner->Pins.Remove(limitInPin);
    owner->Pins.Remove(limitOutPin);

    execPin->MarkAsGarbage();
    indexPin->MarkAsGarbage();
    nameInPin->MarkAsGarbage();
    nameOutPin->MarkAsGarbage();
    limitInPin->MarkAsGarbage();
    limitOutPin->MarkAsGarbage();

    MarkBlueprintAsModified();
}

void UNevarokMLIndexSequenceNode::MarkBlueprintAsModified() const
{
    const auto graph = GetGraph();
    graph->NotifyGraphChanged();
    
    FBlueprintEditorUtils::MarkBlueprintAsModified(GetBlueprint());
}

void UNevarokMLIndexSequenceNode::RemovePin(FName targetPinName)
{
    const auto targetPin = FindPin(targetPinName);
    const auto owner = Cast<UNevarokMLIndexSequenceNode>(targetPin->GetOwningNode());

    if (!owner)
    {
        return;
    }

    TArray<UEdGraphPin*> execs;
    TArray<UEdGraphPin*> indices;
    TArray<UEdGraphPin*> inNames;
    TArray<UEdGraphPin*> outNames;
    TArray<UEdGraphPin*> inLimits;
    TArray<UEdGraphPin*> outLimits;

    const auto count = GetThenPinsCount();

    for (auto i = 0; i < count; i++)
    {
        execs.Add(GetExecPinBy(i));
        indices.Add(GetIndexPinBy(i));
        inNames.Add(GetInNamePinBy(i));
        outNames.Add(GetOutNamePinBy(i));
        inLimits.Add(GetInLimitPinBy(i));
        outLimits.Add(GetOutLimitPinBy(i));
    }

    const auto index = execs.IndexOfByKey(targetPin);
    const auto execPin = GetExecPinBy(index);
    const auto indexPin = GetIndexPinBy(index);
    const auto inNamePin = GetInNamePinBy(index);
    const auto outNamePin = GetOutNamePinBy(index);
    const auto limitInPin = GetInLimitPinBy(index);
    const auto limitOutPin = GetOutLimitPinBy(index);

    execs.Remove(execPin);
    indices.Remove(indexPin);
    inNames.Remove(inNamePin);
    outNames.Remove(outNamePin);
    inLimits.Remove(limitInPin);
    outLimits.Remove(limitOutPin);

    owner->Pins.Remove(execPin);
    owner->Pins.Remove(indexPin);
    owner->Pins.Remove(inNamePin);
    owner->Pins.Remove(outNamePin);
    owner->Pins.Remove(limitInPin);
    owner->Pins.Remove(limitOutPin);

    execPin->MarkAsGarbage();
    indexPin->MarkAsGarbage();
    inNamePin->MarkAsGarbage();
    outNamePin->MarkAsGarbage();
    limitInPin->MarkAsGarbage();
    limitOutPin->MarkAsGarbage();

    for (auto i = 0; i < count - 1; i++)
    {
        execs[i]->PinName = GetExecPinNameGivenIndex(i);
        indices[i]->PinName = GetIndexPinNameGivenIndex(i);
        inNames[i]->PinName = GetInNamePinNameGivenIndex(i);
        outNames[i]->PinName = GetOutNamePinNameGivenIndex(i);
        inLimits[i]->PinName = GetInLimitPinNameGivenIndex(i);
        outLimits[i]->PinName = GetOutLimitPinNameGivenIndex(i);
    }

    MarkBlueprintAsModified();
}

void UNevarokMLIndexSequenceNode::InsertPin(FName targetPinName, EPinInsertPosition position)
{
    const auto targetPin = FindPin(targetPinName);
    const auto owner = Cast<UNevarokMLIndexSequenceNode>(targetPin->GetOwningNode());

    if (!owner)
    {
        return;
    }

    TArray<UEdGraphPin*> execs;
    TArray<UEdGraphPin*> indices;
    TArray<UEdGraphPin*> inNames;
    TArray<UEdGraphPin*> outNames;
    TArray<UEdGraphPin*> inLimits;
    TArray<UEdGraphPin*> outLimits;

    const auto count = GetThenPinsCount();

    for (auto i = 0; i < count; i++)
    {
        execs.Add(GetExecPinBy(i));
        indices.Add(GetIndexPinBy(i));
        inNames.Add(GetInNamePinBy(i));
        outNames.Add(GetOutNamePinBy(i));
        inLimits.Add(GetInLimitPinBy(i));
        outLimits.Add(GetOutLimitPinBy(i));
    }

    auto arrayIndex = execs.IndexOfByKey(targetPin);
    auto pinIndex = Pins.Find(targetPin);

    arrayIndex = position == EPinInsertPosition::Before ? arrayIndex : arrayIndex + 1;
    pinIndex = position == EPinInsertPosition::Before ? pinIndex - 2 : pinIndex + 4;

    Modify();


    FCreatePinParams pinParams;
    pinParams.Index = pinIndex;

    const auto outLimitPin = CreateLimitOutPin(pinParams);
    const auto indexPin = CreateIndexOutPin(pinParams);
    const auto outNamePin = CreateNameOutPin(pinParams);
    const auto execPin = CreateExecOutPin(pinParams);

    const auto inLimitPin = CreateLimitInPin(pinParams);
    const auto inNamePin = CreateNameInPin(pinParams);
    
    execs.Insert(execPin, arrayIndex);
    indices.Insert(indexPin, arrayIndex);
    inNames.Insert(inNamePin, arrayIndex);
    outNames.Insert(outNamePin, arrayIndex);
    inLimits.Insert(inLimitPin, arrayIndex);
    outLimits.Insert(outLimitPin, arrayIndex);

    for (auto i = 0; i < count + 1; i++)
    {
        execs[i]->PinName = GetExecPinNameGivenIndex(i);
        indices[i]->PinName = GetIndexPinNameGivenIndex(i);
        inNames[i]->PinName = GetInNamePinNameGivenIndex(i);
        outNames[i]->PinName = GetOutNamePinNameGivenIndex(i);
        inLimits[i]->PinName = GetInLimitPinNameGivenIndex(i);
        outLimits[i]->PinName = GetOutLimitPinNameGivenIndex(i);
    }

    MarkBlueprintAsModified();
}

bool UNevarokMLIndexSequenceNode::CanRemoveExecutionPin() const
{
    return GetThenPinsCount() > 1;
}

FName UNevarokMLIndexSequenceNode::GetExecPinNameGivenIndex(int32 index) const
{
    return *FString::Printf(TEXT("Out_%d"), index);
}

FName UNevarokMLIndexSequenceNode::GetIndexPinNameGivenIndex(int32 index)
{
    return *FString::Printf(TEXT("Out_Index_%d"), index);
}

FName UNevarokMLIndexSequenceNode::GetInNamePinNameGivenIndex(int32 index)
{
    return *FString::Printf(TEXT("In_Name_%d"), index);
}

FName UNevarokMLIndexSequenceNode::GetOutNamePinNameGivenIndex(int32 index)
{
    return *FString::Printf(TEXT("Out_Name_%d"), index);
}

FName UNevarokMLIndexSequenceNode::GetInLimitPinNameGivenIndex(int32 index)
{
    return *FString::Printf(TEXT("In_Limit_%d"), index);
}

FName UNevarokMLIndexSequenceNode::GetOutLimitPinNameGivenIndex(int32 index)
{
    return *FString::Printf(TEXT("Out_Limit_%d"), index);
}

void UNevarokMLIndexSequenceNode::ExpandNode(FKismetCompilerContext& compilerContext, UEdGraph* sourceGraph)
{
    Super::ExpandNode(compilerContext, sourceGraph);

    const auto schema = GetDefault<UEdGraphSchema_K2>();

    const auto execsCount = GetThenPinsCount();
    const auto execPin = GetExecPin();
    const auto indexOffsetPin = GetIndexOffsetPin();
    const auto indexStepPin = GetIndexStepPin();

    const auto sequence = compilerContext.SpawnIntermediateNode<UK2Node_ExecutionSequence>(this, sourceGraph);
    sequence->AllocateDefaultPins();

    const auto sequenceExec = sequence->GetExecPin();

    compilerContext.MovePinLinksToIntermediate(*execPin, *sequenceExec);

    for (auto i = 0; i < execsCount; i++)
    {
        const auto inLimitPin = GetInLimitPinBy(i);
        const auto limitOutTempPin = CreateTempLimitPin(compilerContext, sourceGraph);
        compilerContext.MovePinLinksToIntermediate(*GetOutLimitPinBy(i), *limitOutTempPin);
        
        const auto limitInTempPin = CreateTempLimitPin(compilerContext, sourceGraph);
        compilerContext.MovePinLinksToIntermediate(*inLimitPin, *limitInTempPin);

        const auto assignLimitStatement = compilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, sourceGraph);
        assignLimitStatement->AllocateDefaultPins();

        const auto assignLimitExec = assignLimitStatement->GetExecPin();
        const auto assignLimitVar = assignLimitStatement->GetVariablePin();
        const auto assignLimitVal = assignLimitStatement->GetValuePin();
        const auto assignLimitThen = assignLimitStatement->GetThenPin();

        compilerContext.MovePinLinksToIntermediate(*inLimitPin, *assignLimitVal);

        schema->TryCreateConnection(limitOutTempPin, assignLimitVar);
        
        const auto inNamePin = GetInNamePinBy(i);
        const auto nameOutTempPin = CreateTempNamePin(compilerContext, sourceGraph);
        compilerContext.MovePinLinksToIntermediate(*GetOutNamePinBy(i), *nameOutTempPin);
        
        const auto nameInTempPin = CreateTempNamePin(compilerContext, sourceGraph);
        compilerContext.MovePinLinksToIntermediate(*inNamePin, *nameInTempPin);

        const auto assignNameStatement = compilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, sourceGraph);
        assignNameStatement->AllocateDefaultPins();

        const auto assignNameExec = assignNameStatement->GetExecPin();
        const auto assignNameVar = assignNameStatement->GetVariablePin();
        const auto assignNameVal = assignNameStatement->GetValuePin();
        const auto assignNameThen = assignNameStatement->GetThenPin();

        compilerContext.MovePinLinksToIntermediate(*inNamePin, *assignNameVal);
        compilerContext.MovePinLinksToIntermediate(*GetExecPinBy(i), *assignNameThen);

        schema->TryCreateConnection(nameOutTempPin, assignNameVar);
        
        const auto thenPin = AssignOutPins(compilerContext,
                                          sourceGraph,
                                          schema,
                                          sequence,
                                          GetIndexPinBy(i),
                                          indexOffsetPin,
                                          indexStepPin,
                                          i);

        thenPin->MakeLinkTo(assignLimitExec);
        assignLimitThen->MakeLinkTo(assignNameExec);
    }

    const auto completePin = GetCompletePin();
    const auto thenPin = AssignOutPins(compilerContext,
                                      sourceGraph,
                                      schema,
                                      sequence,
                                      GetCompleteIndexPin(),
                                      indexOffsetPin,
                                      indexStepPin,
                                      execsCount);

    compilerContext.MovePinLinksToIntermediate(*completePin, *thenPin);
    
    BreakAllNodeLinks();
}

UEdGraphPin* UNevarokMLIndexSequenceNode::AssignOutPins(FKismetCompilerContext& compilerContext,
                                                       UEdGraph* sourceGraph,
                                                       const UEdGraphSchema_K2* schema,
                                                       UK2Node_ExecutionSequence* sequence,
                                                       UEdGraphPin* indexPin,
                                                       UEdGraphPin* indexOffsetPin,
                                                       UEdGraphPin* indexStepPin,
                                                       const int index)
{
    if (index > 1)
    {
        sequence->AddInputPin();
    }

    const auto indexTempPin = CreateTempIndexPin(compilerContext, sourceGraph);
    compilerContext.MovePinLinksToIntermediate(*indexPin, *indexTempPin);

    const auto assignIndexStatement = compilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, sourceGraph);
    assignIndexStatement->AllocateDefaultPins();

    const auto assignIndexExec = assignIndexStatement->GetExecPin();
    const auto assignIndexVar = assignIndexStatement->GetVariablePin();
    const auto assignIndexVal = assignIndexStatement->GetValuePin();
    const auto assignIndexThen = assignIndexStatement->GetThenPin();

    sequence->GetThenPinGivenIndex(index)->MakeLinkTo(assignIndexExec);
    schema->TryCreateConnection(indexTempPin, assignIndexVar);

    const auto multFunc = CreateMultFunc(compilerContext, sourceGraph);
    const auto multFuncA = multFunc->FindPinChecked(TEXT("A"));
    const auto multFuncB = multFunc->FindPinChecked(TEXT("B"));
    const auto multFuncRet = multFunc->GetReturnValuePin();

    compilerContext.CopyPinLinksToIntermediate(*indexStepPin, *multFuncA);
    multFuncB->DefaultValue = FString::Printf(TEXT("%d"), index);

    const auto addFunc = CreateAddFunc(compilerContext, sourceGraph);
    const auto addFuncA = addFunc->FindPinChecked(TEXT("A"));
    const auto addFuncB = addFunc->FindPinChecked(TEXT("B"));
    const auto addFuncRet = addFunc->GetReturnValuePin();

    compilerContext.CopyPinLinksToIntermediate(*indexOffsetPin, *addFuncA);

    addFuncB->MakeLinkTo(multFuncRet);
    addFuncRet->MakeLinkTo(assignIndexVal);

    return assignIndexThen;
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateTempIndexPin(FKismetCompilerContext& compilerContext,
                                                             UEdGraph* sourceGraph)
{
    const auto tempVar = compilerContext.SpawnIntermediateNode<UK2Node_TemporaryVariable>(this, sourceGraph);
    tempVar->VariableType.PinCategory = UEdGraphSchema_K2::PC_Int;
    tempVar->AllocateDefaultPins();

    return tempVar->GetVariablePin();
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateTempLimitPin(FKismetCompilerContext& compilerContext,
                                                             UEdGraph* sourceGraph)
{
    const auto tempVar = compilerContext.SpawnIntermediateNode<UK2Node_TemporaryVariable>(this, sourceGraph);
    tempVar->VariableType.PinCategory = UEdGraphSchema_K2::PC_Int64;
    tempVar->AllocateDefaultPins();

    return tempVar->GetVariablePin();
}

UEdGraphPin* UNevarokMLIndexSequenceNode::CreateTempNamePin(FKismetCompilerContext& compilerContext,
                                                             UEdGraph* sourceGraph)
{
    const auto tempVar = compilerContext.SpawnIntermediateNode<UK2Node_TemporaryVariable>(this, sourceGraph);
    tempVar->VariableType.PinCategory = UEdGraphSchema_K2::PC_Name;
    tempVar->AllocateDefaultPins();

    return tempVar->GetVariablePin();
}

UK2Node_CallFunction* UNevarokMLIndexSequenceNode::CreateAddFunc(FKismetCompilerContext& compilerContext,
                                                                 UEdGraph* sourceGraph)
{
    const auto func = compilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, sourceGraph);
    func->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Add_IntInt),
                                              UKismetMathLibrary::StaticClass());
    func->AllocateDefaultPins();
    return func;
}

UK2Node_CallFunction* UNevarokMLIndexSequenceNode::CreateMultFunc(FKismetCompilerContext& compilerContext,
                                                                  UEdGraph* sourceGraph)
{
    const auto func = compilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, sourceGraph);
    func->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, Multiply_IntInt),
                                              UKismetMathLibrary::StaticClass());
    func->AllocateDefaultPins();
    return func;
}

void UNevarokMLIndexSequenceNode::GetNodeContextMenuActions(UToolMenu* menu,
                                                            UGraphNodeContextMenuContext* context) const
{
    Super::GetNodeContextMenuActions(menu, context);

    if (!context->bIsDebugging)
    {
        FToolMenuSection& Section = menu->AddSection("IndexSequence");
        if (context->Pin != nullptr)
        {
            const auto pin = context->Pin;
            if (UEdGraphSchema_K2::IsExecPin(*pin)
                && pin->Direction == EGPD_Output
                && pin->PinName != UEdGraphSchema_K2::PN_Completed)
            {
                auto owner = Cast<UNevarokMLIndexSequenceNode>(pin->GetOwningNode());

                Section.AddMenuEntry("IndexSequenceNode_InsertPinBefore",
                                     LOCTEXT("NevarokMLIndexSequenceNode_InsertPinLabel", "Insert Pin Before"),
                                     LOCTEXT("NevarokMLIndexSequenceNode_InsertPinBeforeToolTip",
                                             "Insert Exec and Index Before Pin"),
                                     FSlateIcon(),
                                     FUIAction(FExecuteAction::CreateLambda([pin, owner]()
                                     {
                                         owner->InsertPin(pin->PinName, EPinInsertPosition::Before);
                                     }))
                );
                Section.AddMenuEntry("IndexSequenceNode_InsertPinAfter",
                                     LOCTEXT("NevarokMLIndexSequenceNode_InsertPinLabel", "Insert Pin After"),
                                     LOCTEXT("NevarokMLIndexSequenceNode_InsertPinAfterToolTip",
                                             "Insert Exec and Index After Pin"),
                                     FSlateIcon(),
                                     FUIAction(FExecuteAction::CreateLambda([pin, owner]()
                                     {
                                         owner->InsertPin(pin->PinName, EPinInsertPosition::After);
                                     }))
                );

                if (CanRemoveExecutionPin())
                {
                    Section.AddMenuEntry("IndexSequenceNode_RemovePin",
                                         LOCTEXT("NevarokMLIndexSequenceNode_RemovePinLabel", "Remove Pin"),
                                         LOCTEXT("NevarokMLIndexSequenceNode_RemovePinToolTip",
                                                 "Remove Exec and Index Pin"),
                                         FSlateIcon(),
                                         FUIAction(FExecuteAction::CreateLambda([pin, owner]()
                                         {
                                             owner->RemovePin(pin->PinName);
                                         }))
                    );
                    Section.AddMenuEntry("IndexSequenceNode_RemoveLastPin",
                                         LOCTEXT("NevarokMLIndexSequenceNode_RemoveLastPinLabel", "Remove Last Pin"),
                                         LOCTEXT("NevarokMLIndexSequenceNode_RemoveLastPinToolTip",
                                                 "Remove Last Exec and Index Pin"),
                                         FSlateIcon(),
                                         FUIAction(FExecuteAction::CreateLambda([pin, owner]()
                                         {
                                             owner->RemoveLastPin(pin->PinName);
                                         }))
                    );
                }
            }
        }
    }
}

void UNevarokMLIndexSequenceNode::ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& oldPins)
{
    Super::AllocateDefaultPins();

    CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
    CreateIndexOffsetPin();
    CreateIndexStepPin();

    CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Completed);
    CreateCompleteIndexPin();

    for (int32 i = 0; i < oldPins.Num(); ++i)
    {
        const auto pin = oldPins[i];
        if (UEdGraphSchema_K2::IsExecPin(*pin)
            && pin->Direction == EGPD_Output
            && pin->PinName != UEdGraphSchema_K2::PN_Completed)
        {
            CreateNameInPin();
            CreateLimitInPin();
            CreateExecOutPin();
            CreateNameOutPin();
            CreateIndexOutPin();
            CreateLimitOutPin();
        }
    }
}

void UNevarokMLIndexSequenceNode::FixupPinDefaultValues()
{
    Super::FixupPinDefaultValues();
}

void UNevarokMLIndexSequenceNode::FixupPinStringDataReferences(FArchive* SavingArchive)
{
    Super::FixupPinStringDataReferences(SavingArchive);
}

void UNevarokMLIndexSequenceNode::GetMenuActions(FBlueprintActionDatabaseRegistrar& actionRegistrar) const
{
    UClass* ActionKey = GetClass();

    if (actionRegistrar.IsOpenForRegistration(ActionKey))
    {
        UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
        check(NodeSpawner != nullptr);

        actionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
    }
}

FText UNevarokMLIndexSequenceNode::GetMenuCategory() const
{
    return FEditorCategoryUtils::GetCommonCategory(FCommonEditorCategory::FlowControl);
}

#undef LOCTEXT_NAMESPACE
