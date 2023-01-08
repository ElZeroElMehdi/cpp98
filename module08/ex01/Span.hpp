#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> v;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &s);
        Span & operator=(const Span &rhs);
        ~Span();
        void addNumber(int node);
        
};

#endif