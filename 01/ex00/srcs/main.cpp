#include "Pony.hpp"

static void ponyOnTheHeap(){
	Pony*	pony_heap = new Pony("Heapy");
	t_pony	p;

	p.age = 10;
	p.color = "blue";
	p.size = 124;
	pony_heap->setValues(p);
	pony_heap->showValues();
	delete pony_heap;
}

static void ponyOnTheStack(){
	Pony	pony_stack("Stacky");
	t_pony	p;

	p.age = 54;
	p.color = "purple";
	p.size = 4;
	pony_stack.setValues(p);
	pony_stack.showValues();
}

int main(){

	std::cout << "A pony on the heap :" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "A pony on the stack :" << std::endl;
	ponyOnTheStack();
	return 0;
}