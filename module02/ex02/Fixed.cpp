#include "./Fixed.hpp"

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &f)
{
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
}

int Fixed::getRawBits() const
{

	return this->fixedPoint;
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

Fixed & Fixed::operator=(/* Fixed *;fh,*/ Fixed const & rhs) // right hand side // lhs = rhs
{
	if (this != &rhs) // right hand side
		this->fixedPoint = rhs.getRawBits(); 
	return (*this);
}

Fixed & Fixed::operator+(Fixed const & rhs)
{
	if (this != &rhs)
		this->fixedPoint += rhs.fixedPoint;
	return (*this);
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	if (this != &rhs)
		this->fixedPoint -= rhs.fixedPoint;
	return (*this);
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	if (this != &rhs)
		this->fixedPoint *= rhs.fixedPoint;
	return (*this);
}

Fixed & Fixed::operator/(Fixed const & rhs) 
{
	if (this != &rhs)
		this->fixedPoint /= rhs.fixedPoint;
	return (*this);
}


bool Fixed::operator>(Fixed const & rhs)
{
	return (this->fixedPoint > rhs.fixedPoint);
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->fixedPoint < rhs.fixedPoint);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->fixedPoint >= rhs.fixedPoint);
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->fixedPoint <= rhs.fixedPoint);
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->fixedPoint == rhs.fixedPoint);
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->fixedPoint != rhs.fixedPoint);
}

Fixed & Fixed::operator++(void)
{
	this->fixedPoint += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPoint += 1;
	return tmp;
}


Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}