#include <iostream>

void to_char(std::string str)
{
    try
    {
        int i = std::stoi(str);
        char c = static_cast<char>(i);
        if (std::isprint(c))
            std::cout << "char :"<< c << std::endl;
        else
            std::cout << "non displayabl"<< std::endl;
    }
    catch(...)
    {
        std::cout << "char :Impossible" << std::endl;
    }
}

void to_int(std::string str)
{
    try
    {
        int i = std::stoi(str);
        std::cout << "int :" << i << std::endl;
    }
    catch(...)
    {std::cout << "int :Impossible" << std::endl;}
}

void to_float(std::string str)
{
    try
    {
        float f = std::stof(str);
        if (str == "nan" || str == "nanf")
            std:
        else if (f == std::stoi(str))
            std::cout << "float :" << f << ".0f"<<std::endl;
        else
            std::cout << "float :" << f << "f"<<std::endl;
    }
    catch(...)
    {std::cout << "float :Impossible" << std::endl;}
}

int main(int ac , char **args)
{
    try
    {
        if (ac == 2)
        {
            std::string str(args[1]);
            to_char(str);
            to_int(str);
            to_float(str);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}