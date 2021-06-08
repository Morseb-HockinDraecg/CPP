#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src){
    this->operator=(src);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}