#ifndef C_HPP
#define C_HPP

#include "base.hpp"

class C: public Base{};

#endif

/*
class Base
{
    public:
        virtual ~Base();
};
class C: public Base{};
class A: public Base{};
class B: public Base{};

void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B" or "C"
Including the typeinfo header is forbidden.
*/