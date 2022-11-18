#include "./Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::Fixed(const int p)
{
	this->fixedPoint = p ;
	this->fixedPoint = this->fixedPoint << this->FNumber;
}

Fixed::Fixed(const float p)
{
	this->fixedPoint = std::roundf(p * (1 << this->FNumber));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n"; 
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return this->fixedPoint;
}

Fixed & Fixed::operator=(Fixed const & obj)
{
	std::cout << "Copy assignment operator called\n";
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
	return (this->fixedPoint >> this->FNumber);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixedPoint / (float)(1 << this->FNumber));
}


std::ostream& operator<<(std::ostream &COUT, Fixed const & obj){
	COUT << obj.toFloat();
	return COUT;
}