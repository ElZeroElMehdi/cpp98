#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat *br = new Bureaucrat(40, "mej");
        AForm *rb = new RobotomyRequestForm("mehdi");
        AForm *sh = new ShrubberyCreationForm("trrr");
        br->executeForm(*rb);
        rb->execute(*br);
        sh->execute(*br);
        delete rb;
        delete br;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // system("leaks Form");
}