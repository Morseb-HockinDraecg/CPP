#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);

	Sorcerer & operator=(Sorcerer const & rhs);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void polymorph(Victim const & v) const;

private:
	Sorcerer(void);

	void	setName(std::string name);
	void	setTitle(std::string title);

	std::string	_name;
	std::string	_title;

};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs);

#endif