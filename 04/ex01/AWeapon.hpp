#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <string>
#include <iomanip>

class AWeapon {

public:

	AWeapon();
	AWeapon(std::string const & name, int damage, int apcost);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon();

	AWeapon & operator=(AWeapon const & rhs);

	virtual void attack() const = 0;

	std::string const	getName() const;
	int					getAPCost() const;
	int					getDamage() const;

protected:

	void	setName(std::string name);
	void	setDamage(int dmg);
	void	setAPCost(int ap);

	std::string	_name;
	int			_damage;
	int			_APCost;

};

#endif