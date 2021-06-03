#ifndef CHARACTER_H
# define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:

	Character(Character const & src);
	Character(std::string const & name);

	Character & operator=(Character const & rhs);

	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const	getName() const;
	int					getAp() const;
	AWeapon*			getWeapon() const;

private:
	Character(void);

	void		setName(std::string name);
	void		setAp(int ap);
	void		setWeapon(AWeapon*);

	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;
};

std::ostream &	operator<<(std::ostream & o, Character const & rhs);

#endif