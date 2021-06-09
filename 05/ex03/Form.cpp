#include "Form.hpp"

Form::Form(std::string name, int sign, int exec):
_name(name), _signed(0), _minGradeSign(sign), _minGradeExec(exec){
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	// else {
	// 	std::cout << "A form just pop. We will call it "<< name <<
	// 	 " and give it a min grade of " << sign << " to sign and " << exec << " to exec." << std::endl;
	// }
}

Form::Form(Form const & src) : _minGradeSign(src.getMinGradeSign()), _minGradeExec(src.getMinGradeExec()){
    this->operator=(src);
}

Form::~Form(void){
	std::cout << "The form has been destroyed." << std::endl;
}

Form & Form::operator=(Form const & rhs){
	this->_signed  = rhs.getSigned();
    return (*this);
}
std::ostream &	operator<<(std::ostream & o, Form const & rhs){
	o << rhs.getName() << ". Required grades : "
	<< rhs.getMinGradeSign() <<" to sign and " << rhs.getMinGradeExec() << " to exec. ";
	if (rhs.getSigned())
		std::cout << "It's signed.";
	else
		std::cout << "It's not signed.";
	std::cout << std::endl;
	return o;
}
