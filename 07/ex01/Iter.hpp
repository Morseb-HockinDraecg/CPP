#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>
#include <iomanip>

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { 
std::cout << x << std::endl; return;}

template <typename T >
void iter(T *x, size_t n, void (*U)(T const &)){
	for(size_t i = 0; i < n; i++)
		U(x[i]);
}

#endif