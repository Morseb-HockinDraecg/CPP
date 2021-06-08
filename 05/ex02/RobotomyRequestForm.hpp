#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : virtual public Form {
	
public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	virtual void execute(Bureaucrat const & executor) const;

private:

};

#endif