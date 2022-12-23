#include <iostream>
#include <algorithm>
#include <string>

#include "cast.hpp"

bool func_check(std::string str)
{
    size_t i = 0;
    while (i < str.length())
    {
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[i] == 'f')
        {
            if (str[i] == '.' && str[i + 1] && (str[i + 1] < '0' || str[i + 1] > '9'))
                return false;
            if (str[i] == 'f' && str[i + 1])
                return false;
            i++;
        }
        else
            return false;
    }

    if (std::count(str.begin(), str.end(), '.') > 1 || std::count(str.begin(), str.end(), 'f') > 1 || (std::count(str.begin(), str.end(), '.') == 0 && std::count(str.begin(), str.end(), 'f') > 0))
        return false;
    else
        return true;
}

int main(int ac, char **argv)
{
    try
    {
        std::string str(argv[1]);
        if (ac == 2 && func_check(str) == true)
        {
            Caster cs(str);
            // std::cout << "char type : " << cs.to_char()<< std::endl;
            // std::cout << "int type : " << cs.to_int()<< std::endl;
            std::cout << cs;
            float xx = 45.1;
            std::cout << xx << std::endl;
        }
        else
            std::cout << "something wrrong!" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}