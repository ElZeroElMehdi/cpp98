#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string Name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(const Form &New);
        Form(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe);
        Form operator=(const Form &rhs);
        ~Form();
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

#endif