#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm
{
    private:
        /* data */
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &rrf);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
        ~RobotomyRequestForm();
        void action() const;
};


#endif