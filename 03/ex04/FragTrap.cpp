#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :  ClapTrap(name, 100, 100, 100, 100, 30, 20, 5) {
    std::cout << "Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
    std::cout << "Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap(void){
    std::cout << "Destructor called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target){
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
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with \033[1;31m" << attacks[iAttacks] << "\033[0m, causing " << this->getRangeDmg() << " points of damage!" << std::endl;
    this->setEnergy(this->getEnergy() - 25);
}
