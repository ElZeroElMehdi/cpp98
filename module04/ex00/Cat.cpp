#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &New):Animal()
{
    this->type = New.type;
}

Cat& Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat: Assigment Operator" << std::endl;
    this->type = rhs.type;
    return(*this);
}


void Cat::makeSound() const
{
    std::cout << "Cats Sound" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}