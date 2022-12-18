#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor" << std::endl;
}

Intern::Intern(const Intern &itrn)
{
    *this = itrn;
}

Intern& Intern::operator=(const Intern &rhs)
{
    *this = rhs;
    return(*this);
}

Intern::~Intern()
{
    std::cout << "Destructor Intern class" < std::endl;
}

Form* Intern::makeForm(std::string FormName, std::string target) //const
{
    
}
