#include "Class_name.hpp"

Class_name::Class_name(void){
}

Class_name::Class_name(Class_name const & src){
    this->operator=(src);
}

Class_name::~Class_name(void){
}

Class_name & Class_name::operator=(Class_name const & rhs){
    //this->_var = rhs.accessVar();
    return (*this)
}