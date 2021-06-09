#ifndef CLASS_NAME_H
# define CLASS_NAME_H

#include <iostream>
#include <string>
#include <iomanip>

class Class_name {

public:

	Class_name(void);
	Class_name(Class_name const & src);
	~Class_name(void);

	Class_name & operator=(Class_name const & rhs);

private:

};

#endif