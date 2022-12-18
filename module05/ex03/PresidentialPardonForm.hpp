#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _tr);
        // PresidentialPardonForm(std::string tr, const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe);
        PresidentialPardonForm(const PresidentialPardonForm &ppf);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
        ~PresidentialPardonForm();
        void action() const;
};


#endif