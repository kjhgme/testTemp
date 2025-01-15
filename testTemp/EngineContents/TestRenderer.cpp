#include "PreCompile.h"
#include "TestRenderer.h"

UTestRenderer::UTestRenderer()
{
	CreateRenderUnit();
	SetMesh("Rect");
	SetMaterial("MyMaterial");
}

UTestRenderer::~UTestRenderer()
{
}

void UTestRenderer::BeginPlay()
{
	URenderer::BeginPlay();
}

void UTestRenderer::Render(UEngineCamera* _Camera, float _DeltaTime)
{
	URenderer::Render(_Camera, _DeltaTime);


}
