# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <bits/stdc++.h>

class Fixed
{
	private:
		int fixedPoint;
		static const int FNumber = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed (const int p);
		Fixed (const float p);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		Fixed & operator=(Fixed const & rhs);
		Fixed & operator+(Fixed const & rhs);
		Fixed & operator*(Fixed const & rhs);
		Fixed & operator-(Fixed const & rhs);
		Fixed & operator/(Fixed const & rhs);

		bool operator>(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		Fixed & operator++(void);//++obj
		Fixed  operator++(int);//obj++
		Fixed & operator--(void);
		Fixed  operator--(int);
};

std::ostream& operator<<(std::ostream &COUT, Fixed const & obj);
#endif