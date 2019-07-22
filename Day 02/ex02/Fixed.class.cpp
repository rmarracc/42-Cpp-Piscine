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

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(static_cast<float>(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(static_cast<float>(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(static_cast<float>(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(static_cast<float>(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed & Fixed::operator++(void)
{
	Fixed	f;
	f.setRawBits(1);
	*this = this->operator+(f.toFloat());
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	Fixed	f;
	f.setRawBits(1);
	*this = this->operator-(f.toFloat());
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->operator++();
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->operator--();
	return (tmp);
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

Fixed & Fixed::min(Fixed & rls, Fixed & rhs)
{
	if (rls.toFloat() > rhs.toFloat())
		return (rhs);
	else
		return (rls);
}

Fixed & Fixed::max(Fixed & rls, Fixed & rhs)
{
	if (rls.toFloat() < rhs.toFloat())
		return (rhs);
	else
		return (rls);
}

Fixed const & Fixed::min(Fixed const & rls, Fixed const & rhs)
{
	if (rls.toFloat() > rhs.toFloat())
		return (rhs);
	else
		return (rls);
}

Fixed const & Fixed::max(Fixed const & rls, Fixed const & rhs)
{
	if (rls.toFloat() < rhs.toFloat())
		return (rhs);
	else
		return (rls);
}
