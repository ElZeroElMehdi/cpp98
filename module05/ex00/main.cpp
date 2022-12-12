#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat s(150, "mehdi");
        // std::cout << s;
        // s.increment();
        // s.decrement();
        // s.getName() = "youne";
        std::cout << s.getName() << std::endl;
        std::cout<<s;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // system("leaks Bureaucrat");
}