#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class From;
class Bureaucrat
{
	private:
		const std::string Name;
		int grade;
	public:
		int getGrade() const ; //ok
		std::string getName() const; //ok
		Bureaucrat(); //ok
		Bureaucrat(int _grade, std::string _name); //..
		Bureaucrat(const Bureaucrat &New); //ok
		Bureaucrat& operator=(const Bureaucrat &rhs); //ok
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
		//  void Bureaucrat::signForm()
};

std::ostream& operator<<(std::ostream &COUT, Bureaucrat const & obj);

#endif