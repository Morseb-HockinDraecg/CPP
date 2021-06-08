#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25,5){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src){
    this->operator=(src);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
