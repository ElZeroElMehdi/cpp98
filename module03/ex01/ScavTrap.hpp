#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap &New);
        ScavTrap & operator=(const ScavTrap &rhs);
        ~ScavTrap();
        void guardGate(void);
        void attack(const std::string& target);
};