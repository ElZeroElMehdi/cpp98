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
	this->WeaponB = NULL;
    this->name = _name;
}

void HumanB::attack()
{
	if (this->WeaponB)
		std::cout << this->name << " attacks with their " << this->WeaponB->getType() << std::endl;
	else
		std::cout << this->getName() << " can\'t attack" << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
	this->WeaponB = &wpn;
}

HumanB::~HumanB()
{
	
}