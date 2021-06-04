#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	~SuperMutant(void);

	void takeDamage(int dmg);

private:

};

#endif