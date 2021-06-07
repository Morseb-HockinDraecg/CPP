#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include <vector>

class Character : public ICharacter {

public:

	Character(void);
	Character(std::string name);
	Character(Character const & src);
	~Character(void);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);


	std::string const & getName() const {return this->_name;}
	Character & operator=(Character const & rhs);

private:
	void		setName(std::string name) {this->_name = name;}

	std::string				_name;
	std::vector<AMateria*>	_inventory;
};

#endif