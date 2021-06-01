#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(const int i);
	Fixed(const float i);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_fixedValue;
	static const int	_frac = 8;

};

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs);

#endif