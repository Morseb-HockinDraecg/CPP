#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
const T	max(T const & x, T const & y){
	return (x > y ? x : y);
}

template <typename T>
const T	min(T const & x, T const & y){
	return (x < y ? x : y);
}

template <typename T>
void swap(T & a, T & b){
	T tmp = a;
	a = b;
	b = tmp;
}

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getInt(void) const {return this->_n;}
private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome & array){
	o << array.getInt();
	return o;
};


#endif