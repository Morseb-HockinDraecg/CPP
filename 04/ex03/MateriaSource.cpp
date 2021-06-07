#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _NbrMaterial(0){
	for (int i = 0; i < _maxMat; i++)
		this->_lst[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int idx = 0; idx < this->_NbrMaterial; idx++){
		if (_lst[idx])
			delete this->_lst[idx];
	}
	this->operator=(src);
}

MateriaSource::~MateriaSource(void){
	for (int idx = 0; idx < this->_NbrMaterial; idx++){
		if (_lst[idx])
			delete this->_lst[idx];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	if (this->_NbrMaterial == this->_maxMat )
		return ;
	this->_lst[this->_NbrMaterial] = m;
	this->_NbrMaterial++;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int	nbMat = this->_NbrMaterial;
	int idx = -1;
	if (nbMat == 0){
		std::cout << "No materia created : Need to learn first" << std::endl;
		return NULL;
	}
	while (++idx < nbMat){
		if (this->_lst[idx]->getType() == type)
			break;
	}	
	if (idx == nbMat){
		std::cout << "No materia created : Need to learn first" << std::endl;
		return NULL;
	}
	return this->_lst[idx]->clone();
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
	this->_NbrMaterial = rhs._NbrMaterial;
    return (*this);
}