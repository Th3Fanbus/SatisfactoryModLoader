// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPhotoModeWidget.h"

UFGPhotoModeWidget::UFGPhotoModeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->bIsFocusable = true;
}
void UFGPhotoModeWidget::NativeConstruct(){ Super::NativeConstruct(); }
void UFGPhotoModeWidget::NativeDestruct(){ Super::NativeDestruct(); }
void UFGPhotoModeWidget::ListenForInput(FInputChord inputkeyChord, TEnumAsByte<EInputEvent> eventType, bool consume, FOnInputAction callback){ }
void UFGPhotoModeWidget::StopListeningForAllInputs(){ }
void UFGPhotoModeWidget::ToggleMouseControl(){ }
void UFGPhotoModeWidget::ToggleAdvancedPhotoMode(){ }
void UFGPhotoModeWidget::TogglePhotoModeDebug(){ }
void UFGPhotoModeWidget::Input_ToggleAdvancedPhotoMode(const FInputActionValue& actionValue){ }
void UFGPhotoModeWidget::Input_TogglePhotoModeDebug(const FInputActionValue& actionValue){ }
void UFGPhotoModeWidget::Input_ToggleSequencer(const FInputActionValue& actionValue){ }
void UFGPhotoModeWidget::Input_ToggleMouseControl(const FInputActionValue& actionValue){ }
void UFGPhotoModeWidget::Input_TakePhoto(const FInputActionValue& actionValue){ }
