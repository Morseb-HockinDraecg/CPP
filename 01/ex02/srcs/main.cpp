#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(){
	ZombieEvent	zombieEvent;
	Zombie*		zombies[5];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
		zombies[i] = zombieEvent.setZombieType("nice one");
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		delete zombies[i];

	return 0;
}