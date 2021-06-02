#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap(void);


private:
	void	setInitValue(void);

};

#endif