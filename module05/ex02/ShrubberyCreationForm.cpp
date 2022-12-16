#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tr)
{
    this->target = tr;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf)
{
    this->target = scf.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    this->target = rhs.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Desstructor" << std::endl;
}

const std::string& ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void ShrubberyCreationForm::setTarget(std::string tr)
{
    this->target = tr;
}