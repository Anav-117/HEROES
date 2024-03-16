// Fill out your copyright notice in the Description page of Project Settings.


#include "RosPublisher.h"

// Sets default values
ARosPublisher::ARosPublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARosPublisher::BeginPlay()
{
	Super::BeginPlay();
	
	// Initialize a topic
	UTopic* ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());
	UROSIntegrationGameInstance* rosinst = Cast<UROSIntegrationGameInstance>(GetGameInstance());
	ExampleTopic->Init(rosinst->ROSIntegrationCore, TEXT("/chatter"), TEXT("std_msgs/String"));

	// (Optional) Advertise the topic
	ExampleTopic->Advertise();

	// Publish a string to the topic
	TSharedPtr<ROSMessages::std_msgs::String> StringMessage(new ROSMessages::std_msgs::String("This is an example"));
	ExampleTopic->Publish(StringMessage);

}

// Called every frame
void ARosPublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

