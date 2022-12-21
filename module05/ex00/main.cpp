#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat s(150, "mehdi");
        // std::cout << s;
        s.increment();
        std::cout << s.getGrade() << std::endl;
        s.decrement();
        // s.decrement();
        std::cout << s.getGrade() << std::endl;
        std::cout<<s;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    system("leaks Bureaucrat");
}