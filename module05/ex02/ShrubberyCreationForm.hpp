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
        ShrubberyCreationForm(std::string &tr);
        ShrubberyCreationForm(const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe);
        ShrubberyCreationForm(const ShrubberyCreationForm &scf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
        ~ShrubberyCreationForm();
        void action() const;
};

#endif