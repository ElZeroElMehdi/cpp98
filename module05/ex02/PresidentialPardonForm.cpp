#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->target = "";
    std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _tr)
{
    std::cout << "PresidentialPardonForm Constructor with target param" << std::endl;
    this->target = _tr;
}

// PresidentialPardonForm::PresidentialPardonForm(std::string tr, const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe): AForm(sh_name, sh_is_sign, sh_grade_sig, sh_grade_exe)
// {
//     this->target = tr;
//     std::cout << "PresidentialPardonForm parametrized Constructor" << std::endl;
// }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf)
{
    std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
    this->target = ppf.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    std::cout << "PresidentialPardonForm assigment operator" << std::endl;
    this->target = rhs.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor" << std::endl;
}
void PresidentialPardonForm::action() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}