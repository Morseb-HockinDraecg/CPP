#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
	Zombie* newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newZombie(&(newHorde[i]));
	setZombies(newHorde);
}

ZombieHorde::~ZombieHorde(void){
	delete [] this->_zombies;
}

void	ZombieHorde::setZombies(Zombie* z){
	this->_zombies = z;
}

void ZombieHorde::newZombie(Zombie* z){
	std::string* name = new std::string;

	randomChump(*name);
	z->setName(*name);
	delete name;
	z->annonce();
}

void	ZombieHorde::randomChump(std::string& name){
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
