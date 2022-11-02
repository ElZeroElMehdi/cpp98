#include "HumanA.hpp"

void HumanA::setName(std::string nm){
	this->name = nm;
}

std::string HumanA::getName()
{
	return this->name;
}

void HumanA::setWeapon(Weapon &_WeaponA){
	this->WeaponA = _WeaponA;
}

HumanA::HumanA(std::string _name, Weapon &_WeaponA):WeaponA(_WeaponA)
{
    this->setName(_name);
	this->setWeapon(_WeaponA);
}

void HumanA::attack()
{
    std::cout << this->getName() << " attacks with their " << this->WeaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
	
}