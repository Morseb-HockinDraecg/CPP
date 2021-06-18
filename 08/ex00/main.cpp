#include "Easyfind.hpp"


void displayInt(int i){
	std::cout << i << "  ";
}

int parsInt(){
	int i;

	std::cout << "enter an int : " << std::endl;
	while (true)
	{
		std::cin >> i;
		if (!std::cin){
			std::cout << "Wrong Choice. Enter again " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		} else
			break;
	}
	return i;
}

int main(){
	int				intValue;

std::cout << std::endl;
	// --- list --- 
	std::cout << "\033[34m --- Container : list ---\033[0m" << std::endl;
	std::list<int>	lst;

	try {
		intValue = parsInt();
		easyfind(lst, intValue);
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	for(int i = 0; i < 20; i += 2)
		lst.push_back(i);
	std::cout << "Displaying int : " <<std::endl;
	for_each(lst.begin(), lst.end(), displayInt);
	std::cout << std::endl;
	try {
		intValue = parsInt();
		easyfind(lst, intValue);
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

std::cout << std::endl;
	// --- vector --- 
	std::cout << "\033[34m --- Container : vector ---\033[0m" << std::endl;
	std::vector<int>	vec;

	for(int i = 99; i > 10; i -= 20)
		vec.push_back(i);
	std::cout << "Displaying int to find : " <<std::endl;
	for_each(vec.begin(), vec.end(), displayInt);
	std::cout << std::endl;
	try {
		intValue = parsInt();
		easyfind(vec, intValue);
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

std::cout << std::endl;
	// --- deque --- 
	std::cout << "\033[34m --- Container : deque ---\033[0m" << std::endl;
	std::deque<int>	deq;

	for(int i = 500; i < 1000; i += 100)
		deq.push_back(i);
	std::cout << "Displaying int : " <<std::endl;
	for_each(deq.begin(), deq.end(), displayInt);
	std::cout << std::endl;
	try {
		intValue = parsInt();
		easyfind(deq, intValue);
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}