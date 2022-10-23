#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string smiya)
{
    this->name = smiya;
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
    std::cout << this->name << ": Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

