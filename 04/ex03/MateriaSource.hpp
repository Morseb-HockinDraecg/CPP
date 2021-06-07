#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	~MateriaSource(void);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	
	MateriaSource & operator=(MateriaSource const & rhs);

private:

};

#endif