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
        PresidentialPardonForm(const PresidentialPardonForm &ppf);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
        ~PresidentialPardonForm();
        void action() const;
};


#endif