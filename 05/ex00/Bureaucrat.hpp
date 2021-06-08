#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <iomanip>

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
				return ("GradeTooHighException : can't be less than 1");
			}
	};
	class GradeTooLowException : public std::exception{
		public :
			virtual const char * what() const throw(){
				return ("GradeTooLowException : can't be more than 150");
			}
	};

	void		increaseGrade();
	void		decreaseGrade();

	unsigned int		getGrade() const	{return _grade;}
	const std::string	getName() const 	{return _name;}

private:
	void		setGrade(unsigned int grade) {_grade = grade;}

	const std::string	_name;
	unsigned int		_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif