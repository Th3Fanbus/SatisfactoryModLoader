// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipelineHologram.h"
#include "Net/UnrealNetwork.h"

AFGPipelineHologram::AFGPipelineHologram() : Super() {
	this->mChildPoleHologram[0] = nullptr;
	this->mChildPoleHologram[1] = nullptr;
	this->mChildWallPoleHologram[0] = nullptr;
	this->mChildWallPoleHologram[1] = nullptr;
	this->mChildWallPoleConnection[0] = nullptr;
	this->mChildWallPoleConnection[1] = nullptr;
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mUpgradedPipeline = nullptr;
	this->mDefaultPipelineSupportRecipe = nullptr;
	this->mDefaultPipelineWallSupportRecipe = nullptr;
	this->mBendRadius = 199.0;
	this->mBendRadius2D = 199.0;
	this->mMinBendRadius = 75.0;
	this->mMaxSplineLength = 5600.1;
	this->mConnectionArrowComponent = nullptr;
	this->mBuildModeAuto = nullptr;
	this->mBuildModeAuto2D = nullptr;
	this->mBuildModeNoodle = nullptr;
	this->mBuildModeHorzToVert = nullptr;
	this->mPassthroughOverrideStartLocation = FVector::ZeroVector;
	this->mPassthroughSnapDirection = FVector::ZeroVector;
	this->mMesh = nullptr;
	this->mMeshMaterial = nullptr;
	this->mBuildModeCategory = EHologramBuildModeCategory::HBMC_Pipe;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGPipelineHologram::BeginPlay(){ Super::BeginPlay(); }
void AFGPipelineHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPipelineHologram, mChildPoleHologram);
	DOREPLIFETIME(AFGPipelineHologram, mChildWallPoleHologram);
	DOREPLIFETIME(AFGPipelineHologram, mSnappedConnectionComponents);
	DOREPLIFETIME(AFGPipelineHologram, mUpgradedPipeline);
	DOREPLIFETIME(AFGPipelineHologram, mSnappedPassthroughs);
}
bool AFGPipelineHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGPipelineHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPipelineHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGPipelineHologram::GetBaseCostMultiplier() const{ return int32(); }
AActor* AFGPipelineHologram::GetUpgradedActor() const{ return nullptr; }
void AFGPipelineHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
void AFGPipelineHologram::GetSupportedBuildModes_Implementation(TArray<TSubclassOf<UFGBuildGunModeDescriptor>>& out_buildmodes) const{ }
bool AFGPipelineHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGPipelineHologram::AdjustForGround(FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
void AFGPipelineHologram::PreHologramPlacement(const FHitResult& hitResult){ }
void AFGPipelineHologram::PostHologramPlacement(const FHitResult& hitResult){ }
bool AFGPipelineHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipelineHologram::OnInvalidHitResult(){ }
void AFGPipelineHologram::Scroll(int32 delta){ }
void AFGPipelineHologram::SetSnapToGuideLines(bool isEnabled){ }
float AFGPipelineHologram::GetHologramHoverHeight() const{ return float(); }
void AFGPipelineHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
void AFGPipelineHologram::CheckBlueprintCommingling(){ }
AFGHologram* AFGPipelineHologram::GetNudgeHologramTarget(){ return nullptr; }
bool AFGPipelineHologram::CanTakeNextBuildStep() const{ return bool(); }
void AFGPipelineHologram::ReplaceHologram(AFGHologram* hologram, bool snapTransform){ }
TArray< class UFGPipeConnectionComponent* > AFGPipelineHologram::GetRelevantPipeConnectionsForGuidelines() const{ return TArray<class UFGPipeConnectionComponent*>(); }
void AFGPipelineHologram::ResetBuildSteps(){ }
bool AFGPipelineHologram::IsConnectionSnapped(bool lastConnection){ return bool(); }
void AFGPipelineHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPipelineHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGPipelineHologram::CheckValidFloor(){ }
void AFGPipelineHologram::CheckValidPlacement(){ }
void AFGPipelineHologram::OnRep_SplineData(){ }
void AFGPipelineHologram::RouteSelectedSplineMode(FVector startLocation, FVector startNormal, FVector endLocation, FVector endNormal){ }
void AFGPipelineHologram::UpdateSplineComponent(){ }
void AFGPipelineHologram::UpdateClearanceData(){ }
float AFGPipelineHologram::GetSplineLength(){ return float(); }
void AFGPipelineHologram::UpdateConnectionComponentsFromSplineData(){ }
void AFGPipelineHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::Auto2DRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::AutoRouteNoodleSpline(const FVector& startConnectionPos, const FVector& startConnectionNormal, const FVector& endConnectionPos, const FVector& endConnectionNormal){ }
void AFGPipelineHologram::HorizontalAndVerticalRouteSpline(bool horizontalFirst,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::HorizontalAndVerticalRouteSplineNew(bool horizontalFirst,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
void AFGPipelineHologram::PathFindingRouteSpline(TArray<  FHologramAStarNode >& pathNodes,
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
bool AFGPipelineHologram::ValidateMinLength(){ return bool(); }
float AFGPipelineHologram::ValidateCurvatureAndReturnFaultyPosition(){ return float(); }
bool AFGPipelineHologram::ValidateFluidRequirements(){ return bool(); }
