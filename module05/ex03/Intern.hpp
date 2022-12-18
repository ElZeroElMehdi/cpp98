#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern &itrn);
        Intern operator=(const Intern &rhs);
        ~Intern();
        Form makeForm(std::string FormName, std::string target) const;
};



#endif
