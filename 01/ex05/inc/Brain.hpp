#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Brain {

public:

	Brain(void);
	~Brain(void);

	std::string	identify(void) const;

private:

	int			_age;
	int			_neurons_nb;

};

#endif