#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	virtual void execute(Bureaucrat const & executor) const;
	std::string		getTarget() const {return this->_target;}

private:
	std::string	_target;
};

#endif