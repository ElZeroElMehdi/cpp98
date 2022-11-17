# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixedPoint;
		static const int FNumber = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed (cont int p);
		Fixed & operator=(Fixed const & obj);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);		
};

#endif
