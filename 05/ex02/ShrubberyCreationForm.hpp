#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form {

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	virtual void execute(Bureaucrat const & executor) const;

private:

};

#endif