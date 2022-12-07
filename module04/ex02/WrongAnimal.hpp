#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &New);
        WrongAnimal operator=(const WrongAnimal &rhs);
        void makeSound(void) const;
        std::string getType() const;
        virtual ~WrongAnimal(); // virtual Destructor for call destructor in the child class
};

#endif