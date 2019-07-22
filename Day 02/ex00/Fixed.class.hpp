#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# define FRACTIONAL_BITS

class	Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &	operator=(Fixed const & rhs);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
	
	private:
	
		int	_n;
};

#endif
