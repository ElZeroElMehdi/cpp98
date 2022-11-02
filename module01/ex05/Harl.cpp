#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug( void )
{
    std::cout << "\"DEBUG\"messages contain contextual information. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::info( void )
{
    std::cout << "\"INFO\" messages are used to report information about the program's execution. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "\"WARNING\" messages are used to report non-critical errors. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::error( void )
{
    std::cout << "\"ERROR\" messages are used to report critical errors. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::complain( std::string level )
{
    typedef void(Harl::*funcs)();
    funcs addsFuncs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
    for (int x = 0; x < 4; x++)
    {
        if (level == levels[x])
        {
            (this->*addsFuncs[x])();
			break;
        }
    }
	
}