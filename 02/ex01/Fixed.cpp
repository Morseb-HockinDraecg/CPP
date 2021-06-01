#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedValue = 0;
}

Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    this->_fixedValue = i;
}

Fixed::Fixed(const float i){
    std::cout << "Float constructor called" << std::endl;
    this->_fixedValue = i;
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
    this->_fixedValue = rhs.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const{
    return this->_fixedValue;
}

void    Fixed::setRawBits( int const raw ){
    this->_fixedValue = raw;
}

float	Fixed::toFloat( void ) const{
    float a = 1;
    return a;
}

int		Fixed::toInt( void ) const{
    return (roundf(this->_fixedValue));

}

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.getRawBits();
    return o;
}