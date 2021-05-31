#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde(int N);
	~ZombieHorde(void);

	void	setZombies(Zombie* z);
	void	newZombie(Zombie* z);
	void	randomChump(std::string& name);

private:
	Zombie*	_zombies;

};

#endif