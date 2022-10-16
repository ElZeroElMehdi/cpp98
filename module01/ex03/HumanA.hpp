#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        std::string name;
        HumanA();
        HumanA(std::string _name, Weapon WeaponA);
        Weapon WeaponA;
        void attack();
};

#endif