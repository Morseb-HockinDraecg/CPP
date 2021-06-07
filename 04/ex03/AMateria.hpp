#ifndef AMATERIA_H
# define AMATERIA_H

#include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:

	AMateria();
	AMateria(AMateria const & src);
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const &	getType() const	{return this->_type;}
	unsigned int		getXP() const	{return this->_xp;}

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	AMateria & operator=(AMateria const & rhs);

protected:

	void	setXp(unsigned int xp) {this->_xp = xp;}
	void	setType(std::string const & type) {this->_type = type;}

	unsigned int 		_xp;
	std::string		 	_type;

};

#endif