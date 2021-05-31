#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(){
	ZombieEvent	zombieEvent;
	Zombie*		zombies[5];

	zombies[0] = zombieEvent.setZombieType("nice one");
	zombies[1] = zombieEvent.setZombieType("nice one");
	zombies[2] = zombieEvent.setZombieType("nice one");
	zombies[3] = zombieEvent.setZombieType("nice one");
	zombies[4] = zombieEvent.setZombieType("nice one");
	delete zombies[0];
	delete zombies[1];
	delete zombies[2];
	delete zombies[3];
	delete zombies[4];

	return 0;
}