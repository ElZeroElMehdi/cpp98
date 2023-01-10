#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
template<class T>
class MutantStack
{
    public:
        MutantStack();
        MutantStack(const MutantStack &cpy);
        MutantStack &operator=(const MutantStack &rhs);
        ~MutantStack();
};

#endif