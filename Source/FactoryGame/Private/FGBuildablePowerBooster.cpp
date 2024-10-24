// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePowerBooster.h"
#include "FGInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AFGBuildablePowerBooster::AFGBuildablePowerBooster() : Super() {
	this->mBasePowerProduction = 0.0;
	this->mBaseBoostPercentage = 0.0;
	this->mCurrentFuelBoostPercentage = 0.0;
	this->mFuelInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("FuelInventory"));
	this->mHasFuelCached = false;
	this->mCurrentFuelClass = nullptr;
	this->mCurrentFuelDuration = 0.0;
	this->mCurrentFuelDurationLeft = 0.0;
}
void AFGBuildablePowerBooster::PostInitProperties(){ Super::PostInitProperties(); }
void AFGBuildablePowerBooster::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePowerBooster, mHasFuelCached);
}
void AFGBuildablePowerBooster::GetConditionalReplicatedProps(TArray<FFGCondReplicatedProperty>& outProps) const{ }
void AFGBuildablePowerBooster::BeginPlay(){ Super::BeginPlay(); }
bool AFGBuildablePowerBooster::CanProduce_Implementation() const{ return bool(); }
float AFGBuildablePowerBooster::GetProductionProgress() const{ return float(); }
float AFGBuildablePowerBooster::GetProductionCycleTime() const{ return float(); }
float AFGBuildablePowerBooster::GetDefaultProductionCycleTime() const{ return float(); }
float AFGBuildablePowerBooster::GetProductivity() const{ return float(); }
bool AFGBuildablePowerBooster::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildablePowerBooster::HasFuel() const{ return bool(); }
bool AFGBuildablePowerBooster::Factory_HasPower() const{ return bool(); }
void AFGBuildablePowerBooster::Factory_CollectInput_Implementation(){ }
void AFGBuildablePowerBooster::Factory_TickProducing(float dt){ }
void AFGBuildablePowerBooster::LoadFuel(){ }
bool AFGBuildablePowerBooster::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
