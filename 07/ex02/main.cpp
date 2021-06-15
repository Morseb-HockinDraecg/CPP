#include "Array.hpp"

int main(){
// --- Int array ---

	std::cout << "Int array" << std::endl;
	Array<int> intArr(5);

	std::cout << intArr << std::endl;

	intArr[0] = 10;
	intArr[1] = 20;
	intArr[2] = 30;
	intArr[3] = 40;
	intArr[4] = 50;
	// intArr[5] = 50;
	// intArr[-1] = 50;
	std::cout << intArr << std::endl;
	std::cout << intArr.getSize() << std::endl;

	std::cout << std::endl;


// --- str array ---

	std::cout << "Str array" << std::endl;

	Array<std::string> strArr(4);
	std::cout << strArr << std::endl;
	strArr[2] = "SDfjas hkasj ";
	std::cout << strArr << std::endl;
	std::cout << strArr[2] << std::endl;
	// std::cout << strArr[4] << std::endl;

// --- cpy array

https://www.youtube.com/watch?v=F9Kxfz9THZg
	std::cout << "cpy array" << std::endl;

	std::cout << std::endl;
	return 0;
}