#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: Constructor" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &New)
{
    this->type = New.type;
}

Animal Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal: Assigment Operator" << std::endl;
    this->type = rhs.type;
    return (*this);
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound()
{
    std::cout << "Animal With no Sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructors" << std::endl;
}