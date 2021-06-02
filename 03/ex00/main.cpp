#include "FragTrap.hpp"

void	nl(void){
	std::cout << std::endl;
	std::cout << "- - - - - - - - - - - - -  " << std::endl;
	std::cout << std::endl;
}
void f1AttackRF2(FragTrap &f1, FragTrap &f2){
	f1.rangedAttack(f2.getName());
	f2.takeDamage(f1.getRangeDmg());
	nl();
}

void f1AttackMF2(FragTrap &f1, FragTrap &f2){
	f1.meleeAttack(f2.getName());
	f2.takeDamage(f1.getMeleeDmg());
	nl();
}

int main(){
	FragTrap	f1("\033[34mKasta\033[0m");
	FragTrap	f2("\033[35mNapy\033[0m");
	int			AttackLoop = 6;

	srand((unsigned int)time(0));
	nl();
	for (int i = 0; i < AttackLoop; i++)
		f1AttackRF2(f1, f2);
	f2.beRepaired(50);
	f2.beRepaired(50);
	f2.beRepaired(50);
	nl();
	for (int i = 0; i < AttackLoop; i++)
		f1AttackMF2(f2, f1);
	f1.takeDamage(154);
	nl();
	nl();
	f1.beRepaired(200);
	nl();
	for (int i = 0; i < AttackLoop; i++)
		f1.vaulthunter_dot_exe("Moulinette");
	return 0;
}