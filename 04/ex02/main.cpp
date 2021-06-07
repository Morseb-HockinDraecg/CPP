#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void	testSquad(){
	ISpaceMarine* a = new TacticalMarine;
	ISpaceMarine* b = new TacticalMarine;
	ISpaceMarine* c = new TacticalMarine;
	ISpaceMarine* d = new TacticalMarine;
	ISpaceMarine* e = new TacticalMarine;
	ISpaceMarine* f = new TacticalMarine;
	ISpaceMarine* g = new AssaultTerminator;
	ISpaceMarine* h = new AssaultTerminator;
	ISpaceMarine* i = new AssaultTerminator;
	ISpaceMarine* j = new AssaultTerminator;
	
	ISquad* sq = new Squad;
	ISquad* st = sq;


	sq->push(a);
	sq->push(b);
	sq->push(c);
	sq->push(d);
	sq->push(e);
	sq->push(f);
	sq->push(g);
	sq->push(h);
	sq->push(i);
	sq->push(j);

	std::cout << std::endl;

	std::cout << "get count : " << sq->getCount() << std::endl;
	std::cout << "get unit (5) : " << sq->getUnit(5) << std::endl;
	std::cout << "get unit (15) : " << sq->getUnit(15) << std::endl;
	std::cout << "get unit (-7) : " << sq->getUnit(-7) << std::endl;

	std::cout << std::endl;
	std::cout << "get count : " << st->getCount() << std::endl;
	std::cout << "get unit (5) : " << sq->getUnit(5) << std::endl;
	std::cout << "get unit (15) : " << sq->getUnit(15) << std::endl;
	std::cout << "get unit (-7) : " << sq->getUnit(-7) << std::endl;
	std::cout << std::endl;

	delete(sq);
}

void	testMarine(){
	ISpaceMarine* tester = new TacticalMarine;
	ISpaceMarine* clone;

	tester->battleCry();
	tester->meleeAttack();
	tester->rangedAttack();
	std::cout << std::endl;
	clone = tester->clone();
	clone->battleCry();
	clone->meleeAttack();
	clone->rangedAttack();
	std::cout << std::endl;
	delete(tester);
	delete(clone);
}

int main()
{
	testSquad();
	std::cout << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << std::endl;
	testMarine();
	std::cout << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	return 0;
}