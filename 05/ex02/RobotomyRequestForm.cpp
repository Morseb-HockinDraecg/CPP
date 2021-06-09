#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form("Robotomy Request", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src){
    this->operator=(src);
	this->_target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (!this->getSigned()){
		std::cout << this->getName()<< " not executed. Need to be sign first !" << std::endl;
		throw Form::GradeTooLowException();
		return ;
	}
	if (executor.getGrade() > this->getMinGradeExec()){
		std::cout << executor.getName() << " does't meet the requirement !" << std::endl;
		throw Form::GradeTooLowException();
	}else{
		std::cout << "bzoum bzoum. ";
		if (rand() % 2)
			std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << executor.getName() << " has not been robotomized successfully." << std::endl;
	}
}