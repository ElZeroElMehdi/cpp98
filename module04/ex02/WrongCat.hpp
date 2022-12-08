#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &New);
        WrongCat& operator=(const WrongCat &rhs);
        void makeSound(void) const;
        ~WrongCat();
};
#endif