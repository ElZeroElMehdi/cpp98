#include "Form.hpp"

Form::Form() : Name(""), grade_to_sign(0), grade_to_execute(0)
{
    std::cout << "Form Constructor" << std::endl;
    this->is_signed = false;
}

Form::Form(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe) : Name(_name), grade_to_sign(_grade_sig), grade_to_execute(_grade_exe)
{
    std::cout << "parametrize Constructor" << std::endl;
    this->is_signed = false;
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->is_signed = rhs.is_signed;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

const std::string Form::getName() const
{
    return this->Name;
}

bool Form::get_isSigned() const{
    return this->is_signed;
}

const int Form::getGradeToSign() const{
    return this->grade_to_sign;
}

const int Form::getGradeToExe() const 
{
    return this->grade_to_execute;
}

std::ostream& operator<<(std::ostream &COUT, Form const & obj)
{
    COUT <<"FORM NAME: " << obj.getName() << " FORM IS SINGNED :" << obj.get_isSigned() <<" form grade to sign : " << obj.getGradeToSign() << "form grade to execute " << obj.getGradeToExe() << std::endl;
    return COUT;
}

void Form::beSigned(const Bureaucrat &br) //  1 is higher then 2 ??
{
    int x = br.getGrade();
    if (x >= 1 && x <= 150)
        this->is_signed = true;
    else
        if (x < 1)
            throw Form::GradeTooHighException();
        else
            throw Form::GradeTooLowException();
}