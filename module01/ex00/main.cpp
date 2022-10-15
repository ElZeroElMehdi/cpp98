#include "Zombie.hpp"

int  main()
{
    Zombie  *zombie = newZombie("Zombie");
    randomChump("Random Zombie");
    delete zombie;
    return 0;
}