#include "PreCompile.h"
#include "TestLevel.h"

#include "TestActor.h"
#include <EngineCore/EngineCamera.h>
#include <EngineCore/CameraActor.h>
#include <EnginePlatform/EngineInput.h>

ATestLevel::ATestLevel()
{
	testActor = GetWorld()->SpawnActor<ATestActor>();

	testActor->AddActorLocation({ -100.0f, 100.0f, 0.0f});

	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -500.0f, 1.0f });
	Camera->GetCameraComponent()->SetZSort(0, true);
}

ATestLevel::~ATestLevel()
{
}

void ATestLevel::BeginPlay()
{
	AActor::BeginPlay();
}

void ATestLevel::Tick(float _DeltaTime)
{
	AActor::Tick(_DeltaTime);


	testActor.get()->AddActorRotation({ 0.0f, 0.0f, _DeltaTime * 100.0f });
	
	if (UEngineInput::IsDown('P'))
	{
		GetWorld()->GetMainCamera()->FreeCameraSwitch();
	}

}
