#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src) {
    this->operator=(src);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}