#include "Base.hpp"

Base * generate(void){
	Base*	b = new(Base);
	int		i;

	i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << "case 0" << std::endl;
		break;
	case 1:
		std::cout << "case 1" << std::endl;
		break;
	case 2:
		std::cout << "case 2" << std::endl;
		break;
	default:
		break;
	}

	return b;
}

int main(){

	srand(time(NULL));
	Base* b = generate();
	(void)b;
	return 0;
}