#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreation", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src) {
    this->operator=(src);
	this->_target = src.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (!this->getSigned()){
		std::cout << this->getName()<< " not executed. Need to be sign first !" << std::endl;
		throw Form::GradeTooLowException();
		return ;
	}
	if (executor.getGrade() > this->getMinGradeExec()){
		std::cout << executor.getName() << " does't meet the requirement !" << std::endl;
		throw Form::GradeTooLowException();
		return ;
	}

	std::ifstream	ifs;
	std::ofstream	ofs(this->getTarget() + "_shrubbery");
	std::cout << this->getTarget() + "_shrubbery" << " has been created successfully." << std::endl;
	ifs.open("asciiTrees");
	if (!ifs || !ofs){
		std::cout << "Could't open the file.";
		throw std::exception();
		exit(1);
	}
	ofs << ifs.rdbuf();
	ifs.close();
	ofs.close();
	std::cout << this->getTarget() + "_shrubbery" << " has receve the copy successfully." << std::endl;

}