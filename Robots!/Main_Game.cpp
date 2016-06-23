#include "Battle.h"
#include "windows.h"
void Begin_Game()
{
	std::cout << "This is a semi comprehensive version of the battle system that will be present in the full game.\nI hope you enjoy the vision that i have for this game";
	Sleep(10000);
	system("CLS");
	bot player_bot = char_select();
	fight();
}