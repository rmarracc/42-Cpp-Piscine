#include "Fixed.class.hpp"

Fixed::Fixed(void) : _n(0)
{
	return ;
}

Fixed::Fixed(int n) : _n(0)
{
	this->_n = n << FRACTIONAL_BITS;
	return ;
}

Fixed::Fixed(float f) : _n(0)
{
	this->_n = static_cast<int>(f * (1 << FRACTIONAL_BITS));
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_n) / (1 << FRACTIONAL_BITS));
}

int		Fixed::toInt(void) const
{
	return (this->_n >> FRACTIONAL_BITS);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
