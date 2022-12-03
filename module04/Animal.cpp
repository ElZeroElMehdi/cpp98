#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal: Constructor" << std::endl;
}

Animal::Animal(const Animal &New)
{
    this->type = New.type;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructors" << std::endl;
}