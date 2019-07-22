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
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed & operator++(void);
		Fixed	operator++(int);
		Fixed & operator--(void);
		Fixed	operator--(int);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static	Fixed & min(Fixed & rls, Fixed & rhs);
		static	Fixed & max(Fixed & rls, Fixed & rhs);
		static	Fixed const & min(Fixed const & rls, Fixed const & rhs);
		static	Fixed const & max(Fixed const & rls, Fixed const & rhs);
	
	private:
	
		int	_n;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
