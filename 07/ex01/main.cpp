#include "Iter.hpp"

void mainCorrect(){
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return;

}

int main( void ) {
	char a[20] = "coucou toi !";
	int i[] = {4,5,2,3,6};
	std::string s[5] = {"Mama", "Lucas", "Henry", "Patrick", "Marguerite"};


	::iter(a, strlen(a), &print);
	std::cout << std::endl;
	iter(i, 5, print);
	std::cout << std::endl;
	::iter(s, 5, &print);
	std::cout << std::endl;
	
	mainCorrect();

	return 0;
}