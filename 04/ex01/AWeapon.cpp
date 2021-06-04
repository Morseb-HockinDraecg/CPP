#include "AWeapon.hpp"


AWeapon::AWeapon(void){
}
AWeapon::AWeapon(std::string const & name, int damage, int apcost): _name(name), _damage(damage), _APCost(apcost){
}
AWeapon::AWeapon(AWeapon const & src){
    this->operator=(src);
}

AWeapon::~AWeapon(void){
}

AWeapon & AWeapon::operator=(AWeapon const & rhs){
    this->_name = rhs.getName();
    this->_APCost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return (*this);
}

std::string const AWeapon::getName() const{
    return (this->_name);
}
int AWeapon::getAPCost() const{
    return (this->_APCost);
}
int AWeapon::getDamage() const{
    return (this->_damage);
}

void	AWeapon::setName(std::string name){
    this->_name = name;
}
void	AWeapon::setDamage(int dmg){
    this->_damage = dmg;
}
void	AWeapon::setAPCost(int ap){
    this->_APCost = ap;
}