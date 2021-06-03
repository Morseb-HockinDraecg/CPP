#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(170, "Super Mutant"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src): Enemy(src){
    this->operator=(src);
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void){
    std::cout << "* SPROTCH *" << std::endl;
}
