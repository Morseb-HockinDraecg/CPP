#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	virtual void execute(Bureaucrat const & executor) const;

private:

};

#endif