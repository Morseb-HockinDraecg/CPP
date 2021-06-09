#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form();//name needed
	Form(std::string name, int sign, int exec);
	Form(Form const & src);
	virtual ~Form();

	class GradeTooHighException : public std::exception{
		public :
			virtual const char * what() const throw(){
				return ("GradeTooHighException <Form> : can't be less than 1");
			}
	};
	class GradeTooLowException : public std::exception{
		public :
			virtual const char * what() const throw(){
				return ("GradeTooLowException <Form> : executor doesn't meet the requirement");
			}
	};

	Form & operator=(Form const & rhs);

	const std::string	getName() const {return _name;}
	bool				getSigned() const {return _signed;}
	unsigned int		getMinGradeSign() const {return _minGradeSign;}
	unsigned int		getMinGradeExec() const {return _minGradeExec;}
	void				setSigned(bool i) {_signed = i;}

	virtual void execute(Bureaucrat const & executor) const = 0;
	void	beSigned(Bureaucrat& b);


private:

	const std::string	_name;
	bool				_signed;
	const unsigned int	_minGradeSign;
	const unsigned int	_minGradeExec;


};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif