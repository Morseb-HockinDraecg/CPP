#include "Enemy.hpp"

Enemy::Enemy(void){
}
Enemy::Enemy(Enemy const & src){
    this->operator=(src);
}
Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){
}

Enemy::~Enemy(void){
}

Enemy & Enemy::operator=(Enemy const & rhs){
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return (*this);
}

std::string const Enemy::getType() const{
    return(this->_type);
}
int Enemy::getHP() const{
    return (this->_hp);
}

void Enemy::takeDamage(int dmg){
	int		hpLeft = this->getHP();
	if(dmg < 0)
		return;
	if (dmg > hpLeft)
		dmg = hpLeft;
	// std::cout << "Damage taken : \033[31m" << dmg << "\033[0m" << std::endl;
	this->setHp(hpLeft - dmg);
	// std::cout << "Hp left : \033[32m" << this->getHP() << "\033[0m" << std::endl;
}

void		Enemy::setHp(int hp){
    this->_hp = hp;
}
void		Enemy::setType(std::string type){
    this->_type = type;
}
