#include "Battle.h"

void display(string player_name, string enemy_name, vector<int> player_stats, vector<int> enemy_stats)
{
	std::cout << player_name << "   vs   " << enemy_name << std::endl;
	std::cout << "lvl" << player_stats[0] << "      " << "lvl" << enemy_stats[0] << std::endl;
	std::cout << player_stats[1] << "HP" << "      " << enemy_stats[1] << "HP" << std::endl;
}

void start_turn(vector<int> player_stats, vector<int> enemy_stats, bool &user_turn)
{
	if (player_stats[11] > enemy_stats[11]) user_turn = true;
	else if (player_stats[11] < enemy_stats[11]) user_turn = false;
	else
	{
		int turn = rand() % 2;
		if (turn == 0) user_turn = true;
		else user_turn = false;
	}
}

void move_check(vector<string> move_set, string selected_move)//checking to make sure a selected move is valid
{
	bool valid = false;
	while (!valid)
		for (int i = 0; i>move_set.size(); i++)
		{
			if (selected_move == move_set[i]) valid = true;
			if ((i == (move_set.size() - 1)) && (selected_move != move_set[i])) std::cout << "Invalid move" << std::endl;
		}
}

bool attack_land(vector<int> attacker, vector<int> defender)//Looking for the odds of the attack landing
{
	int move_accuracy = attacker[11];
	int player_accuracy = defender[11];
	int enemy_evasion = 1;
	int bot_chance = player_accuracy / enemy_evasion;
	double land = (move_accuracy * bot_chance);
	if (land >= 1) return true;
	else if (land < 1) return false;
}

void fight()
{
	string user_bot;
	string enemy_bot;
	vector<int> player_stats;
	vector<int> enemy_stats;
	vector<string> player_moves;
	vector<string> enemy_moves;
	display(user_bot, enemy_bot, player_stats, enemy_stats);
	bool user_turn;
	start_turn(player_stats, enemy_stats, user_turn);

	int counter = 0;
	while (player_stats[1] != 0 || enemy_stats[1] != 0)
	{
		counter++;
		
		if (user_turn)
		{
			string user_move;
			std::cout << "\n" << "select your move";
			getline(std::cin, user_move);
			std::cout << "You used " << user_move << std::endl;
			//damage give

			std::cout << "\n" << std::endl;
		}
		else if (!user_turn)
		{
			int index = rand() % 4;
		
			std::cout << enemy_bot << " used " << enemy_moves[index] << std::endl; 
			//damage taken
			std::cout << "\n" << std::endl;
		}
		if (user_turn == true) user_turn = false;
		else if (user_turn == false) user_turn = true;
		if (counter == 2)
		{
			system("CLS");
			counter = 0;
		}
	}
}

//molding: coat the enemy in plastic. debuff type.