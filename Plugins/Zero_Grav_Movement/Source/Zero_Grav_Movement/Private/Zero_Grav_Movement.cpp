// Copyright Epic Games, Inc. All Rights Reserved.

#include "Zero_Grav_Movement.h"

#define LOCTEXT_NAMESPACE "FZero_Grav_MovementModule"

void FZero_Grav_MovementModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FZero_Grav_MovementModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FZero_Grav_MovementModule, Zero_Grav_Movement)