#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : _name(name), _weapon(wp){
}

HumanA::~HumanA(void){
}

void	HumanA::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}