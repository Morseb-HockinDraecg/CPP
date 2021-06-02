#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 50, 50, 20, 15, 3) {
    std::cout << "Constructor of Scav called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    std::cout << "Copy Constructor of Scav called" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "Destructor of Scav called" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target){
    std::string attacks[5];
    int         iAttacks;

    if (this->getEnergy() < 25) {
        std::cout << "FR4G-TP " << this->getName() << " is out of energy !" << std::endl;
        return ;
    }

    iAttacks = rand() % 5;
    attacks[0] = "Clap-in-the-Box";
    attacks[1] = "Gun Wizard";
    attacks[2] = "One-Shot Wonder";
    attacks[3] = "Boomtrap";
    attacks[4] = "I Love You Guys!";
    std::cout << "FR4G-TP " << this->getName() << " ultimate " << target << " with \033[1;31m" << attacks[iAttacks] << "\033[0m, causing " << this->getRangeDmg() << " points of damage!" << std::endl;
    this->setEnergy(this->getEnergy() - 25);
}
