// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NevarokML/Public/Sockets/NevarokMLSocketServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNevarokMLSocketServer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSocketServer();
	NEVAROKML_API UClass* Z_Construct_UClass_UNevarokMLSocketServer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NevarokML();
// End Cross Module References
	DEFINE_FUNCTION(UNevarokMLSocketServer::execCloseConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UNevarokMLSocketServer::BytesToString(Z_Param_Out_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execStringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UNevarokMLSocketServer::StringToBytes(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execHasConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execHasPendingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPendingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execReceive)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Receive(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execSend)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execListen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Listen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNevarokMLSocketServer::execInitialize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param_address,Z_Param_port);
		P_NATIVE_END;
	}
	void UNevarokMLSocketServer::StaticRegisterNativesUNevarokMLSocketServer()
	{
		UClass* Class = UNevarokMLSocketServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToString", &UNevarokMLSocketServer::execBytesToString },
			{ "Close", &UNevarokMLSocketServer::execClose },
			{ "CloseConnections", &UNevarokMLSocketServer::execCloseConnections },
			{ "HasConnections", &UNevarokMLSocketServer::execHasConnections },
			{ "HasPendingData", &UNevarokMLSocketServer::execHasPendingData },
			{ "Initialize", &UNevarokMLSocketServer::execInitialize },
			{ "IsConnected", &UNevarokMLSocketServer::execIsConnected },
			{ "Listen", &UNevarokMLSocketServer::execListen },
			{ "Receive", &UNevarokMLSocketServer::execReceive },
			{ "Send", &UNevarokMLSocketServer::execSend },
			{ "StringToBytes", &UNevarokMLSocketServer::execStringToBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics
	{
		struct NevarokMLSocketServer_eventBytesToString_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventBytesToString_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "BytesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::NevarokMLSocketServer_eventBytesToString_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "CloseConnections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics
	{
		struct NevarokMLSocketServer_eventHasConnections_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventHasConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventHasConnections_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "HasConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::NevarokMLSocketServer_eventHasConnections_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics
	{
		struct NevarokMLSocketServer_eventHasPendingData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventHasPendingData_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "HasPendingData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::NevarokMLSocketServer_eventHasPendingData_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics
	{
		struct NevarokMLSocketServer_eventInitialize_Parms
		{
			FString address;
			int32 port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventInitialize_Parms, address), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventInitialize_Parms, port), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_port_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventInitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventInitialize_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::NevarokMLSocketServer_eventInitialize_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics
	{
		struct NevarokMLSocketServer_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventIsConnected_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::NevarokMLSocketServer_eventIsConnected_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics
	{
		struct NevarokMLSocketServer_eventListen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventListen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventListen_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "Listen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::NevarokMLSocketServer_eventListen_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_Listen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_Listen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics
	{
		struct NevarokMLSocketServer_eventReceive_Parms
		{
			TArray<uint8> data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventReceive_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventReceive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventReceive_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "Receive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::NevarokMLSocketServer_eventReceive_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_Receive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_Receive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics
	{
		struct NevarokMLSocketServer_eventSend_Parms
		{
			TArray<uint8> data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventSend_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NevarokMLSocketServer_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NevarokMLSocketServer_eventSend_Parms), &Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "Send", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::NevarokMLSocketServer_eventSend_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics
	{
		struct NevarokMLSocketServer_eventStringToBytes_Parms
		{
			FString text;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventStringToBytes_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NevarokMLSocketServer_eventStringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "NevarokML|SocketServer" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNevarokMLSocketServer, nullptr, "StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::NevarokMLSocketServer_eventStringToBytes_Parms), Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNevarokMLSocketServer);
	UClass* Z_Construct_UClass_UNevarokMLSocketServer_NoRegister()
	{
		return UNevarokMLSocketServer::StaticClass();
	}
	struct Z_Construct_UClass_UNevarokMLSocketServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNevarokMLSocketServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NevarokML,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNevarokMLSocketServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_BytesToString, "BytesToString" }, // 2606840462
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_Close, "Close" }, // 3968316798
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_CloseConnections, "CloseConnections" }, // 280854467
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_HasConnections, "HasConnections" }, // 439979127
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_HasPendingData, "HasPendingData" }, // 3133616815
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_Initialize, "Initialize" }, // 3550144189
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_IsConnected, "IsConnected" }, // 2952420160
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_Listen, "Listen" }, // 1122928542
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_Receive, "Receive" }, // 1256901960
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_Send, "Send" }, // 798383153
		{ &Z_Construct_UFunction_UNevarokMLSocketServer_StringToBytes, "StringToBytes" }, // 2060276854
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNevarokMLSocketServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sockets/NevarokMLSocketServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sockets/NevarokMLSocketServer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNevarokMLSocketServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNevarokMLSocketServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNevarokMLSocketServer_Statics::ClassParams = {
		&UNevarokMLSocketServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNevarokMLSocketServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNevarokMLSocketServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNevarokMLSocketServer()
	{
		if (!Z_Registration_Info_UClass_UNevarokMLSocketServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNevarokMLSocketServer.OuterSingleton, Z_Construct_UClass_UNevarokMLSocketServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNevarokMLSocketServer.OuterSingleton;
	}
	template<> NEVAROKML_API UClass* StaticClass<UNevarokMLSocketServer>()
	{
		return UNevarokMLSocketServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNevarokMLSocketServer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Sockets_NevarokMLSocketServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Sockets_NevarokMLSocketServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNevarokMLSocketServer, UNevarokMLSocketServer::StaticClass, TEXT("UNevarokMLSocketServer"), &Z_Registration_Info_UClass_UNevarokMLSocketServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNevarokMLSocketServer), 4062464727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Sockets_NevarokMLSocketServer_h_3947006209(TEXT("/Script/NevarokML"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Sockets_NevarokMLSocketServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NevarokML_Source_NevarokML_Public_Sockets_NevarokMLSocketServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
