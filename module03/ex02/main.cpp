#include "FragTrap.hpp"

int main()
{
    {
        FragTrap samaristan("samaristan");
        FragTrap *frg = new FragTrap("Batman");

        samaristan.attack("spiderMAn");
        samaristan.highFivesGuys();
        samaristan.beRepaired(100);
        FragTrap fr(samaristan);
        fr.attack("SuperHero");
        frg->attack("Jocke");

        frg->highFivesGuys();
    }
}