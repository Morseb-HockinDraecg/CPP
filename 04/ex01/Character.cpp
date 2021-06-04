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
	if (this->getAp() + 10 > 40)
		this->setAp(40);
	else
		this->setAp(this->getAp() + 10);
}

void Character::equip(AWeapon* weapon){
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy){
	int	apCost;
	if (!this->getWeapon() || !enemy)
		return ;
	apCost = (*this->getWeapon()).getAPCost();
	if (apCost > this->getAp())
		return ;
	this->setAp(this->getAp() - apCost);
   	std::cout << this->getName() << " attacks " << enemy->getType() << " with " << (*this->getWeapon()).getName() << std::endl;
	(this->_weapon)->attack();
	enemy->takeDamage((this->_weapon)->getDamage());
	if (enemy->getHP() <= 0){
		delete enemy;
	}
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