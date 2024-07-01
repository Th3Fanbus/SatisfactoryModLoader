// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildable.h"
#include "Components/SceneComponent.h"
#include "FGSwatchGroup.h"
#include "Net/UnrealNetwork.h"
#include "AbstractInstanceManager.h"

DEFINE_LOG_CATEGORY(LogBuilding);

#if WITH_EDITOR
void AFGBuildable::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mInstanceData)) {
        mInstanceDataCDO = mInstanceData;
    }

    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mBuildableSparseDataEditorObject)) {
        mBuildableSparseDataCDO = mBuildableSparseDataEditorObject;
    }
}
void AFGBuildable::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) {
    Super::PostEditChangeChainProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mInstanceData)) {
        mInstanceDataCDO = mInstanceData;
    }

    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mBuildableSparseDataEditorObject)) {
        mBuildableSparseDataCDO = mBuildableSparseDataEditorObject;
    }
}
#endif
void AFGBuildable::OnConstruction(const FTransform& transform) {
    Super::OnConstruction(transform);

#if WITH_EDITOR
    RemoveInstances();
    RemoveInstances_Native();
    CallSetupInstances();
#endif
}
TArray<struct FInstanceData> AFGBuildable::GetActorLightweightInstanceData_Implementation() {
    if (IsValid(mInstanceDataCDO)) {
        return mInstanceDataCDO->GetInstanceData();
    }
    return TArray<FInstanceData>();
}
void AFGBuildable::SetupInstances_Native(bool bInitializeHidden) {
    if (GetWorld() && IsValid(mInstanceDataCDO)) {
        for (FInstanceData InstanceData : mInstanceDataCDO->GetInstanceData()) {
            if (IsValid(InstanceData.StaticMesh) && !InstanceData.OverridenMaterials.Contains(nullptr)) {
                FInstanceHandle* Handle = nullptr;
                AAbstractInstanceManager::SetInstanceFromDataStatic(this, this->GetActorTransform(), InstanceData, Handle, bInitializeHidden);
				if (Handle && Handle->IsValid()) {
					mInstanceHandles.Add(Handle);
				} else {
					UE_LOG(LogBuilding, Warning, TEXT("[Th3] Invalid Handle for %s mesh %s at %s"),
						   *this->GetPathName(),
						   InstanceData.StaticMesh ? *InstanceData.StaticMesh->GetName() : TEXT("nullptr"),
						   *InstanceData.RelativeTransform.ToString());
				}
            }
        }
    }
}
void AFGBuildable::RemoveInstances_Native() {
    if (UWorld* World = GetWorld()) {
		if (AAbstractInstanceManager* Manager = AAbstractInstanceManager::GetInstanceManager(World)) {
			for (FInstanceHandle* InstanceHandle : mInstanceHandles) {
				if (InstanceHandle->IsInstanced()) {
					Manager->RemoveInstance(InstanceHandle);
				}
			}
		}
		mInstanceHandles.Empty();
    }
}

