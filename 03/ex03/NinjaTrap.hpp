#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

    void	ninjaShoebox(ClapTrap & target);
    void	ninjaShoebox(FragTrap & target);
    void	ninjaShoebox(NinjaTrap & target);
    void	ninjaShoebox(ScavTrap & target);

private:

};

#endif