// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePortalBase.h"
#include "Net/UnrealNetwork.h"

FFGPortalCachedFactoryTickData::FFGPortalCachedFactoryTickData(){ }
FFGPortalLinkCandidate::FFGPortalLinkCandidate(){ }
AFGBuildablePortalBase::AFGBuildablePortalBase() : Super() {
	this->mCompassMaterialInstance = nullptr;
	this->mPortalTravelTimeOverDistance = nullptr;
	this->mMaxPortalTravelTime = 30.0;
	this->mLinkedPortal = nullptr;
	this->mIsPortalTraversable = false;
	this->mPowerConsumptionPerTeleportOverDistance = nullptr;
	this->mActorRepresentationTexture = nullptr;
	this->mActorRepresentationColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mActorRepresentationViewDistance = ECompassViewDistance::CVD_Off;
	this->mActorRepresentationFogOfWarRevealRadius = 0.0;
	this->mPortalName = INVTEXT("");
	this->mTeleportPowerConsumptionTimeLeft = 0.0;
	this->mTeleportPowerConsumption = 0.0;
	this->mCachedFactoryTickData.mCachedPowerConsumption = 0.0;
	this->mCachedFactoryTickData.mCachedIsProducing = false;
	this->mCachedFactoryTickData.mCachedHasPower = false;
	this->mCachedFactoryTickData.mCachedHeatUpComplete = false;
	this->mCachedFactoryTickData.mCachedCurrentHeatUpProgress = 0.0;
}
void AFGBuildablePortalBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePortalBase, mLinkedPortal);
	DOREPLIFETIME(AFGBuildablePortalBase, mIsPortalTraversable);
	DOREPLIFETIME(AFGBuildablePortalBase, mPortalName);
}
void AFGBuildablePortalBase::BeginPlay(){ }
void AFGBuildablePortalBase::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
float AFGBuildablePortalBase::GetProducingPowerConsumptionBase() const{ return float(); }
void AFGBuildablePortalBase::Factory_Tick(float dt){ }
void AFGBuildablePortalBase::Dismantle_Implementation(){ }
bool AFGBuildablePortalBase::AddAsRepresentation(){ return bool(); }
bool AFGBuildablePortalBase::UpdateRepresentation(){ return bool(); }
bool AFGBuildablePortalBase::RemoveAsRepresentation(){ return bool(); }
bool AFGBuildablePortalBase::IsActorStatic(){ return bool(); }
FVector AFGBuildablePortalBase::GetRealActorLocation(){ return FVector(); }
FRotator AFGBuildablePortalBase::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGBuildablePortalBase::GetActorRepresentationTexture(){ return nullptr; }
FText AFGBuildablePortalBase::GetActorRepresentationText(){ return FText(); }
void AFGBuildablePortalBase::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGBuildablePortalBase::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGBuildablePortalBase::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGBuildablePortalBase::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGBuildablePortalBase::GetActorShouldShowInCompass(){ return bool(); }
bool AFGBuildablePortalBase::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGBuildablePortalBase::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGBuildablePortalBase::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGBuildablePortalBase::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGBuildablePortalBase::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
UMaterialInterface* AFGBuildablePortalBase::GetActorRepresentationCompassMaterial(){ return nullptr; }
void AFGBuildablePortalBase::MakeLinkToPortal(AFGBuildablePortalBase* otherPortal){ }
void AFGBuildablePortalBase::DisconnectLinkedPortal(){ }
void AFGBuildablePortalBase::PopulatePortalLinkCandidates(TArray<FFGPortalLinkCandidate>& out_linkCandidates) const{ }
void AFGBuildablePortalBase::GetPortalSurfaceTransform_Implementation(FTransform& out_portalTransform) const{ }
void AFGBuildablePortalBase::OnPlayerTeleportBegin_Implementation(AFGCharacterPlayer* player, AFGBuildablePortalBase* toPortal, float totalTravelDistance){ }
void AFGBuildablePortalBase::OnPlayerTeleportComplete_Implementation(AFGCharacterPlayer* player, AFGBuildablePortalBase* fromPortal, float totalTravelDistance){ }
void AFGBuildablePortalBase::SetPortalName(const FText& inPortalName){ }
float AFGBuildablePortalBase::GetEstimatedPowerConsumptionForTeleport() const{ return float(); }
float AFGBuildablePortalBase::CalculatePowerConsumptionForDistance(float distance) const{ return float(); }
FFGPortalCachedFactoryTickData AFGBuildablePortalBase::GetCachedFactoryTickData_ThreadSafe(){ return FFGPortalCachedFactoryTickData(); }
void AFGBuildablePortalBase::Factory_UpdatePowerConsumption() const{ }
void AFGBuildablePortalBase::Factory_UpdateMaxPowerConsumption() const{ }
float AFGBuildablePortalBase::GetMaximumPowerConsumption() const{ return float(); }
void AFGBuildablePortalBase::FillCachedFactoryTickData(FFGPortalCachedFactoryTickData& out_cachedData) const{ }
float AFGBuildablePortalBase::GetProducingPowerConsumptionBase_ForPortal() const{ return float(); }
EFGPortalLinkCandidateState AFGBuildablePortalBase::CanLinkToPortal(AFGBuildablePortalBase* otherPortal) const{ return EFGPortalLinkCandidateState(); }
void AFGBuildablePortalBase::OnPlayerTeleportOverDistance(float distance){ }
void AFGBuildablePortalBase::MakePortalTraversable(){ }
void AFGBuildablePortalBase::ResetPortalTraversable(){ }
void AFGBuildablePortalBase::SetPortalTraversableInternal(bool isNowTraversable){ }
void AFGBuildablePortalBase::OnLinkedPortalDisconnected(){ }
void AFGBuildablePortalBase::OnMadeLinkToPortal(AFGBuildablePortalBase* otherPortal){ }
void AFGBuildablePortalBase::OnRep_LinkedPortal(){ }
void AFGBuildablePortalBase::OnRep_PortalTraversable(){ }