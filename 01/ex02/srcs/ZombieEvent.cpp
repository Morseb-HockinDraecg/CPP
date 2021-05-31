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

	name = "asttd";
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
