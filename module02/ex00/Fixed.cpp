#include "./Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
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