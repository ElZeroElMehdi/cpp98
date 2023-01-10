#include "Span.hpp"

#include <iostream>
#include <vector>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << "***************" << std::endl;

        Span sp2 = Span(100);
        std::vector<int> lst(10000);
        for (size_t i = 0; i < 10000; i++)
            lst.push_back(i);
        sp2.manyAdds(lst.begin(), lst.end());
        std::cout <<lst.end() - lst.begin()<< std::endl;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
