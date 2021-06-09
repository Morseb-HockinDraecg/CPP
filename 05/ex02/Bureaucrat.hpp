#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "Form.hpp"

class Form;

class Bureaucrat {

public:

	Bureaucrat();	//name needed
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & rhs);

	class GradeTooHighException : public std::exception{
		public :
			virtual const char * what() const throw(){
				return ("GradeTooHighException <Bureaucrat> : can't be less than 1");
			}
	};
	class GradeTooLowException : public std::exception{
		public :
			virtual const char * what() const throw(){
				return ("GradeTooLowException <Bureaucrat> : can't be more than 150");
			}
	};

	void		increaseGrade();
	void		decreaseGrade();

	void		signForm(Form& f);
	virtual void		executeForm(Form const & form);

	unsigned int		getGrade() const	{return _grade;}
	const std::string	getName() const 	{return _name;}

private:
	void		setGrade(unsigned int grade) {_grade = grade;}

	const std::string	_name;
	unsigned int		_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif