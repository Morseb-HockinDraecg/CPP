#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>

class Convert {

public:

	Convert() {}
	Convert(char charVal);
	Convert(double doubleVal);
	Convert(Convert const & src);
	~Convert(void);

	// operator float()	{return this->_floatVal;}
	// operator int()		{return static_cast<int>(this->_floatVal);}

	Convert & operator=(Convert const & rhs);
	char	getChar() const	{return _charVal;}
	double	getDouble() const {return _doubleVal;}

	// class	converExecption : public std::exception{
	// 	public :
	// 		virtual const char * what() const throw(){
	// 			return ("Non displayable");
	// 		}
	// };

private:
	char 	_charVal;
	double 	_doubleVal;

};

std::ostream &	operator<<(std::ostream & o, Convert const & rhs);

#endif