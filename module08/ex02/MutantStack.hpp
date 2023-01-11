#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algotithm>
#include <vector>

template<T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}

        MutantStack(const MutantStack &cpy){
            *this = cpy;
        }

        MutantStack &operator=(const MutantStack &rhs)
        {
            *this = rhs;
            return (*this);
        }

        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator it;
        typedef typename std::stack<T>::container_type::const_iterator const_it;

        it begin()
        {
            return (std::stack<T>::c.begin());
        }

        it end()
        {
            return (std::stack<T>::c.end());
        }

        const_it cbegin()
        {
            return (std::stack<T>::c.cbegin());
        }

        const_it cend()
        {
            return (std::stack<T>::c.cend());
        }

};

#endif