#include "Span.hpp"

int mainSubject();
void	test00();	//test construc class;
void	test01();	//100 elements sorted;
void	test02();	//0 elements;
void	test03();	//rand nbrs
void	test04();	//chosen nbrs to test



int main()
{
	srand(time(0));

	mainSubject();
	// test00();
	// test01();
	// test02();
	// test04();
}

void test04(){
	Span sp = Span(5);

	sp.addNumber(-13);
	sp.addNumber(-13);
	sp.addNumber(INT_MAX);
	sp.addNumber(9);

	std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test03(){
	size_t		v = 10;
	Span sp = Span(v);
	
	for (int i = static_cast<int>(v) / (-2); i < static_cast<int>(v / 2); i++)
		sp.addNumber(rand() % 10000);
	std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test02(){
	size_t		v = 0;
	Span sp = Span(v);
	
	for (int i = static_cast<int>(v) / (-2); i < static_cast<int>(v / 2); i++)
		sp.addNumber(i);
	std::cout << sp;
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << sp;
	try {
	std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}

void	test01(){
	size_t		v = 100;
	Span sp = Span(v);
	
	for (int i = static_cast<int>(v) / (-2); i < static_cast<int>(v / 2); i++)
		sp.addNumber(i);
	std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test00(){
	Span sp = Span(5);

	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	Span spa = sp;
	Span spp(sp);

	std::cout << "sp  : " << sp << std::endl;
	std::cout << "spa : " << spa << std::endl;
	std::cout << "spp : " << spp << std::endl;
}

int mainSubject()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}