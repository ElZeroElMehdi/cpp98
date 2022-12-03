#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &New);
        Cat operator=(const Cat &rhs);
        void makeSound(void);
        ~Cat();
};
#endif