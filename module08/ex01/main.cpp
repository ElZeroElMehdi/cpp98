#include "Span.hpp"

#include <iostream>
#include <vector>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.show();
    std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    
    // std::vector<int> v = std::vector<int>(5);
    // v[0] = 2;
    // v[1] = 45;
    // v[2] = 5;
    // v[3] = 52;
    // v[4] = 7;
    // v.resize(6);
    // v[5] = 7;

    // size_t count = v.size();
    // for (size_t i = 0; i < count; i++)
    // {
    //     std::cout << v[i] << std::endl;
    // }
    return 0;
}