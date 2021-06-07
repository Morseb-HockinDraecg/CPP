#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
}

MateriaSource::MateriaSource(MateriaSource const & src){
    this->operator=(src);
}

MateriaSource::~MateriaSource(void){
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
    // this->_var = rhs.accessVar();
	(void)rhs;
    return (*this);
}