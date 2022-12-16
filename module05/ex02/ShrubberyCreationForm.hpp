#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "./AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm &scf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
        ~ShrubberyCreationForm();
        const std::string& getTarget() const;
        void setTarget(std::string tr);
};

#endif