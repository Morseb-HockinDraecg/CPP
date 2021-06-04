#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "GoldenGun.hpp"
#include "Ham.hpp"

static void	nl(void){
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;
}
int main()
{
	Character* me = new Character("me");

	
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	Enemy* c = new Ham();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* gg = new GoldenGun();
	
	nl();
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	nl();
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	nl();
	for(int i = 0; i < 5; i++)
		me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	nl();
	for(int i = 0; i < 5; i++)
		me->recoverAP();
	me->equip(gg);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	for(int i = 0; i < 5; i++)
		me->recoverAP();
	a = new SuperMutant();
	me->attack(a);
	std::cout << *me;

	return 0;
}