#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->target = "";
    std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _tr)
{
    this->target = _tr;
}
// RobotomyRequestForm::RobotomyRequestForm(std::string tr, const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe) : AForm(sh_name, sh_is_sign, sh_grade_sig, sh_grade_exe)
// {
//     this->target = tr;
//     std::cout << "parametrized Constructor" << std::endl;
// }

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
    srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->target << "has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << " robotomy failed." << std::endl;
}