#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human {

public:

	Human(void);
	~Human(void);

	std::string	identify(void) const;
	const Brain&	getBrain(void) const;

private:
	const Brain	 _brain;
};

#endif