// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokMLNodes/Public/Nodes/NevarokMLIndexSequenceNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLIndexSequenceNode() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	NEVAROKMLNODES_API UClass* Z_Construct_UClass_UNevarokMLIndexSequenceNode();
	NEVAROKMLNODES_API UClass* Z_Construct_UClass_UNevarokMLIndexSequenceNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokMLNodes();
// End Cross Module References
	void UNevarokMLIndexSequenceNode::StaticRegisterNativesUNevarokMLIndexSequenceNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLIndexSequenceNode);
	UClass* Z_Construct_UClass_UNevarokMLIndexSequenceNode_NoRegister()
	{
		return UNevarokMLIndexSequenceNode::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokMLNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/NevarokMLIndexSequenceNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/NevarokMLIndexSequenceNode.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UNevarokMLIndexSequenceNode, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLIndexSequenceNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::ClassParams = {
		&UNevarokMLIndexSequenceNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLIndexSequenceNode()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLIndexSequenceNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLIndexSequenceNode.OuterSingleton, Z_Construct_UClass_UNevarokMLIndexSequenceNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLIndexSequenceNode.OuterSingleton;
	}
	template<> NEVAROKMLNODES_API UClass* StaticClass<UNevarokMLIndexSequenceNode>()
	{
		return UNevarokMLIndexSequenceNode::StaticClass();
	}
	UNevarokMLIndexSequenceNode::UNevarokMLIndexSequenceNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLIndexSequenceNode);
	UNevarokMLIndexSequenceNode::~UNevarokMLIndexSequenceNode() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokMLNodes_Public_Nodes_NevarokMLIndexSequenceNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokMLNodes_Public_Nodes_NevarokMLIndexSequenceNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLIndexSequenceNode, UNevarokMLIndexSequenceNode::StaticClass, TEXT("UNevarokMLIndexSequenceNode"), &Z_Registration_Info_UClass_UNevarokMLIndexSequenceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLIndexSequenceNode), 2891994833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokMLNodes_Public_Nodes_NevarokMLIndexSequenceNode_h_1330415658(TEXT("/Script/NevarokMLNodes"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokMLNodes_Public_Nodes_NevarokMLIndexSequenceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokMLNodes_Public_Nodes_NevarokMLIndexSequenceNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
