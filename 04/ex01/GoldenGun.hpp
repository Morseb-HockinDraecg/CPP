#ifndef GOLDENGUN_H
# define GOLDENGUN_H

#include "AWeapon.hpp"

class GoldenGun : public AWeapon {

public:

	GoldenGun(void);
	GoldenGun(GoldenGun const & src);
	~GoldenGun(void);

	virtual void attack() const;
private:

};

#endif