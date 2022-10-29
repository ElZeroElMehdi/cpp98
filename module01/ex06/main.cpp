#include "Harl.hpp"

std::string toLowerString(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
    {
        harl.complain(toLowerString(av[1]));
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}
