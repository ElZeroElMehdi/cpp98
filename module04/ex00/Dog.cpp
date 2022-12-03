#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &New)
{
    this->type = New.type;
}

Dog Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog: Assigment Operator" << std::endl;
    this->type = rhs.type;
    return(*this);
}

void Dog::makeSound()
{
    std::cout << "Dogs Sound" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}