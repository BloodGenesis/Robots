#include "Battle.h"
#include "Windows.h"

int main()//opening and main menu
{
	system("color 1f");
	intro();

	bool keep_playing = true;
	bool play = true;
	
	do{
		string mode_choice;
		std::cout << "Welcome to the Robots! battle demonstration\n" << "Select a mode (Play, Help, Quit): ";
		std::getline(std::cin, mode_choice);
		if (mode_choice == "play") Begin_Game();
		else if (mode_choice == "help") help_menu();
		else if (mode_choice == "quit") play = false;
		else 
		{
			std::cout << "Invalid option" << std::endl;
			Sleep(1000);
			system("CLS");
		}
	} while (play==true);
	pause("Thanks For playing");
}

