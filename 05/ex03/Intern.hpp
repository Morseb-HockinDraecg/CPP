#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"

class Intern {

public:

	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	Form*	makeForm(std::string FormName, std::string target);

private:

};

#endif