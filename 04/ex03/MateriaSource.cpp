#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
}

MateriaSource::MateriaSource(MateriaSource const & src){
    this->operator=(src);
}

MateriaSource::~MateriaSource(void){
}


void MateriaSource::learnMateria(AMateria* m){
	this->_lst.push_back(m);
}
AMateria* MateriaSource::createMateria(std::string const & type){
	std::list<AMateria*>::iterator output= this->_lst.begin()
	for(output ; output != this->_lst.end(); output++){

	}
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
    // this->_var = rhs.accessVar();
	(void)rhs;
    return (*this);
}