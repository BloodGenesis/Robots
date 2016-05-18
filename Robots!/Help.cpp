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
	vector<string> bot_display;
	string selection;
	string type;
	bool correct = false;
	while (!correct)
	{

		std::cout << "Do you want to see the Bot list or do you want a battle explanation?";
		string help_choice = entry_check("bots", "battle_explantion");
		if (help_choice == "bots")
		{
			std::cout << "Do you want a specific type of bot to be displayed? If not type 'all'";
			getline(std::cin, type);
			std::cout << "Here is a list of all availible bots." << std::endl;
			vector<string> bots = avail_chars();
			if (type == "all") bot_display = bot_list(type, bots);
			else bot_display = bot_list(type, bots);

			for (int i = 0; i < bot_display.size(); i++)
			{
				string temp = bot_display[i];
				temp.erase(temp.size() - 2, 2);
				std::cout << temp << ", ";
			}
			std::cout << "\n" << std::endl;
		}
		else if (help_choice == "battle explanation")
		{
			std::cout << "lkjzshdfkjhkjdhkajhsdkjhakjshd" << std::endl;
			correct = true;
		}
	}
}