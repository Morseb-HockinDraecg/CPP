#include "Pyro.hpp"

Pyro::Pyro(void): AMateria("pyro"){
}

Pyro::Pyro(Pyro const & src) :AMateria(src){
    this->operator=(src);
}

Pyro::~Pyro(void){
}
