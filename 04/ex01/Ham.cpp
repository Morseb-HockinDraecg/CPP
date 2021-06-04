#include "Ham.hpp"

Ham::Ham(void): Enemy(1, "Ham"){
	std::cout << "Ready for combat! " << std::endl;
}

Ham::Ham(Ham const & src){
    this->operator=(src);
	std::cout << "Ready for combat! " << std::endl;
}

Ham::~Ham(void){
	std::cout << "Every part is the best part! " << std::endl;
}
