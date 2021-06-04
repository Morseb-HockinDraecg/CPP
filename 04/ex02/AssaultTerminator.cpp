#include "AssaultTerminator.hpp"

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs){
    // this->_var = rhs.accessVar();
	(void)rhs;
    return (*this);
}