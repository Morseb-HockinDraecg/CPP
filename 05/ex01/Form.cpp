#include "Form.hpp"

Form::Form(std::string name, int grade, int sign, int exec):
_name(name), _grade(grade), _signed(0), _minGradeSign(sign), _minGradeExec(exec){
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	else {
		std::cout << "A form just pop. We will call it "<< name <<
		 " and give him a grade of " << grade << std::endl;
	}
}

Form::Form(Form const & src) : _grade(src.getGrade()){
    this->operator=(src);
}

Form::~Form(void){
	std::cout << "The form has been destroyed." << std::endl;
}

Form & Form::operator=(Form const & rhs){
	this->_signed  = rhs.getSigned();
	this->_minGradeSign  = rhs.getMinGradeSign();
	this->_minGradeExec  = rhs.getMinGradeExec();
    return (*this);
}
std::ostream &	operator<<(std::ostream & o, Form const & rhs){
	o << rhs.getName() << ", " << rhs.getGrade() << "grade. Required grades : "
	<< rhs.getMinGradeSign() <<" to sign and " << rhs.getMinGradeExec() << " to exec. ";
	if (rhs.getSigned())
		std::cout << "It's signed.";
	else
		std::cout << "It's not signed.";
	std::cout << std::endl;
	return o;
}
