#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : virtual public Form {
	
public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	virtual void execute(Bureaucrat const & executor) const;
	std::string		getTarget() const {return this->_target;}

private:
	std::string	_target;

};

#endif