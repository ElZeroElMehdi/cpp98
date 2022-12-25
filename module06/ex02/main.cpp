
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "base.hpp"
#include <cstdlib>

//dynamic_cast: Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy


Base * generate(void)
{
    Base*	tab[] = {new B, new A, new C};
    int num_elements = sizeof(tab) / sizeof(tab[0]);
    srand(time(0));
    int randInstanceIndex = rand() % num_elements;
    for (int i = 0 ; i < num_elements; i++)
    {
        if (i != randInstanceIndex)
            delete tab[i];
    }
    return tab[randInstanceIndex];
}

void identify(Base* p)
{
    
}

int main()
{

    Base *x = generate();

    
}
