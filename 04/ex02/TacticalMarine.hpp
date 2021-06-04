#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine()							
		{std::cout << "Tactical Marine ready for battle!" << std::endl;}
	TacticalMarine(TacticalMarine const & src)
		{this->operator=(src); std::cout << "Tactical Marine ready for battle!" << std::endl;}
	~TacticalMarine()
		{std::cout << "Aaargh..." << std::endl;}

	ISpaceMarine* 	clone() const
		{return (new TacticalMarine(*this)) ;}
	void 			battleCry() const
		{std::cout << "For the holy PLOT!" << std::endl;}
	void 			rangedAttack() const
		{std::cout << "* attacks with a bolter *" << std::endl;}
	void 			meleeAttack() const
		{std::cout << "* attacks with a chainsword *" << std::endl;}

	TacticalMarine & operator=(TacticalMarine const & rhs);

private:

};

#endif