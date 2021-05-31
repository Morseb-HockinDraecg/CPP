#include "Zombie.hpp"

Zombie::Zombie(void){
	this->setName("Default");
	this->setType("Default");
}

Zombie::~Zombie(void){
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::annonce(void) const{
	std::cout << this->_name << "(" << this->_type << ")" << " Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::setName(std::string name){
	this->_name = name;
}

void		Zombie::setType(std::string type){
	this->_type = type;
}

std::string	Zombie::getName(void){
	return this->_name;
}

std::string	Zombie::getType(void){
	return this->_type;
}