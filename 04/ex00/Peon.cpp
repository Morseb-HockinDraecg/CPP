#include "Peon.hpp"

Peon::Peon(void) : Victim(){
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src){
    std::cout << "Zog zog." << std::endl;
    this->operator=(src);
}

Peon::Peon(std::string name): Victim(name){
    std::cout << "Zog zog." << std::endl;

}

Peon::~Peon(void){
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
