#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist(void);
	PowerFist(PowerFist const & src);
	virtual ~PowerFist(void);

	virtual void attack() const;

private:

};

#endif