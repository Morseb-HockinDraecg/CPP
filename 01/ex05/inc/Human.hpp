#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Brain.hpp"

class Human {

public:

	Human(void);
	~Human(void);

	Brain	identify(void) const;
	void	setBrain(Brain const b);

private:
	Brain	const _brain;
};

#endif