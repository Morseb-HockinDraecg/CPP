#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(Cure const & src);
	~Cure(void);

	AMateria* clone() const {return new Cure(*this);}

private:

};

#endif