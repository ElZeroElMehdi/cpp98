#include "AForm.hpp"

AForm::AForm() : Name(""), grade_to_sign(0), grade_to_execute(0)
{
    std::cout << "AForm Constructor" << std::endl;
    this->is_signed = false;
}

AForm::AForm(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe) : Name(_name), grade_to_sign(_grade_sig), grade_to_execute(_grade_exe)
{
    std::cout << "parameterized Constructor" << std::endl;
    if (_grade_sig >= 1 && _grade_sig <= 150 && _grade_exe >= 1 && _grade_exe <= 150)
    {
        this->is_signed = _is_sign;
    }
    else
    {
        if (_grade_sig < 1 || _grade_exe < 1)
            throw AForm::GradeTooHighException();
        else if (_grade_sig > 150 || _grade_exe > 150)
            throw AForm::GradeTooLowException();
    }
}

AForm &AForm::operator=(const AForm &rhs)
{
    if (this != &rhs)
    {
        this->is_signed = rhs.is_signed;
    }
    return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

const std::string AForm::getName() const
{
    return this->Name;
}

bool AForm::get_isSigned() const
{
    return this->is_signed;
}

int AForm::getGradeToSign() const
{
    return this->grade_to_sign;
}

int AForm::getGradeToExe() const
{
    return this->grade_to_execute;
}

std::ostream &operator<<(std::ostream &COUT, AForm const &obj)
{
    COUT << "AFORM NAME: " << obj.getName() << " AFORM IS SINGNED :" << obj.get_isSigned() << " Aform grade to sign : " << obj.getGradeToSign() << "Aform grade to execute " << obj.getGradeToExe() << std::endl;
    return COUT;
}

void AForm::beSigned(const Bureaucrat &br) //  1 is higher then 2 ??
{
    int x = br.getGrade();
    if (x >= 1 && x <= 150)
        this->is_signed = true;
    else if (x < 1)
        throw AForm::GradeTooHighException();
    else
        throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const 
{
    if (!this->get_isSigned())
        std::cout << "this Form not Signed" << std::endl;
    if (executor.getGrade() > this->getGradeToExe())
        throw(GradeTooLowException());
    else
        this->action();   
}

AForm::~AForm()
{
    std::cout <<  "Destructor" << std::endl;
}