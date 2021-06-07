#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class Peon : public Victim {

public:

	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon(void);

	void getPolymorphed() const;

protected:
	Peon(void);

};

#endif