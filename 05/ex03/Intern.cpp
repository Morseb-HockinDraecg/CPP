#include "Intern.hpp"

Intern::Intern(void){
}

Intern::Intern(Intern const & src){
    this->operator=(src);
}

Intern::~Intern(void){
}

Intern & Intern::operator=(Intern const & rhs){
	(void)rhs;
    return (*this);
}

Form*	Intern::makeForm(std::string FormName, std::string target){

	std::cout << "Intern creates <form>" << std::endl;
}
