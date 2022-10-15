#include "Zombie.hpp"

int  main()
{
    Zombie  *zombie = newZombie("mehdi");
    randomChump("Random Zombie");
    delete zombie;
    return 0;
}