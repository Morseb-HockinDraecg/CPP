#include "Victim.hpp"

Victim::Victim(void){
}

Victim::Victim(std::string name) : _name(name){
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src){
    this->operator=(src);
}

Victim::~Victim(void){
    std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs){
    this->_name = rhs.getName();
    return (*this);
}

void Victim::getPolymorphed() const{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}



std::string Victim::getName(void) const{
    return (this->_name);
}

void    Victim::setName(std::string name){
    this->_name = name;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs){
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}