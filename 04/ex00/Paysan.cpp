#include "Paysan.hpp"

Paysan::Paysan(void) : Victim(){
    std::cout << "Ne m'inviter jamais à dîner, j'aurais toujours un doute." << std::endl;
}

Paysan::Paysan(Paysan const & src) : Victim(src){
    this->operator=(src);
    std::cout << "Ne m'inviter jamais à dîner, j'aurais toujours un doute." << std::endl;
}

Paysan::Paysan(std::string name) : Victim(name){
    std::cout << "Ne m'inviter jamais à dîner, j'aurais toujours un doute." << std::endl;
}

Paysan::~Paysan(void){
}

void Paysan::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a blue frog!" << std::endl;
}