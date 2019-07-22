#include "Fixed.class.hpp"

Fixed::Fixed(void) : _n(0)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->_n = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
