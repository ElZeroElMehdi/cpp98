#include "./Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "copy constructor called\n";
	*this = f;
}

Fixed::Fixed(const int p)
{
	std::cout << "int constructor called\n";
	this->fixedPoint = p ;
	this->fixedPoint = this->fixedPoint << this->FNumber;
}

Fixed::Fixed(const float p)
{
	std::cout << "float constructor called\n";
	this->fixedPoint = std::roundf(p * (1 << this->FNumber));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n"; 
}

int Fixed::getRawBits() const
{
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