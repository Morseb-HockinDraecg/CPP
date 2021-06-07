#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {

public:
 
	Ice() ;
	Ice(Ice const & src);
	virtual ~Ice(void) ;

	AMateria* clone() const {return new Ice(*this);}

private:

};

#endif