#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator() {std::cout << "* teleports from space *" << std::endl;}
	AssaultTerminator(AssaultTerminator const & src) {this->operator=(src); std::cout << "* teleports from space *" << std::endl;}
	~AssaultTerminator() {std::cout << "I’ll be back..." << std::endl;}

	ISpaceMarine* 	clone() const			{return (new AssaultTerminator(*this));}
	void 			battleCry() const		{std::cout << "This code is unclean. PURIFY IT!" << std::endl;}
	void 			rangedAttack() const	{std::cout << "* does nothing *" << std::endl;}
	void 			meleeAttack() const		{std::cout << "* attacks with chainfists *" << std::endl;}

	AssaultTerminator & operator=(AssaultTerminator const & rhs);

private:

};

#endif