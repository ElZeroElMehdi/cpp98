#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool  is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(const Form &New);
        Form(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe);
        Form& operator=(const Form &rhs);
        ~Form();

        const std::string getName() const;
        bool get_isSigned() const;
        int getGradeToSign() const;
        int getGradeToExe() const ;
        void beSigned(const Bureaucrat &br);

        class GradeTooHighException : public  std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &COUT, Form const & obj);

#endif