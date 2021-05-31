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

	void	identify(void) const;

private:
	Brain const	b;
};

#endif