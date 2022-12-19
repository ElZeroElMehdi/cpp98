
#include "Intern.hpp"
int main(void) 
{
    try{
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
        system("leaks Form");
}