#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _energy(50), _maxEnergy(50), _lvl(1), _meleeDmg(30), _rangeDmg(20), _armor(5){
    std::cout << "Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src){
    std::cout << "Copy Constructor called" << std::endl;
    this->operator=(src);
}

ScavTrap::~ScavTrap(void){
    std::cout << "Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
    this->_name = rhs.getName();
    this->_hp = rhs.getHp();
    this->_maxHp = rhs.getMaxHp();
    this->_energy = rhs.getEnergy();
    this->_meleeDmg = rhs.getMeleeDmg();
    this->_rangeDmg = rhs.getRangeDmg();
    this->_armor = rhs.getArmor();
    return (*this);
}

void	ScavTrap::vaulthunter_dot_exe(std::string const & target){
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

void	ScavTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing \033[31m" << this->getRangeDmg() << "\033[0m points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target <<" at melee, causing \033[31m" << this->getMeleeDmg() << "\033[0m points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
    unsigned int    dmgTaken = 0;

    if (amount > this->getArmor())
        dmgTaken = amount - this->getArmor();
    std::cout << "FR4G-TP " << this->getName() << " : \033[31m" << dmgTaken << "\033[0m points of damage taken!" << std::endl;
    this->setHp(this->getHp() - dmgTaken);
    std::cout << "FR4G-TP " << this->getName() << " has \033[32m" << this->getHp() << "\033[0m hp left" << std::endl;
    if (this->getMaxHp() < dmgTaken)
    std::cout << "FR4G-TP " << this->getName() << " has been OS ! hahaha" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){
    unsigned int    hpRecovered = amount;
    unsigned int    hpToMaxHp = this->getMaxHp() - this->getHp();

    if (amount > hpToMaxHp)
        hpRecovered = hpToMaxHp;
    std::cout << "FR4G-TP " << this->getName() << " : \033[32m" << hpRecovered << "\033[0m points of hp recovered!" << std::endl;
    this->setHp(hpRecovered + this->_hp);
    std::cout << "FR4G-TP " << this->getName() << " has \033[32m" << this->getHp() << "\033[0m hp left" << std::endl;
}

std::string	ScavTrap::getName(void) const{
    return (this->_name);
}
unsigned int			ScavTrap::getHp(void) const{
    return (this->_hp);
}
unsigned int			ScavTrap::getMaxHp(void) const{
    return (this->_maxHp);
}
unsigned int			ScavTrap::getEnergy(void) const{
    return (this->_energy);
}
unsigned int			ScavTrap::getMaxEnergy(void) const{
    return (this->_maxEnergy);
}
unsigned int			ScavTrap::getLvl(void) const{
    return (this->_lvl);
}
unsigned int			ScavTrap::getMeleeDmg(void) const{
    return (this->_meleeDmg);
}
unsigned int			ScavTrap::getRangeDmg(void) const{
    return (this->_rangeDmg);
}
unsigned int			ScavTrap::getArmor(void) const{
    return (this->_armor);
}

void	ScavTrap::setName(std::string name){
    this->_name = name;
}
void	ScavTrap::setHp(int hp){
    if (hp < 0)
		this->_hp = 0;
	else
        this->_hp = hp;
}
void	ScavTrap::setMaxHp(int maxHp){
    this->_maxHp = maxHp;
}
void	ScavTrap::setEnergy(int energy){
    this->_energy = energy;
}
void	ScavTrap::setMaxEnergy(int energy){
    this->_energy = energy;
}
void	ScavTrap::setLvl(int lvl){
    this->_lvl = lvl;
}
void	ScavTrap::setMeleeDmg(int melee){
    this->_meleeDmg = melee;
}
void	ScavTrap::setRangeDmg(int range){
    this->_rangeDmg = range;
}
void	ScavTrap::setArmor(int armor){
    this->_armor = armor;
}