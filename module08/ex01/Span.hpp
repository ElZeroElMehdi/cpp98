#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> v;
    public:
        Span();
        Span(unsigned int n);
        ~Span();

};




#endif