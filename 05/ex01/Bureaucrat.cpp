#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		_grade = grade;
		std::cout << "A bureaucrat just pop. We will call him "<< name <<
		 " and give him a grade of " << grade << std::endl;
	}
}
Bureaucrat::Bureaucrat(Bureaucrat const & src){
    this->operator=(src);
}

void		Bureaucrat::increaseGrade(){
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
	this->_grade -= 1;
}
void		Bureaucrat::decreaseGrade(){
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "RIP " << this->_name << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	this->_grade = rhs.getGrade();
    return (*this);
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}