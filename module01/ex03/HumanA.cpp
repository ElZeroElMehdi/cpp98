#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_WeaponA):WeaponA(_WeaponA)
{
    this->name = _name;
    this->WeaponA = _WeaponA;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->WeaponA.getType() << std::endl;
}
