#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoint;
        int EnergyPoint;
        int AttackDamage;
    public:
        //Orthodox Canonical Form
        ClapTrap();
        ClapTrap(const ClapTrap &New);
        ClapTrap & operator=(const ClapTrap &rhs);
        ~ClapTrap();
        /*fin*/
        ClapTrap(std::string _name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};


#endif