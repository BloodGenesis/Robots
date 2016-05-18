#include "Battle.h"

void pause()
{
	std::cout << std::endl << "Press ENTER" << std::endl;
	std::cin.ignore(256, '\n');// keeps it from automatically continuing from the previous statement
}

void case_lower(string &word, bool name)
{
	for (int i = 0; i < word.size(); i++)
	{
		word[i] = tolower(word[i]);
	}
	if (name)
	{

		word[0] = toupper(word[0]);
	}
}