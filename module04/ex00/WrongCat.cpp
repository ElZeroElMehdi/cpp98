#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &New):WrongAnimal() //remove it in old compiler
{
    this->type = New.type;
}

WrongCat WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat: Assigment Operator" << std::endl;
    this->type = rhs.type;
    return(*this);
}


void WrongCat::makeSound() const
{
    std::cout << "WrongCats Sound" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}