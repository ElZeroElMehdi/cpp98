#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureauccrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(int _grade, std::string _name)
{
    std::cout << "Bureaucrat prametrize Constructor" << std::endl;
    if (_grade >= 1 && _grade <= 150)
        this->grade = _grade;
    else
        throw Bureaucrat::GradeTooHighException();
    this->Name = _name;
}

std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &New)
{
    this->grade = New.getGrade();
    this->Name = New.getName();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this->grade = rhs.getGrade();
    this->Name = rhs.getName();
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "this is Bureaucrat Destructor" << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade Too High Exception";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade Too Low Exception";
}