#include "PreCompile.h"
#include "TestActor.h"

#include <EngineCore/DefaultSceneComponent.h>
#include "TestRenderer.h"

ATestActor::ATestActor()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Renderer = CreateDefaultSubObject<UTestRenderer>();

	Renderer->SetScale3D({ 100.0f, 100.0f, 100.0f });
	Renderer->SetupAttachment(RootComponent);
}

ATestActor::~ATestActor()
{
}
