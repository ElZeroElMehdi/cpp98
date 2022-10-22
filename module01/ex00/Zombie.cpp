#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string smiya)
{
    this->name = smiya;
    std::cout << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
