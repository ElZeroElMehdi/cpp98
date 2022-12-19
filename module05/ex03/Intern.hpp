#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern &itrn);
        Intern& operator=(const Intern &rhs);
        ~Intern();
        AForm* makeForm(std::string FormName, std::string target) /*const*/;
};

#endif
