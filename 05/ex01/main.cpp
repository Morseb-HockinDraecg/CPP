#include "Bureaucrat.hpp"

int main(){
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