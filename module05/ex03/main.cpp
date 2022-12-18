#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) 
{
	Bureaucrat *br = new Bureaucrat(150, "mej");
    AForm *rb = new RobotomyRequestForm("mehdi");
    br->executeForm(*rb);
    delete rb;
    delete br;
    system("leaks Form");
}