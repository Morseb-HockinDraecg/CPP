#include "Character.hpp"

Character::Character(void){
}
Character::Character(std::string name) : _name(name){
}
Character::Character(Character const & src){
    this->operator=(src);
}
Character::~Character(void){
}



Character & Character::operator=(Character const & rhs){
    this->_name = rhs.getName();
    return (*this);
}

void Character::equip(AMateria* m){
	int size =	this->_inventory.size();
	if (size == 4)
		return ;
	this->_inventory.push_back(m);
}
void Character::unequip(int idx){
	std::vector<AMateria*>	myVect = this->_inventory;
	myVect.erase(myVect.begin() + idx);
}
void Character::use(int idx, ICharacter& target){
	this->_inventory.operator[](idx)->use(target);
}