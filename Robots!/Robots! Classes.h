#ifndef robots_classes_h
#define robots_classes_h
class bot
{
public:
	bot(int level, double stat_type[12], int total_xp, int needed_xp, int bot_type);
	string return_name();
	int return_health();
	int return_level();
	int return_attack();
	int return_defence();
	int return_special_a();
	int return_special_d();
	int return_speed();
private:
	string name;
	int health;
	int level;
	int defence;
	int attack;
	int special_a;
	int special_d;
	int speed;
};
#endif
