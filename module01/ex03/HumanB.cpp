#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "HumanB Created" << std::endl;
}

void HumanB::setName(std::string nm){
	this->name = nm;
}

std::string HumanB::getName()
{
	return this->name;
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

HumanB::~HumanB()
{
	
}