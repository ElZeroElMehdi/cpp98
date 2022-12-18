#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{
	private:
		const std::string Name;
		int grade;
	public:
		int getGrade() const ; 
		const std::string getName() const; 
		Bureaucrat(); 
		Bureaucrat(int _grade, std::string _name);
		Bureaucrat(const Bureaucrat &New); 
		Bureaucrat& operator=(const Bureaucrat &rhs); 
		~Bureaucrat();

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
		
		void increment();
		void decrement();
		void signForm(const Bureaucrat &br, AForm &obj);

		void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream &COUT, Bureaucrat const & obj);
#endif