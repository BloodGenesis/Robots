#include "Battle.h"

void intro()
{
	system("color 0c");
	std::cout << "          ----------------        " << std::endl;
	std::cout << "         /   __________   \\" << std::endl;
	std::cout << "         |  | @@@@@@@@ |  |" << std::endl;
	std::cout << "         |  |          |  |" << std::endl;
	std::cout << "         |  |__________|  |" << std::endl;
	std::cout << "         |                |" << std::endl;
	std::cout << "         \\    |------|    /" << std::endl;
	std::cout << "          \\______________/" << std::endl;

	std::cout << "Welcome to the Robots! Battle demo!" << std::endl;
	std::cout << "If you enjoy this demo or think the idea has"<<"\n"<< "potential please consider donating!" << std::endl;
	pause();
	system("CLS");
}