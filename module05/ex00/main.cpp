#include "exception.hpp"

int main ()
{
    try
    {
        if (1>2)
            throw exception("1 less then 2");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}