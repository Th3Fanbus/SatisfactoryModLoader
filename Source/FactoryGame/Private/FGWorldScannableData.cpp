// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldScannableData.h"
#include "UObject/ObjectSaveContext.h"

FWorldScannableData::FWorldScannableData() { }
#if WITH_EDITOR
FWorldScannableData::FWorldScannableData(const AActor* actor) { }
FWorldScannableData::FWorldScannableData(const class FWorldPartitionActorDesc* ActorDesc, int32 PIEInstanceIndex) { }
#endif
AFGWorldScannableDataGenerator::AFGWorldScannableDataGenerator() : Super() {

}
void AFGWorldScannableDataGenerator::BeginPlay(){ }
void AFGWorldScannableDataGenerator::PreSave(FObjectPreSaveContext SaveContext){ Super::PreSave(SaveContext); }
#if WITH_EDITOR
void AFGWorldScannableDataGenerator::CacheWorldScannableData(){ }
#endif
