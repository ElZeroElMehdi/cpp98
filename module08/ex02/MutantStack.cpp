#include "MutantStack.hpp"

MutantStack::MutantStack()
{

}

MutantStack::MutantStack(const MutantStack &cpy)
{
    *this = cpy; // not sure yet
}

MutantStack &MutantStack::operator=(const MutantStack &rhs)
{
    *this = rhs;
    return (*this); //not yet
}