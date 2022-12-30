#include <iostream>

void to_char(std::string str)
{
    try
    {
        int i = std::stoi(str);
        char c = static_cast<char>(i);
        if (std::isprint(c))
            std::cout << "char :" << c << std::endl;
        else
            std::cout << "char :  Non displayable" << std::endl;
    }
    catch (...)
    {
        std::cout << "char :impossible" << std::endl;
    }
}

void to_int(std::string str)
{
    try
    {
        int i = std::stoi(str);
        std::cout << "int :" << i << std::endl;
    }
    catch (...)
    {
        std::cout << "int :impossible" << std::endl;
    }
}

void to_float(std::string str)
{
    try
    {
        float f = std::stof(str);
        if (str == "nan" || str == "nanf" || str == "NAN" || str == "NANF")
            std::cout << "flot :" << "nanf" << std::endl;
        else if (f == std::stoi(str))
            std::cout << "float :" << f << ".0f" << std::endl;
        else
            std::cout << "float :" << f << "f" << std::endl;
    }
    catch (...)
    {
        std::cout << "float :impossible" << std::endl;
    }
}

void to_double(std::string str)
{
    try
    {
        double f = std::stod(str);
        if (str == "nan" || str == "nanf" || str == "NAN" || str == "NANF")
            std::cout << "double :" << "nan" << std::endl;
        else if (f == std::stoi(str))
            std::cout << "double :" << f << ".0" << std::endl;
        else
            std::cout << "double :" << f << std::endl;
    }
    catch (...)
    {
        std::cout << "double :impossible" << std::endl;
    }
}

int main(int ac, char **args)
{
    try
    {
        if (ac == 2)
        {
            std::string str(args[1]);
            to_char(str);
            to_int(str);
            to_float(str);
            to_double(str);
        }
        else
            std::cout << "wrrong args" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}











//  *>> static_cast as long as the two types are compatible and the conversion is safe. compile time
//      For example, if you try to use static_cast to convert a pointer to an unrelated type,
//      the compiler will generate an error indicating that the conversion is not allowed.

//  *>> dynamic_cast is used to perform runtime type checking and type conversion for polymorphic types. runtime