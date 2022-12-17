#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string _tr);
        // RobotomyRequestForm(std::string tr, const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe);
        RobotomyRequestForm(const RobotomyRequestForm &rrf);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
        ~RobotomyRequestForm();
        void action() const;
};


#endif