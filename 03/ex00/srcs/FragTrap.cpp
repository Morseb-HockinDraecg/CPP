#include "FragTrap.hpp"

/*
Hit points (100)
• Max hit points (100)
• Energy points (100)
• Max energy points (100)
• Level (1)
• Name (paramètre à passer au constructeur)
• Melee attack damage (30)
• Ranged attack damage (20)
• Armor damage reduction (5)
*/

FragTrap::FragTrap(void){
}

FragTrap::FragTrap(FragTrap const & src){
    FragTrap.operator=(src);
}

FragTrap::~FragTrap(void){
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){


}

std::string	FragTrap::getName(void) const{
    return (this->_name);
}
int			FragTrap::getHp(void) const{
    return (this->_hp);
}
int			FragTrap::getMaxHp(void) const{
    return (this->_maxHp);
}
int			FragTrap::getEnergy(void) const{
    return (this->_energy);
}
int			FragTrap::getLvl(void) const{
    return (this->_lvl);
}
int			FragTrap::getMeleeDmg(void) const{
    return (this->_meleeDmg);
}
int			FragTrap::getRangeDmg(void) const{
    return (this->_rangeDmg);
}
int			FragTrap::getArmor(void) const{
    return (this->_armor);
}

void	FragTrap::setName(std::string name){
    this->_name = name;
}
void	FragTrap::setHp(int hp){
    this->_hp = hp;
}
void	FragTrap::setMaxHp(int maxHp){
    this->_maxHp = maxHp;
}
void	FragTrap::setEnergy(int energy){
    this->_energy = energy;
}
void	FragTrap::setLvl(int lvl){
    this->_lvl = lvl;
}
void	FragTrap::setMeleeDmg(int melee){
    this->_meleeDmg = melee;
}
void	FragTrap::setRangeDmg(int range){
    this->_rangeDmg = range;
}
void	FragTrap::setArmor(int armor){
    this->_armor = armor;
}