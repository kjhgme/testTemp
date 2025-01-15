#pragma once
#include <EngineCore/Renderer.h>

class UTestRenderer : public URenderer
{
public:
	UTestRenderer();
	~UTestRenderer();

	UTestRenderer(const UTestRenderer& _Other) = delete;
	UTestRenderer(UTestRenderer&& _Other) noexcept = delete;
	UTestRenderer& operator=(const UTestRenderer& _Other) = delete;
	UTestRenderer& operator=(UTestRenderer&& _Other) noexcept = delete;

	ENGINEAPI void BeginPlay() override;

	void Render(UEngineCamera* _Camera, float _DeltaTime) override;

protected:

private:

};

