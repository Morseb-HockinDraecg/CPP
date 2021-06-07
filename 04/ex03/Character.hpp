#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter {

public:

	Character(void);
	Character(std::string name);
	Character(Character const & src);
	virtual ~Character(void);

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	virtual std::string const & getName() const {return this->_name;}
	Character & operator=(Character const & rhs);
	AMateria*	getMat(int n) const;

private:
	void		setName(std::string name) {this->_name = name;}

	static int const	bagSize = 4;
	std::string			_name;
	AMateria*			_inventory[bagSize];
};

#endif