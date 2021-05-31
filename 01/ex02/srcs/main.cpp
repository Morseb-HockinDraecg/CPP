#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(){
	ZombieEvent*	zombies[5];
	(*zombies)[1].setZombieType("nice one");
	delete zombies[1];
	return 0;
}