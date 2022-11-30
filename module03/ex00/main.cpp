#include "ClapTrap.hpp"

int main()
{
    std::string name = "mehdi";

    ClapTrap s(name);
    s.attack("cc");
    s.takeDamage(12);
}