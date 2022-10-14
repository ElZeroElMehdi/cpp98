
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(std::string name);
        void announce();
        void setName(std::string name);
        std::string getName();
        ~Zombie();
};

void randomChump(std::string name);

#endif