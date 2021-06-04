#include "Squad.hpp"
#include <algorithm>

Squad::~Squad(){
	while (!this->_squad.empty()){
		delete(*this->_squad.begin());
		this->_squad.pop_front();
	}
}

Squad & Squad::operator=(Squad const & rhs){
    this->_squad = rhs.getSquad();
    return (*this);
}
