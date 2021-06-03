#include "Pecord.hpp"

Pecord::Pecord(void) : Paysan(){
}
Pecord::Pecord(std::string name) : Paysan(name){
    std::cout << "It's you the Pecord" << std::endl;
}
Pecord::Pecord(Pecord const & src) : Paysan(src){
    this->operator=(src);
}

Pecord::~Pecord(void){
}
