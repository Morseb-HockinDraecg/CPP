#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>
#include <iomanip>

class Pony {

public:

	Pony(void);
	~Pony(void);

private:
	std::string	name;
	std::string	color;
	int			size;
	int			age;
};

#endif