#include "serial.hpp"

int main()
{
    try
    {
        Data *t = new Data;

        t->x = 10;
        uintptr_t x = serialize(t);
        t = deserialize(x);

        std::cout << deserialize(x)->x << std::endl;
        delete t;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    system("leaks serialize");
}