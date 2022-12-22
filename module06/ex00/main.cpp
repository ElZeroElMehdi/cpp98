#include <iostream>

int checker(std::string str)
{
    for (size_t i = 0 ; i < str.length() ; i++)
    {
        if (str[i] < 0 || str[i] > 9)
            return -1;
    }
    if (std::count(str.begin(), str.end(), '.') > 1 || std::count(str.begin(), str.end(), 'f') > 1)
        return -1;
    else
        return 1;
}

int main(int ac, char **argv)
{
    std::string str(argv[1]);
    if (ac == 2 && checker(str) != -1)
    {
        int str = std::stoi(argv[1]);
        char c = static_cast<char>(str);
        std::cout << str << "  "<< c << std::endl;
    }
    else
        std::cout << "something wrrong!" << std::endl;
}