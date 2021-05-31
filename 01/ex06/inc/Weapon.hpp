#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <iomanip>

class Weapon {

public:

	Weapon(std::string str);
	~Weapon(void);

	void	setType(std::string type);
	const std::string& getType(void) const;

private:
	std::string _type;
};

#endif