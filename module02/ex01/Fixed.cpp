#include "./Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::Fixed(const int p)
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n"; 
}

int Fixed::getRawBits() const
{
	return this->fixedPoint;
}

Fixed & Fixed::operator=(Fixed const & obj){
	if (this != &obj)
		this->fixedPoint = obj.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}