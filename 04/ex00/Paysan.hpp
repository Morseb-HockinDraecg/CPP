#ifndef PAYSAN_H
# define PAYSAN_H

#include "Victim.hpp"

class Paysan : public Victim {

public:

	Paysan(std::string name);
	Paysan(Paysan const & src);
	~Paysan(void);

	void getPolymorphed() const;

protected:
	Paysan(void);

};

#endif