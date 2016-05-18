#ifndef battle_h
#define battle_h

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
#include <math.h>

void intro();
void help_menu();
string char_select(string message);
vector<string> avail_chars();
vector<string> bot_list(string type, vector<string> bots);
string entry_check(string a, string b);
void pause();
void case_lower(std::string &bot_name, bool name);
int XP_calculator(int level, int xp_mod, int held_xp);
void start_turn(vector<int> player_stats, vector<int> enemy_stats, bool &user_turn);
void display(string pname, string ename, vector<int> as, vector<int> bs);
void fight(string a, string b, vector<int> player_stats, vector<int> enemy_stats, vector<string> enemy_moves, vector<string> player_moves);

#endif