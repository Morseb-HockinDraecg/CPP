#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0), _type("Default"){
}
AMateria::AMateria(AMateria const & src){
    this->operator=(src);
}
AMateria::AMateria(std::string const & type): _xp(0), _type(type){
}

AMateria::~AMateria(void){
	std::cout << "mat destruct" << std::endl;
}

void AMateria::use(ICharacter& target){
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else if (this->_type == "pyro")
		std::cout << "* burns " << target.getName() << " *" << std::endl;
	this->_xp += 10;
}

AMateria & AMateria::operator=(AMateria const & rhs){
    this->_xp = rhs.getXP();
	this->_type = rhs.getType();

    return (*this);
}




