#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F> // template for function has two param
void iter(T &arr, size_t lenght, F f)
{
    if (f == NULL)
        throw std::exception();
    for (size_t i = 0; i < lenght; i++)
        f(arr[i]);
}

#endif