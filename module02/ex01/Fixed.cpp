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
	this->fixedPoint = p << this->FNumber;
}

Fixed::Fixed(const float p)
{
	this->fixedPoint = roundf(p *(1 << this->FNumber));
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


int Fixed::toInt(void) const
{
	return (roundf(this->fixedPoint * (1>>this->FNumber)));
}

float Fixed::toFloat(void) const
{
	return (roundf(this->fixedPoint * (1>>this->FNumber)));
}


std::ostream& operator<<(std::ostream &COUT, Fixed const & obj){
	COUT << obj.toFloat()<< std::endl;
	return COUT;
}