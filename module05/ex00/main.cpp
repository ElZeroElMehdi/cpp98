#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat *s = new Bureaucrat(160, "mehdi");
        s->getName();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}