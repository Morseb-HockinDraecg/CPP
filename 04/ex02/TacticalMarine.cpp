#include "TacticalMarine.hpp"

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs){
    // this->_var = rhs.accessVar();
	(void)rhs;
    return (*this);
}