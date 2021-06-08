#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", ){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src){
    this->operator=(src);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    // this->_var = rhs.accessVar();
    return (*this);
}