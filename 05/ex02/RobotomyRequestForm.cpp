#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src){
    this->operator=(src);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
    // this->_var = rhs.accessVar();
    return (*this);
}