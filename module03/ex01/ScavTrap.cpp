#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scavtrap Default constructor" << std::endl;
    this->Name = "";
    this->HitPoint= 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << "scavtrap param constructor" << std::endl;
    this->Name = _name;
    this->HitPoint= 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &New):ClapTrap() //why this error in linux
{
    std::cout << "ScavTrap: Copy Constructor" << std::endl;
    *this = New;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap: assigment operator" << std::endl;
    // *this = rhs;
    this->Name = rhs.Name;
    this->HitPoint = rhs.HitPoint;
    this->EnergyPoint = rhs.EnergyPoint;
    this->AttackDamage = rhs.AttackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!this->EnergyPoint || !this->HitPoint)
        std::cout << "ScavTrap: " << this->Name <<" can\'t Attack , cause no HitPoint and No energyPint" << std::endl;
    else
    {
        std::cout << "ScavTrap: " << this->Name << " attacks " << target <<", causing" << this->AttackDamage << "points of damage!" << std::endl;
        this->EnergyPoint--;
    }
}