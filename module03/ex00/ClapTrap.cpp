#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor" << std::endl;
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &New)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = New;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "assigment operator" << std::endl;
    this->Name = rhs.Name;
    this->HitPoint = rhs.HitPoint;
    this->EnergyPoint = rhs.EnergyPoint;
    this->AttackDamage = rhs.AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Parameterized Constructor" << std::endl;
    this->Name = _name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->EnergyPoint || !this->HitPoint)
        std::cout << this->Name <<" can\'t Attack , cause no HitPoint and No energyPint" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target <<", causing" << this->AttackDamage << "points of damage!" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout <<this->Name <<" cost " << amount << " points from HitPoint" << std::endl;
    this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->EnergyPoint || !this->HitPoint)
        std::cout << this->Name <<" can\'t Attack , cause no HitPoint and No energyPoint." << std::endl;
    else
    {
        this->EnergyPoint--;
        this->HitPoint+=amount;
    }
}