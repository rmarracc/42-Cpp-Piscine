#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <tgmath.h>
# include <iostream>

# define FRACTIONAL_BITS 8

class	Fixed
{
	public:

		Fixed(void);
		Fixed(int n);
		Fixed(float f);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &	operator=(Fixed const & rhs);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	
	private:
	
		int	_n;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
