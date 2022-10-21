// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintsToCpp/Grabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	BLUEPRINTSTOCPP_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BLUEPRINTSTOCPP_API UClass* Z_Construct_UClass_UGrabber();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_BlueprintsToCpp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrabber::execGetPhysicsComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsHandleComponent**)Z_Param__Result=P_THIS->GetPhysicsComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabber::execGetHoldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHoldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabber::execGetMaxGrabLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMaxGrabLocation();
		P_NATIVE_END;
	}
	void UGrabber::StaticRegisterNativesUGrabber()
	{
		UClass* Class = UGrabber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHoldLocation", &UGrabber::execGetHoldLocation },
			{ "GetMaxGrabLocation", &UGrabber::execGetMaxGrabLocation },
			{ "GetPhysicsComponent", &UGrabber::execGetPhysicsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics
	{
		struct Grabber_eventGetHoldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grabber_eventGetHoldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GetHoldLocation", nullptr, nullptr, sizeof(Grabber_eventGetHoldLocation_Parms), Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber_GetHoldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabber_GetHoldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics
	{
		struct Grabber_eventGetMaxGrabLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grabber_eventGetMaxGrabLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//use BlueprintPure only if there's no execution node on the function\n" },
		{ "ModuleRelativePath", "Grabber.h" },
		{ "ToolTip", "use BlueprintPure only if there's no execution node on the function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GetMaxGrabLocation", nullptr, nullptr, sizeof(Grabber_eventGetMaxGrabLocation_Parms), Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber_GetMaxGrabLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabber_GetMaxGrabLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics
	{
		struct Grabber_eventGetPhysicsComponent_Parms
		{
			UPhysicsHandleComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grabber_eventGetPhysicsComponent_Parms, ReturnValue), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GetPhysicsComponent", nullptr, nullptr, sizeof(Grabber_eventGetPhysicsComponent_Parms), Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabber_GetPhysicsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabber_GetPhysicsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGrabDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGrabDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoldDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintsToCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabber_GetHoldLocation, "GetHoldLocation" }, // 26263015
		{ &Z_Construct_UFunction_UGrabber_GetMaxGrabLocation, "GetMaxGrabLocation" }, // 619181721
		{ &Z_Construct_UFunction_UGrabber_GetPhysicsComponent, "GetPhysicsComponent" }, // 1972958962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_MaxGrabDistance_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_MaxGrabDistance = { "MaxGrabDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, MaxGrabDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_MaxGrabDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_MaxGrabDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_HoldDistance_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_HoldDistance = { "HoldDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, HoldDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_HoldDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_HoldDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_MaxGrabDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_HoldDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
		&UGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 2424211499);
	template<> BLUEPRINTSTOCPP_API UClass* StaticClass<UGrabber>()
	{
		return UGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/BlueprintsToCpp"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
