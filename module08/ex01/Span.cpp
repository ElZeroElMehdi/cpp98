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
	if (node == (int)this->v.size())
		throw std::exception();
	
	this->v.push_back(node);
	this->N = this->v.size();
}

// void Span::show()
// {
// 	for (unsigned int i = 0; i < this->N; i++)
// 		std::cout << this->v[i] << std::endl;
// 	return ;
// }

int Span::shortestSpan()
{
	// std::vector<int> lst;
	// for (size_t i = 0; i < this->v.size();i++)
	// {
	// 	if (i + 1 >= this->v.size())
	// 		lst.push_back(this->v[i]);
	// 	else
	// 		lst.push_back(this->v[i] + this->v[i + 1]);
	// }
	std::sort(v.begin(), v.end());
	return(v[v.size() - 1] - v[0]);
}
