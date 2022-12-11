#include "Form.hpp"

Form::Form():Name(""), grade_to_sign(0), grade_to_execute(0)
{
    std::cout << "Form Constructor" << std::endl;
    this->is_signed = false;
}

Form(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe):Name(_name), grade_to_sign(_grade_sig), grade_to_execute(_grade_exe)
{
    std::cout << "parametrize Constructor" << std::endl;
    this->is_signed = false;
}

Form operator=(const Form &rhs{

}


const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}