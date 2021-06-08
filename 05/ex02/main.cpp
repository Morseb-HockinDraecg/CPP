#include "Bureaucrat.hpp"
#include "Form.hpp"


int main00(){
	try{
		Bureaucrat	rob("Robert", -100);
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		Bureaucrat	dan("Danielle", 150);
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		Bureaucrat	clo("Claudine", 150);
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat* xa = new Bureaucrat("\033[32mXavier\033[0m", 70);

	for (int i = 0; i < 50; i++){
		try{
			xa->decreaseGrade();
		}catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << *xa << std::endl;
	for (int i = 0; i < 50; i++){
		try{
			xa->increaseGrade();
		}catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << *xa << std::endl;

	delete xa;
	return 0;
}

int main01(){
	try {
		Form formm("Papier", 200, 12, 23);
		std::cout << formm << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Form formm("Papier", 100, 60, 70);
	Bureaucrat l("Lou", 57);
	Bureaucrat p("Perine", 137);
	std::cout << std::endl;

	std::cout << formm;
	p.signForm(formm);
	l.signForm(formm);
	std::cout << formm;
	l.signForm(formm);
	std::cout << std::endl;


	return 0;
}
int main(){
	// main00();
	main01();


	return 0;
}
