
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        std::string name;
        HumanB();
        HumanB(std::string _name);
        Weapon WeaponB;
		void setWeapon(Weapon wp);
        void attack();
};

#endif