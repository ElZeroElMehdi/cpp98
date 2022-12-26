
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "base.hpp"
#include <cstdlib>

// dynamic_cast: Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy

Base *generate(void)
{
    Base *tab[] = {new B, new A, new C};
    int num_elements = sizeof(tab) / sizeof(tab[0]);
    srand(time(0));
    int randInstanceIndex = rand() % num_elements;
    for (int i = 0; i < num_elements; i++)
    {
        if (i != randInstanceIndex)
            delete tab[i];
    }
    return tab[randInstanceIndex];
}

void identify(Base *p)
{
    if (A *a = dynamic_cast<A *>(p))
        std::cout << "the actual type of the object pointed to by p : A" << std::endl;
    else if (B *b = dynamic_cast<B *>(p))
        std::cout << "the actual type of the object pointed to by p : B" << std::endl;
    else if (C *c = dynamic_cast<C *>(p))
        std::cout << "the actual type of the object pointed to by p : C" << std::endl;
    else
        std::cout << "the actual type of the object pointed to by p : NAN " << std::endl;
}

void identify(Base &p)
{

    try
    {
        A a = dynamic_cast<A &>(p);
        if (&a != nullptr)
            std::cout << "a can be safely cast to A" << std::endl;
    }
    catch (...)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            if (&b != nullptr)
                std::cout << "bcan be safely cast to B" << std::endl;
        }
        catch (...)
        {
            try
            {
                C c = dynamic_cast<C &>(p);

                if (&c != nullptr)
                    std::cout << "c can be safely cast to C" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cerr << "P cannot be cast to A or B or C because :" << e.what() << '\n';
            }
        }
    }
}

int main()
{
    try
    {
        Base *x = generate();
        identify(x);
        identify(*x);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
