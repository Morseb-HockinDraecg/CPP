#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
}

HumanB::~HumanB(void){
}

void	HumanB::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wp){
	this->_weapon = &wp;
}