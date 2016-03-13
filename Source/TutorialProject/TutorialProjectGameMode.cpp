// Fill out your copyright notice in the Description page of Project Settings.

#include "TutorialProject.h"
#include "TutorialProjectGameMode.h"
#include "ShipPawn.h"


ATutorialProjectGameMode::ATutorialProjectGameMode()
{
	DefaultPawnClass = ConstructorHelpers::FClassFinder<AShipPawn>(TEXT("/Game/Blueprints/ShipPawnBlueprint")).Class;
}
