#include "iter.hpp"

void fnc(int i)
{
    std::cout << i << std::endl;
}

void fnc2(std::string i)
{
    std::cout << i << std::endl;
}

template <typename T>
void fnc3(T t)
{
    std::cout << t << std::endl;
}

int main()
{
    try
    {
        {
            int i[] = {1, 22, 3};
            ::iter(i, sizeof(i) / sizeof(int), fnc);
        }

        {
            std::string str[] = {"str1", "str2", "str3"};

            ::iter(str, sizeof(str) / sizeof(std::string), fnc2);
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}