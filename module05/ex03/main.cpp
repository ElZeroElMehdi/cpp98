#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) 
{
	try
	{
		Form	form("Form",0,10, 10);
		Bureaucrat	objt1(9, "objt1");
		Bureaucrat	objt2(50, "objt2");
		objt1.signForm(objt1, form);
		objt2.signForm(objt2, form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    system("leaks Form");
}