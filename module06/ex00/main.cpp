#include <iostream>

int main(int ac, char **argv)
{
    if (ac == 2)
    {
        std::string str = argv[1];
        char c = static_cast<char>(str.at(sizeof(char)));
        std::cout << str << "  "<< c << std::endl;
    }
}