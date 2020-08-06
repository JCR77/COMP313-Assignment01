// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FRotator UMyBlueprintFunctionLibrary::rotator(FRotator vectorToRotate, int32 numberOfRotations)
{
	int32 degree = 360 / numberOfRotations;
	float check = vectorToRotate.Yaw;
	FRotator rotatedVector = vectorToRotate;
	rotatedVector.Yaw = check + degree;
	return rotatedVector;
}
