#include "include.h"

GameState::GameState()
{
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()// 게임스테이트에서 사용할 기능들 구현하기 (대부분의 게임기능들)
{
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_MENU);
	}
}

void GameState::Draw()
{
	DrawStr(10, 10, "GameState", WHITE, BLACK);
}

void GameState::Exit()
{
}
