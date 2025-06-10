#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	cStateCtrl cstateCtrl;

	void Init();
	void Update();
	void Draw();
	
};
