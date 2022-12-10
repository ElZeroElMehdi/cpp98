#include "Bureaucrat.hpp"


//task encrement;
int main ()
{
    try
    {
        Bureaucrat *s = new Bureaucrat(1, "mehdi");
        // s->getName();

        std::cout << s;
        delete s;

        // system("leaks Bureaucrat");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}