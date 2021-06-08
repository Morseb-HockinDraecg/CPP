#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src){
    this->operator=(src);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    // this->_var = rhs.accessVar();
    return (*this);
}