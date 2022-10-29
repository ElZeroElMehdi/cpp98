#include "Zombie.hpp"

std::string toStr(int i)
{
	std::stringstream ss;
	ss << i;
	std::string str = ss.str();
	return (str);
}

Zombie* ZombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name + toStr(i));
		zombie[i].announce();
	}
    return zombie;
}