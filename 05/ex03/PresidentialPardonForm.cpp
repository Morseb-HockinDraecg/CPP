#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
 Form("Presidential Pardon", 25,5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src){
    this->operator=(src);
	this->_target = src.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (!this->getSigned()){
		std::cout << this->getName()<< " not executed. Need to be sign first !" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getMinGradeExec())
		std::cout << executor.getName() << " does't meet the requirement !" << std::endl;
		// throw Form::GradeTooLowException();
	else
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
