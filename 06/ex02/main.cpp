#include "Base.hpp"

Base * generate(void){
	Base*	b;
	int		i;

	i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << "case 0" << std::endl;
		b = new(A);
		break;
	case 1:
		std::cout << "case 1" << std::endl;
		b = new(B);
		break;
	case 2:
		std::cout << "case 2" << std::endl;
		b = new(C);
		break;
	default:
		b = NULL;
		break;
	}

	return b;
}

int main(){

	srand(time(NULL));
	Base* b = generate();
	if (b)
		delete b;
	(void)b;
	return 0;
}