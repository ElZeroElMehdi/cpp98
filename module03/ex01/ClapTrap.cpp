#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap: Default constructor" << std::endl;
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &New)
{
    std::cout << "ClapTrap: Copy Constructor" << std::endl;
    *this = New;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap: assigment operator" << std::endl;
    this->Name = rhs.Name;
    this->HitPoint = rhs.HitPoint;
    this->EnergyPoint = rhs.EnergyPoint;
    this->AttackDamage = rhs.AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "ClapTrap: Parameterized Constructor" << std::endl;
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
        std::cout << "ClapTrap:  " << this->Name << " attacks " << target <<", causing " << this->AttackDamage << "points of damage!" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout <<"ClapTrap: "<<this->Name <<" cost " << amount << " points from HitPoint" << std::endl;
    this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->EnergyPoint || !this->HitPoint)
        std::cout<<"ClapTrap: "<< this->Name <<" can\'t Attack , cause no HitPoint and No energyPoint." << std::endl;
    else
    {
        this->EnergyPoint--;
        this->HitPoint+=amount;
    }
}
