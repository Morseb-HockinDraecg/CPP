#ifndef Pyro_H
# define Pyro_H

#include "AMateria.hpp"

class Pyro : public AMateria{

public:

	Pyro(void);
	Pyro(Pyro const & src);
	~Pyro(void);

	AMateria* clone() const {return new Pyro(*this);}

private:

};

#endif