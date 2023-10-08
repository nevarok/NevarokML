/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Nodes/NevarokMLIndex2DSequenceNode.h"

#include "Containers/EnumAsByte.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_CallFunction.h"
#include "K2Node_TemporaryVariable.h"
#include "KismetCompiler.h"
#include "HAL/PlatformCrt.h"
#include "HAL/PlatformMath.h"
#include "Internationalization/Internationalization.h"
#include "Kismet2/CompilerResultsLog.h"
#include "Misc/AssertionMacros.h"
#include "Styling/AppStyle.h"
#include "Templates/Casts.h"
#include "Types/NevarokMLIndex2D.h"
#include "UObject/Class.h"
#include "Utils/NevarokMLMathUtils.h"

#define LOCTEXT_NAMESPACE "NevarokMLIndex2DSequenceNode"

UEdGraphPin* UNevarokMLIndex2DSequenceNode::CreateTempIndexPin(FKismetCompilerContext& compilerContext,
                                                               UEdGraph* sourceGraph)
{
    const auto tempVar = compilerContext.SpawnIntermediateNode<UK2Node_TemporaryVariable>(this, sourceGraph);

    tempVar->VariableType.PinCategory = UEdGraphSchema_K2::PC_Struct;
    tempVar->VariableType.PinSubCategoryObject = FNevarokMLIndex2D::StaticStruct();
    tempVar->AllocateDefaultPins();

    return tempVar->GetVariablePin();
}

UK2Node_CallFunction* UNevarokMLIndex2DSequenceNode::CreateAddFunc(FKismetCompilerContext& compilerContext,
                                                                   UEdGraph* sourceGraph)
{
    const auto func = compilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, sourceGraph);
    func->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UNevarokMLMathUtils, Add_Index2DIndex2D),
                                              UNevarokMLMathUtils::StaticClass());
    func->AllocateDefaultPins();
    return func;
}

UK2Node_CallFunction* UNevarokMLIndex2DSequenceNode::CreateMultFunc(FKismetCompilerContext& compilerContext,
                                                                    UEdGraph* sourceGraph)
{
    const auto func = compilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, sourceGraph);
    func->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UNevarokMLMathUtils, Multiply_Index2DInt),
                                              UNevarokMLMathUtils::StaticClass());
    func->AllocateDefaultPins();
    return func;
}

void UNevarokMLIndex2DSequenceNode::CreateIndexStepPin()
{
    const auto pin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, IndexStepPinName);
    pin->PinType.PinSubCategoryObject = FNevarokMLIndex2D::StaticStruct();
}

void UNevarokMLIndex2DSequenceNode::CreateIndexOffsetPin()
{
    const auto pin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, IndexOffsetPinName);
    pin->PinType.PinSubCategoryObject = FNevarokMLIndex2D::StaticStruct();
}

void UNevarokMLIndex2DSequenceNode::CreateCompleteIndexPin()
{
    const auto pin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Struct, CompleteIndexPinName);
    pin->PinType.PinSubCategoryObject = FNevarokMLIndex2D::StaticStruct();
}

FText UNevarokMLIndex2DSequenceNode::GetNodeTitle(ENodeTitleType::Type titleType) const
{
    return NSLOCTEXT("NevarokML", "Index2DSequence", "Index2DSequence");
}

UEdGraphPin* UNevarokMLIndex2DSequenceNode::CreateIndexOutPin(UEdGraphNode::FCreatePinParams params)
{
    const auto pin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Struct, GetUniqueIndexPinName(), params);
    pin->PinType.PinSubCategoryObject = FNevarokMLIndex2D::StaticStruct();
    return pin;
}

UEdGraphPin* UNevarokMLIndex2DSequenceNode::CreateLimitInPin(FCreatePinParams params)
{
    const auto pin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, GetUniqueInLimitPinName(), params);
    pin->PinType.PinSubCategoryObject = TBaseStructure<FVector2D>::Get();
    return pin;
}

UEdGraphPin* UNevarokMLIndex2DSequenceNode::CreateLimitOutPin(FCreatePinParams params)
{
    const auto pin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Struct, GetUniqueOutLimitPinName(), params);
    pin->PinType.PinSubCategoryObject = TBaseStructure<FVector2D>::Get();
    return pin;
}

UEdGraphPin* UNevarokMLIndex2DSequenceNode::CreateTempLimitPin(FKismetCompilerContext& compilerContext,
    UEdGraph* sourceGraph)
{
    const auto tempVar = compilerContext.SpawnIntermediateNode<UK2Node_TemporaryVariable>(this, sourceGraph);
    tempVar->VariableType.PinCategory = UEdGraphSchema_K2::PC_Struct;
    tempVar->VariableType.PinSubCategoryObject = TBaseStructure<FVector2D>::Get();
    tempVar->AllocateDefaultPins();

    return tempVar->GetVariablePin();
}

#undef LOCTEXT_NAMESPACE
