#include "ClapTrap.hpp"

// ClapTrap::ClapTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _energy(100), _maxEnergy(100), _lvl(1), _meleeDmg(30), _rangeDmg(20), _armor(5){
ClapTrap::ClapTrap(std::string name, int energy, int maxEnergy, int meleeDmg, int rangeDmg, int armor) :
 _name(name), _hp(100), _maxHp(100), _energy(energy), _maxEnergy(maxEnergy), _lvl(1), _meleeDmg(meleeDmg), _rangeDmg(rangeDmg), _armor(armor){
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    this->operator=(src);
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    this->_name = rhs.getName();
    this->_hp = rhs.getHp();
    this->_maxHp = rhs.getMaxHp();
    this->_energy = rhs.getEnergy();
    this->_meleeDmg = rhs.getMeleeDmg();
    this->_rangeDmg = rhs.getRangeDmg();
    this->_armor = rhs.getArmor();
    return (*this);
}

void	ClapTrap::vaulthunter_dot_exe(std::string const & target){
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

void	ClapTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing \033[31m" << this->getRangeDmg() << "\033[0m points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target <<" at melee, causing \033[31m" << this->getMeleeDmg() << "\033[0m points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
    unsigned int    dmgTaken = 0;

    if (amount > this->getArmor())
        dmgTaken = amount - this->getArmor();
    std::cout << "FR4G-TP " << this->getName() << " : \033[31m" << dmgTaken << "\033[0m points of damage taken!" << std::endl;
    this->setHp(this->getHp() - dmgTaken);
    std::cout << "FR4G-TP " << this->getName() << " has \033[32m" << this->getHp() << "\033[0m hp left" << std::endl;
    if (this->getMaxHp() < dmgTaken)
    std::cout << "FR4G-TP " << this->getName() << " has been OS ! hahaha" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
    unsigned int    hpRecovered = amount;
    unsigned int    hpToMaxHp = this->getMaxHp() - this->getHp();

    if (amount > hpToMaxHp)
        hpRecovered = hpToMaxHp;
    std::cout << "FR4G-TP " << this->getName() << " : \033[32m" << hpRecovered << "\033[0m points of hp recovered!" << std::endl;
    this->setHp(hpRecovered + this->_hp);
    std::cout << "FR4G-TP " << this->getName() << " has \033[32m" << this->getHp() << "\033[0m hp left" << std::endl;
}

std::string	ClapTrap::getName(void) const{
    return (this->_name);
}
unsigned int			ClapTrap::getHp(void) const{
    return (this->_hp);
}
unsigned int			ClapTrap::getMaxHp(void) const{
    return (this->_maxHp);
}
unsigned int			ClapTrap::getEnergy(void) const{
    return (this->_energy);
}
unsigned int			ClapTrap::getMaxEnergy(void) const{
    return (this->_maxEnergy);
}
unsigned int			ClapTrap::getLvl(void) const{
    return (this->_lvl);
}
unsigned int			ClapTrap::getMeleeDmg(void) const{
    return (this->_meleeDmg);
}
unsigned int			ClapTrap::getRangeDmg(void) const{
    return (this->_rangeDmg);
}
unsigned int			ClapTrap::getArmor(void) const{
    return (this->_armor);
}

void	ClapTrap::setName(std::string name){
    this->_name = name;
}
void	ClapTrap::setHp(int hp){
    if (hp < 0)
		this->_hp = 0;
	else
        this->_hp = hp;
}
void	ClapTrap::setMaxHp(int maxHp){
    this->_maxHp = maxHp;
}
void	ClapTrap::setEnergy(int energy){
    this->_energy = energy;
}
void	ClapTrap::setMaxEnergy(int energy){
    this->_energy = energy;
}
void	ClapTrap::setLvl(int lvl){
    this->_lvl = lvl;
}
void	ClapTrap::setMeleeDmg(int melee){
    this->_meleeDmg = melee;
}
void	ClapTrap::setRangeDmg(int range){
    this->_rangeDmg = range;
}
void	ClapTrap::setArmor(int armor){
    this->_armor = armor;
}