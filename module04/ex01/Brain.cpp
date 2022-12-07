#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain"<< std::endl;
}

Brain::Brain(const Brain &New)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = New.ideas[i];
}

Brain Brain::operator=(const Brain &rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destuctor Brain"<< std::endl;
}