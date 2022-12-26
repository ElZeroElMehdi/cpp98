#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class A
{
};

class Derived : public Base
{
public:
    virtual ~Derived() {}
};

int main()
{
    Base *b = new Derived;
    A *c = new A;
    Derived *d = dynamic_cast<Derived *>(b);
    if (d != nullptr)
        std::cout << "b points to a Derived object" << std::endl;
    A *dd = dynamic_cast<A *>(c);
    if (dd == nullptr)
        std::cout << "not derived from class Base " << std::endl;
    else
        std::cout << "yes, its derived from class Base" << std::endl;
    delete b;
    delete c;
    return 0;
}
