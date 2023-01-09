#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int n)
{
	this->N = n;
}

Span::Span(const Span &cpy)
{
	this->N = cpy.v.size();
	this->v = cpy.v;
}

Span &Span::operator=(const Span &rhs)
{
	this->v = rhs.v;
	this->N = rhs.N;
	return (*this);
}

Span::~Span()
{
	std::cout << "destructor" << std::endl;
}

void Span::addNumber(int node)
{
	// if (node == (int)this->v.size())
	// 	throw std::exception();
	
	this->v.push_back(node);
	this->N = this->v.size();
}

int Span::shortestSpan()
{
	int shortest_span = std::numeric_limits<int>::max();
	for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t j = i + 1; j < v.size(); j++)
        {
			std::cout << "i = " << v[i] << " j = " << v[j] << std::endl;
            int span = std::abs(v[i] - v[j]);
			std::cout << span << std::endl;
            shortest_span = std::min(shortest_span, span);
        }
    }

	// shortest_span =  std::abs(v[v.size() - 2] - v[v.size() - 1]);
	return(shortest_span);
}
