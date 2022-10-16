#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}