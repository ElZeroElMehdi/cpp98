#include <iostream>
#include <climits>

int checker(char *args)
{
    std::string str(args);

    for( int i = 0 ; i < str.length(); i++)
    {
        if ((str[i] < '0'  || str[i] > '9') && str[i] != 'f' && str[i] != '.')
            return -1;
        if ((str[i] == 'f' && str[i + 1]) || (str[i] == '.' && str[i + 1] && str[i + 1] == 'f'))
            return -1;
    }
    return 1;
}

int main(int ac , char **args)
{
    try
    {
        if (ac == 2 && checker(args[1]))
        {
            double x = std::strtod(args[1], NULL);
            if (static_cast<char>(x))
                std::cout<< "char :" << static_cast<char>(x)<< std::endl;
            else
                std::cout<< "char: Non displayable"<< std::endl;
            if (static_cast<int>(x) <= INT_MAX && static_cast<int>(x) >= INT_MIN)
                std::cout<< "int :" << static_cast<int>(x) << std::endl;
            if (static_cast<int>(x) == x)
                std::cout<< "float :" << x <<".0f"<< std::endl;
            else
                std::cout<< "float :" << x <<"f"<< std::endl;
            if (static_cast<int>(x) == x)
                std::cout << "double :"<<x<<".0"<< std::endl;
            else
                std::cout << "double :"<<x<< std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}