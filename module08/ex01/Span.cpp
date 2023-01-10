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
}

void Span::addNumber(int node)
{
	if (node == (int)this->v.size())
		throw Span::same();

	this->v.push_back(node);
	this->N = this->v.size();
}

int Span::shortestSpan()
{
	std::vector<int> lst;
	lst = this->v;
	if (lst.size() <= 1)
		throw Span::oneOrNot();
	std::sort(lst.begin(), lst.end());
	int span = INT_MAX;
	for (size_t i = 0; i < lst.size(); i++)
	{
		if (std::abs(lst[i] - lst[i + 1]) < span)
			span = std::abs(lst[i] - lst[i + 1]);
	}
	return (span);
}

int Span::longestSpan()
{
	std::vector<int> lst;
	lst = this->v;
	if (lst.size() <= 1)
		throw Span::oneOrNot();
	std::sort(lst.begin(), lst.end());
	return (std::abs(lst[0] - lst[lst.size() - 1]));
}

void Span::manyAdds(std::__1::vector<int>::iterator _beging, std::__1::vector<int>::iterator _end)
{
	if ((int)(this->N - this->v.size()) < (_end - _beging))
		throw Span::noSpaceleft();
	std::cout << "N >>>>"<< N << std::endl;
	std::cout << "b >>>>"<< (_end - _beging) << std::endl;
	this->v.insert(this->v.begin(),_beging, _end);
	return ;
}


const char *Span::noSpaceleft::what() const throw()
{
	return "its look like you want to add more items to full container";
}

const char *Span::oneOrNot::what() const throw()
{
	return "its look like youre container has one or zero item";
}

const char *Span::same::what() const throw()
{
	return "if size is x number dont add x to this container";
}
