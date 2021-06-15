#include "Base.hpp"

Base * generate(void){
	Base*	b;
	int		i;
	int		w = 20;

	i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << std::setw(w) << std::left << "\033[34mgenerate\033[0m" << "Base => class A" << std::endl;
		b = new(A);
		break;
	case 1:
		std::cout << std::setw(w) << std::left << "\033[34mgenerate\033[0m" << "Base => class B" << std::endl;
		b = new(B);
		break;
	case 2:
		std::cout << std::setw(w) << std::left << "\033[34mgenerate\033[0m" << "Base => class C" << std::endl;
		b = new(C);
		break;
	default:
		b = NULL;
		break;
	}

	return b;
}

void identify_from_pointer(Base * p){
	A* a = dynamic_cast<A *>(p);
	B* b = dynamic_cast<B *>(p);
	C* c = dynamic_cast<C *>(p);
	int		w = 34;

	if (a)
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_pointer\033[0m" << "A" << std::endl;
	if (b)
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_pointer\033[0m" << "B" << std::endl;
	if (c)
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_pointer\033[0m" << "C" << std::endl;

}

void identify_from_reference( Base & p){
	int		w = 34;

	try {
		A& a = dynamic_cast<A &>(p);
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_reference\033[0m" << "A" << std::endl;
		(void)a;
	}catch (std::exception e){
		;
	}
	try {
		B& b = dynamic_cast<B &>(p);
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_reference\033[0m" << "B" << std::endl;
		(void)b;
	}catch (std::exception e){
		;
	}
	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << std::setw(w) << std::left << "\033[34midentify_from_reference\033[0m" << "C" << std::endl;
		(void)c;
	} catch (std::exception e){
		;
	}
}

int main(){

	srand(time(NULL));
	Base* b = generate();

	if (b){
		identify_from_pointer(b);
		identify_from_reference(*b);
		delete b;
	} else {
		std::cout << "Something went wrong with the generate function." << std::endl;
	}


	return 0;
}