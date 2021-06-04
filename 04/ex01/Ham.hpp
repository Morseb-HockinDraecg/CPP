#ifndef HAM_H
# define HAM_H

#include "Enemy.hpp"

class Ham : public Enemy {

public:

	Ham(void);
	Ham(Ham const & src);
	~Ham(void);

private:

};

#endif