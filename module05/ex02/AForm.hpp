#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool  is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        AForm();
        AForm(const AForm &New);
        AForm(const std::string _name, bool _is_sign, const int _grade_sig, const int _grade_exe);
        AForm& operator=(const AForm &rhs);
        virtual ~AForm() = 0;

        const std::string getName() const;
        bool get_isSigned() const;
        int getGradeToSign() const;
        int getGradeToExe() const ;
        void beSigned(const Bureaucrat &br);

        void execute(Bureaucrat const & executor) const;
        virtual void action() const = 0;
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

std::ostream& operator<<(std::ostream &COUT, AForm const & obj);

#endif