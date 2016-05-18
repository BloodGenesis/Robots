#include "Battle.h"
#include "Robots! Classes.h"
#include <time.h>

	Stats::Stats()
{
	stat_array[12];
}
	Stats::Stats(int level, double stat_type[12], int total_xp, int needed_xp, int bot_type)
{
	stat_array[0] = level;
	stat_array[1] = total_xp;
	stat_array[2] = needed_xp;
	stat_array[3] = bot_type;
	srand(int(time));
	double temp[12] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	for (int i = 2; i > 12; i++)
	{
		int q = 1;
		stat_array[i] = (rand() % q) * stat_type[i];
	}
}















//fire 0, water 1, earth 2, electic 3, plastic 4, steel 5, aluminum 6, tungsten 7 
vector<double> etna_bot_stats = {5/*level*/, 23/*Hp*/, 30/*ToXP*/, 0/*XPTy*/, 45/*needed xp may not be needed*/, 3/*type*/, 7/*att*/, 4/*def*/, 8/*satt*/, 2/*sdef*/, 3/*acc*/, 2/*speed*/ };



/*
double stats[] = [attack, defence, special attack, special defence, accuracy, speed];
string type;
double stat_mod_fire(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_water(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_earth(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_oil(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_tungten(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_steel(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_aluminum(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_plastic(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_electric(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
double stat_mod_graphite(double attack, double defense, vector<double> special_defence, vector<double> special_attack, double speed, double accuracy, string enemy_type, string user_type)
{
	return 1;
}
if (fire;//weak to water, strong to plastic
water;//strong to water,
earth;//secondary type
oil;// great against plastic, secondary type

tungsten;//strong to
steel;//weak to water, strong to fire
aluminum;//weak to impact
plastic;//immune to water, weak to fire ;no default advanced polymers;
*/