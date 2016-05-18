#include "Battle.h"

int main()
{
	system("color 1f");
	bool keep_playing = true;
	bool play = true;
	intro();
	while (play)
	{
		std::cout << "Welcome to the Robots! battle demonstration\n" << std::endl;
		string p_bot_choice = char_select("Select a bot to play with or enter 'help' to view the seletion options or game play options: ");
		if(p_bot_choice == "quit") play = false;
		string e_bot_choice = char_select("Select an enemy bot to battle: ");
		system("CLS");
		//vector<double> player_stats = stats(p_bot_choice);
		//vector<double> enemy_stats = stats(e_bot_choice);
		vector<int> player_stats = { 5/*level*/, 23/*Hp*/, 30/*ToXP*/, 0/*XPTy*/, 45/*needed xp may not be needed*/, 0/*type*/, 7/*att*/, 4/*def*/, 8/*satt*/, 2/*sdef*/, 3/*acc*/, 2/*speed*/ };
		vector<int> enemy_stats = { 5/*level*/, 23/*Hp*/, 30/*ToXP*/, 0/*XPTy*/, 45/*needed xp may not be needed*/, 4/*type*/, 7/*att*/, 4/*def*/, 8/*satt*/, 2/*sdef*/, 3/*acc*/, 2/*speed*/ };
		vector<string> player_moves = {"Impact", "Overdrive", "Self Destruct", "fire volley"};
		vector<string> enemy_moves = {"Self Heal", "Hack", "Speed Bash", "Splinter"};
		fight(p_bot_choice, e_bot_choice, player_stats, enemy_stats, player_moves, enemy_moves);
	}
	pause();
}

