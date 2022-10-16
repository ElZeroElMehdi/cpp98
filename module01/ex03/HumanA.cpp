#include "HumanA.hpp"

HumanA::HumanA()
{
    this->WeaponA = new Weapon("Default Weapon");
    std::cout << "HumanA Created" << std::endl;
}

HumanA::HumanA(std::string _name, Weapon _WeaponA)
{
    this->name = _name;
    this->WeaponA = _WeaponA;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->WeaponA.getType() << std::endl;
}
