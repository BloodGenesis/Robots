#include "Battle.h"

string char_select(string message)
{	
	string bot_select;
	bool valid = false;
	while (!valid)
	{
		std::cout << message;
		getline(std::cin, bot_select);
		vector<string> bots = avail_chars();
		case_lower(bot_select, true);
		for (int i = 0; i < bots.size() - 1; i++)
		{
			string temp = bots[i];
			case_lower(bots[i], true);
			bots[i].erase(bots[i].size() - 2, 2);
			if (bot_select == bots[i]) valid = true;
		}
		if (bot_select == "Help") help_menu();
	}
	return bot_select;
}

vector<string> avail_chars()
{
	vector<string> bots = { "etna f", "meghna w", "type 1050 s", "etna1 f", "meghna2 w", "typetwo s" };
	return bots;
}

vector<string> bot_list(string type, vector<string> bots)
{	
	vector<string> bot_display = avail_chars();
	int bot_display_position = 0;
	for (int a = 0; a < bots.size(); a++)
	{
		string temp = bots[a];
		if ((type == "fire") && (temp[temp.size() - 1] == 'f'))
		{
			bot_display.push_back(temp);
		}
		else if ((type == "water") && (temp[temp.size() - 1] == 'w'))
		{
			bot_display.push_back(temp);
		}
		else if ((type == "steel") && (temp[temp.size() - 1] == 's'))
		{
			bot_display.push_back(temp);
		}
		else if (type == "all") bot_display.push_back(temp);

	}
	return bot_display;
}
