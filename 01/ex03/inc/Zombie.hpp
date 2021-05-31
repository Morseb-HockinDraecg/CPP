#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <random>

class Zombie {

public:

	Zombie(void);
	~Zombie(void);
	
	void		annonce(void) const;
	void		setName(std::string name);
	void		setType(std::string name);
	std::string	getName(void);
	std::string	getType(void);


private:
	std::string _name;
	std::string _type;
};

#endif