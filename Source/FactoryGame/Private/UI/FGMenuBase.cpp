// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGMenuBase.h"

UFGMenuBase::UFGMenuBase(const FObjectInitializer& objectInitializer) : Super(objectInitializer) {
	this->mCachedOwner = nullptr;
}
void UFGMenuBase::ReleaseSlateResources(bool bReleaseChildren){ Super::ReleaseSlateResources(bReleaseChildren); }
void UFGMenuBase::MenuEnter( UWidget* prevMenu){ }
void UFGMenuBase::MenuExit( UWidget* nextMenu, bool noAnimation){ }
void UFGMenuBase::NativeConstruct(){ Super::NativeConstruct(); }
void UFGMenuBase::OnMenuEnterDone(){ }
void UFGMenuBase::OnMenuExitDone(){ }
