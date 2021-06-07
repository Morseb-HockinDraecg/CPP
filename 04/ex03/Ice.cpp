#include "Ice.hpp"

Ice::Ice(void): AMateria(){
}

Ice::Ice(Ice const & src) : AMateria(src){
    this->operator=(src);
}

Ice::~Ice(void){
}
