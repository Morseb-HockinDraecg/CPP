#include "ZombieEvent.hpp"

 ZombieEvent:: ZombieEvent(void){
}

 ZombieEvent::~ ZombieEvent(void){
}

Zombie* ZombieEvent::newZombie(std::string name){
	Zombie*	newZombie = new Zombie;
	newZombie->setName(name);
	return (newZombie);
}

void	ZombieEvent::randomChump(std::string& name){
	std::string names[5];
	int			randi;

	randi = rand() % 5;
	names[0] = "Chumpchump";
	names[1] = "Zozo";
	names[2] = "Plou";
	names[3] = "PiouPiou";
	names[4] = "Slasg";
	name = names[randi];
}

Zombie*	ZombieEvent::setZombieType(std::string type){
	std::string* name = new std::string;
	Zombie* nZ;
	
	randomChump(*name);
	nZ = newZombie(*name);
	delete name;
	nZ->setType(type);
	nZ->annonce();
	return (nZ);
}
