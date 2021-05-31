#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <iomanip>

class Brain {

public:

	Brain(void);
	~Brain(void);

	void	identify(void) const;

private:

	int			_age;
	int			_neurons_nb;
	std::string	_past_and_maladies;

};

#endif