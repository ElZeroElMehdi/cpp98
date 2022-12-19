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
    if (this != &rhs)
        *this = rhs;
    return(*this);
}

Intern::~Intern()
{
    std::cout << "Destructor Intern class" << std::endl;
}

AForm* Intern::makeForm(std::string FormName, std::string target) //const
{
    AForm* objects[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    std::string strs[3] ={"presidential pardon", "robotomy request", "shrubbery creation"} ;
    for (int i = 0; i < 3; i++)
    {
        if (strs[i] == FormName)
        {
            for(int j = 0;j < 3; j++)
            {
                if(strs[j] != FormName)
                    delete objects[j];
            }
            std::cout << "Intern creates "<< objects[i]->getName() << std::endl;
            return (objects[i]);
        }
    }
    throw(std::exception());
}
