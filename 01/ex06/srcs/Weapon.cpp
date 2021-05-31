#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str) {
}

Weapon::~Weapon(void){
}

void			Weapon::setType(std::string type){
	this->_type = type;
}

const std::string& Weapon::getType(void) const{
	return (this->_type);
}