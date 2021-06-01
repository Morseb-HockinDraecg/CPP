#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _rawBits(i << _iBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i) : _rawBits(roundf(i * (1 << _iBits))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(src);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->_rawBits = rhs.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const{
    return this->_rawBits;
}

void    Fixed::setRawBits( int const raw ){
    this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const{
    return ((float)this->_rawBits / (float)pow(2, this->_iBits));
}

int		Fixed::toInt( void ) const{
    return (roundf(this->_rawBits >> 8));

}

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}