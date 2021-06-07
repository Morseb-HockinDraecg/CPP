#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){
}

Cure::Cure(Cure const & src): AMateria(src){
    this->operator=(src);
}

Cure::~Cure(void){
}
