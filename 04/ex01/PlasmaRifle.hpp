#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle(void);

	virtual void attack() const;

private:

};

#endif