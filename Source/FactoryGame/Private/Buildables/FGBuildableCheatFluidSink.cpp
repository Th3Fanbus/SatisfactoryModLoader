// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableCheatFluidSink.h"

void AFGBuildableCheatFluidSink::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableCheatFluidSink::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBuildableCheatFluidSink::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
FFluidBox* AFGBuildableCheatFluidSink::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildableCheatFluidSink::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
void AFGBuildableCheatFluidSink::SetEnabled(bool isEnabled){ }
void AFGBuildableCheatFluidSink::SetSinkRate(float sinkRate){ }
void AFGBuildableCheatFluidSink::SetMinimumContent(float minimumContent){ }
void AFGBuildableCheatFluidSink::SetMinimumPressure(float minimumPressure){ }
void AFGBuildableCheatFluidSink::Factory_TickProducing(float dt){ }
