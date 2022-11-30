#include "ScavTrap.hpp"

int main()
{
    ScavTrap samaristan("samaristan");
    samaristan.attack("police");
    samaristan.takeDamage(10);
    samaristan.takeDamage(10);
    samaristan.takeDamage(10);
    samaristan.takeDamage(10);
    samaristan.guardGate();
}