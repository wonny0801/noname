#include "include.h"

MenuState::MenuState()
{

}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update() // �޴�ȭ�鿡�� ����� ��ɵ� �����ϱ�....
{
	if (GetAsyncKeyState(VK_F5))
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_GAME);
	}
}

void MenuState::Draw() // �޴�ȭ�� �����...
{
	DrawStr(10, 10, "F5�� ������ ������ �����մϴ�.", WHITE, BLACK);
}

void MenuState::Exit()
{
}
