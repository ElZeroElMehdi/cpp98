#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->target = "";
    std::cout << "Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _tr)
{
    this->target = _tr;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe) : AForm(sh_name, sh_is_sign, sh_grade_sig, sh_grade_exe)
{
    std::cout << "parametrized Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf)
{
    this->target = rrf.target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    this->target = rhs.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm"<< std::endl;
}

void RobotomyRequestForm::action() const
{
    srand(time(0)); /* seed used to initialize random number generators */
	if (rand() % 2 == 0)
		std::cout << this << " Has been robotomized successfully.." << std::endl;
	else
		std::cout << target << " The robot1omy failed.." << std::endl;
}