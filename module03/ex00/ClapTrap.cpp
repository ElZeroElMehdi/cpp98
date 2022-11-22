#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string& _name)
{
    this->Name = _name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap()
{
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}