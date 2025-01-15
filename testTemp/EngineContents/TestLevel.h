#pragma once
#include <EngineCore/GameMode.h>

class ATestLevel : public AGameMode
{
public:
	ATestLevel();
	~ATestLevel();

	ATestLevel(const ATestLevel& _Other) = delete;
	ATestLevel(ATestLevel&& _Other) noexcept = delete;
	ATestLevel& operator=(const ATestLevel& _Other) = delete;
	ATestLevel& operator=(ATestLevel&& _Other) noexcept = delete;

protected:
	void BeginPlay() override;
	void Tick(float _DeltaTime) override;

private:
	std::shared_ptr<class ATestActor> testActor;
};

