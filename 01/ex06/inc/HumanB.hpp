#ifndef HUMANB_H
# define HUMANB_H

#include"Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack() const;
	void	setWeapon(Weapon& wp);	

private:

	std::string _name;
	Weapon* 	_weapon;

};

#endif