#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug( void )
{
    std::cout << "[DEBUG]\nDebug messages contain contextual information. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]\nInfo messages are used to report information about the program's execution. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]\nWarning messages are used to report non-critical errors. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]\nError messages are used to report critical errors. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Harl::complain( std::string level )
{
    typedef void(Harl::*funcs)();
    funcs addsFuns[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
    int x;
    for (x = 0; x < 4; x++)
    {
        if (level == levels[x])
        {
           break;
        }
    }
    switch (x)
    {
        case 0:
        {
            (this->*addsFuns[0])();
			x++;
        }
        case 1:
        {
            (this->*addsFuns[1])();
            x++;
        }
        case 2:
        {
            (this->*addsFuns[2])();
           x++;
        }
        case 3:
            (this->*addsFuns[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}