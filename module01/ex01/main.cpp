#include "Zombie.hpp"

int  main()
{
    Zombie *Zombie = ZombieHorde(5, "Vasya");
    delete [] Zombie;
    return 0;
}