void UFGSignificantNetworkRCO::GetLifetimeReplicatedProps(::TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGSignificantNetworkRCO, mForceNetField_UFGSignificantNetworkRemoteCallObject);
}
void UFGSignificantNetworkRCO::Server_RequestDecoratorSignificantComponents_Implementation(AFGBuildable* actor, AFGPlayerController* controller){ }
void UFGSignificantNetworkRCO::Server_RemoveDecoratorSignificantComponents_Implementation(AFGBuildable* actor, AFGPlayerController* controller){ }
#if WITH_EDITOR
void AFGBuildable::CheckForErrors(){ Super::CheckForErrors(); }
#endif 
#if STATS
#endif 
#if WITH_EDITOR
void AFGBuildable::SetBuildableDisplayName(TSubclassOf< AFGBuildable > inClass, FText displayName){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
#if WITH_EDITORONLY_DATA
#endif 
#if WITH_EDITOR
void AFGBuildable::DebugDrawOcclusionBoxes(){ }
#endif 
#if WITH_EDITOR
#endif 
void AFGBuildable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildable, mColorSlot);
	DOREPLIFETIME(AFGBuildable, mCustomizationData);
	DOREPLIFETIME(AFGBuildable, mBuildEffectInstignator);
	DOREPLIFETIME(AFGBuildable, mIsMultiSpawnedBuildable);
	DOREPLIFETIME(AFGBuildable, mBlueprintDesigner);
	DOREPLIFETIME(AFGBuildable, mNetConstructionID);
	DOREPLIFETIME(AFGBuildable, mBuiltWithRecipe);
	DOREPLIFETIME(AFGBuildable, mOriginalBuildableVariant);
	DOREPLIFETIME(AFGBuildable, mBlueprintProxy);
	DOREPLIFETIME(AFGBuildable, mBlueprintBuildEffectID);
}
void AFGBuildable::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildable::AFGBuildable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mHologramClass = nullptr;
	this->mDisplayName = INVTEXT("");
	this->mDescription = INVTEXT("");
	this->MaxRenderDistance = -1.0;
	this->mDecoratorClass = nullptr;
	this->mContainsComponents = true;
	this->mIsConsideredForBaseWeightValue = 1.0;
	this->mBuildableSparseDataCDO = nullptr;
	this->mDismantleRedirectActor = nullptr;
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = false;
	this->mFactoryTickFunction.bStartWithTickEnabled = true;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
	this->mColorSlot = 0;
	this->mDefaultSwatchCustomizationOverride = nullptr;
	this->mSwatchGroup = UFGSwatchGroup_Standard::StaticClass();
	this->mFactorySkinClass = nullptr;
	this->mActiveBuildEffect = nullptr;
	this->mBuildEffectInstignator = nullptr;
	this->mBuildEffectSpeed = 0.0;
	this->mAllowColoring = true;
	this->mAllowPatterning = true;
	this->mSkipBuildEffect = false;
	this->mForceNetUpdateOnRegisterPlayer = false;
	this->mToggleDormancyOnInteraction = false;
	this->mIsMultiSpawnedBuildable = false;
	this->mShouldShowAttachmentPointVisuals = false;
	this->mCreateClearanceMeshRepresentation = true;
	this->mCanContainLightweightInstances = false;
	this->mInstanceDataCDO = nullptr;
	this->mAffectsOcclusion = false;
	this->mOcclusionShape = EFGRainOcclusionShape::ROCS_Box;
	this->mCustomOcclusionShape = nullptr;
	this->mScaleCustomOffset = 1.0;
	this->mCustomScaleType = EFGRainOcclusionShapeScaling::ROCSS_Center;
	this->mBlueprintDesigner = nullptr;
	this->mInteractWidgetClass = nullptr;
	this->mIsUseable = false;
	this->mBuiltWithRecipe = nullptr;
	this->mOriginalBuildableVariant = nullptr;
	this->mBuildTimeStamp = 0.0;
	this->mClearanceComponent = nullptr;
	this->mComplexClearanceComponent = nullptr;
	this->mHideOnBuildEffectStart = false;
	this->mShouldModifyWorldGrid = true;
	this->mBlueprintProxy = nullptr;
	this->mBlueprintBuildEffectID = -1;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = true;
	this->NetDormancy = ENetDormancy::DORM_Initial;
	this->NetCullDistanceSquared = 5625000000.0;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->RootComponent->SetMobility(EComponentMobility::Static);
}
void AFGBuildable::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGBuildable::PostLoad(){ Super::PostLoad(); }
void AFGBuildable::BeginPlay(){ }
void AFGBuildable::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildable::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildable::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGBuildable::NeedTransform_Implementation(){ return bool(); }
bool AFGBuildable::ShouldSave_Implementation() const{ return bool(); }
void AFGBuildable::PostLazySpawnInstances_Implementation(){ }
void AFGBuildable::SetCustomizationData_Implementation(const FFactoryCustomizationData& customizationData){ }
void AFGBuildable::SetCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
void AFGBuildable::ApplyCustomizationData_Implementation(const FFactoryCustomizationData& customizationData){ }
void AFGBuildable::ApplyCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGBuildable::GetActiveSkin_Native(){ return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGBuildable::GetActiveSkin_Implementation(){ return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
bool AFGBuildable::GetCanBeColored_Implementation(){ return bool(); }
bool AFGBuildable::GetCanBePatterned_Implementation(){ return bool(); }
void AFGBuildable::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter, bool isValid){ }
void AFGBuildable::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
void AFGBuildable::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildable::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildable::IsUseable_Implementation() const{ return bool(); }
void AFGBuildable::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildable::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildable::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildable::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGBuildable::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGBuildable::EnablePrimaryTickFunctions(bool enable){ }
void AFGBuildable::TickFactory(float dt, ELevelTick TickType){ }
void AFGBuildable::Factory_Tick(float dt){ }
bool AFGBuildable::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildable::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
FVector AFGBuildable::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGBuildable::PreUpgrade_Implementation(){ }
void AFGBuildable::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildable::Dismantle_Implementation(){ }
void AFGBuildable::StartIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildable::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const{ }
void AFGBuildable::StartIsLookedAtForConnection( AFGCharacterPlayer* byCharacter,  UFGCircuitConnectionComponent* overlappingConnection){ }
void AFGBuildable::StopIsLookedAtForConnection( AFGCharacterPlayer* byCharacter){ }
TSubclassOf< class UFGItemDescriptor > AFGBuildable::GetBuiltWithDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
void AFGBuildable::TurnOffAndDestroy(){ }
bool AFGBuildable::GetPoolHandleInitialState() const{ return bool(); }
bool AFGBuildable::CreateDecoratorSignificantComponents( AFGPlayerController* controller){ return bool(); }
void AFGBuildable::ConfigureDynamicDecoratorComponent(USceneComponent* newComponent){ }
void AFGBuildable::TryRemoveDecoratorSignificantComponents( AFGPlayerController* controller){ }
void AFGBuildable::RemoveDecoratorSignificantComponents(){ }
const TArray< class UMeshComponent* >& AFGBuildable::GetMainMeshes(){ return *(new TArray< class UMeshComponent* >); }
void AFGBuildable::ApplyHasPowerCustomData(){ }
void AFGBuildable::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildable::Stat_Cost(TArray< FItemAmount >& out_amount) const{ }
void AFGBuildable::Stat_StockInventory(TArray< FItemAmount >& out_amount) const{ }
void AFGBuildable::PlayBuildEffects(AActor* inInstigator){ }
void AFGBuildable::ExecutePlayBuildEffects(){ }
void AFGBuildable::OnBuildEffectFinished(){ }
void AFGBuildable::PlayBuildEffectActor(AActor* inInstigator){ }
void AFGBuildable::ExecutePlayBuildActorEffects(){ }
void AFGBuildable::OnBuildEffectActorFinished(){ }
bool AFGBuildable::HandleBlueprintSpawnedBuildEffect(AFGBuildEffectActor* inBuildEffectActor){ return bool(); }
void AFGBuildable::PlayDismantleEffects_Implementation(){ }
void AFGBuildable::OnDismantleEffectFinished(){ }
UFGMaterialEffect_Build* AFGBuildable::GetActiveBuildEffect(){ return nullptr; }
bool AFGBuildable::CanBeSampled_Implementation() const{ return bool(); }
void AFGBuildable::SetHiddenIngameAndHideInstancedMeshes(bool hide){ }
TSubclassOf< AFGBuildable > AFGBuildable::GetBuildableClassFromRecipe(TSubclassOf<  UFGRecipe > inRecipe){ return TSubclassOf<AFGBuildable>(); }
UFGClearanceComponent* AFGBuildable::GetClearanceComponent(){ return nullptr; }
UFGComplexClearanceComponent* AFGBuildable::SpawnComplexClearanceComponent(){ return nullptr; }
void AFGBuildable::DestroyComplexClearanceComponent(){ }
uint8 AFGBuildable::GetNumPowerConnections() const{ return uint8(); }
uint8 AFGBuildable::GetNumFactoryConnections() const{ return uint8(); }
uint8 AFGBuildable::GetNumFactoryOuputConnections() const{ return uint8(); }
void AFGBuildable::GetAttachmentPoints(TArray< const FFGAttachmentPoint* >& out_points) const{ }
void AFGBuildable::CreateAttachmentPointsFromComponents(TArray< FFGAttachmentPoint >& out_points, AActor* owner) const{ }
bool AFGBuildable::ShouldBeConsideredForBase_Implementation(){ return bool(); }
void AFGBuildable::Native_OnMaterialInstancesUpdated(){ }
int32 AFGBuildable::GetCostMultiplierForLength(float totalLength, float costSegmentLength){ return int32(); }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGBuildable::GetDefaultSwatchCustomizationOverride(UObject* worldContext){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
void AFGBuildable::ToggleInstanceVisibility(bool bNewState){ }
void AFGBuildable::SetInsideBlueprintDesigner( AFGBuildableBlueprintDesigner* designer){ }
AFGBuildableBlueprintDesigner* AFGBuildable::GetBlueprintDesigner(){ return nullptr; }
void AFGBuildable::PreSerializedToBlueprint(){ }
void AFGBuildable::PostSerializedToBlueprint(){ }
void AFGBuildable::PostSerializedFromBlueprint(bool isBlueprintWorld){ }
TSoftClassPtr< UFGMaterialEffect_Build > AFGBuildable::GetBuildEffectTemplate_Implementation() const{ return TSoftClassPtr<UFGMaterialEffect_Build>(); }
TSoftClassPtr< UFGMaterialEffect_Build > AFGBuildable::GetDismantleEffectTemplate_Implementation() const{ return TSoftClassPtr<UFGMaterialEffect_Build>(); }
void AFGBuildable::OnSkinCustomizationApplied_Implementation(TSubclassOf<  UFGFactoryCustomizationDescriptor_Skin > skin){ }
void AFGBuildable::PlayConstructSound_Implementation(){ }
void AFGBuildable::PlayDismantleSound_Implementation(){ }
void AFGBuildable::RegisterInteractingPlayerWithCircuit( AFGCharacterPlayer* player){ }
void AFGBuildable::UnregisterInteractingPlayerWithCircuit( AFGCharacterPlayer* player){ }
void AFGBuildable::OnReplicatingDetailsChanged(){ }
bool AFGBuildable::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const{ return bool(); }
bool AFGBuildable::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
uint8 AFGBuildable::MaxNumGrab(float delta) const{ return uint8(); }
uint8 AFGBuildable::EstimatedMaxNumGrab_Threadsafe(float estimatedDeltaTime) const{ return uint8(); }
bool AFGBuildable::VerifyDefaults(FString& out_message){ return bool(); }
void AFGBuildable::GetDismantleRefundReturns(TArray< FInventoryStack >& out_returns) const{ }
int32 AFGBuildable::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildable::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGBuildable::TogglePendingDismantleMaterial(bool enabled){ }
void AFGBuildable::ApplySkinData(TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > newSkinDesc){ }
void AFGBuildable::ApplyMeshPrimitiveData(const FFactoryCustomizationData& customizationData){ }
TArray< UStaticMeshComponent* > AFGBuildable::CreateBuildEffectProxyComponents(){ return TArray<UStaticMeshComponent*>(); }
void AFGBuildable::DestroyBuildEffectProxyComponents(){ }
void AFGBuildable::OnRep_CustomizationData(){ }
void AFGBuildable::SetupInstances_Implementation(bool bInitializeHidden){ }
void AFGBuildable::RemoveInstances_Implementation(){ }
void AFGBuildable::ForceUpdateCustomizerMaterialToRecipeMapping(bool bTryToSave){ }
void AFGBuildable::CreateFactoryStatID() const{ }
void AFGBuildable::SetReplicateDetails(bool replicateDetails){ }
bool AFGBuildable::CheckFactoryConnectionComponents(FString& out_message){ return bool(); }
void AFGBuildable::OnRep_LightweightTransform(){ }
FOnReplicationDetailActorStateChange AFGBuildable::OnBuildableReplicationDetailActorStateChange = FOnReplicationDetailActorStateChange();
FOnRegisteredPlayerChanged AFGBuildable::OnRegisterPlayerChange = FOnRegisteredPlayerChanged();
