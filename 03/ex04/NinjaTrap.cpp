#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) :  ClapTrap(name, 60, 120, 100, 100, 30, 20, 5) {
    std::cout << "Constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src){
    std::cout << "Copy Constructor called" << std::endl;
}

NinjaTrap::~NinjaTrap(void){
    std::cout << "Destructor called" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap & target){
   std::cout << "Clap Clap " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap & target){
   std::cout << "Clip Clip " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(NinjaTrap & target){
   std::cout << "Clop Clop " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap & target){
   std::cout << "Clup Clup " << target.getName() << std::endl;
}