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

void MenuState::Update() // 메뉴화면에서 사용할 기능들 구현하기....
{
	if (GetAsyncKeyState(VK_F5))
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_GAME);
	}
}

void MenuState::Draw() // 메뉴화면 만들기...
{
	DrawStr(10, 10, "F5를 누르면 게임을 시작합니다.", WHITE, BLACK);
}

void MenuState::Exit()
{
}
