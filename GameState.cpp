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

void GameState::Update()// ���ӽ�����Ʈ���� ����� ��ɵ� �����ϱ� (��κ��� ���ӱ�ɵ�)
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
