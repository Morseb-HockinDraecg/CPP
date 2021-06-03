#ifndef DWARFISM_H
# define DWARFISM_H

#include "Paysan.hpp"

class Dwarfism : public Paysan{

public:

	Dwarfism(std::string name);
	Dwarfism(Dwarfism const & src);
	~Dwarfism(void);

	void getPolymorphed() const;

private:

	Dwarfism(void);
};

std::ostream & operator<<(std::ostream & o, Dwarfism const & rhs);

#endif