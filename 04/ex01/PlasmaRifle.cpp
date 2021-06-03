#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("PlasmaRifle", 21, 5){
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src){
    this->operator=(src);
}

PlasmaRifle::~PlasmaRifle(void){
}

void PlasmaRifle::attack() const{
}