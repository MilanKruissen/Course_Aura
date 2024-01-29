// Copyright Revigorate Games

#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	MyAbilitySystemComponent = WCParams.MyAbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}
