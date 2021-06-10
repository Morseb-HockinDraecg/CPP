#include "Data.hpp"

Data::Data(){
}

Data::Data(Data const & src){
    this->operator=(src);
}

Data::~Data(void){
}

Data & Data::operator=(Data const & rhs){
    // this->_var = rhs.accessVar();
	(void)rhs;
    return (*this);
}