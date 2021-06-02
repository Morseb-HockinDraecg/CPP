#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	void	vaulthunter_dot_exe(std::string const & target);

private:

};

#endif