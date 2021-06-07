#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Pyro.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	
	MateriaSource & operator=(MateriaSource const & rhs);

	int			getMatNB(void) const {return this->_NbrMaterial;};

private:

	static int const _maxMat = 4;
	AMateria*  _lst[_maxMat];
	int			_NbrMaterial;

};

#endif