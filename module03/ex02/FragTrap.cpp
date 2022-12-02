#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor"<< std::endl;
}

FragTrap::FragTrap(std::string _mame)
{
     std::cout << "FragTrap : passed name in parametre constructor" << std::endl;
    this->Name = _name;
}

FragTrap::FragTrap(const FragTrap &New)
{
    std::cout << "FfragTrap: Copy Constructor" << std::endl;
    *this = New;
}

FragTrap & operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap: assigment operator" << std::endl;
    this->Name = rhs.Name;
    this->HitPoint = rhs.HitPoint;
    this->EnergyPoint = rhs.EnergyPoint;
    this->AttackDamage = rhs.AttackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: destructor" << std::endl;
}