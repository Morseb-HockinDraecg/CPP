#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap(){
    std::cout << "Constructor called" << std::endl;
    this->setInitValue();
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name){
    std::cout << "Constructor called" << std::endl;
    setName(name);
    this->setInitValue();
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(src), NinjaTrap(src){
    std::cout << "Constructor called" << std::endl;
    this->setInitValue();
}

SuperTrap::~SuperTrap(void){
    std::cout << "Destructor called" << std::endl;
}

void	SuperTrap::setInitValue(void){
	setHp(100);
	setMaxHp(100);
	setEnergy(120);
	setMaxEnergy(120);
	setLvl(1);
	setMeleeDmg(60);
	setRangeDmg(20);
	setArmor(5);
}