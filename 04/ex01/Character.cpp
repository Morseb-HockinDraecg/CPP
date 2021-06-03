#include "Character.hpp"

Character::Character(void){
}
Character::Character(Character const & src){
    this->operator=(src);
}
Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL){
}

Character::~Character(void){
}

Character & Character::operator=(Character const & rhs){
	this->_name = rhs.getName();
	this->_ap = rhs.getAp();
	this->_weapon = rhs.getWeapon();
    return (*this);
}


void Character::recoverAP(){

}

void Character::equip(AWeapon* weapon){
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy){
	if (!this->getWeapon())
		return ;
	(this->_weapon)->attack();
	enemy->takeDamage((this->_weapon)->getDamage());
}

std::string const	Character::getName() const		{return this->_name;}
int					Character::getAp() const		{return this->_ap;}
AWeapon*			Character::getWeapon() const	{return this->_weapon;}

void		Character::setName(std::string name)	{this->_name = name;}
void		Character::setAp(int ap)				{this->_ap = ap;}
void		Character::setWeapon(AWeapon* weapon)	{this->_weapon = weapon;}

std::ostream & operator<<(std::ostream & o, Character const & rhs){
	if (rhs.getWeapon())
   		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << (*rhs.getWeapon()).getName() << std::endl;
	else
    	o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed " << std::endl;
    return (o);
}