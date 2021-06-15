#include "Iter.hpp"



int main( void ) {

	char a[20] = "coucou toi !";
	int i[20] = {4,5,2,3,6};
	std::string s[5] = {"Mama", "Lucas", "Henry", "Patrick", "Marguerite"};

	std::cout << a << std::endl;
	for (int o = 0; o < 5; o++)
		std::cout << i[o] << " ";
	std::cout << std::endl;
	for (int o = 0; o < 5; o++)
		std::cout << s[o] << " ";
	std::cout << std::endl;

	::iter(&a, strlen(a), &addOne);
	::iter(&i, 5, &addOne);
	::iter(&s, s->length(), &hideLastChar);

	std::cout << std::endl;
	std::cout << "------ iter -------" << std::endl;
	std::cout << std::endl;

	std::cout << a << std::endl;
	for (int o = 0; o < 5; o++)
		std::cout << i[o] << " ";
	std::cout << std::endl;
	for (int o = 0; o < 5; o++)
		std::cout << s[o] << " ";
	std::cout << std::endl;

	return 0;
}