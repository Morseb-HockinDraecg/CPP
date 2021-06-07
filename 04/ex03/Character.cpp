#include "Character.hpp"

Character::Character(void){
}
Character::Character(std::string name) : _name(name){
	for (int i = 0; i < this->bagSize ; i++)
		this->_inventory[i] = NULL;
}
Character::Character(Character const & src){
    this->operator=(src);
}
Character::~Character(void){
	for (int i = 0; i < this->bagSize; i++){
		if (this->_inventory[i]){
			std::cout << "[char] ";
			delete this->_inventory[i];
		}
	}
}

Character & Character::operator=(Character const & rhs){
    for (int i = 0; i < this->bagSize; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	this->_name = rhs.getName();
	for (int i = 0; i < this->bagSize ; i++){
		if (rhs.getMat(i))
			this->_inventory[i] = rhs.getMat(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
    return (*this);
}

void Character::equip(AMateria* m){
	if (!m)
		return ;
	for (int idx = 0; idx < this->bagSize; idx++){
		if (!this->_inventory[idx]){
			this->_inventory[idx] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (idx > this->bagSize || idx < 0)
		return ;
	if (this->_inventory[idx])
		std::cout << "unequip materia : " << this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > this->bagSize)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}


AMateria*	Character::getMat(int n) const {
	if (n < 0 || n > this->bagSize)
		return NULL;
	return this->_inventory[n];
}