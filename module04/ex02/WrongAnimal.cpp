#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &New)
{
    this->type = New.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal: Assigment Operator" << std::endl;
    this->type = rhs.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal With no Sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructors" << std::endl;
}