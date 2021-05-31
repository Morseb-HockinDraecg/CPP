#include <iostream>
#include <string>
#include <iomanip>

int main(){
	std::string str;
	std::string&	str_ref = str;
	std::string*	str_ptr = &str;

	str = "HI THIS IS BRAIN";
	std::cout << std::setw(10) << "str : " << str << " @ " << &str << std::endl;
	std::cout << std::setw(10) << "str_ref : " << str_ref << " @ " << &str_ref<< std::endl;
	std::cout << std::setw(10) << "str_ptr : " << *str_ptr << " @ " << str_ptr << std::endl;
	return 0;
}