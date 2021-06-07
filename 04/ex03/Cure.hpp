#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(Cure const & src);
	virtual ~Cure(void);

	virtual AMateria* clone() const {return new Cure(*this);}

private:

};

#endif