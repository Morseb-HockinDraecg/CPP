#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>
#include <iomanip>

typedef struct s_pony{
	std::string	color;
	int			size;
	int			age;
} t_pony;

class Pony {

public:

	Pony(std::string name);
	~Pony(void);

	void setValues(t_pony p);
	void showValues(void) const;

private:
	std::string	_name;
	std::string	_color;
	int			_size;
	int			_age;
};

#endif