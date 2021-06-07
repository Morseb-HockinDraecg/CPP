#ifndef PECORD_H
# define PECORD_H

#include "Paysan.hpp"
#include "Peon.hpp"

class Pecord : public Paysan{

public:

	Pecord(std::string name);
	Pecord(Pecord const & src);
	virtual ~Pecord(void);


private:
	Pecord(void);

};

#endif