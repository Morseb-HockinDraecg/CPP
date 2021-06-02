#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class FragTrap {

public:

	FragTrap( void );
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);


	std::string	getName(void) const;
	unsigned int			getHp(void) const;
	unsigned int			getMaxHp(void) const;
	unsigned int			getEnergy(void) const;
	unsigned int			getMaxEnergy(void) const;
	unsigned int			getLvl(void) const;
	unsigned int			getMeleeDmg(void) const;
	unsigned int			getRangeDmg(void) const;
	unsigned int			getArmor(void) const;

private:

	void	setName(std::string name);
	void	setHp(int hp);
	void	setMaxHp(int maxHp);
	void	setEnergy(int energy);
	void	setMaxEnergy(int energy);
	void	setLvl(int lvl);
	void	setMeleeDmg(int melee);
	void	setRangeDmg(int range);
	void	setArmor(int armor);

	std::string		_name;
	unsigned int 	_hp;
	unsigned int 	_maxHp;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_lvl;
	unsigned int	_meleeDmg;
	unsigned int	_rangeDmg;
	unsigned int	_armor;
};

#endif