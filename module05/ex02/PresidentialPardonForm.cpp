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