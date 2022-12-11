#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("")
{
    std::cout << "Bureauccrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) : Name(_name)
{
    std::cout << "Bureaucrat prametrize Constructor" << std::endl;
    // this->Name = _name;
    if (_grade >= 1 && _grade <= 150)
        this->grade = _grade;
    else
    {
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            throw Bureaucrat::GradeTooLowException();
    }
}

std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &New) : Name(New.getName())
{
    this->grade = New.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->grade = rhs.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "this is Bureaucrat Destructor" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

std::ostream &operator<<(std::ostream &COUT, Bureaucrat const &obj)
{

    COUT << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.' << std::endl;
    return COUT;
}

void Bureaucrat::increment()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}