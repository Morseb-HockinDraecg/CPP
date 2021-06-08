#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"



int main02(){
	PresidentialPardonForm ppf;
	Bureaucrat s("Samael", 72);

	std::cout << std::endl;
	std::cout << ppf;
	s.signForm(ppf);
	ppf.execute(s);
	

	return 0;
}

int main(){
	main02();


	return 0;
}
