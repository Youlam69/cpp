#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &obj)
{
	if (this != &obj)
		*this = obj;
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	if (this != &obj)
	{
		this->value = obj.value;
	}
	return (*this);
}

int Fixed::getRawBits() const
{
        return (this->value);
}

void Fixed::setRawBits(int const raw)
{
		this->value = raw;
}
