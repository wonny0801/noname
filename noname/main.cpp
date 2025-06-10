 #include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}
	
	///*while (GameMng::Getles()->gamePlayTimeCheck())
	//{
	//	Update();
	//	Draw();

	//	EngineSync(30);
	//}*/
	//while (true)
	//{
	//	GameOverDraw();
	//}
	
	
	
	Release();

	return 0;
}