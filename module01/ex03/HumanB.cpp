#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "HumanB Created" << std::endl;
}

HumanB::HumanB(std::string _name)
{
    this->name = _name;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->WeaponB.getType() << std::endl;
}

void HumanB::setWeapon(Weapon wpn)
{
	this->WeaponB = wpn;
}