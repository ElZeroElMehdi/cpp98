#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class notFound : public std::exception
{
    public:
		virtual const char* what() const throw();
};

template <typename T>
void easyfind(T &t, int x)
{
    for (size_t i = 0;i < t.size(); i++)
    {
        if (x == t[i])
        {
            std::cout << "the "<< x << " exest in container at index " << i <<std::endl;
            return ; 
        }
    }
    throw notFound();
    return ;
}

#endif