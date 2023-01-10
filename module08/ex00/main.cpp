#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v(3);
        v[0] = 5;
        v[1] = 56;
        v[2] = 200;
        ::easyfind(v, 56);
        ::easyfind(v, 5);
        ::easyfind(v, 200);
        ::easyfind(v, 211);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}