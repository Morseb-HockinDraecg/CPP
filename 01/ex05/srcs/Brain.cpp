#include "Brain.hpp"

Brain::Brain(void){
	this->_age = 26;
	this->_neurons_nb = 78948479;
}

Brain::~Brain(void){
}

std::string	Brain::identify(void) const{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	std::string name = ss.str(); 

	ss << address;  
	name = ss.str(); 
	return (name);
}