// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemPickup.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ObjectSaveContext.h"

AFGItemPickup::AFGItemPickup() : Super() {
	this->mSignificanceRange = 5000.0;
	this->bShouldAddToSignificanceManager = false;
	this->mTimeToPickUp = 0.0;
	this->mCollector = nullptr;
	this->mDestroyOnPickup = true;
	this->mSoundComponent = nullptr;
	this->mAudioEvent = nullptr;
	this->mRespawnTimeInDays = -1;
	this->mUpdatedOnDayNr = -1;
	this->mItemState = EItemState::ES_NORMAL;
	this->mGrowTimeInDays = 3;
	this->mSavedNumItems = -1;
	this->mMaxRespawns = -1;
	this->mSendTelemetryOnPickup = false;
	this->mLastPlayerToHoldThisItem = nullptr;
}
void AFGItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGItemPickup, mCollector);
	DOREPLIFETIME(AFGItemPickup, mPickupItems);
	DOREPLIFETIME(AFGItemPickup, mItemState);
}
void AFGItemPickup::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGItemPickup::BeginPlay(){ }
void AFGItemPickup::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGItemPickup::PreSave(FObjectPreSaveContext SaveContext)
{
	Super::PreSave(SaveContext);
#if WITH_EDITOR
	// Cache scannable data from the world during the cooking process
	// Avoid attempting to cache the data on the CDOs and Archetypes, and objects without a world context
	if (SaveContext.IsCooking() && !HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject) && GetWorld() != nullptr) {
		mItemPickupGuid = GetActorGuid();
	}
#endif
}
void AFGItemPickup::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGItemPickup::NeedTransform_Implementation(){ return bool(); }
bool AFGItemPickup::ShouldSave_Implementation() const{ return bool(); }
void AFGItemPickup::GainedSignificance_Implementation(){ }
void AFGItemPickup::LostSignificance_Implementation(){ }
void AFGItemPickup::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
void AFGItemPickup::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGItemPickup::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGItemPickup::IsUseable_Implementation() const{ return bool(); }
void AFGItemPickup::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGItemPickup::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGItemPickup::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGItemPickup::PickUpByCharacter(AFGCharacterPlayer* byCharacter){ }
const AFGPlayerController* AFGItemPickup::EatenByCreature(const int32 amount){ return nullptr; }
void AFGItemPickup::Multicast_PlayPickupEffect_Implementation(){ }
float AFGItemPickup::GetNormalizedCollectionProgress(){ return float(); }
void AFGItemPickup::RespawnItems(){ }
void AFGItemPickup::ClearPickup(){ }
void AFGItemPickup::PlantPickup(){ }
void AFGItemPickup::Grow(){ }
void AFGItemPickup::RegisterToRegrowSystem(){ }
void AFGItemPickup::PlayPickupEffectImpl(){ }
void AFGItemPickup::SetNumItems(int32 numItems){ }
void AFGItemPickup::OnCollectTimerComplete(){ }
bool AFGItemPickup::IsEquipment() const{ return bool(); }
void AFGItemPickup::AddToPlayerEquipmentSlots(AFGCharacterPlayer* byCharacter){ }
void AFGItemPickup::AddToPlayerInventory( AFGCharacterPlayer* character){ }
void AFGItemPickup::OnRep_PickedUp(){ }
void AFGItemPickup::OnRep_StateUpdated(){ }
void AFGItemPickup::UpdateRadioactivity(){ }
