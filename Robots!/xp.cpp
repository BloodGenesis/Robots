#include "Battle.h"

int XP_calculator(int level, int xp_mod, int held_xp)//determines how much a bot needs to level up at a given level using a simple parabolic function
{
	int xp_needed;

	if (xp_mod == 2)//fast type
		xp_needed = (13 / 10) * pow(level, 3.0);
	else if (xp_mod == 1)//slight fast
		xp_needed = (11.5 / 10) * pow(level, 3);
	else if (xp_mod == 0)//normal type
		xp_needed = pow(level, 3.0);
	else if (xp_mod == -1)//slight slow
		xp_needed = (8.5 / 10) * pow(level, 3.0);
	else if (xp_mod =  -2)//slow type
		xp_needed = (7 / 10) * pow(level, 3.0);

	return (xp_needed - held_xp); //returns the xp needed to level up again
}

void xp(int &level, int xp_mod, int gained_xp, int &held_xp)
{
	int needed = XP_calculator(level, xp_mod, held_xp);//how much did you need
	held_xp += gained_xp;//add gained to held
	if (gained_xp >= needed) level += 1;
}
//blah test
