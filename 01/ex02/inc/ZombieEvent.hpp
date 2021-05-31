#ifndef  ZOMBIEEVENT_H
# define  ZOMBIEEVENT_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Zombie.hpp"

class  ZombieEvent {

public:

	 ZombieEvent(void);
	~ ZombieEvent(void);

	Zombie*		setZombieType(std::string type);

private:
	void		randomChump(std::string& name);
	Zombie*		newZombie(std::string name);

};

#endif