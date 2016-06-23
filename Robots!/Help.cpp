#include "Battle.h"
string entry_check(string a, string b)
{
	string selection;
	getline(std::cin, selection);
	while (selection != a || selection != b)
	{
		std::cin.clear();
		std::cout << "Please enter a valid option" << std::endl;
		getline(std::cin, selection);
	}
	return selection;
}


void help_menu()
{
	system("cls");
	std::cout << "--------------------" << std::endl;
	std::cout << "Here is a list of all availible bots: \n" << std::endl;//TODO: divide by types
	vector<string> bot_display = avail_chars();
	for (int i = 0; i < bot_display.size(); i++)
	{
		string temp = bot_display[i];
		temp.erase(temp.size() - 2, 2);
		std::cout << temp << ", ";
	}
	std::cout << "\n" << std::endl;
	std::cout << ("--------------------") << std::endl;//spacer
	std::cout << "How to play:\n" << "Play like pokemon" << std::endl;
	pause("Return to the main menu");
	system("CLS");	
}