#include "Pony.hpp"

Pony::Pony(std::string name){
	this->_name = name;
	std::cout << "Pony " << name << " just born !" << std::endl;
}

Pony::~Pony(void){
	std::cout << "Pony " << this->_name << " died ! RIP" << std::endl;
}

void Pony::setValues(t_pony p){
	this->_color = p.color;
	this->_size = p.size;
	this->_age = p.age;
}
void Pony::showValues(void) const{
	std::cout << this->_name << " will be " << this->_size << " cm tall and " << this->_color
	<< " for is " << this->_age << " years old." << std::endl;
}