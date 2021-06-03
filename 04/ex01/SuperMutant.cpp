#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src){
    this->operator=(src);
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void){
    std::cout << "Aaargh..." << std::endl;
}

// void Enemy::takeDamage(int dmg){
// 	int		hpLeft = this->getHP();
//     dmg -= 3;
// 	if(dmg < 0)
// 		return;
// 	if (dmg > hpLeft)
// 		dmg = hpLeft;
// 	std::cout << "Damage taken : \033[31m" << dmg << "\033[0m" << std::endl;
// 	this->setHp(hpLeft - dmg);
// 	std::cout << "Hp left : \033[32m" << this->getHP() << "\033[0m" << std::endl;
// }