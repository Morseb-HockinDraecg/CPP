#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Paysan.hpp"
#include "Pecord.hpp"
#include "Dwarfism.hpp"


int main()
{
	Sorcerer robert("\033[31mRobert", "the Magnificent\033[0m");

	Victim jim("\033[32mJimmy\033[0m");
	Peon joe("\033[33mJoe\033[0m");
	Paysan	bob("\033[34mBobby\033[0m");
	Pecord	gerard("\033[35mGege\033[0m");
	Dwarfism clod("\033[36mClodius\033[0m");

	std::cout << std::endl;
	std::cout << robert << jim << joe << bob << gerard << clod;
	
	std::cout << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);
	robert.polymorph(gerard);
	robert.polymorph(clod);
	std::cout << std::endl;
	
	return 0;
}