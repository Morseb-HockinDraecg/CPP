#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <iomanip>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int					_fixedValue;
	static const int	_frac = 8;

};

#endif