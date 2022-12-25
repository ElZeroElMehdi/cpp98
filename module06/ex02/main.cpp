
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
// #include "base.hpp"
#include <cstdlib>

Base * generate(void)
{
    Base*	tab[] = {new A, new B, new C};
    int num_elements = sizeof(tab) / sizeof(tab[0]);
    srand(time(0));
    int randInstanceIndex = rand() % num_elements;
    for (int i = 0 ; i < num_elements; i++)
    {
        if (i != randInstanceIndex)
            delete tab[i]
    }
    return tab[randInstanceIndex];
}

void identify(Base* p) {
    A * a;
    a = dynamic_cast<A*>(p);
    if (a) {
        std::cout<<"Class A has successfull!!"<<std::endl;
    }
    B * b;
    b = dynamic_cast<B*>(p);
    if(b) {
        std::cout<<"Class B has successfull!!"<<std::endl;
    }
    C *c;
    c = dynamic_cast<C*>(p);
    if(c) {
        std::cout<<"Class C has successfull!!"<<std::endl;
    }
}

void identify(Base& p) {
    try
    {
        A a = dynamic_cast<A&>(p);
		std::cout << "Class A : Dynamic Casts with References successfull!!" << std::endl;
        return ;
    }
    catch(...)
    {
       try
       {
            B b = dynamic_cast<B&>(p);
            std::cout << "Class B : Dynamic Casts with References has successfull!!" << std::endl;
            return ;
       }
       catch(...)
       {
            try
            {
                C c = dynamic_cast<C&>(p);
                std::cout << "Class C : Dynamic Casts with References has successfull!!" << std::endl; 
                return ;
            }
            catch(const std::exception& e)
            {
                std::cout<<e.what();
            } 
       }  
    }
} 

int main()
{

    Base x = generate();

    if 

}
