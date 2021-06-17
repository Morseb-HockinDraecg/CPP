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
	std::cout << "size : " << intArr.getSize() << std::endl;

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

	std::cout << std::endl;
	std::cout << "cpy array" << std::endl;
	
	Array<int> intArr2;
	intArr2 = intArr;

	Array<int> intArr3 = intArr;
	Array<int> intArr4(intArr);

	std::cout << "1 : " << intArr << std::endl;
	std::cout << "2 : " << intArr2 << std::endl;
	std::cout << "3 : " << intArr3 << std::endl;
	std::cout << "4 : " << intArr4 << std::endl;

	std::cout << "changing a value in '1' ... " << std::endl;
	intArr[2] = 999;

	std::cout << "1 : " << intArr << std::endl;
	std::cout << "2 : " << intArr2 << std::endl;
	std::cout << "3 : " << intArr3 << std::endl;
	std::cout << "4 : " << intArr4 << std::endl;


	std::cout << std::endl;
	return 0;
}