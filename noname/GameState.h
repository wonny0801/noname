#pragma once
class GameState : public cState
{
public:
	GameState();
	~GameState();

	void Start()  override;
	void Update() override;
	void Draw()	  override;
	void Exit()	  override;
};
