#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Aform.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &scf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
        ~ShrubberyCreationForm();
};

#endif