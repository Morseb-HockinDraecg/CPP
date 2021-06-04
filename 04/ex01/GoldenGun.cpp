#include "GoldenGun.hpp"

GoldenGun::GoldenGun(void) : AWeapon("Golden Gun", 500, 40){
}

GoldenGun::GoldenGun(GoldenGun const & src): AWeapon(src){
    this->operator=(src);
}

GoldenGun::~GoldenGun(void){
}

void GoldenGun::attack() const{
   std::cout << "* shit cheat shit *" << std::endl; 
}