#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class FragTrap {

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);

	std::string	getName(void) const;
	int			getHp(void) const;
	int			getMaxHp(void) const;
	int			getEnergy(void) const;
	int			getLvl(void) const;
	int			getMeleeDmg(void) const;
	int			getRangeDmg(void) const;
	int			getArmor(void) const;

	void	setName(std::string name);
	void	setHp(int hp);
	void	setMaxHp(int maxHp);
	void	setEnergy(int energy);
	void	setLvl(int lvl);
	void	setMeleeDmg(int melee);
	void	setRangeDmg(int range);
	void	setArmor(int armor);

private:

	std::string _name;
	int 		_hp;
	int 		_maxHp;
	int			_energy;
	int			_lvl;
	int			_meleeDmg;
	int			_rangeDmg;
	int			_armor;
};

#endif