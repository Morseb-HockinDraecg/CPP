#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8){
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src){
    this->operator=(src);
}

PowerFist::~PowerFist(void){
}

void PowerFist::attack() const{
   std::cout << "* pschhh... SBAM! *" << std::endl; 
}