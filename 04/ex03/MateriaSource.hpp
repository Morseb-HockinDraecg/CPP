#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <list>

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	
	MateriaSource & operator=(MateriaSource const & rhs);

private:
	std::list<AMateria*>  _lst;

};

#endif