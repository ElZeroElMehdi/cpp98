#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j; // should not create a leak
        delete i;
        // ...
        const Animal *N[10];
        for (int i = 0; i < 10; i++)
        {
            if (i % 2)
                N[i] = new Dog();
            else
                N[i] = new Cat();
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << "****************************************" << std::endl;
            std::cout << N[i]->getType() << std::endl;
            N[i]->makeSound();
            std::cout << "****************************************" << std::endl;
        }
        for (int i = 0; i < 10; i++)
        {
            std::cout << "|****************************************|" << std::endl;
            delete N[i];
            std::cout << "|****************************************|" << std::endl;
        }

    system("leaks Brain");
    return 0;
}