#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include <vector>

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

private:
	void		setName(std::string name) {this->_name = name;}

	std::string				_name;
	std::vector<AMateria*>	_inventory;
};

#endif