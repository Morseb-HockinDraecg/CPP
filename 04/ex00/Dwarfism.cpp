#include "Dwarfism.hpp"

Dwarfism::Dwarfism(void) : Paysan() {
}
Dwarfism::Dwarfism(std::string name) : Paysan(name) {
    std::cout << "I'm not a DWARF !" << std::endl;
}

Dwarfism::Dwarfism(Dwarfism const & src) : Paysan(src){
    this->operator=(src);
}

Dwarfism::~Dwarfism(void){
}

void Dwarfism::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a dwarf!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Dwarfism const & rhs){
    o << "I'm " << rhs.getName() << " and I like gold !" << std::endl;
    return o;
}