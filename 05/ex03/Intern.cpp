#include "Intern.hpp"

Intern::Intern(void){
}

Intern::Intern(Intern const & src){
    this->operator=(src);
}

Intern::~Intern(void){
}

Intern & Intern::operator=(Intern const & rhs){
	(void)rhs;
    return (*this);
}

static Form	*scf(std::string target)
{
	return (new ShrubberyCreationForm(target));
	std::cout << "Intern creates shrubbery creation form" << std::endl;
}

static Form	*rrf(std::string target)
{
	return (new RobotomyRequestForm(target));
	std::cout << "Intern creates robotomy request form" << std::endl;
}

static Form	*ppf(std::string target)
{
	return (new PresidentialPardonForm(target));
	std::cout << "Intern creates presidential pardon form" << std::endl;
}

Form*	Intern::makeForm(std::string FormName, std::string target) const{
	Form*			res = NULL;
	std::string		names[3] = {"presidential pardon", "robotomy request", "shuberry creation"};
	Form*			(*forms[3])(std::string target) = {ppf, rrf, scf};

	for (int i = 0; i < 3; i++){
		if (names[i] == FormName){
			res = forms[i](target);
		}
	}

	return res;
}
