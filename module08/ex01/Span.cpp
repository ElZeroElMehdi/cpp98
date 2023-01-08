#include "Span.hpp"

Span::Span()
{
    this->N = 0;
    this->v = std::vector<int>(0);
}

Span::Span(unsigned int n)
{
    this->N = n;
    this->v = std::vector<int>(n);
}

Span::Span(const Span &s)
{
    this->N = s.N;
    this->v = s.v;
}

Span &Span::operator=(const Span &rhs)
{
    this->v = rhs.v;
    this->N = rhs.N;
    return (*this);
}

Span::~Span()
{
    std::cout << "dedtructor" << std::endl;
}

void Span::addNumber(int node)
{
    if (node == this->N)
        throw std::exception();
    this->N++;
    this->v.resize(N);
    this->v.push_back(node);
}