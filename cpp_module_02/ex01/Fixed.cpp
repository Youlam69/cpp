#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}


Fixed::~Fixed()
{
}

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
	this->value = value * 256;
}

Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * 256);
}

float Fixed::toFloat( void ) const{
	return ((float)this->value / 256);
}

int Fixed::toInt( void ) const{
	return (this->value / 256);
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj){
		this->value = obj.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits() const
{
        return (this->value);
}

void Fixed::setRawBits(int const raw)
{
		this->value = raw;
}
