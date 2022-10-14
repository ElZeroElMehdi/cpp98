#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << " Braiiiiiiinnnssss...\n";
}

std::string Zombie::getName()
{
    return this->_name;
}