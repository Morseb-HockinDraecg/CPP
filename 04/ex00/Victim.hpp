#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>
#include <iomanip>

class Victim {

public:

	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim(void);

	Victim & operator=(Victim const & rhs);

	std::string	getName(void) const;
	virtual void getPolymorphed() const;

protected :

	Victim(void);

private:


	void	setName(std::string name);

	std::string	_name;

};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif